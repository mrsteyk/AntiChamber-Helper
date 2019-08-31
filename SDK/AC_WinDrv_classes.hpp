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

// Class WinDrv.WindowsClient
// 0x018C (0x01DC - 0x0050)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x14C];                                     // 0x0050(0x014C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                         // 0x019C(0x0004) (Config)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x01A0(0x002C) MISSED OFFSET
	int                                                AllowJoystickInput;                                       // 0x01CC(0x0004) (Config)
	unsigned char                                      UnknownData02[0xC];                                       // 0x01D0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0054 - 0x0054)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		return ptr;
	}

};


// Class WinDrv.FacebookWindows
// 0x0038 (0x00EC - 0x00B4)
class UFacebookWindows : public UFacebookIntegration
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B4(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.FacebookWindows");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
