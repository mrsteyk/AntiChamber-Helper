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

// Class UnrealEd.ActorFactorySelection
// 0x0000 (0x0060 - 0x0060)
class UActorFactorySelection : public USelection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ActorFactorySelection");
		return ptr;
	}

};


// Class UnrealEd.AITreeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAITreeFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AITreeFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeContentCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeContentCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeCookedContentCommandlet
// 0x0018 (0x0094 - 0x007C)
class UAnalyzeCookedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x007C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeCookedContentCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeCookedPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeCookedPackagesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeCookedPackagesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeCookedTextureSingleUsageCommandlet
// 0x00E0 (0x015C - 0x007C)
class UAnalyzeCookedTextureSingleUsageCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x007C(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeCookedTextureSingleUsageCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeCookedTextureUsageCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeCookedTextureUsageCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeCookedTextureUsageCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeKismetCommandlet
// 0x0040 (0x00BC - 0x007C)
class UAnalyzeKismetCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x007C(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeKismetCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeReferencedContentCommandlet
// 0x0568 (0x05E4 - 0x007C)
class UAnalyzeReferencedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x568];                                     // 0x007C(0x0568) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeReferencedContentCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeReferencedObjectCommandlet
// 0x0048 (0x00C4 - 0x007C)
class UAnalyzeReferencedObjectCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x007C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeReferencedObjectCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeScriptCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeScriptCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeScriptCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnalyzeShaderCachesCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeShaderCachesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnalyzeShaderCachesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.AnimNodeEditInfo
// 0x0004 (0x0040 - 0x003C)
class UAnimNodeEditInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimNodeEditInfo");
		return ptr;
	}

};


// Class UnrealEd.AnimNodeEditInfo_AimOffset
// 0x0008 (0x0048 - 0x0040)
class UAnimNodeEditInfo_AimOffset : public UAnimNodeEditInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimNodeEditInfo_AimOffset");
		return ptr;
	}

};


// Class UnrealEd.AnimSetFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimSetFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimSetFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.AnimTreeEdSkelComponent
// 0x000B (0x05E0 - 0x05D5)
class UAnimTreeEdSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xB];                                       // 0x05D5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimTreeEdSkelComponent");
		return ptr;
	}

};


// Class UnrealEd.AnimTreeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimTreeFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimTreeFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.ApexDestructibleDamageParametersFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UApexDestructibleDamageParametersFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ApexDestructibleDamageParametersFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.ApexGenericAssetFactory
// 0x0000 (0x0070 - 0x0070)
class UApexGenericAssetFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ApexGenericAssetFactory");
		return ptr;
	}

};


// Class UnrealEd.ASVSkelComponent
// 0x002B (0x0600 - 0x05D5)
class UASVSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x2B];                                      // 0x05D5(0x002B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ASVSkelComponent");
		return ptr;
	}

};


// Class UnrealEd.BatchExportCommandlet
// 0x0000 (0x007C - 0x007C)
class UBatchExportCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.BatchExportCommandlet");
		return ptr;
	}

};


// Class UnrealEd.BrowserManager
// 0x0024 (0x0060 - 0x003C)
class UBrowserManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x003C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.BrowserManager");
		return ptr;
	}

};


// Class UnrealEd.BrushBuilder
// 0x003C (0x0078 - 0x003C)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.BrushBuilder");
		return ptr;
	}

};


// Class UnrealEd.CubeBuilder
// 0x001C (0x0094 - 0x0078)
class UCubeBuilder : public UBrushBuilder
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0078(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CubeBuilder");
		return ptr;
	}

};


// Class UnrealEd.ByteCodeSerializer
// 0x0044 (0x00D4 - 0x0090)
class UByteCodeSerializer : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0090(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ByteCodeSerializer");
		return ptr;
	}

};


// Class UnrealEd.CameraAnimFactory
// 0x0000 (0x0070 - 0x0070)
class UCameraAnimFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CameraAnimFactory");
		return ptr;
	}

};


// Class UnrealEd.CascadeConfiguration
// 0x0024 (0x0060 - 0x003C)
class UCascadeConfiguration : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x003C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CascadeConfiguration");
		return ptr;
	}

};


// Class UnrealEd.CascadeOptions
// 0x00D0 (0x010C - 0x003C)
class UCascadeOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x003C(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CascadeOptions");
		return ptr;
	}

};


// Class UnrealEd.CascadePreviewComponent
// 0x0008 (0x01E0 - 0x01D8)
class UCascadePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CascadePreviewComponent");
		return ptr;
	}

};


// Class UnrealEd.CheckLightMapUVsCommandlet
// 0x0000 (0x007C - 0x007C)
class UCheckLightMapUVsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CheckLightMapUVsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.CheckpointGameAssetDatabaseCommandlet
// 0x0000 (0x007C - 0x007C)
class UCheckpointGameAssetDatabaseCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CheckpointGameAssetDatabaseCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ClassExporterUC
// 0x0000 (0x0064 - 0x0064)
class UClassExporterUC : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ClassExporterUC");
		return ptr;
	}

};


// Class UnrealEd.ClassFactoryUC
// 0x0000 (0x0070 - 0x0070)
class UClassFactoryUC : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ClassFactoryUC");
		return ptr;
	}

};


// Class UnrealEd.ColladaFactory
// 0x0004 (0x0074 - 0x0070)
class UColladaFactory : public UFactory
{
public:
	unsigned long                                      bImportAsSkeletalMesh : 1;                                // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ColladaFactory");
		return ptr;
	}

};


// Class UnrealEd.CompressAnimationsCommandlet
// 0x0000 (0x007C - 0x007C)
class UCompressAnimationsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CompressAnimationsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ConformCommandlet
// 0x0000 (0x007C - 0x007C)
class UConformCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ConformCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ContentAuditCommandlet
// 0x0000 (0x007C - 0x007C)
class UContentAuditCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ContentAuditCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ContentComparisonCommandlet
// 0x00CC (0x0148 - 0x007C)
class UContentComparisonCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0xCC];                                      // 0x007C(0x00CC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ContentComparisonCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ConvertMapToNavMesh
// 0x0000 (0x007C - 0x007C)
class UConvertMapToNavMesh : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ConvertMapToNavMesh");
		return ptr;
	}

};


// Class UnrealEd.CookPackagesCommandlet
// 0x1488 (0x1504 - 0x007C)
class UCookPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x1488];                                    // 0x007C(0x1488) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CookPackagesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.CurveEdOptions
// 0x0078 (0x00B4 - 0x003C)
class UCurveEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x003C(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdOptions");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPresetBase
// 0x0000 (0x003C - 0x003C)
class UCurveEdPresetBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPresetBase");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_CosWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_CosWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_CosWave");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_LinearDecay
// 0x0010 (0x004C - 0x003C)
class UCurveEdPreset_LinearDecay : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x003C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_LinearDecay");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_Nothing
// 0x0000 (0x003C - 0x003C)
class UCurveEdPreset_Nothing : public UCurveEdPresetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_Nothing");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_SineWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_SineWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_SineWave");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_UserSet
// 0x0004 (0x0040 - 0x003C)
class UCurveEdPreset_UserSet : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_UserSet");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPresetCurveFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UCurveEdPresetCurveFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPresetCurveFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.DecalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UDecalMaterialFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.DecalMaterialFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.DiffPackagesCommandlet
// 0x0018 (0x0094 - 0x007C)
class UDiffPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x007C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.DiffPackagesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.DumpEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpEmittersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.DumpEmittersCommandlet");
		return ptr;
	}

};


