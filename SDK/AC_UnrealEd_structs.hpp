#pragma once

// Antichamber (1.0.7977.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UnrealEd.TextureFactory.TextureCompressionSettings
enum class ETextureFactory_TextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Displacementmap             = 2,
	TC_NormalmapAlpha              = 3,
	TC_Grayscale                   = 4,
	TC_HighDynamicRange            = 5,
	TC_OneBitAlpha                 = 6,
	TC_NormalmapUncompressed       = 7,
	TC_NormalmapBC5                = 8,
	TC_OneBitMonochrome            = 9,
	TC_SimpleLightmapModification  = 10,
	TC_MAX                         = 11
};


// Enum UnrealEd.TextureFactory.LODGroup
enum class ELODGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_ImageBasedReflection = 26,
	TEXTUREGROUP_Bokeh             = 27,
	TEXTUREGROUP_MAX               = 28
};


// Enum UnrealEd.TextureFactory.Blending
enum class ETextureFactory_Blending : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_SoftMasked               = 5,
	BLEND_AlphaComposite           = 6,
	BLEND_DitheredTranslucent      = 7,
	BLEND_MAX                      = 8
};


// Enum UnrealEd.TextureFactory.LightingModel
enum class ETextureFactory_LightingModel : uint8_t
{
	MLM_Phong                      = 0,
	MLM_NonDirectional             = 1,
	MLM_Unlit                      = 2,
	MLM_Custom                     = 3,
	MLM_Anisotropic                = 4,
	MLM_MAX                        = 5
};


// Enum UnrealEd.TextureFactory.TextureMipGenSettings
enum class ETextureFactory_TextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20
};


// Enum UnrealEd.ReimportTextureFactory.TextureCompressionSettings
enum class EReimportTextureFactory_TextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Displacementmap             = 2,
	TC_NormalmapAlpha              = 3,
	TC_Grayscale                   = 4,
	TC_HighDynamicRange            = 5,
	TC_OneBitAlpha                 = 6,
	TC_NormalmapUncompressed       = 7,
	TC_NormalmapBC5                = 8,
	TC_OneBitMonochrome            = 9,
	TC_SimpleLightmapModification  = 10,
	TC_VectorDisplacementmap       = 11,
	TC_MAX                         = 12
};


// Enum UnrealEd.ReimportTextureFactory.Blending
enum class EReimportTextureFactory_Blending : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_SoftMasked               = 5,
	BLEND_AlphaComposite           = 6,
	BLEND_DitheredTranslucent      = 7,
	BLEND_MAX                      = 8
};


// Enum UnrealEd.ReimportTextureFactory.LightingModel
enum class EReimportTextureFactory_LightingModel : uint8_t
{
	MLM_Phong                      = 0,
	MLM_NonDirectional             = 1,
	MLM_Unlit                      = 2,
	MLM_Custom                     = 3,
	MLM_Anisotropic                = 4,
	MLM_MAX                        = 5
};


// Enum UnrealEd.ReimportTextureFactory.TextureMipGenSettings
enum class EReimportTextureFactory_TextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20
};


// Enum UnrealEd.RenderTargetCubeExporterTGA.CubeFace
enum class ECubeFace : uint8_t
{
	CubeFace_MAX                   = 0
};


/*// Enum UnrealEd.TextureMovieFactory.MovieStreamSource
enum class EMovieStreamSource : uint8_t
{
	MovieStream_File               = 0,
	MovieStream_Memory             = 1,
	MovieStream_MAX                = 2
};*/


// Enum UnrealEd.TextureRenderTargetCubeFactoryNew.Format
enum class ETextureRenderTargetCubeFactoryNew_Format : uint8_t
{
	A8R8G8B8                       = 0,
	G8                             = 1,
	FloatRGB                       = 2,
	Format_MAX                     = 3
};


// Enum UnrealEd.TextureRenderTargetFactoryNew.Format
enum class ETextureRenderTargetFactoryNew_Format : uint8_t
{
	A8R8G8B8                       = 0,
	G8                             = 1,
	FloatRGB                       = 2,
	Format_MAX                     = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
