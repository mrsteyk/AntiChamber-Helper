#pragma once

// Antichamber (1.0.7977.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UTEditor.GenericBrowserType_UTMapMusicInfo
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_UTMapMusicInfo : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTEditor.GenericBrowserType_UTMapMusicInfo");
		return ptr;
	}

};


// Class UTEditor.UTMapMusicInfoFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UUTMapMusicInfoFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTEditor.UTMapMusicInfoFactoryNew");
		return ptr;
	}

};


// Class UTEditor.UTUnrealEdEngine
// 0x0000 (0x0920 - 0x0920)
class UUTUnrealEdEngine : public UUnrealEdEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTEditor.UTUnrealEdEngine");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