// Class UnrealEd.DumpLightmapInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpLightmapInfoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.DumpLightmapInfoCommandlet");
		return ptr;
	}

};


// Class UnrealEd.DumpShadersCommandlet
// 0x000C (0x0088 - 0x007C)
class UDumpShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x007C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.DumpShadersCommandlet");
		return ptr;
	}

};


// Class UnrealEd.EditorComponent
// 0x0028 (0x0200 - 0x01D8)
class UEditorComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.EditorComponent");
		return ptr;
	}

};


// Class UnrealEd.EdModeComponent
// 0x0000 (0x0200 - 0x0200)
class UEdModeComponent : public UEditorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.EdModeComponent");
		return ptr;
	}

};


// Class UnrealEd.EditorEngine
// 0x0234 (0x0810 - 0x05DC)
class UEditorEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[0x234];                                     // 0x05DC(0x0234) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.EditorEngine");
		return ptr;
	}

};


// Class UnrealEd.UnrealEdEngine
// 0x0110 (0x0920 - 0x0810)
class UUnrealEdEngine : public UEditorEngine
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0810(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UnrealEdEngine");
		return ptr;
	}

};


// Class UnrealEd.EditorPlayer
// 0x0000 (0x029C - 0x029C)
class UEditorPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.EditorPlayer");
		return ptr;
	}

};


// Class UnrealEd.EditorUserSettings
// 0x0018 (0x0054 - 0x003C)
class UEditorUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x003C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.EditorUserSettings");
		return ptr;
	}

};


// Class UnrealEd.EditorViewportInput
// 0x0004 (0x00DC - 0x00D8)
class UEditorViewportInput : public UInput
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.EditorViewportInput");
		return ptr;
	}

};


// Class UnrealEd.ExamineOutersCommandlet
// 0x0000 (0x007C - 0x007C)
class UExamineOutersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ExamineOutersCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ExporterT3DX
// 0x0000 (0x0064 - 0x0064)
class UExporterT3DX : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ExporterT3DX");
		return ptr;
	}

};


// Class UnrealEd.MaterialExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UMaterialExporterT3D : public UExporterT3DX
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.StaticMeshExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UStaticMeshExporterT3D : public UExporterT3DX
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StaticMeshExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.TextureExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterT3D : public UExporterT3DX
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.ExportLocCommandlet
// 0x0000 (0x007C - 0x007C)
class UExportLocCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ExportLocCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FaceFXStudioSkelComponent
// 0x000B (0x05E0 - 0x05D5)
class UFaceFXStudioSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xB];                                       // 0x05D5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FaceFXStudioSkelComponent");
		return ptr;
	}

};


// Class UnrealEd.FbxFactory
// 0x0004 (0x0074 - 0x0070)
class UFbxFactory : public UFactory
{
public:
	class UFbxImportUI*                                Import_Options;                                           // 0x0070(0x0004) (Edit, Config, NoClear, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FbxFactory");
		return ptr;
	}

};


// Class UnrealEd.FbxImportUI
// 0x0008 (0x0044 - 0x003C)
class UFbxImportUI : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x003C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FbxImportUI");
		return ptr;
	}

};


// Class UnrealEd.ReimportFbxSkeletalMeshFactory
// 0x0004 (0x0078 - 0x0074)
class UReimportFbxSkeletalMeshFactory : public UFbxFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ReimportFbxSkeletalMeshFactory");
		return ptr;
	}

};


// Class UnrealEd.TextureFactory
// 0x0054 (0x00C4 - 0x0070)
class UTextureFactory : public UFactory
{
public:
	unsigned long                                      NoCompression : 1;                                        // 0x0070(0x0004)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0070(0x0001)
	unsigned long                                      CompressionNoAlpha : 1;                                   // 0x0074(0x0004) (Edit)
	unsigned long                                      UnknownData01 : 31;                                       // 0x0074(0x0001)
	unsigned long                                      DeferCompression : 1;                                     // 0x0078(0x0004) (Edit)
	TEnumAsByte<ETextureFactory_TextureCompressionSettings> CompressionSettings;                                      // 0x007C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	unsigned long                                      Create_Material_ : 1;                                     // 0x0080(0x0004) (Edit)
	unsigned long                                      UnknownData03 : 31;                                       // 0x0080(0x0001)
	unsigned long                                      RGB_To_Diffuse : 1;                                       // 0x0084(0x0004) (Edit)
	unsigned long                                      UnknownData04 : 31;                                       // 0x0084(0x0001)
	unsigned long                                      RGB_To_Emissive : 1;                                      // 0x0088(0x0004) (Edit)
	unsigned long                                      UnknownData05 : 31;                                       // 0x0088(0x0001)
	unsigned long                                      Alpha_To_Specular : 1;                                    // 0x008C(0x0004) (Edit)
	unsigned long                                      UnknownData06 : 31;                                       // 0x008C(0x0001)
	unsigned long                                      Alpha_To_Emissive : 1;                                    // 0x0090(0x0004) (Edit)
	unsigned long                                      UnknownData07 : 31;                                       // 0x0090(0x0001)
	unsigned long                                      Alpha_To_Opacity : 1;                                     // 0x0094(0x0004) (Edit)
	unsigned long                                      UnknownData08 : 31;                                       // 0x0094(0x0001)
	unsigned long                                      Alpha_To_Opacity_Mask : 1;                                // 0x0098(0x0004) (Edit)
	unsigned long                                      UnknownData09 : 31;                                       // 0x0098(0x0001)
	unsigned long                                      Two_Sided_ : 1;                                           // 0x009C(0x0004) (Edit)
	TEnumAsByte<ETextureFactory_Blending>              Blending;                                                 // 0x00A0(0x0001) (Edit)
	TEnumAsByte<ETextureFactory_LightingModel>         Lighting_Model;                                           // 0x00A1(0x0001) (Edit)
	TEnumAsByte<ELODGroup>                             LODGroup;                                                 // 0x00A2(0x0001) (Edit)
	unsigned char                                      UnknownData10[0x1];                                       // 0x00A3(0x0001) MISSED OFFSET
	unsigned long                                      FlipBook : 1;                                             // 0x00A4(0x0004) (Edit)
	unsigned long                                      UnknownData11 : 31;                                       // 0x00A4(0x0001)
	unsigned long                                      LightMap : 1;                                             // 0x00A8(0x0004) (Edit)
	unsigned long                                      UnknownData12 : 31;                                       // 0x00A8(0x0001)
	unsigned long                                      Dither_Mip_maps_alpha_ : 1;                               // 0x00AC(0x0004) (Edit)
	unsigned long                                      UnknownData13 : 31;                                       // 0x00AC(0x0001)
	unsigned long                                      Preserve_border_R : 1;                                    // 0x00B0(0x0004) (Edit)
	unsigned long                                      UnknownData14 : 31;                                       // 0x00B0(0x0001)
	unsigned long                                      Preserve_border_G : 1;                                    // 0x00B4(0x0004) (Edit)
	unsigned long                                      UnknownData15 : 31;                                       // 0x00B4(0x0001)
	unsigned long                                      Preserve_border_B : 1;                                    // 0x00B8(0x0004) (Edit)
	unsigned long                                      UnknownData16 : 31;                                       // 0x00B8(0x0001)
	unsigned long                                      Preserve_border_A : 1;                                    // 0x00BC(0x0004) (Edit)
	TEnumAsByte<ETextureFactory_TextureMipGenSettings> MipGenSettings;                                           // 0x00C0(0x0001) (Edit)
	unsigned char                                      UnknownData17[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureFactory");
		return ptr;
	}

};


