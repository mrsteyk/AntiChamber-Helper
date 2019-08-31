#pragma once

// Antichamber (1.0.7977.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "AC_Core_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_HazardDistanceTile_HalfTileSize                    8
#define CONST_HazardDistanceTile_FullTileSize                    16
#define CONST_HazardSecretTile_HalfTileSize                      8
#define CONST_HazardDistanceTileComponent_HalfTileSize           8
#define CONST_HazardSecretTile_FullTileSize                      16
#define CONST_HazardDistanceTileComponent_FullTileSize           16
#define CONST_HazardSnakeFloor_FullTileSize                      128
#define CONST_HazardStepTile_FullTileSize                        16
#define CONST_HazardStepTile_HalfTileSize                        8
#define CONST_HazardStepTileComponent_HalfTileSize               8
#define CONST_HazardStepTileComponent_FullTileSize               16
#define CONST_MaxNeighbours                                      6

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Hazard.HazardActor.EGlobalCollision
enum class EHazardActor_EGlobalCollision : uint8_t
{
	GC_True                        = 0,
	GC_False                       = 1,
	GC_Unset                       = 2,
	GC_MAX                         = 3
};


// Enum Hazard.HazardBlackHole.EMode
enum class EHazardBlackHole_EMode : uint8_t
{
	EMode_Disabled                 = 0,
	EMode_Dormant                  = 1,
	EMode_AcceleratingTriangle     = 2,
	EMode_SlowingPenrose           = 3,
	EMode_Opening                  = 4,
	EMode_Dying                    = 5,
	EMode_Dead                     = 6,
	EMode_MAX                      = 7
};


// Enum Hazard.HazardBlackHoleSphereMesh.EMode
enum class EHazardBlackHoleSphereMesh_EMode : uint8_t
{
	EMode_Disabled                 = 0,
	EMode_SpawningSphere           = 1,
	EMode_Dormant                  = 2,
	EMode_Dying                    = 3,
	EMode_Dead                     = 4,
	EMode_MAX                      = 5
};


// Enum Hazard.HazardProj_GuideTile.ENeighbourDir
enum class EHazardProj_GuideTile_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardDistanceTile.ENeighbourDir
enum class EHazardDistanceTile_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardDistanceTile.ECollisionSet
enum class EHazardDistanceTile_ECollisionSet : uint8_t
{
	CSet_ConstantCollision         = 0,
	CSet_InterpCollision           = 1,
	CSet_OpaqueCollision           = 2,
	CSet_NoCollision               = 3,
	CSet_MAX                       = 4
};


// Enum Hazard.HazardDistanceTileComponent.ENeighbourDir
enum class EHazardDistanceTileComponent_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardDistanceTileComponent.EMoveState
enum class EHazardDistanceTileComponent_EMoveState : uint8_t
{
	MState_Closed                  = 0,
	MState_Opening                 = 1,
	MState_Open                    = 2,
	MState_Closing                 = 3,
	MState_Unset                   = 4,
	MState_MAX                     = 5
};


// Enum Hazard.HazardDoor.ENeighbourDir
enum class EHazardDoor_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardDoor.ETriggerType
enum class EHazardDoor_ETriggerType : uint8_t
{
	TT_TouchingPlayer              = 0,
	TT_AllBlocked                  = 1,
	TT_AllUnblocked                = 2,
	TT_Special                     = 3,
	TT_MAX                         = 4
};


// Enum Hazard.HazardDummyPlatform.ENeighbourDir
enum class EHazardDummyPlatform_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardDuplicateVolume.ENeighbourDir
enum class EHazardDuplicateVolume_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardElevator.ENeighbourDir
enum class EHazardElevator_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardEndingLight.ENeighbourDir
enum class EHazardEndingLight_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardEndingPlatform.ENeighbourDir
enum class EHazardEndingPlatform_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardExitDoors.ENeighbourDir
enum class EHazardExitDoors_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardPawnSoundGroup.EMaterialType
enum class EMaterialType : uint8_t
{
	EMT_SILENT                     = 0,
	EMT_Stone                      = 1,
	EMT_DeadFolliage               = 2,
	EMT_LiveFolliage               = 3,
	EMT_Grass                      = 4,
	EMT_MoistDirt                  = 5,
	EMT_Moss                       = 6,
	EMT_Water                      = 7,
	EMT_WetRock                    = 8,
	EMT_Wood                       = 9,
	EMT_None                       = 10,
	EMT_Snow                       = 11,
	EMT_SnowMoist                  = 12,
	EMT_MAX                        = 13
};


