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

// Class GFxUIEditor.GenericBrowserType_GFxMovie
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_GFxMovie : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUIEditor.GenericBrowserType_GFxMovie");
		return ptr;
	}

};


// Class GFxUIEditor.GFxImportCommandlet
// 0x0000 (0x007C - 0x007C)
class UGFxImportCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUIEditor.GFxImportCommandlet");
		return ptr;
	}

};


// Class GFxUIEditor.GFxMovieFactory
// 0x001C (0x008C - 0x0070)
class UGFxMovieFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0070(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUIEditor.GFxMovieFactory");
		return ptr;
	}

};


// Class GFxUIEditor.GFxReimportCommandlet
// 0x0000 (0x007C - 0x007C)
class UGFxReimportCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUIEditor.GFxReimportCommandlet");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