// Class UnrealEd.ReimportTextureFactory
// 0x0008 (0x00CC - 0x00C4)
class UReimportTextureFactory : public UTextureFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C4(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ReimportTextureFactory");
		return ptr;
	}

};


// Class UnrealEd.StaticMeshFactory
// 0x0018 (0x0088 - 0x0070)
class UStaticMeshFactory : public UFactory
{
public:
	int                                                Pitch;                                                    // 0x0070(0x0004)
	int                                                Roll;                                                     // 0x0074(0x0004)
	int                                                Yaw;                                                      // 0x0078(0x0004)
	unsigned long                                      bOneConvexPerUCXObject : 1;                               // 0x007C(0x0004) (Edit)
	unsigned long                                      UnknownData00 : 31;                                       // 0x007C(0x0001)
	unsigned long                                      bSingleSmoothGroupSingleTangent : 1;                      // 0x0080(0x0004) (Edit)
	unsigned long                                      UnknownData01 : 31;                                       // 0x0080(0x0001)
	unsigned long                                      bReplaceExistingVertexColors : 1;                         // 0x0084(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StaticMeshFactory");
		return ptr;
	}

};


// Class UnrealEd.ReimportStaticMeshFactory
// 0x0004 (0x008C - 0x0088)
class UReimportStaticMeshFactory : public UStaticMeshFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ReimportStaticMeshFactory");
		return ptr;
	}

};


// Class UnrealEd.ReimportFbxStaticMeshFactory
// 0x0004 (0x0078 - 0x0074)
class UReimportFbxStaticMeshFactory : public UFbxFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ReimportFbxStaticMeshFactory");
		return ptr;
	}

};


// Class UnrealEd.SkeletalMeshFactory
// 0x0008 (0x0078 - 0x0070)
class USkeletalMeshFactory : public UFactory
{
public:
	unsigned long                                      bAssumeMayaCoordinates : 1;                               // 0x0070(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SkeletalMeshFactory");
		return ptr;
	}

};


// Class UnrealEd.ReimportSkeletalMeshFactory
// 0x0004 (0x007C - 0x0078)
class UReimportSkeletalMeshFactory : public USkeletalMeshFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0078(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ReimportSkeletalMeshFactory");
		return ptr;
	}

};


// Class UnrealEd.SoundFactory
// 0x0014 (0x0084 - 0x0070)
class USoundFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                                       // 0x0070(0x0004) (Edit)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0070(0x0001)
	unsigned long                                      bIncludeAttenuationNode : 1;                              // 0x0074(0x0004) (Edit)
	unsigned long                                      UnknownData01 : 31;                                       // 0x0074(0x0001)
	unsigned long                                      bIncludeLoopingNode : 1;                                  // 0x0078(0x0004) (Edit)
	unsigned long                                      UnknownData02 : 31;                                       // 0x0078(0x0001)
	unsigned long                                      bIncludeModulatorNode : 1;                                // 0x007C(0x0004) (Edit)
	float                                              CueVolume;                                                // 0x0080(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundFactory");
		return ptr;
	}

};


// Class UnrealEd.ReimportSoundFactory
// 0x0004 (0x0088 - 0x0084)
class UReimportSoundFactory : public USoundFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ReimportSoundFactory");
		return ptr;
	}

};