// Enum Hazard.HazardGame.ENeighbourDir
enum class EHazardGame_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardGame.ECurrentAxis
enum class ECurrentAxis : uint8_t
{
	Axis_XY                        = 0,
	Axis_XZ                        = 1,
	Axis_YZ                        = 2,
	Axis_ALL                       = 3,
	AXIS_MAX                       = 4
};


// Enum Hazard.HazardJumpDownTile.ENeighbourDir
enum class EHazardJumpDownTile_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardLaser.ENeighbourDir
enum class EHazardLaser_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardLaser.ETriggerType
enum class EHazardLaser_ETriggerType : uint8_t
{
	TT_TouchingPlayer              = 0,
	TT_Blocked                     = 1,
	TT_Unblocked                   = 2,
	TT_MAX                         = 3
};

#undef LC_MAX
// Enum Hazard.HazardLaser.ELaserColour
enum class ELaserColour : uint8_t
{
	LC_Red                         = 0,
	LC_Blue                        = 1,
	LC_Green                       = 2,
	LC_MAX                         = 3
};


// Enum Hazard.HazardMapNode.EShrinkMode
enum class EShrinkMode : uint8_t
{
	ESM_FullSize                   = 0,
	ESM_NeedsShrink                = 1,
	ESM_Shrinking                  = 2,
	ESM_Shrunk                     = 3,
	ESM_MAX                        = 4
};


// Enum Hazard.HazardOptionsButton.ESensitivitySettings
enum class ESensitivitySettings : uint8_t
{
	SS_Unset                       = 0,
	SS_High                        = 1,
	SS_Default                     = 2,
	SS_Low                         = 3,
	SS_MAX                         = 4
};


// Enum Hazard.HazardOptionsButton.EMouseMode
enum class EMouseMode : uint8_t
{
	MM_Unset                       = 0,
	MM_Normal                      = 1,
	MM_Inverted                    = 2,
	MM_MAX                         = 3
};


// Enum Hazard.HazardOptionsButton.EResolutionMode
enum class EResolutionMode : uint8_t
{
	RM_Unset                       = 0,
	RM_1024x768                    = 1,
	RM_1280x720                    = 2,
	RM_1280x1024                   = 3,
	RM_1440x900                    = 4,
	RM_1600x1200                   = 5,
	RM_1680x1050                   = 6,
	RM_1920x1080                   = 7,
	RM_1920x1200                   = 8,
	RM_MAX                         = 9
};


// Enum Hazard.HazardOptionsButton.ESoundMode
enum class ESoundMode : uint8_t
{
	SM_Unset                       = 0,
	SM_Enabled                     = 1,
	SM_Disabled                    = 2,
	SM_MAX                         = 3
};


// Enum Hazard.HazardOptionsButton.EDisplayMode
enum class EDisplayMode : uint8_t
{
	DM_Unset                       = 0,
	DM_Windowed                    = 1,
	DM_Fullscreen                  = 2,
	DM_MAX                         = 3
};


// Enum Hazard.HazardPawn.ENeighbourDir
enum class EHazardPawn_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardPlayerController.PlaneDir
enum class EPlaneDir : uint8_t
{
	Top                            = 0,
	Bottom                         = 1,
	Left                           = 2,
	Right                          = 3,
	NEARP                          = 4,
	FARP                           = 5,
	PlaneDir_MAX                   = 6
};


// Enum Hazard.HazardPortal.ENeighbourDir
enum class EHazardPortal_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardPushBlock.ENeighbourDir
enum class EHazardPushBlock_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardRiotMaster.ENeighbourDir
enum class EHazardRiotMaster_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardRiotMaster.EState
enum class EState : uint8_t
{
	EState_Neutral                 = 0,
	EState_Caution                 = 1,
	EState_Danger                  = 2,
	EState_MAX                     = 3
};


