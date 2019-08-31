#include "SDK.hpp"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#undef DrawText

#include <iostream>
#include <fstream>
#include "detours.h"
#include <unordered_set>

#pragma comment(lib, "detours.lib")

using namespace SDK;

typedef void(__thiscall* ProcessEventFunc)(class UObject*, class UFunction*, void*, void*);
constexpr uintptr_t process_event_ptr = 0x00583BE0;

ProcessEventFunc process_event_orig = nullptr;

struct
{
	FVector cam_loc{ 0,0,0 };
	//std::unordered_set<AHazardMapNode*> map_nodes;
} globals;

void post_render(UCanvas* canvas)
{
	if (!canvas)
		return;

	canvas->SetDrawColor(255, 0, 0, 255);
	
	canvas->SetPos(10, 10, 0);
	canvas->DrawText(L"MrSteyk's Helper", false, 1.f, 1.f, nullptr);

	canvas->SetPos(10, 20, 0);
	canvas->DrawText(std::to_wstring(globals.cam_loc.X).c_str(), false, 1.f, 1.f, nullptr);

	canvas->SetPos(10, 30, 0);
	canvas->DrawText(std::to_wstring(globals.cam_loc.Y).c_str(), false, 1.f, 1.f, nullptr);
	
	canvas->SetPos(10, 40, 0);
	canvas->DrawText(std::to_wstring(globals.cam_loc.Z).c_str(), false, 1.f, 1.f, nullptr);

	/*for(auto e : globals.map_nodes)
	{
		if (int(e->LevelActor->Location.X) != 3743 && int(e->LevelActor->Location.X) != 3794 && int(e->LevelActor->Location.X) != -3876)
			continue;
		auto vec = canvas->Project(e->Location);
		canvas->SetPos(vec.X, vec.Y, 0);
		canvas->DrawText(std::to_wstring(e->Location.X).c_str(), false, 1.f, 1.f, nullptr);
		canvas->SetPos(vec.X, vec.Y+10, 0);
		canvas->DrawText(std::to_wstring(e->Location.Y).c_str(), false, 1.f, 1.f, nullptr);
		canvas->SetPos(vec.X, vec.Y+20, 0);
		canvas->DrawText(std::to_wstring(e->Location.Z).c_str(), false, 1.f, 1.f, nullptr);
	}*/

	//Projecting WayPoints
	{
		{
			// The End
			auto vec = canvas->Project({ 3736.000488, 36238, -21423.994141 });
			canvas->SetPos(vec.X, vec.Y, 0);
			canvas->SetDrawColor(0x5b, 0x48, 0x01, 255);
			canvas->DrawText(L"·", false, 1.f, 1.f, nullptr);
		}
		{
			// Spawn below FLY?
			auto vec = canvas->Project({ 3760.266113, 2657.502441, 5079.149414 });
			canvas->SetPos(vec.X, vec.Y, 0);
			canvas->SetDrawColor(0, 0, 0, 255);
			canvas->DrawText(L"·", false, 1.f, 1.f, nullptr);
		}
	}
}

void __fastcall process_event_hook(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	auto name = pFunction->GetFullName();

	/*FILE* fp;
	fopen_s(&fp, "D:\\AC_funcs.txt", "a+");
	fprintf(fp, "%s\n", name.c_str());
	fclose(fp);*/

	if(name == "Function Engine.Interaction.PostRender")
	{
		auto params = reinterpret_cast<UInteraction_PostRender_Params*>(pParms);
		//params->Canvas->Project();
		post_render(params->Canvas);
	} else if (name == "Function Hazard.HazardPlayerController.PlayerTick")
	{
		auto player_controller = reinterpret_cast<AHazardPlayerController*>(pObject);
		globals.cam_loc = player_controller->CamLoc;
	} /*else if (name == "Function Hazard.HazardMapNode.Tick")
	{
		globals.map_nodes.insert(reinterpret_cast<AHazardMapNode*>(pObject));
	}*/
	
	process_event_orig(pObject, pFunction, pParms, pResult);
}

void on_attach()
{
	process_event_orig = reinterpret_cast<ProcessEventFunc>(DetourFunction(reinterpret_cast<PBYTE>(process_event_ptr), reinterpret_cast<PBYTE>(process_event_hook)));
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(on_attach), nullptr, NULL, nullptr);
		break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