// Class UnrealEd.FindAssetReferencersCommandlet
// 0x0094 (0x0110 - 0x007C)
class UFindAssetReferencersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x94];                                      // 0x007C(0x0094) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindAssetReferencersCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindDarkDiffuseTexturesCommandlet
// 0x0050 (0x00CC - 0x007C)
class UFindDarkDiffuseTexturesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x007C(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindDarkDiffuseTexturesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindDuplicateKismetObjectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindDuplicateKismetObjectsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindDuplicateKismetObjectsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindDuplicateTexturesCommandlet
// 0x0118 (0x0194 - 0x007C)
class UFindDuplicateTexturesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x007C(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindDuplicateTexturesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindEmitterMismatchedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterMismatchedLODsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindEmitterMismatchedLODsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindEmitterModifiedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterModifiedLODsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindEmitterModifiedLODsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindEmitterModuleLODErrorsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterModuleLODErrorsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindEmitterModuleLODErrorsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindQuestionableTexturesCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindQuestionableTexturesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindQuestionableTexturesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindStaticMeshCanBecomeDynamicCommandlet
// 0x0068 (0x00E4 - 0x007C)
class UFindStaticMeshCanBecomeDynamicCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x007C(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindStaticMeshCanBecomeDynamicCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindStaticMeshEmptySectionsCommandlet
// 0x0080 (0x00FC - 0x007C)
class UFindStaticMeshEmptySectionsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x007C(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindStaticMeshEmptySectionsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindTexturesWithMissingPhysicalMaterialsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindTexturesWithMissingPhysicalMaterialsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindTexturesWithMissingPhysicalMaterialsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindUniqueSpecularTextureMaterialsCommandlet
// 0x0048 (0x00C4 - 0x007C)
class UFindUniqueSpecularTextureMaterialsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x007C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindUniqueSpecularTextureMaterialsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindUnreferencedFunctionsCommandlet
// 0x0004 (0x0080 - 0x007C)
class UFindUnreferencedFunctionsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindUnreferencedFunctionsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FixAdditiveReferencesCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixAdditiveReferencesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FixAdditiveReferencesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FixAmbiguousMaterialParametersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixAmbiguousMaterialParametersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FixAmbiguousMaterialParametersCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FixupEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupEmittersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FixupEmittersCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FixupRedirectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupRedirectsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FixupRedirectsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FixupSourceUVsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupSourceUVsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FixupSourceUVsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FonixFactory
// 0x0000 (0x0070 - 0x0070)
class UFonixFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FonixFactory");
		return ptr;
	}

};


// Class UnrealEd.FractureMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UFractureMaterialFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FractureMaterialFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.GameStatsDBUploader
// 0x0004 (0x005C - 0x0058)
class UGameStatsDBUploader : public UGameplayEventsHandler
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GameStatsDBUploader");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType
// 0x001C (0x0058 - 0x003C)
class UGenericBrowserType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x003C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_AITree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_AITree : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_AITree");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Animation
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Animation : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Animation");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_AnimTree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_AnimTree : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_AnimTree");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_ApexClothingAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ApexClothingAsset : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_ApexClothingAsset");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_ApexDestructibleAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ApexDestructibleAsset : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_ApexDestructibleAsset");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_ApexDestructibleDamageParameters
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ApexDestructibleDamageParameters : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_ApexDestructibleDamageParameters");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_ApexGenericAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ApexGenericAsset : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_ApexGenericAsset");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Archetype
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Archetype : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Archetype");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_CameraAnim
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CameraAnim : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_CameraAnim");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_CurveEdPresetCurve
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CurveEdPresetCurve : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_CurveEdPresetCurve");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Custom
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Custom : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Custom");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_All
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_All : public UGenericBrowserType_Custom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_All");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_DecalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_DecalMaterial : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_DecalMaterial");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_DMC
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_DMC : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_DMC");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_FaceFXAnimSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAnimSet : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_FaceFXAnimSet");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_FaceFXAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAsset : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_FaceFXAsset");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Font
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Font : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Font");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_FractureMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FractureMaterial : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_FractureMaterial");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_LensFlare
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_LensFlare : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_LensFlare");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Material
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Material : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Material");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_MaterialInstanceConstant
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceConstant : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_MaterialInstanceConstant");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceTimeVarying : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_MorphTargetSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphTargetSet : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_MorphTargetSet");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_MorphWeightSequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphWeightSequence : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_MorphWeightSequence");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_ParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ParticleSystem : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_ParticleSystem");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_PhysicalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicalMaterial : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_PhysicalMaterial");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_PhysicsAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicsAsset : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_PhysicsAsset");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_PhysXParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysXParticleSystem : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_PhysXParticleSystem");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_PostProcess
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PostProcess : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_PostProcess");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Prefab
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Prefab : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Prefab");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_ProcBuildingRuleset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ProcBuildingRuleset : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_ProcBuildingRuleset");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Sequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sequence : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Sequence");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SkeletalMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SkeletalMesh : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SkeletalMesh");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Sounds
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sounds : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Sounds");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SoundClass
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundClass : public UGenericBrowserType_Sounds
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SoundClass");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SoundCue
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundCue : public UGenericBrowserType_Sounds
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SoundCue");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SoundMode
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundMode : public UGenericBrowserType_Sounds
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SoundMode");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SoundWave
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundWave : public UGenericBrowserType_Sounds
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SoundWave");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SpeechRecognition
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SpeechRecognition : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SpeechRecognition");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SpeedTree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SpeedTree : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SpeedTree");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_StaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_StaticMesh : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_StaticMesh");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_FracturedStaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FracturedStaticMesh : public UGenericBrowserType_StaticMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_FracturedStaticMesh");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_TerrainLayer
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainLayer : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_TerrainLayer");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_TerrainMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainMaterial : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_TerrainMaterial");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Texture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Texture : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Texture");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_RenderTexture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_RenderTexture : public UGenericBrowserType_Texture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_RenderTexture");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_TextureCube
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TextureCube : public UGenericBrowserType_Texture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_TextureCube");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_TextureMovie
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TextureMovie : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_TextureMovie");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier
// 0x0014 (0x0050 - 0x003C)
class UGeomModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x003C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Edit
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Edit : public UGeomModifier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Edit");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Clip
// 0x001C (0x006C - 0x0050)
class UGeomModifier_Clip : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0050(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Clip");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Create
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Create : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Create");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Delete
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Delete : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Delete");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Extrude
// 0x000C (0x005C - 0x0050)
class UGeomModifier_Extrude : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0050(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Extrude");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Flip
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Flip : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Flip");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Lathe
// 0x0010 (0x0060 - 0x0050)
class UGeomModifier_Lathe : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Lathe");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Optimize
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Optimize : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Optimize");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Pen
// 0x0020 (0x0070 - 0x0050)
class UGeomModifier_Pen : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Pen");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Split
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Split : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Split");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Triangulate
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Triangulate : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Triangulate");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Turn
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Turn : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Turn");
		return ptr;
	}

};


// Class UnrealEd.GeomModifier_Weld
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Weld : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GeomModifier_Weld");
		return ptr;
	}

};


// Class UnrealEd.InterpEdOptions
// 0x0010 (0x004C - 0x003C)
class UInterpEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x003C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpEdOptions");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackAnimControlHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackAnimControlHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackAnimControlHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackBoolPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackBoolPropHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackBoolPropHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackDirectorHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackDirectorHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackDirectorHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackEventHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackEventHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackEventHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackFaceFXHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFaceFXHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackFaceFXHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackFloatPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFloatPropHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackFloatPropHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackHeadTrackingHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackHeadTrackingHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackHeadTrackingHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackParticleReplayHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackParticleReplayHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackParticleReplayHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackSoundHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackSoundHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackSoundHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackToggleHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackToggleHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackToggleHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackVectorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVectorPropHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackVectorPropHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackColorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackColorPropHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackLinearColorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackLinearColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackLinearColorPropHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackVisibilityHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVisibilityHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackVisibilityHelper");
		return ptr;
	}

};


// Class UnrealEd.KismetBindings
// 0x0018 (0x0054 - 0x003C)
class UKismetBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x003C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.KismetBindings");
		return ptr;
	}

};


// Class UnrealEd.LensFlareEditorOptions
// 0x00A0 (0x00DC - 0x003C)
class ULensFlareEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x003C(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LensFlareEditorOptions");
		return ptr;
	}

};


// Class UnrealEd.LensFlareEditorPropertyWrapper
// 0x014C (0x0188 - 0x003C)
class ULensFlareEditorPropertyWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14C];                                     // 0x003C(0x014C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LensFlareEditorPropertyWrapper");
		return ptr;
	}

};


// Class UnrealEd.LensFlareFactoryNew
// 0x0000 (0x0070 - 0x0070)
class ULensFlareFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LensFlareFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.LensFlarePreviewComponent
// 0x0008 (0x01E0 - 0x01D8)
class ULensFlarePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LensFlarePreviewComponent");
		return ptr;
	}

};


// Class UnrealEd.LevelExporterLOD
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterLOD : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LevelExporterLOD");
		return ptr;
	}

};