// Enum Hazard.HazardSecretTile.ENeighbourDir
enum class EHazardSecretTile_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardSeqAct_CheckLasers.ETriggerType
enum class EHazardSeqAct_CheckLasers_ETriggerType : uint8_t
{
	TT_TouchingPlayer              = 0,
	TT_AllBlocked                  = 1,
	TT_AllUnblocked                = 2,
	TT_MAX                         = 3
};


// Enum Hazard.HazardSnakeFloor.ENeighbourDir
enum class EHazardSnakeFloor_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardSnakeFloorComponent.ENeighbourDir
enum class EHazardSnakeFloorComponent_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardSnakeFloorComponent.EMoveState
enum class EHazardSnakeFloorComponent_EMoveState : uint8_t
{
	MState_Closed                  = 0,
	MState_Opening                 = 1,
	MState_Open                    = 2,
	MState_Closing                 = 3,
	MState_Unset                   = 4,
	MState_MAX                     = 5
};


// Enum Hazard.HazardStepTile.ENeighbourDir
enum class EHazardStepTile_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardStepTileComponent.ENeighbourDir
enum class EHazardStepTileComponent_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardStepTileComponent.EMoveState
enum class EHazardStepTileComponent_EMoveState : uint8_t
{
	MState_Closed                  = 0,
	MState_Opening                 = 1,
	MState_Open                    = 2,
	MState_Closing                 = 3,
	MState_Unset                   = 4,
	MState_MAX                     = 5
};


// Enum Hazard.HazardTile.ENeighbourDir
enum class EHazardTile_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardTile.EGlobalCollision
enum class EHazardTile_EGlobalCollision : uint8_t
{
	GC_True                        = 0,
	GC_False                       = 1,
	GC_Unset                       = 2,
	GC_MAX                         = 3
};


// Enum Hazard.HazardTile.ECollisionSet
enum class EHazardTile_ECollisionSet : uint8_t
{
	CSet_ConstantCollision         = 0,
	CSet_InterpCollision           = 1,
	CSet_OpaqueCollision           = 2,
	CSet_NoCollision               = 3,
	CSet_MAX                       = 4
};


// Enum Hazard.HazardTileComponent.ENeighbourDir
enum class EHazardTileComponent_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardWeap_TileGun.ENeighbourDir
enum class EHazardWeap_TileGun_ENeighbourDir : uint8_t
{
	ND_EAST                        = 0,
	ND_WEST                        = 1,
	ND_NORTH                       = 2,
	ND_SOUTH                       = 3,
	ND_UP                          = 4,
	ND_DOWN                        = 5,
	ND_MAX                         = 6
};


// Enum Hazard.HazardWeap_TileGun.EMode
enum class EHazardWeap_TileGun_EMode : uint8_t
{
	Mode_None                      = 0,
	Mode_Singular                  = 1,
	Mode_Drawing                   = 2,
	Mode_Movement                  = 3,
	Mode_Recursion                 = 4,
	Mode_Black                     = 5,
	Mode_Dark                      = 6,
	MODE_MAX                       = 7
};


// Enum Hazard.HazardWeap_TileGun.ELinkDir
enum class ELinkDir : uint8_t
{
	Link_Positive                  = 0,
	Link_Negative                  = 1,
	Link_MAX                       = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Hazard.HazardGame.LoopBox
// 0x003C
struct FLoopBox
{
	struct FVector                                     TestBoxLocation;                                          // 0x0000(0x000C)
	struct FVector                                     TestBoxExtent;                                            // 0x000C(0x000C)
	struct FVector                                     SpawnBoxLocation;                                         // 0x0018(0x000C)
	struct FVector                                     SpawnBoxExtent;                                           // 0x0024(0x000C)
	int                                                StartDirection;                                           // 0x0030(0x0004)
	class UHazardTileComponent*                        LoopComponent;                                            // 0x0034(0x0004) (ExportObject, Component, EditInline)
	int                                                PlaneAxis;                                                // 0x0038(0x0004)
};

// ScriptStruct Hazard.HazardGame.FurthestPoint
// 0x0014
struct FFurthestPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	int                                                DistanceToPoint;                                          // 0x000C(0x0004)
	class UHazardTileComponent*                        TileComponent;                                            // 0x0010(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct Hazard.HazardGame.RecursePoint
// 0x002C
struct FRecursePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	class UHazardTileComponent*                        SpawnComponent;                                           // 0x000C(0x0004) (ExportObject, Component, EditInline)
	int                                                Distance;                                                 // 0x0010(0x0004)
	TArray<class AHazardLaser*>                        FoundLasers;                                              // 0x0014(0x000C) (NeedCtorLink)
	TArray<class AHazardDuplicateVolume*>              FoundVolumes;                                             // 0x0020(0x000C) (NeedCtorLink)
};