// Class UnrealEd.LevelExporterOBJ
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterOBJ : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LevelExporterOBJ");
		return ptr;
	}

};


// Class UnrealEd.LevelExporterSTL
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterSTL : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LevelExporterSTL");
		return ptr;
	}

};


// Class UnrealEd.LevelExporterT3D
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LevelExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.LevelFactory
// 0x0000 (0x0070 - 0x0070)
class ULevelFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LevelFactory");
		return ptr;
	}

};


// Class UnrealEd.LightingChannelsObject
// 0x0004 (0x0040 - 0x003C)
class ULightingChannelsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LightingChannelsObject");
		return ptr;
	}

};


// Class UnrealEd.LightmassOptionsObject
// 0x0018 (0x0054 - 0x003C)
class ULightmassOptionsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x003C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LightmassOptionsObject");
		return ptr;
	}

};


// Class UnrealEd.LinkedObjectFactory
// 0x0004 (0x0074 - 0x0070)
class ULinkedObjectFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0070(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LinkedObjectFactory");
		return ptr;
	}

};


// Class UnrealEd.ListCorruptedComponentsCommandlet
// 0x0000 (0x007C - 0x007C)
class UListCorruptedComponentsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ListCorruptedComponentsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ListCustomMaterialExpressionsCommandlet
// 0x0000 (0x007C - 0x007C)
class UListCustomMaterialExpressionsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ListCustomMaterialExpressionsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ListDistanceCrossFadeNodesCommandlet
// 0x0000 (0x007C - 0x007C)
class UListDistanceCrossFadeNodesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ListDistanceCrossFadeNodesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ListEmittersUsingModuleCommandlet
// 0x0000 (0x007C - 0x007C)
class UListEmittersUsingModuleCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ListEmittersUsingModuleCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ListLoopingEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UListLoopingEmittersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ListLoopingEmittersCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ListPackagesReferencingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPackagesReferencingCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ListPackagesReferencingCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ListPSysFixedBoundSettingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPSysFixedBoundSettingCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ListPSysFixedBoundSettingCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ListScriptReferencedContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UListScriptReferencedContentCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ListScriptReferencedContentCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ListSoundNodeWavesCommandlet
// 0x0000 (0x007C - 0x007C)
class UListSoundNodeWavesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ListSoundNodeWavesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.LoadPackageCommandlet
// 0x0000 (0x007C - 0x007C)
class ULoadPackageCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LoadPackageCommandlet");
		return ptr;
	}

};


// Class UnrealEd.LocSoundInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class ULocSoundInfoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LocSoundInfoCommandlet");
		return ptr;
	}

};


// Class UnrealEd.MakeCommandlet
// 0x0000 (0x007C - 0x007C)
class UMakeCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MakeCommandlet");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorInstanceConstant
// 0x00A8 (0x00E4 - 0x003C)
class UMaterialEditorInstanceConstant : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x003C(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorInstanceConstant");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorInstanceTimeVarying
// 0x00A4 (0x00E0 - 0x003C)
class UMaterialEditorInstanceTimeVarying : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x003C(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorInstanceTimeVarying");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorMeshComponent
// 0x0010 (0x0260 - 0x0250)
class UMaterialEditorMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorMeshComponent");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorOptions
// 0x0010 (0x004C - 0x003C)
class UMaterialEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x003C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorOptions");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorSkeletalMeshComponent
// 0x000B (0x05E0 - 0x05D5)
class UMaterialEditorSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xB];                                       // 0x05D5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorSkeletalMeshComponent");
		return ptr;
	}

};


// Class UnrealEd.MaterialFactory
// 0x0000 (0x0070 - 0x0070)
class UMaterialFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialFactory");
		return ptr;
	}

};


// Class UnrealEd.MaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.MaterialInstanceConstantFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceConstantFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialInstanceConstantFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.MaterialInstanceTimeVaryingFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceTimeVaryingFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialInstanceTimeVaryingFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.MergePackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMergePackagesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MergePackagesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.MineCookedPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMineCookedPackagesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MineCookedPackagesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ModelExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UModelExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ModelExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.ModelFactory
// 0x0000 (0x0070 - 0x0070)
class UModelFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ModelFactory");
		return ptr;
	}

};


// Class UnrealEd.ObjectExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UObjectExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ObjectExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.OutputAuditSummaryCommandlet
// 0x0000 (0x007C - 0x007C)
class UOutputAuditSummaryCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.OutputAuditSummaryCommandlet");
		return ptr;
	}

};


// Class UnrealEd.PackageExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UPackageExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PackageExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.PackageFactory
// 0x0000 (0x0070 - 0x0070)
class UPackageFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PackageFactory");
		return ptr;
	}

};


// Class UnrealEd.ParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UParticleSystemFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ParticleSystemFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.PatchScriptCommandlet
// 0x0004 (0x0080 - 0x007C)
class UPatchScriptCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PatchScriptCommandlet");
		return ptr;
	}

};


// Class UnrealEd.PerformMapCheckCommandlet
// 0x0018 (0x0094 - 0x007C)
class UPerformMapCheckCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x007C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PerformMapCheckCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindRenamedPrefabSequencesCommandlet
// 0x0048 (0x00DC - 0x0094)
class UFindRenamedPrefabSequencesCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0094(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindRenamedPrefabSequencesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.FindStaticActorsRefsCommandlet
// 0x00A0 (0x0134 - 0x0094)
class UFindStaticActorsRefsCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0094(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FindStaticActorsRefsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.PerformTerrainMaterialDumpCommandlet
// 0x0000 (0x007C - 0x007C)
class UPerformTerrainMaterialDumpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PerformTerrainMaterialDumpCommandlet");
		return ptr;
	}

};


// Class UnrealEd.PersistentCookerData
// 0x03C0 (0x03FC - 0x003C)
class UPersistentCookerData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C0];                                     // 0x003C(0x03C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PersistentCookerData");
		return ptr;
	}

};


// Class UnrealEd.PhATSimOptions
// 0x0050 (0x008C - 0x003C)
class UPhATSimOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x003C(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PhATSimOptions");
		return ptr;
	}

};


// Class UnrealEd.PhATSkeletalMeshComponent
// 0x001B (0x05F0 - 0x05D5)
class UPhATSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x1B];                                      // 0x05D5(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PhATSkeletalMeshComponent");
		return ptr;
	}

};


// Class UnrealEd.PhysicalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPhysicalMaterialFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PhysicalMaterialFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.PhysXParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPhysXParticleSystemFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PhysXParticleSystemFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.PIEToNormalCommandlet
// 0x0000 (0x007C - 0x007C)
class UPIEToNormalCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PIEToNormalCommandlet");
		return ptr;
	}

};


// Class UnrealEd.PkgInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UPkgInfoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PkgInfoCommandlet");
		return ptr;
	}

};


// Class UnrealEd.PolysExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UPolysExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PolysExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.PolysFactory
// 0x0000 (0x0070 - 0x0070)
class UPolysFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PolysFactory");
		return ptr;
	}

};


// Class UnrealEd.PostProcessFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPostProcessFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PostProcessFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.PrecompileShadersCommandlet
// 0x0018 (0x0094 - 0x007C)
class UPrecompileShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x007C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PrecompileShadersCommandlet");
		return ptr;
	}

};


// Class UnrealEd.PreviewMaterial
// 0x0000 (0x0514 - 0x0514)
class UPreviewMaterial : public UMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PreviewMaterial");
		return ptr;
	}

};


// Class UnrealEd.ProcBuildingRulesetFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UProcBuildingRulesetFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ProcBuildingRulesetFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.PropertyDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPropertyDrawProxy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyDrawProxy");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputProxy
// 0x0020 (0x005C - 0x003C)
class UPropertyInputProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x003C(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputProxy");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputArrayItemBase
// 0x0000 (0x005C - 0x005C)
class UPropertyInputArrayItemBase : public UPropertyInputProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputArrayItemBase");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputBool
// 0x0000 (0x005C - 0x005C)
class UPropertyInputBool : public UPropertyInputArrayItemBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputBool");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputCombo
// 0x0008 (0x0064 - 0x005C)
class UPropertyInputCombo : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x005C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputCombo");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputEditInline
// 0x0000 (0x005C - 0x005C)
class UPropertyInputEditInline : public UPropertyInputArrayItemBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputEditInline");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputText
// 0x0010 (0x006C - 0x005C)
class UPropertyInputText : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x005C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputText");
		return ptr;
	}

};


// Class UnrealEd.RenderTargetCubeExporterTGA
// 0x0004 (0x0068 - 0x0064)
class URenderTargetCubeExporterTGA : public UExporter
{
public:
	TEnumAsByte<ECubeFace>                             CubeFace;                                                 // 0x0064(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.RenderTargetCubeExporterTGA");
		return ptr;
	}

};


// Class UnrealEd.RenderTargetExporterTGA
// 0x0000 (0x0064 - 0x0064)
class URenderTargetExporterTGA : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.RenderTargetExporterTGA");
		return ptr;
	}

};


// Class UnrealEd.ReplaceActorCommandlet
// 0x0000 (0x007C - 0x007C)
class UReplaceActorCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ReplaceActorCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ResavePackagesCommandlet
// 0x0064 (0x00E0 - 0x007C)
class UResavePackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x007C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ResavePackagesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ChangePrefabSequenceClassCommandlet
// 0x0000 (0x00E0 - 0x00E0)
class UChangePrefabSequenceClassCommandlet : public UResavePackagesCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ChangePrefabSequenceClassCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ScaleAudioVolumeCommandlet
// 0x0000 (0x007C - 0x007C)
class UScaleAudioVolumeCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ScaleAudioVolumeCommandlet");
		return ptr;
	}

};


// Class UnrealEd.SequenceExporterT3D
// 0x0000 (0x0064 - 0x0064)
class USequenceExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SequenceExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.SequenceFactory
// 0x0000 (0x0070 - 0x0070)
class USequenceFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SequenceFactory");
		return ptr;
	}

};


// Class UnrealEd.SequenceObjectHelper
// 0x0000 (0x003C - 0x003C)
class USequenceObjectHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SequenceObjectHelper");
		return ptr;
	}

};


// Class UnrealEd.SetMaterialUsageCommandlet
// 0x0000 (0x007C - 0x007C)
class USetMaterialUsageCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SetMaterialUsageCommandlet");
		return ptr;
	}

};


// Class UnrealEd.SetPackageFlagsCommandlet
// 0x0000 (0x007C - 0x007C)
class USetPackageFlagsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SetPackageFlagsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.SetTextureLODGroupCommandlet
// 0x0000 (0x007C - 0x007C)
class USetTextureLODGroupCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SetTextureLODGroupCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ShowObjectCountCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowObjectCountCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ShowObjectCountCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ShowPropertyFlagsCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowPropertyFlagsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ShowPropertyFlagsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.ShowTaggedPropsCommandlet
// 0x0090 (0x010C - 0x007C)
class UShowTaggedPropsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x007C(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ShowTaggedPropsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.SoundClassFactory
// 0x0000 (0x0070 - 0x0070)
class USoundClassFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundClassFactory");
		return ptr;
	}

};


// Class UnrealEd.SoundClassInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class USoundClassInfoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundClassInfoCommandlet");
		return ptr;
	}

};


// Class UnrealEd.SoundCueAuditCommandlet
// 0x0000 (0x007C - 0x007C)
class USoundCueAuditCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundCueAuditCommandlet");
		return ptr;
	}

};


// Class UnrealEd.SoundCueFactoryNew
// 0x0000 (0x0070 - 0x0070)
class USoundCueFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundCueFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.SoundExporterWAV
// 0x0000 (0x0064 - 0x0064)
class USoundExporterWAV : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundExporterWAV");
		return ptr;
	}

};


// Class UnrealEd.SoundModeFactory
// 0x0000 (0x0070 - 0x0070)
class USoundModeFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundModeFactory");
		return ptr;
	}

};


// Class UnrealEd.SoundNodeHelper
// 0x0000 (0x003C - 0x003C)
class USoundNodeHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundNodeHelper");
		return ptr;
	}

};


// Class UnrealEd.SoundSurroundExporterWAV
// 0x0000 (0x0064 - 0x0064)
class USoundSurroundExporterWAV : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundSurroundExporterWAV");
		return ptr;
	}

};


// Class UnrealEd.SoundSurroundFactory
// 0x0004 (0x0074 - 0x0070)
class USoundSurroundFactory : public UFactory
{
public:
	float                                              CueVolume;                                                // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundSurroundFactory");
		return ptr;
	}

};


// Class UnrealEd.SoundTTSFactory
// 0x0024 (0x0094 - 0x0070)
class USoundTTSFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                                       // 0x0070(0x0004) (Edit)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0070(0x0001)
	unsigned long                                      bIncludeAttenuationNode : 1;                              // 0x0074(0x0004) (Edit)
	unsigned long                                      UnknownData01 : 31;                                       // 0x0074(0x0001)
	unsigned long                                      bIncludeLoopingNode : 1;                                  // 0x0078(0x0004) (Edit)
	unsigned long                                      UnknownData02 : 31;                                       // 0x0078(0x0001)
	unsigned long                                      bIncludeModulatorNode : 1;                                // 0x007C(0x0004) (Edit)
	unsigned long                                      UnknownData03 : 31;                                       // 0x007C(0x0001)
	unsigned long                                      bUseTTS : 1;                                              // 0x0080(0x0004) (Edit)
	struct FString                                     SpokenText;                                               // 0x0084(0x000C) (Edit, NeedCtorLink)
	float                                              CueVolume;                                                // 0x0090(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundTTSFactory");
		return ptr;
	}

};