// ScriptStruct Hazard.HazardPlayerController.HazardPlane
// 0x0010
struct FHazardPlane
{
	struct FVector                                     Normal;                                                   // 0x0000(0x000C)
	float                                              D;                                                        // 0x000C(0x0004)
};

// ScriptStruct Hazard.HazardTileComponent.EntryPointInfo
// 0x0014
struct FEntryPointInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	int                                                DistanceToEntry;                                          // 0x000C(0x0004)
	class UHazardTileComponent*                        ExitTile;                                                 // 0x0010(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct Hazard.HazardTileComponent.RecurseConstructPoint
// 0x002C
struct FRecurseConstructPoint
{
	struct FVector                                     TestLocation;                                             // 0x0000(0x000C)
	struct FVector                                     SpawnNormal;                                              // 0x000C(0x000C)
	struct FVector                                     FailNormal;                                               // 0x0018(0x000C)
	class UHazardTileComponent*                        SpawnTile;                                                // 0x0024(0x0004) (ExportObject, Component, EditInline)
	int                                                DistanceToEntry;                                          // 0x0028(0x0004)
};

// ScriptStruct Hazard.HazardTileComponent.RecurseConstructContainer
// 0x0010
struct FRecurseConstructContainer
{
	int                                                DistanceToEntry;                                          // 0x0000(0x0004)
	TArray<struct FRecurseConstructPoint>              RecursePoints;                                            // 0x0004(0x000C) (Component, NeedCtorLink)
};

// ScriptStruct Hazard.HazardTileComponent.RecursionPoint
// 0x0010
struct FRecursionPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	class UHazardTileComponent*                        TileComponent;                                            // 0x000C(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct Hazard.HazardTileComponent.TestedLoopLocation
// 0x0010
struct FTestedLoopLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	int                                                PlaneAxis;                                                // 0x000C(0x0004)
};

// ScriptStruct Hazard.HazardTileComponent.ClusteredAxis
// 0x000C
struct UHazardTileComponent_FClusteredAxis
{
	TArray<class UHazardTileComponent*>                Neighbours;                                               // 0x0000(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
};

// ScriptStruct Hazard.HazardWeap_TileGun.InvalidHitInfo
// 0x0008
struct AHazardWeap_TileGun_FInvalidHitInfo
{
	class AActor*                                      InvalidActor;                                             // 0x0000(0x0004)
	unsigned long                                      bOldProjTarget : 1;                                       // 0x0004(0x0004)
	unsigned long                                      bOldCollideActors : 1;                                    // 0x0004(0x0004)
};

// ScriptStruct Hazard.HazardPawnSoundGroup.FootstepSoundInfo
// 0x0008
struct UHazardPawnSoundGroup_FFootstepSoundInfo
{
	TEnumAsByte<EMaterialType>                         MaterialType;                                             // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class USoundCue*                                   Sound;                                                    // 0x0004(0x0004)
};

// ScriptStruct Hazard.HazardStepTile.ClusteredAxis
// 0x000C
struct AHazardStepTile_FClusteredAxis
{
	TArray<class AHazardStepTile*>                     Neighbours;                                               // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct Hazard.HazardSecretTile.InvalidHitInfo
// 0x0008
struct AHazardSecretTile_FInvalidHitInfo
{
	class AActor*                                      InvalidActor;                                             // 0x0000(0x0004)
	unsigned long                                      bOldProjTarget : 1;                                       // 0x0004(0x0004)
	unsigned long                                      bOldCollideActors : 1;                                    // 0x0004(0x0004)
};

// ScriptStruct Hazard.HazardWeap_TileGun.ProjectionTestBox
// 0x0024
struct FProjectionTestBox
{
	struct FVector                                     StartPoint;                                               // 0x0000(0x000C)
	struct FVector                                     EndPoint;                                                 // 0x000C(0x000C)
	struct FVector                                     Dir;                                                      // 0x0018(0x000C)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