// Class UnrealEd.SpeedTreeFactory
// 0x0000 (0x0070 - 0x0070)
class USpeedTreeFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SpeedTreeFactory");
		return ptr;
	}

};


// Class UnrealEd.StaticMeshExporterOBJ
// 0x0000 (0x0064 - 0x0064)
class UStaticMeshExporterOBJ : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StaticMeshExporterOBJ");
		return ptr;
	}

};


// Class UnrealEd.StaticMeshMode_Options
// 0x0048 (0x0084 - 0x003C)
class UStaticMeshMode_Options : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x003C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StaticMeshMode_Options");
		return ptr;
	}

};


// Class UnrealEd.StripSourceCommandlet
// 0x0000 (0x007C - 0x007C)
class UStripSourceCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StripSourceCommandlet");
		return ptr;
	}

};


// Class UnrealEd.TagCookedReferencedAssetsCommandlet
// 0x0088 (0x0104 - 0x007C)
class UTagCookedReferencedAssetsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x007C(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TagCookedReferencedAssetsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.TagReferencedAssetsCommandlet
// 0x0000 (0x007C - 0x007C)
class UTagReferencedAssetsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TagReferencedAssetsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.TagSuboptimalTexturesCommandlet
// 0x000C (0x0088 - 0x007C)
class UTagSuboptimalTexturesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x007C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TagSuboptimalTexturesCommandlet");
		return ptr;
	}

};


// Class UnrealEd.TerrainEditOptions
// 0x00C8 (0x0104 - 0x003C)
class UTerrainEditOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x003C(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainEditOptions");
		return ptr;
	}

};


// Class UnrealEd.TerrainExporterT3D
// 0x0008 (0x006C - 0x0064)
class UTerrainExporterT3D : public UExporter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0064(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainExporterT3D");
		return ptr;
	}

};


// Class UnrealEd.TerrainFactory
// 0x0004 (0x0074 - 0x0070)
class UTerrainFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0070(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainFactory");
		return ptr;
	}

};


// Class UnrealEd.TerrainHeightMapExporter
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporter : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainHeightMapExporter");
		return ptr;
	}

};


// Class UnrealEd.TerrainHeightMapExporterG16BMPT3D
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporterG16BMPT3D : public UTerrainHeightMapExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainHeightMapExporterG16BMPT3D");
		return ptr;
	}

};


// Class UnrealEd.TerrainHeightMapExporterTextT3D
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporterTextT3D : public UTerrainHeightMapExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainHeightMapExporterTextT3D");
		return ptr;
	}

};


// Class UnrealEd.TerrainHeightMapFactory
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainHeightMapFactory");
		return ptr;
	}

};


// Class UnrealEd.TerrainHeightMapFactoryG16BMP
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMP : public UTerrainHeightMapFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainHeightMapFactoryG16BMP");
		return ptr;
	}

};


// Class UnrealEd.TerrainHeightMapFactoryG16BMPT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMPT3D : public UTerrainHeightMapFactoryG16BMP
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainHeightMapFactoryG16BMPT3D");
		return ptr;
	}

};


// Class UnrealEd.TerrainHeightMapFactoryTextT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryTextT3D : public UTerrainHeightMapFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainHeightMapFactoryTextT3D");
		return ptr;
	}

};


// Class UnrealEd.TerrainLayerSetupFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainLayerSetupFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainLayerSetupFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.TerrainMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainMaterialFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainMaterialFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.TestCompressionCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestCompressionCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TestCompressionCommandlet");
		return ptr;
	}

};


// Class UnrealEd.TestTextureCompressionCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestTextureCompressionCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TestTextureCompressionCommandlet");
		return ptr;
	}

};


// Class UnrealEd.TestWordWrapCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestWordWrapCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TestWordWrapCommandlet");
		return ptr;
	}

};


// Class UnrealEd.TextBufferExporterTXT
// 0x0000 (0x0064 - 0x0064)
class UTextBufferExporterTXT : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextBufferExporterTXT");
		return ptr;
	}

};


// Class UnrealEd.TextureCubeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTextureCubeFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureCubeFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.TextureExporterBMP
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterBMP : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureExporterBMP");
		return ptr;
	}

};


// Class UnrealEd.TextureExporterPCX
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterPCX : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureExporterPCX");
		return ptr;
	}

};


// Class UnrealEd.TextureExporterTGA
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterTGA : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureExporterTGA");
		return ptr;
	}

};


// Class UnrealEd.FontFactory
// 0x0000 (0x00C4 - 0x00C4)
class UFontFactory : public UTextureFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FontFactory");
		return ptr;
	}

};


// Class UnrealEd.TrueTypeFontFactory
// 0x0008 (0x00CC - 0x00C4)
class UTrueTypeFontFactory : public UFontFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class UFontImportOptions*                          ImportOptions;                                            // 0x00C8(0x0004) (Edit, NoClear, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TrueTypeFontFactory");
		return ptr;
	}

};


// Class UnrealEd.TrueTypeMultiFontFactory
// 0x0024 (0x00F0 - 0x00CC)
class UTrueTypeMultiFontFactory : public UTrueTypeFontFactory
{
public:
	TArray<float>                                      ResTests;                                                 // 0x00CC(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      ResHeights;                                               // 0x00D8(0x000C) (Edit, NeedCtorLink)
	TArray<class UFont*>                               ResFonts;                                                 // 0x00E4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TrueTypeMultiFontFactory");
		return ptr;
	}

};


// Class UnrealEd.TextureMovieFactory
// 0x0004 (0x0074 - 0x0070)
class UTextureMovieFactory : public UFactory
{
public:
	TEnumAsByte<EMovieStreamSource>                    MovieStreamSource;                                        // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureMovieFactory");
		return ptr;
	}

};


// Class UnrealEd.TextureRenderTargetCubeFactoryNew
// 0x0008 (0x0078 - 0x0070)
class UTextureRenderTargetCubeFactoryNew : public UFactory
{
public:
	int                                                Width;                                                    // 0x0070(0x0004) (Edit)
	TEnumAsByte<ETextureRenderTargetCubeFactoryNew_Format> Format;                                                   // 0x0074(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureRenderTargetCubeFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.TextureRenderTargetFactoryNew
// 0x000C (0x007C - 0x0070)
class UTextureRenderTargetFactoryNew : public UFactory
{
public:
	int                                                Width;                                                    // 0x0070(0x0004) (Edit)
	int                                                Height;                                                   // 0x0074(0x0004) (Edit)
	TEnumAsByte<ETextureRenderTargetFactoryNew_Format> Format;                                                   // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureRenderTargetFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.ThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailLabelRenderer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ThumbnailLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.AITreeLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAITreeLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AITreeLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.AnimSetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimSetLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimSetLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.AnimTreeLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimTreeLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimTreeLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.ApexClothingAssetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UApexClothingAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ApexClothingAssetLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.ApexDestructibleAssetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UApexDestructibleAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ApexDestructibleAssetLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.ApexGenericAssetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UApexGenericAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ApexGenericAssetLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.FontThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UFontThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FontThumbnailLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.GenericThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UGenericThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericThumbnailLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.MaterialInstanceLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UMaterialInstanceLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialInstanceLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.MemCountThumbnailLabelRenderer
// 0x0004 (0x0040 - 0x003C)
class UMemCountThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MemCountThumbnailLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.ParticleSystemLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UParticleSystemLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ParticleSystemLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.PhysicsAssetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPhysicsAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PhysicsAssetLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.PostProcessLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPostProcessLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PostProcessLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.SkeletalMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USkeletalMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SkeletalMeshLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.SoundLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USoundLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.StaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UStaticMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StaticMeshLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.FracturedStaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UFracturedStaticMeshLabelRenderer : public UStaticMeshLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FracturedStaticMeshLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.ThumbnailManager
// 0x0098 (0x00D4 - 0x003C)
class UThumbnailManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x003C(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ThumbnailManager");
		return ptr;
	}

};


// Class UnrealEd.ThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailRenderer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.DefaultSizedThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UDefaultSizedThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x003C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.DefaultSizedThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.ApexDestructibleAssetThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UApexDestructibleAssetThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ApexDestructibleAssetThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.MaterialInstanceThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UMaterialInstanceThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialInstanceThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.SkeletalMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class USkeletalMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SkeletalMeshThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.StaticMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UStaticMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StaticMeshThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.IconThumbnailRenderer
// 0x0010 (0x004C - 0x003C)
class UIconThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x003C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.IconThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.ArchetypeThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UArchetypeThumbnailRenderer : public UIconThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ArchetypeThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.PrefabThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UPrefabThumbnailRenderer : public UIconThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PrefabThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.TextureThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureThumbnailRenderer : public UThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.FontThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UFontThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FontThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.LensFlareThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class ULensFlareThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x003C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LensFlareThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.ParticleSystemThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UParticleSystemThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x003C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ParticleSystemThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.TextureCubeThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureCubeThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureCubeThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.Transactor
// 0x0000 (0x003C - 0x003C)
class UTransactor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.Transactor");
		return ptr;
	}

};


// Class UnrealEd.TransBuffer
// 0x0028 (0x0064 - 0x003C)
class UTransBuffer : public UTransactor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x003C(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TransBuffer");
		return ptr;
	}

};


// Class UnrealEd.UnrealEdKeyBindings
// 0x000C (0x0048 - 0x003C)
class UUnrealEdKeyBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UnrealEdKeyBindings");
		return ptr;
	}

};


// Class UnrealEd.UnrealEdOptions
// 0x0058 (0x0094 - 0x003C)
class UUnrealEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x003C(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UnrealEdOptions");
		return ptr;
	}

};


// Class UnrealEd.UnrealEdTypes
// 0x0000 (0x003C - 0x003C)
class UUnrealEdTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UnrealEdTypes");
		return ptr;
	}

};


// Class UnrealEd.UpdateKismetCommandlet
// 0x0000 (0x007C - 0x007C)
class UUpdateKismetCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UpdateKismetCommandlet");
		return ptr;
	}

};


// Class UnrealEd.UT3MapStatsCommandlet
// 0x0000 (0x007C - 0x007C)
class UUT3MapStatsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UT3MapStatsCommandlet");
		return ptr;
	}

};


// Class UnrealEd.WrangleContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UWrangleContentCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.WrangleContentCommandlet");
		return ptr;
	}

};


// Class UnrealEd.WriteGameStatsReportCommandlet
// 0x0004 (0x0080 - 0x007C)
class UWriteGameStatsReportCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.WriteGameStatsReportCommandlet");
		return ptr;
	}

};


// Class UnrealEd.CascadeParticleSystemComponent
// 0x0010 (0x02E0 - 0x02D0)
class UCascadeParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CascadeParticleSystemComponent");
		return ptr;
	}

};


// Class UnrealEd.GameStatsDatabase
// 0x02C8 (0x0304 - 0x003C)
class UGameStatsDatabase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x003C(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GameStatsDatabase");
		return ptr;
	}

};


// Class UnrealEd.GameStatsDatabaseVisitor
// 0x0000 (0x003C - 0x003C)
class UGameStatsDatabaseVisitor : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GameStatsDatabaseVisitor");
		return ptr;
	}

};


// Class UnrealEd.GameStatsFileReader
// 0x011C (0x0174 - 0x0058)
class UGameStatsFileReader : public UGameplayEventsHandler
{
public:
	unsigned char                                      UnknownData00[0x11C];                                     // 0x0058(0x011C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GameStatsFileReader");
		return ptr;
	}

};


// Class UnrealEd.GameStatsReport
// 0x00E4 (0x0120 - 0x003C)
class UGameStatsReport : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE4];                                      // 0x003C(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GameStatsReport");
		return ptr;
	}

};


// Class UnrealEd.GameStatsVisitorImpl
// 0x0004 (0x0040 - 0x003C)
class UGameStatsVisitorImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GameStatsVisitorImpl");
		return ptr;
	}

};


// Class UnrealEd.GameStatsVisualizer
// 0x002C (0x006C - 0x0040)
class UGameStatsVisualizer : public UGameStatsVisitorImpl
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0040(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GameStatsVisualizer");
		return ptr;
	}

};


// Class UnrealEd.BasicStatsVisualizer
// 0x003C (0x00A8 - 0x006C)
class UBasicStatsVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x006C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.BasicStatsVisualizer");
		return ptr;
	}

};


// Class UnrealEd.GenericParamlistVisualizer
// 0x0010 (0x007C - 0x006C)
class UGenericParamlistVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x006C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericParamlistVisualizer");
		return ptr;
	}

};


// Class UnrealEd.HeatmapVisualizer
// 0x0058 (0x00C4 - 0x006C)
class UHeatmapVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x006C(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.HeatmapVisualizer");
		return ptr;
	}

};


// Class UnrealEd.PerformanceVisualizer
// 0x0024 (0x00E8 - 0x00C4)
class UPerformanceVisualizer : public UHeatmapVisualizer
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00C4(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PerformanceVisualizer");
		return ptr;
	}

};


// Class UnrealEd.PlayerMovementVisualizer
// 0x0018 (0x0084 - 0x006C)
class UPlayerMovementVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x006C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PlayerMovementVisualizer");
		return ptr;
	}

};


// Class UnrealEd.CustomPropertyItemBindings
// 0x0048 (0x0084 - 0x003C)
class UCustomPropertyItemBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x003C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CustomPropertyItemBindings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
