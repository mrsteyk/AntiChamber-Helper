#pragma once

// Antichamber (1.0.7977.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Hazard.HazardGlassPanel.PostBeginPlay
struct AHazardGlassPanel_PostBeginPlay_Params
{
};

// Function Hazard.HazardAmbientSoundMovable.RestoreDuplicatedSounds
struct AHazardAmbientSoundMovable_RestoreDuplicatedSounds_Params
{
};

// Function Hazard.HazardAmbientSoundMovable.KickDuplicatedSounds
struct AHazardAmbientSoundMovable_KickDuplicatedSounds_Params
{
};

// Function Hazard.HazardAmbientSoundMovable.Tick
struct AHazardAmbientSoundMovable_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardAmbientSoundMovable.UpdateAmbientSound
struct AHazardAmbientSoundMovable_UpdateAmbientSound_Params
{
};

// Function Hazard.HazardAmbientSoundMovable.ResetHASM
struct AHazardAmbientSoundMovable_ResetHASM_Params
{
	bool                                               bResetLocation;                                           // (Parm)
	bool                                               bResetMaxDistance;                                        // (Parm)
	bool                                               bResetCanTeleport;                                        // (Parm)
};

// Function Hazard.HazardAmbientSoundMovable.PostBeginPlay
struct AHazardAmbientSoundMovable_PostBeginPlay_Params
{
};

// Function Hazard.HazardGame.UpdateNumIconsFound
struct AHazardGame_UpdateNumIconsFound_Params
{
};

// Function Hazard.HazardGame.HitNoShootField
struct AHazardGame_HitNoShootField_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.GetAxisAsVector
struct AHazardGame_GetAxisAsVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.SetCurrentAxis
struct AHazardGame_SetCurrentAxis_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     StartLocation;                                            // (Parm)
};

// Function Hazard.HazardGame.AddDefaultInventory
struct AHazardGame_AddDefaultInventory_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Hazard.HazardGame.SaveGame
struct AHazardGame_SaveGame_Params
{
};

// Function Hazard.HazardGame.DeleteSaveGame
struct AHazardGame_DeleteSaveGame_Params
{
};

// Function Hazard.HazardGame.HideSignHints
struct AHazardGame_HideSignHints_Params
{
};

// Function Hazard.HazardGame.UnsaveObject
struct AHazardGame_UnsaveObject_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardGame.SaveObject
struct AHazardGame_SaveObject_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardGame.Tick
struct AHazardGame_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardGame.UpdateSounds
struct AHazardGame_UpdateSounds_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardGame.SetWhiteSoundParameters
struct AHazardGame_SetWhiteSoundParameters_Params
{
	struct FVector                                     UpdateLocation;                                           // (Parm)
};

// Function Hazard.HazardGame.UpdateDecals
struct AHazardGame_UpdateDecals_Params
{
};

// Function Hazard.HazardGame.AddDecal
struct AHazardGame_AddDecal_Params
{
	class UDecalComponent*                             NewDecal;                                                 // (Parm, EditInline)
};

// Function Hazard.HazardGame.SetupTile
struct AHazardGame_SetupTile_Params
{
	class AHazardTile*                                 SetupTile;                                                // (Parm, OutParm)
	class UMaterialInterface*                          SetupMaterial;                                            // (Parm)
	bool                                               bNewDestroyOnOpen;                                        // (Parm)
};

// Function Hazard.HazardGame.SetupDefaultTiles
struct AHazardGame_SetupDefaultTiles_Params
{
};

// Function Hazard.HazardGame.LoadSavedGame
struct AHazardGame_LoadSavedGame_Params
{
	class AHazardPawn*                                 Pawn;                                                     // (Parm)
};

// Function Hazard.HazardGame.InitializeGame
struct AHazardGame_InitializeGame_Params
{
};

// Function Hazard.HazardGame.ShouldUpdate
struct AHazardGame_ShouldUpdate_Params
{
	class AActor*                                      CheckActor;                                               // (Parm)
	float                                              UpdateDistance;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.ResetGunTiles
struct AHazardGame_ResetGunTiles_Params
{
};

// Function Hazard.HazardGame.ResetGame
struct AHazardGame_ResetGame_Params
{
};

// Function Hazard.HazardGame.KillMapEmitters
struct AHazardGame_KillMapEmitters_Params
{
};

// Function Hazard.HazardGame.SpawnMapEmitters
struct AHazardGame_SpawnMapEmitters_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm)
};

// Function Hazard.HazardGame.DeactivateMap
struct AHazardGame_DeactivateMap_Params
{
};

// Function Hazard.HazardGame.DeactivateMapNode
struct AHazardGame_DeactivateMapNode_Params
{
	class AHazardTriggerMap*                           TempNode;                                                 // (Parm)
};

// Function Hazard.HazardGame.SaveMap
struct AHazardGame_SaveMap_Params
{
};

// Function Hazard.HazardGame.ActivateMap
struct AHazardGame_ActivateMap_Params
{
	class AHazardTriggerMap*                           MapTrigger;                                               // (Parm)
};

// Function Hazard.HazardGame.UnlockTower
struct AHazardGame_UnlockTower_Params
{
	int                                                TowerLevel;                                               // (Parm)
};

// Function Hazard.HazardGame.RegisterTowerPiece
struct AHazardGame_RegisterTowerPiece_Params
{
	class AHazardTowerMesh*                            CurrentMesh;                                              // (Parm)
};

// Function Hazard.HazardGame.FindTileComponent
struct AHazardGame_FindTileComponent_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	class UHazardTileComponent*                        CallingComponent;                                         // (OptionalParm, Parm, EditInline)
	class UHazardTileComponent*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardGame.TestKillBlocking
struct AHazardGame_TestKillBlocking_Params
{
	class UHazardTileComponent*                        TestComponent;                                            // (Parm, EditInline)
	struct FVector                                     TestLocation;                                             // (Parm)
};

// Function Hazard.HazardGame.SpawnLoop
struct AHazardGame_SpawnLoop_Params
{
};

// Function Hazard.HazardGame.CheckTimers
struct AHazardGame_CheckTimers_Params
{
};

// Function Hazard.HazardGame.TimerFinished
struct AHazardGame_TimerFinished_Params
{
	float                                              Time;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.PostLogin
struct AHazardGame_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                // (Parm)
};

// Function Hazard.HazardGame.SetGameType
struct AHazardGame_SetGameType_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Portal;                                                   // (Parm, NeedCtorLink)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.PointInBox
struct AHazardGame_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.NormalizeActor
struct AHazardGame_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardGame.GetNextPointOnLine
struct AHazardGame_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.RoundToScale
struct AHazardGame_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.RoundVectorToScale
struct AHazardGame_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.getIndexNormal
struct AHazardGame_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.getMinLocationIndex
struct AHazardGame_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.getLocationIndex
struct AHazardGame_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.RotateAroundAxis
struct AHazardGame_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.CeilValue
struct AHazardGame_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.FloorValue
struct AHazardGame_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardGame.ManhattanVSize
struct AHazardGame_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardConsole.InputKey
struct UHazardConsole_InputKey_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	float                                              AmountDepressed;                                          // (OptionalParm, Parm)
	bool                                               bGamepad;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardActor.EnableTick
struct AHazardActor_EnableTick_Params
{
};

// Function Hazard.HazardActor.TestDisableTick
struct AHazardActor_TestDisableTick_Params
{
};

// Function Hazard.HazardActor.Tick
struct AHazardActor_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardActor.ShouldUpdate
struct AHazardActor_ShouldUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.NeedToTurn
struct AHazardPawn_NeedToTurn_Params
{
	struct FVector                                     targ;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.PossessedBy
struct AHazardPawn_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function Hazard.HazardPawn.RigidBodyCollision
struct AHazardPawn_RigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, EditInline)
	struct FCollisionImpactData                        RigidCollisionData;                                       // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ContactIndex;                                             // (Parm)
};

// Function Hazard.HazardPawn.GetViewRotation
struct AHazardPawn_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.IsFirstPerson
struct AHazardPawn_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.GetPuttingDownWeapon
struct AHazardPawn_GetPuttingDownWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.SetPuttingDownWeapon
struct AHazardPawn_SetPuttingDownWeapon_Params
{
	bool                                               bNowPuttingDownWeapon;                                    // (Parm)
};

// Function Hazard.HazardPawn.FiringModeUpdated
struct AHazardPawn_FiringModeUpdated_Params
{
	class AWeapon*                                     InWeapon;                                                 // (Parm)
	unsigned char                                      InFiringMode;                                             // (Parm)
	bool                                               bViaReplication;                                          // (Parm)
};

// Function Hazard.HazardPawn.GetWeaponAmbientSound
struct AHazardPawn_GetWeaponAmbientSound_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.SetWeaponAmbientSound
struct AHazardPawn_SetWeaponAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                          // (Parm)
};

// Function Hazard.HazardPawn.GetPawnAmbientSound
struct AHazardPawn_GetPawnAmbientSound_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.SetPawnAmbientSound
struct AHazardPawn_SetPawnAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                          // (Parm)
};

// Function Hazard.HazardPawn.DisplayDebug
struct AHazardPawn_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function Hazard.HazardPawn.StopFlying
struct AHazardPawn_StopFlying_Params
{
};

// Function Hazard.HazardPawn.StartFlying
struct AHazardPawn_StartFlying_Params
{
};

// Function Hazard.HazardPawn.GetWeaponStartTraceLocation
struct AHazardPawn_GetWeaponStartTraceLocation_Params
{
	class AWeapon*                                     CurrentWeapon;                                            // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.AddDefaultInventory
struct AHazardPawn_AddDefaultInventory_Params
{
};

// Function Hazard.HazardPawn.Destroyed
struct AHazardPawn_Destroyed_Params
{
};

// Function Hazard.HazardPawn.GetMaterialBelowFeet
struct AHazardPawn_GetMaterialBelowFeet_Params
{
	TEnumAsByte<EMaterialType>                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.GetFootstepVolume
struct AHazardPawn_GetFootstepVolume_Params
{
	class AHazardFootstepVolume*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.PlayFootStepSound
struct AHazardPawn_PlayFootStepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
};

// Function Hazard.HazardPawn.GetDebugName
struct AHazardPawn_GetDebugName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Hazard.HazardPawn.ClientRestart
struct AHazardPawn_ClientRestart_Params
{
};

// Function Hazard.HazardPawn.EndViewTarget
struct AHazardPawn_EndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function Hazard.HazardPawn.GetPawnViewLocation
struct AHazardPawn_GetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.UpdateEyeHeight
struct AHazardPawn_UpdateEyeHeight_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPawn.UpdatePushSounds
struct AHazardPawn_UpdatePushSounds_Params
{
};

// Function Hazard.HazardPawn.FaceRotation
struct AHazardPawn_FaceRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPawn.GetScreenName
struct AHazardPawn_GetScreenName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Hazard.HazardPawn.GetEyeHeight
struct AHazardPawn_GetEyeHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.StopWeaponFiring
struct AHazardPawn_StopWeaponFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.StopFiring
struct AHazardPawn_StopFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.AddVelocity
struct AHazardPawn_AddVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
};

// Function Hazard.HazardPawn.Falling
struct AHazardPawn_Falling_Params
{
};

// Function Hazard.HazardPawn.TurnOff
struct AHazardPawn_TurnOff_Params
{
};

// Function Hazard.HazardPawn.WeaponBob
struct AHazardPawn_WeaponBob_Params
{
	float                                              BobDamping;                                               // (Parm)
	float                                              JumpDamping;                                              // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.SpawnDefaultController
struct AHazardPawn_SpawnDefaultController_Params
{
};

// Function Hazard.HazardPawn.SetAnimRateScale
struct AHazardPawn_SetAnimRateScale_Params
{
	float                                              RateScale;                                                // (Parm)
};

// Function Hazard.HazardPawn.ReattachMesh
struct AHazardPawn_ReattachMesh_Params
{
};

// Function Hazard.HazardPawn.PostBeginPlay
struct AHazardPawn_PostBeginPlay_Params
{
};

// Function Hazard.HazardPawn.PlayFootSounds
struct AHazardPawn_PlayFootSounds_Params
{
	class USoundCue*                                   CurrentSound;                                             // (Parm)
};

// Function Hazard.HazardPawn.ActuallyPlayWalkingFootstepSound
struct AHazardPawn_ActuallyPlayWalkingFootstepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
};

// Function Hazard.HazardPawn.ActuallyPlayRunningFootstepSound
struct AHazardPawn_ActuallyPlayRunningFootstepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
};

// Function Hazard.HazardPawn.PlayJumpingSound
struct AHazardPawn_PlayJumpingSound_Params
{
};

// Function Hazard.HazardPawn.PlayLandingSound
struct AHazardPawn_PlayLandingSound_Params
{
};

// Function Hazard.HazardPawn.DoJump
struct AHazardPawn_DoJump_Params
{
	bool                                               bUpdating;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.DoDoubleJump
struct AHazardPawn_DoDoubleJump_Params
{
	bool                                               bUpdating;                                                // (Parm)
};

// Function Hazard.HazardPawn.Landed
struct AHazardPawn_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
};

// Function Hazard.HazardPawn.PlayTeleportEffect
struct AHazardPawn_PlayTeleportEffect_Params
{
	bool                                               bOut;                                                     // (Parm)
	bool                                               bSound;                                                   // (Parm)
};

// Function Hazard.HazardPawn.CalcCamera
struct AHazardPawn_CalcCamera_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.CheckRecurseStep
struct AHazardPawn_CheckRecurseStep_Params
{
};

// Function Hazard.HazardPawn.FindRecurseFloor
struct AHazardPawn_FindRecurseFloor_Params
{
};

// Function Hazard.HazardPawn.ActivateStepFloors
struct AHazardPawn_ActivateStepFloors_Params
{
	bool                                               bActive;                                                  // (Parm)
};

// Function Hazard.HazardPawn.BaseChange
struct AHazardPawn_BaseChange_Params
{
};

// Function Hazard.HazardPawn.UpdateFallingSound
struct AHazardPawn_UpdateFallingSound_Params
{
};

// Function Hazard.HazardPawn.UpdateNoAmmoSounds
struct AHazardPawn_UpdateNoAmmoSounds_Params
{
};

// Function Hazard.HazardPawn.CheckSnakeStep
struct AHazardPawn_CheckSnakeStep_Params
{
};

// Function Hazard.HazardPawn.FindSnakeFloor
struct AHazardPawn_FindSnakeFloor_Params
{
};

// Function Hazard.HazardPawn.Tick
struct AHazardPawn_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPawn.HitWall
struct AHazardPawn_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
	class UPrimitiveComponent*                         WallComp;                                                 // (Parm, EditInline)
};

// Function Hazard.HazardPawn.Bump
struct AHazardPawn_Bump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardPawn.CheatFly
struct AHazardPawn_CheatFly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.CheatGhost
struct AHazardPawn_CheatGhost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.CheatWalk
struct AHazardPawn_CheatWalk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.SetWalking
struct AHazardPawn_SetWalking_Params
{
	bool                                               bNewIsWalking;                                            // (Parm)
};

// Function Hazard.HazardPawn.StartFire
struct AHazardPawn_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function Hazard.HazardPawn.Interact
struct AHazardPawn_Interact_Params
{
};

// Function Hazard.HazardPawn.InteractTest
struct AHazardPawn_InteractTest_Params
{
	class AActor*                                      InteractActor;                                            // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.InteractGame
struct AHazardPawn_InteractGame_Params
{
};

// Function Hazard.HazardPawn.InteractTestGame
struct AHazardPawn_InteractTestGame_Params
{
	class AActor*                                      InteractActor;                                            // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.BecomeViewTarget
struct AHazardPawn_BecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function Hazard.HazardPawn.UpdateGridLocation
struct AHazardPawn_UpdateGridLocation_Params
{
};

// Function Hazard.HazardPawn.UntouchedNoAmmo
struct AHazardPawn_UntouchedNoAmmo_Params
{
};

// Function Hazard.HazardPawn.TouchedNoAmmo
struct AHazardPawn_TouchedNoAmmo_Params
{
};

// Function Hazard.HazardPawn.PointInBox
struct AHazardPawn_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.NormalizeActor
struct AHazardPawn_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardPawn.GetNextPointOnLine
struct AHazardPawn_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.RoundToScale
struct AHazardPawn_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.RoundVectorToScale
struct AHazardPawn_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.getIndexNormal
struct AHazardPawn_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.getMinLocationIndex
struct AHazardPawn_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.getLocationIndex
struct AHazardPawn_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.RotateAroundAxis
struct AHazardPawn_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.CeilValue
struct AHazardPawn_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.FloorValue
struct AHazardPawn_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawn.ManhattanVSize
struct AHazardPawn_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPlayerController.TeamTalk
struct AHazardPlayerController_TeamTalk_Params
{
};

// Function Hazard.HazardPlayerController.Talk
struct AHazardPlayerController_Talk_Params
{
};

// Function Hazard.HazardPlayerController.DrawHUD
struct AHazardPlayerController_DrawHUD_Params
{
	class AHUD*                                        H;                                                        // (Parm)
};

// Function Hazard.HazardPlayerController.UpdateMaterialResolutionsConsoles
struct AHazardPlayerController_UpdateMaterialResolutionsConsoles_Params
{
	class UMaterialInstanceConstant*                   CurrentMaterial;                                          // (Parm)
	struct FVector2D                                   ViewportSize;                                             // (Parm)
};

// Function Hazard.HazardPlayerController.UpdateMaterialResolutionsPC
struct AHazardPlayerController_UpdateMaterialResolutionsPC_Params
{
	class UMaterialInstanceConstant*                   CurrentMaterial;                                          // (Parm)
	struct FVector2D                                   ViewportSize;                                             // (Parm)
	class UTexture*                                    NewTexture;                                               // (Parm)
};

// Function Hazard.HazardPlayerController.UpdateResolutionsConsoles
struct AHazardPlayerController_UpdateResolutionsConsoles_Params
{
};

// Function Hazard.HazardPlayerController.UpdateResolutionsPC
struct AHazardPlayerController_UpdateResolutionsPC_Params
{
};

// Function Hazard.HazardPlayerController.UpdateScreenMaterialResolutions
struct AHazardPlayerController_UpdateScreenMaterialResolutions_Params
{
};

// Function Hazard.HazardPlayerController.ConsoleCommand
struct AHazardPlayerController_ConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	bool                                               bWriteToLog;                                              // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Hazard.HazardPlayerController.StopTriFire
struct AHazardPlayerController_StopTriFire_Params
{
	unsigned char                                      FireModeNum;                                              // (OptionalParm, Parm)
};

// Function Hazard.HazardPlayerController.StartTriFire
struct AHazardPlayerController_StartTriFire_Params
{
	unsigned char                                      FireModeNum;                                              // (OptionalParm, Parm)
};

// Function Hazard.HazardPlayerController.StopFire
struct AHazardPlayerController_StopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (OptionalParm, Parm)
};

// Function Hazard.HazardPlayerController.StartFire
struct AHazardPlayerController_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (OptionalParm, Parm)
};

// Function Hazard.HazardPlayerController.HandlePickup
struct AHazardPlayerController_HandlePickup_Params
{
	class AInventory*                                  Inv;                                                      // (Parm)
};

// Function Hazard.HazardPlayerController.ShowMenu
struct AHazardPlayerController_ShowMenu_Params
{
};

// Function Hazard.HazardPlayerController.BlendCredits
struct AHazardPlayerController_BlendCredits_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPlayerController.ShowCredits
struct AHazardPlayerController_ShowCredits_Params
{
};

// Function Hazard.HazardPlayerController.NotifyChamberTransition
struct AHazardPlayerController_NotifyChamberTransition_Params
{
	bool                                               bEnteringChamber;                                         // (Parm)
};

// Function Hazard.HazardPlayerController.SetFPS
struct AHazardPlayerController_SetFPS_Params
{
	float                                              FrameRate;                                                // (OptionalParm, Parm)
};

// Function Hazard.HazardPlayerController.CancelExit
struct AHazardPlayerController_CancelExit_Params
{
};

// Function Hazard.HazardPlayerController.UpdateChamberCamera
struct AHazardPlayerController_UpdateChamberCamera_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm)
	struct FRotator                                    CameraRotation;                                           // (Parm)
	float                                              FOV;                                                      // (Parm)
};

// Function Hazard.HazardPlayerController.UpdateCreditsCamera
struct AHazardPlayerController_UpdateCreditsCamera_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm)
	struct FRotator                                    CameraRotation;                                           // (Parm)
	float                                              FOV;                                                      // (Parm)
};

// Function Hazard.HazardPlayerController.UpdateWorldCamera
struct AHazardPlayerController_UpdateWorldCamera_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm)
	struct FRotator                                    CameraRotation;                                           // (Parm)
	float                                              FOV;                                                      // (Parm)
};

// Function Hazard.HazardPlayerController.DrawCamera
struct AHazardPlayerController_DrawCamera_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm)
	struct FRotator                                    CameraRotation;                                           // (Parm)
	float                                              FOV;                                                      // (Parm)
};

// Function Hazard.HazardPlayerController.CalculateViewFrustum
struct AHazardPlayerController_CalculateViewFrustum_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm)
	struct FRotator                                    CameraRotation;                                           // (Parm)
	float                                              FOV;                                                      // (Parm)
};

// Function Hazard.HazardPlayerController.ObjectVisible
struct AHazardPlayerController_ObjectVisible_Params
{
	class AHazardPortal*                               TestObject;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPlayerController.FacingPlayer
struct AHazardPlayerController_FacingPlayer_Params
{
	class AHazardPortal*                               TestObject;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPlayerController.TestIntersects
struct AHazardPlayerController_TestIntersects_Params
{
	class AHazardPortal*                               TestObject;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPlayerController.IntersectsPlane
struct AHazardPlayerController_IntersectsPlane_Params
{
	struct FVector                                     N;                                                        // (Parm)
	struct FVector                                     P0;                                                       // (Parm)
	struct FVector                                     P1;                                                       // (Parm)
	struct FVector                                     V0;                                                       // (Parm)
	class AHazardPortal*                               TestObject;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPlayerController.PointWithinFrustum
struct AHazardPlayerController_PointWithinFrustum_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPlayerController.DistanceToPlane
struct AHazardPlayerController_DistanceToPlane_Params
{
	struct FHazardPlane                                TestPlane;                                                // (Parm)
	struct FVector                                     Point;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPlayerController.CreatePlane
struct AHazardPlayerController_CreatePlane_Params
{
	struct FVector                                     Point1;                                                   // (Parm)
	struct FVector                                     Point2;                                                   // (Parm)
	struct FVector                                     Point3;                                                   // (Parm)
	struct FHazardPlane                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPlayerController.ResetGame
struct AHazardPlayerController_ResetGame_Params
{
};

// Function Hazard.HazardPlayerController.ToggleScreenShotMode
struct AHazardPlayerController_ToggleScreenShotMode_Params
{
};

// Function Hazard.HazardPlayerController.PlayerTick
struct AHazardPlayerController_PlayerTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPlayerController.HoloJump
struct AHazardPlayerController_HoloJump_Params
{
	struct FVector                                     CurrentRoomLocation;                                      // (Parm)
	struct FRotator                                    CurrentRoomRotation;                                      // (Parm)
	struct FVector                                     OtherRoomLocation;                                        // (Parm)
	struct FRotator                                    OtherRoomRotation;                                        // (Parm)
};

// Function Hazard.HazardPlayerController.SetupScreen
struct AHazardPlayerController_SetupScreen_Params
{
};

// Function Hazard.HazardPlayerController.UpdateRotation
struct AHazardPlayerController_UpdateRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPlayerController.OnSetSoundMode
struct AHazardPlayerController_OnSetSoundMode_Params
{
	class USeqAct_SetSoundMode*                        Action;                                                   // (Parm)
};

// Function Hazard.HazardBlackHole.SpinDown
struct AHazardBlackHole_SpinDown_Params
{
	bool                                               bAccelerate;                                              // (Parm)
	float                                              newSpinInterpTime;                                        // (Parm)
	float                                              NumRotations;                                             // (Parm)
	float                                              Exponent;                                                 // (Parm)
};

// Function Hazard.HazardBlackHole.SpinUp
struct AHazardBlackHole_SpinUp_Params
{
	bool                                               bAccelerate;                                              // (Parm)
	float                                              newSpinInterpTime;                                        // (Parm)
	float                                              NumRotations;                                             // (Parm)
	float                                              Exponent;                                                 // (Parm)
};

// Function Hazard.HazardBlackHole.UpdateSpin
struct AHazardBlackHole_UpdateSpin_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHole.UpdateExplosion
struct AHazardBlackHole_UpdateExplosion_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHole.Explode
struct AHazardBlackHole_Explode_Params
{
};

// Function Hazard.HazardBlackHole.Tick
struct AHazardBlackHole_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHole.UpdateSpinningMesh
struct AHazardBlackHole_UpdateSpinningMesh_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHole.UpdateOpening
struct AHazardBlackHole_UpdateOpening_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHole.UpdateActive
struct AHazardBlackHole_UpdateActive_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHole.UpdateDying
struct AHazardBlackHole_UpdateDying_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHole.UpdateShrinkingSpinningMesh
struct AHazardBlackHole_UpdateShrinkingSpinningMesh_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHole.ActivateBlackHole
struct AHazardBlackHole_ActivateBlackHole_Params
{
};

// Function Hazard.HazardBlackHole.ActivateBlackHoleSphere
struct AHazardBlackHole_ActivateBlackHoleSphere_Params
{
};

// Function Hazard.HazardBlackHole.ShowRing
struct AHazardBlackHole_ShowRing_Params
{
};

// Function Hazard.HazardBlackHole.TriggerFinalSequence
struct AHazardBlackHole_TriggerFinalSequence_Params
{
};

// Function Hazard.HazardBlackHole.PostBeginPlay
struct AHazardBlackHole_PostBeginPlay_Params
{
};

// Function Hazard.HazardBlackHoleSphereMesh.Tick
struct UHazardBlackHoleSphereMesh_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHoleSphereMesh.UpdateDying
struct UHazardBlackHoleSphereMesh_UpdateDying_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHoleSphereMesh.Kill
struct UHazardBlackHoleSphereMesh_Kill_Params
{
};

// Function Hazard.HazardBlackHoleSphereMesh.UpdateActivating
struct UHazardBlackHoleSphereMesh_UpdateActivating_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackHoleSphereMesh.Activate
struct UHazardBlackHoleSphereMesh_Activate_Params
{
};

// Function Hazard.HazardBlackHoleSphereMesh.Initialize
struct UHazardBlackHoleSphereMesh_Initialize_Params
{
};

// Function Hazard.HazardBlackTileEnding.SetFadeAmount
struct AHazardBlackTileEnding_SetFadeAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardBlackTileEnding.SetBlendAmount
struct AHazardBlackTileEnding_SetBlendAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardBlackTileEnding.UpdateMovement
struct AHazardBlackTileEnding_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTileEnding.UpdateFade
struct AHazardBlackTileEnding_UpdateFade_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTileEnding.FadeTo
struct AHazardBlackTileEnding_FadeTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardBlackTileEnding.InterpolateTo
struct AHazardBlackTileEnding_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardBlackTileEnding.DoClose
struct AHazardBlackTileEnding_DoClose_Params
{
};

// Function Hazard.HazardBlackTileEnding.DoOpen
struct AHazardBlackTileEnding_DoOpen_Params
{
};

// Function Hazard.HazardBlackTileEnding.UpdateTrailMeshes
struct AHazardBlackTileEnding_UpdateTrailMeshes_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTileEnding.UpdateDuplicates
struct AHazardBlackTileEnding_UpdateDuplicates_Params
{
	struct FVector                                     NewTranslation;                                           // (OptionalParm, Parm)
};

// Function Hazard.HazardBlackTileEnding.SetupDuplicates
struct AHazardBlackTileEnding_SetupDuplicates_Params
{
};

// Function Hazard.HazardBlackTileEnding.Tick
struct AHazardBlackTileEnding_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTileEnding.SetActive
struct AHazardBlackTileEnding_SetActive_Params
{
	bool                                               bNewActive;                                               // (Parm)
};

// Function Hazard.HazardBlackTileEnding.TakeDamage
struct AHazardBlackTileEnding_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function Hazard.HazardBlackTileEnding.PostBeginPlay
struct AHazardBlackTileEnding_PostBeginPlay_Params
{
};

// Function Hazard.HazardBlackTile.SetFadeAmount
struct AHazardBlackTile_SetFadeAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardBlackTile.SetBlendAmount
struct AHazardBlackTile_SetBlendAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardBlackTile.UpdateMovement
struct AHazardBlackTile_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTile.UpdateFade
struct AHazardBlackTile_UpdateFade_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTile.FadeTo
struct AHazardBlackTile_FadeTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardBlackTile.InterpolateTo
struct AHazardBlackTile_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardBlackTile.DoClose
struct AHazardBlackTile_DoClose_Params
{
};

// Function Hazard.HazardBlackTile.DoOpen
struct AHazardBlackTile_DoOpen_Params
{
};

// Function Hazard.HazardBlackTile.UpdateTrailMeshes
struct AHazardBlackTile_UpdateTrailMeshes_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTile.Tick
struct AHazardBlackTile_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTile.SetActive
struct AHazardBlackTile_SetActive_Params
{
	bool                                               bNewActive;                                               // (Parm)
};

// Function Hazard.HazardBlackTile.PostBeginPlay
struct AHazardBlackTile_PostBeginPlay_Params
{
};

// Function Hazard.HazardBlackTile.SetupMirageMeshes
struct AHazardBlackTile_SetupMirageMeshes_Params
{
};

// Function Hazard.HazardBlackTile.ShrinkMirage
struct AHazardBlackTile_ShrinkMirage_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTile.TakeDamage
struct AHazardBlackTile_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function Hazard.HazardBlackTile.KillGunTile
struct AHazardBlackTile_KillGunTile_Params
{
	float                                              NumToKill;                                                // (Parm)
};

// Function Hazard.HazardTileComponent.UpdateDuplicates
struct UHazardTileComponent_UpdateDuplicates_Params
{
};

// Function Hazard.HazardTileComponent.SpawnDuplicate
struct UHazardTileComponent_SpawnDuplicate_Params
{
	class AHazardDuplicateVolume*                      NewVolume;                                                // (Parm)
};

// Function Hazard.HazardTileComponent.RemoveDuplicates
struct UHazardTileComponent_RemoveDuplicates_Params
{
};

// Function Hazard.HazardTileComponent.FindFurthestCorners
struct UHazardTileComponent_FindFurthestCorners_Params
{
	struct FVector                                     SearchPoint;                                              // (Parm)
	float                                              DistanceToPoint;                                          // (Parm)
};

// Function Hazard.HazardTileComponent.BruteForceFurthestPoints
struct UHazardTileComponent_BruteForceFurthestPoints_Params
{
};

// Function Hazard.HazardTileComponent.FindFurthestPoints
struct UHazardTileComponent_FindFurthestPoints_Params
{
	struct FVector                                     SearchPoint;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.RecurseDestruct
struct UHazardTileComponent_RecurseDestruct_Params
{
	struct FVector                                     SearchPoint;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.RecurseConstruct
struct UHazardTileComponent_RecurseConstruct_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	int                                                MinConstructDepth;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.GetNextRecursePoint
struct UHazardTileComponent_GetNextRecursePoint_Params
{
	int                                                TestIndex;                                                // (Parm)
	struct FRecurseConstructPoint                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.AddRecurseConstructPoint
struct UHazardTileComponent_AddRecurseConstructPoint_Params
{
	struct FRecurseConstructPoint                      NewConstructPoint;                                        // (Parm)
};

// Function Hazard.HazardTileComponent.GetRecurseLocation
struct UHazardTileComponent_GetRecurseLocation_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     CancelledDirection;                                       // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.FindClosestTile
struct UHazardTileComponent_FindClosestTile_Params
{
	struct FVector                                     SearchPoint;                                              // (Parm)
	bool                                               bUseCameraDistance;                                       // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.EqualClusters
struct UHazardTileComponent_EqualClusters_Params
{
	class UHazardTileComponent*                        FirstCluster;                                             // (Parm, EditInline)
	class UHazardTileComponent*                        SecondCluster;                                            // (Parm, EditInline)
	struct FVector                                     CancelledDirection;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.JoinClusters
struct UHazardTileComponent_JoinClusters_Params
{
	int                                                Axis;                                                     // (Parm)
	int                                                I;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.MergeClusters
struct UHazardTileComponent_MergeClusters_Params
{
};

// Function Hazard.HazardTileComponent.FindLoopedClusters
struct UHazardTileComponent_FindLoopedClusters_Params
{
	int                                                StartDirection;                                           // (Parm, OutParm)
	struct FVector                                     LastLoopLocation;                                         // (Parm, OutParm)
	int                                                PlaneAxis;                                                // (Parm)
	class UHazardTileComponent*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardTileComponent.VectorToName
struct UHazardTileComponent_VectorToName_Params
{
	struct FVector                                     InVect;                                                   // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.FindLoop
struct UHazardTileComponent_FindLoop_Params
{
	float                                              NewLoopTimeStamp;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	struct FVector                                     StartLocation;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.LoopDetection
struct UHazardTileComponent_LoopDetection_Params
{
	float                                              NewLoopTimeStamp;                                         // (Parm)
	struct FVector                                     StartLocation;                                            // (Parm)
};

// Function Hazard.HazardTileComponent.FindLoops
struct UHazardTileComponent_FindLoops_Params
{
};

// Function Hazard.HazardTileComponent.LatentSnakeToPoint
struct UHazardTileComponent_LatentSnakeToPoint_Params
{
};

// Function Hazard.HazardTileComponent.EnableTimer
struct UHazardTileComponent_EnableTimer_Params
{
};

// Function Hazard.HazardTileComponent.SnakeToPoint
struct UHazardTileComponent_SnakeToPoint_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
};

// Function Hazard.HazardTileComponent.Explode
struct UHazardTileComponent_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardTileComponent.CompoundRecursion
struct UHazardTileComponent_CompoundRecursion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.GetNeighbourFromAxis
struct UHazardTileComponent_GetNeighbourFromAxis_Params
{
	int                                                Index;                                                    // (Parm)
	class UHazardTileComponent*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardTileComponent.Recurse
struct UHazardTileComponent_Recurse_Params
{
};

// Function Hazard.HazardTileComponent.FindAxisClusters
struct UHazardTileComponent_FindAxisClusters_Params
{
	struct FVector                                     CancelledDirection;                                       // (Parm)
};

// Function Hazard.HazardTileComponent.FindClusteredNeighbours
struct UHazardTileComponent_FindClusteredNeighbours_Params
{
};

// Function Hazard.HazardTileComponent.VoidClusteredNeighbours
struct UHazardTileComponent_VoidClusteredNeighbours_Params
{
};

// Function Hazard.HazardTileComponent.SplitCluster
struct UHazardTileComponent_SplitCluster_Params
{
	struct FVector                                     SplitLocation;                                            // (Parm)
};

// Function Hazard.HazardTileComponent.SplitAxisCluster
struct UHazardTileComponent_SplitAxisCluster_Params
{
	struct FVector                                     SplitLocation;                                            // (Parm)
	struct FVector                                     SplitDirection;                                           // (Parm)
	class UHazardTileComponent*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardTileComponent.DoesContainPoint
struct UHazardTileComponent_DoesContainPoint_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.GetNumClusters
struct UHazardTileComponent_GetNumClusters_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.SetNumClusters
struct UHazardTileComponent_SetNumClusters_Params
{
};

// Function Hazard.HazardTileComponent.SetScale3D
struct UHazardTileComponent_SetScale3D_Params
{
	struct FVector                                     NewScale;                                                 // (Parm)
};

// Function Hazard.HazardTileComponent.TimerFinished
struct UHazardTileComponent_TimerFinished_Params
{
	float                                              Time;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.CheckTimers
struct UHazardTileComponent_CheckTimers_Params
{
};

// Function Hazard.HazardTileComponent.KillBlockingTiles
struct UHazardTileComponent_KillBlockingTiles_Params
{
};

// Function Hazard.HazardTileComponent.FindLasers
struct UHazardTileComponent_FindLasers_Params
{
};

// Function Hazard.HazardTileComponent.FinishedInterpolation
struct UHazardTileComponent_FinishedInterpolation_Params
{
};

// Function Hazard.HazardTileComponent.SetBlendAmount
struct UHazardTileComponent_SetBlendAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardTileComponent.SetGlobalCollision
struct UHazardTileComponent_SetGlobalCollision_Params
{
	bool                                               bEnabled;                                                 // (Parm)
};

// Function Hazard.HazardTileComponent.UpdateGlobalCollision
struct UHazardTileComponent_UpdateGlobalCollision_Params
{
};

// Function Hazard.HazardTileComponent.FullMerge
struct UHazardTileComponent_FullMerge_Params
{
};

// Function Hazard.HazardTileComponent.UpdateMovement
struct UHazardTileComponent_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardTileComponent.UpdateWhiteSounds
struct UHazardTileComponent_UpdateWhiteSounds_Params
{
};

// Function Hazard.HazardTileComponent.TestMovePawn
struct UHazardTileComponent_TestMovePawn_Params
{
	struct FVector                                     MoveDistance;                                             // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardTileComponent.WillHitGeometry
struct UHazardTileComponent_WillHitGeometry_Params
{
	struct FVector                                     TestLocation;                                             // (Parm)
	struct FVector                                     MoveDirection;                                            // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.ForceMovePlayer
struct UHazardTileComponent_ForceMovePlayer_Params
{
};

// Function Hazard.HazardTileComponent.InterpolateTo
struct UHazardTileComponent_InterpolateTo_Params
{
	struct FVector                                     NewLocation;                                              // (Parm)
	struct FRotator                                    NewRotation;                                              // (Parm)
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardTileComponent.UnregisterActive
struct UHazardTileComponent_UnregisterActive_Params
{
};

// Function Hazard.HazardTileComponent.RegisterActive
struct UHazardTileComponent_RegisterActive_Params
{
};

// Function Hazard.HazardTileComponent.DoClose
struct UHazardTileComponent_DoClose_Params
{
};

// Function Hazard.HazardTileComponent.SpawnRenderDummy
struct UHazardTileComponent_SpawnRenderDummy_Params
{
};

// Function Hazard.HazardTileComponent.SpawnDrawnTile
struct UHazardTileComponent_SpawnDrawnTile_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm)
};

// Function Hazard.HazardTileComponent.SpawnShotTile
struct UHazardTileComponent_SpawnShotTile_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function Hazard.HazardTileComponent.DoOpen
struct UHazardTileComponent_DoOpen_Params
{
};

// Function Hazard.HazardTileComponent.FinishedOpen
struct UHazardTileComponent_FinishedOpen_Params
{
};

// Function Hazard.HazardTileComponent.FinishedClose
struct UHazardTileComponent_FinishedClose_Params
{
};

// Function Hazard.HazardTileComponent.KillRenderDummy
struct UHazardTileComponent_KillRenderDummy_Params
{
};

// Function Hazard.HazardTileComponent.Close
struct UHazardTileComponent_Close_Params
{
};

// Function Hazard.HazardTileComponent.Wait
struct UHazardTileComponent_Wait_Params
{
};

// Function Hazard.HazardTileComponent.Open
struct UHazardTileComponent_Open_Params
{
};

// Function Hazard.HazardTileComponent.Tick
struct UHazardTileComponent_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardTileComponent.CreateAndSetNewMaterialInstanceConstant
struct UHazardTileComponent_CreateAndSetNewMaterialInstanceConstant_Params
{
	int                                                ElementIndex;                                             // (Parm)
	class UMaterialInterface*                          NewMaterial;                                              // (Parm)
	class UMaterialInstanceConstant*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.GetClampedLocation
struct UHazardTileComponent_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.InitializeTile
struct UHazardTileComponent_InitializeTile_Params
{
	class AHazardTile*                                 NewOwner;                                                 // (Parm)
};

// Function Hazard.HazardTileComponent.PointInBox
struct UHazardTileComponent_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.NormalizeActor
struct UHazardTileComponent_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardTileComponent.GetNextPointOnLine
struct UHazardTileComponent_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.RoundToScale
struct UHazardTileComponent_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.RoundVectorToScale
struct UHazardTileComponent_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.getIndexNormal
struct UHazardTileComponent_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.getMinLocationIndex
struct UHazardTileComponent_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.getLocationIndex
struct UHazardTileComponent_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.RotateAroundAxis
struct UHazardTileComponent_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.CeilValue
struct UHazardTileComponent_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.FloorValue
struct UHazardTileComponent_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTileComponent.ManhattanVSize
struct UHazardTileComponent_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.SetImpactedActor
struct AHazardWeap_TileGun_SetImpactedActor_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Parm)
};

// Function Hazard.HazardWeap_TileGun.SendToFiringState
struct AHazardWeap_TileGun_SendToFiringState_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function Hazard.HazardWeap_TileGun.UpdateWeaponColour
struct AHazardWeap_TileGun_UpdateWeaponColour_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardWeap_TileGun.SetPosition
struct AHazardWeap_TileGun_SetPosition_Params
{
	class AUDKPawn*                                    Holder;                                                   // (Parm)
};

// Function Hazard.HazardWeap_TileGun.GetHand
struct AHazardWeap_TileGun_GetHand_Params
{
	TEnumAsByte<EWeaponHand>                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.AttachWeaponTo
struct AHazardWeap_TileGun_AttachWeaponTo_Params
{
	class USkeletalMeshComponent*                      MeshCpnt;                                                 // (Parm, EditInline)
	struct FName                                       SocketName;                                               // (OptionalParm, Parm)
};

// Function Hazard.HazardWeap_TileGun.ActiveRenderOverlays
struct AHazardWeap_TileGun_ActiveRenderOverlays_Params
{
	class AHUD*                                        H;                                                        // (Parm)
};

// Function Hazard.HazardWeap_TileGun.GetEquipTime
struct AHazardWeap_TileGun_GetEquipTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.TimeWeaponEquipping
struct AHazardWeap_TileGun_TimeWeaponEquipping_Params
{
};

// Function Hazard.HazardWeap_TileGun.GetProjectileClass
struct AHazardWeap_TileGun_GetProjectileClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.UnlockBlackGun
struct AHazardWeap_TileGun_UnlockBlackGun_Params
{
};

// Function Hazard.HazardWeap_TileGun.UnlockDarkGun
struct AHazardWeap_TileGun_UnlockDarkGun_Params
{
};

// Function Hazard.HazardWeap_TileGun.Upgrade
struct AHazardWeap_TileGun_Upgrade_Params
{
};

// Function Hazard.HazardWeap_TileGun.UpdateWeaponPosition
struct AHazardWeap_TileGun_UpdateWeaponPosition_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardWeap_TileGun.KillSnakeBeamEmitter
struct AHazardWeap_TileGun_KillSnakeBeamEmitter_Params
{
};

// Function Hazard.HazardWeap_TileGun.SpawnSnakeBeamEmitter
struct AHazardWeap_TileGun_SpawnSnakeBeamEmitter_Params
{
};

// Function Hazard.HazardWeap_TileGun.UpdateSnakeBeam
struct AHazardWeap_TileGun_UpdateSnakeBeam_Params
{
};

// Function Hazard.HazardWeap_TileGun.Tick
struct AHazardWeap_TileGun_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardWeap_TileGun.DrawWeaponCrosshair
struct AHazardWeap_TileGun_DrawWeaponCrosshair_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
};

// Function Hazard.HazardWeap_TileGun.HideProjectedTile
struct AHazardWeap_TileGun_HideProjectedTile_Params
{
};

// Function Hazard.HazardWeap_TileGun.ShowProjectedTile
struct AHazardWeap_TileGun_ShowProjectedTile_Params
{
	struct FVector                                     NewProjectedLocation;                                     // (Parm)
	struct FVector                                     NewProjectedSize;                                         // (Parm)
};

// Function Hazard.HazardWeap_TileGun.ProjectTile
struct AHazardWeap_TileGun_ProjectTile_Params
{
};

// Function Hazard.HazardWeap_TileGun.SimpleCalculateDrawingConstruct
struct AHazardWeap_TileGun_SimpleCalculateDrawingConstruct_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     AimDir;                                                   // (Parm)
	class UHazardTileComponent*                        LinkedTileComponent;                                      // (Parm, EditInline)
};

// Function Hazard.HazardWeap_TileGun.CalculateDrawingConstruct
struct AHazardWeap_TileGun_CalculateDrawingConstruct_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     AimDir;                                                   // (Parm)
	class UHazardTileComponent*                        LinkedTileComponent;                                      // (Parm, EditInline)
};

// Function Hazard.HazardWeap_TileGun.CalculateRecurseConstruct
struct AHazardWeap_TileGun_CalculateRecurseConstruct_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     AimDir;                                                   // (Parm)
	class UHazardTileComponent*                        LinkedTileComponent;                                      // (Parm, EditInline)
};

// Function Hazard.HazardWeap_TileGun.ProjectLink
struct AHazardWeap_TileGun_ProjectLink_Params
{
	struct FVector                                     NewLinkedLocation;                                        // (Parm)
};

// Function Hazard.HazardWeap_TileGun.CalculatePositiveLink
struct AHazardWeap_TileGun_CalculatePositiveLink_Params
{
};

// Function Hazard.HazardWeap_TileGun.NoVolumesBetweenCamera
struct AHazardWeap_TileGun_NoVolumesBetweenCamera_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	class UHazardTileComponent*                        LinkedTileComponent;                                      // (Parm, EditInline)
	int                                                NeighbourIndex;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.NoVolume
struct AHazardWeap_TileGun_NoVolume_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     CheckAxis;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.PenetratingTrace
struct AHazardWeap_TileGun_PenetratingTrace_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, OutParm)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm)
	struct FVector                                     EndTrace;                                                 // (Parm)
	struct FVector                                     StartTrace;                                               // (Parm)
	bool                                               bTraceThroughTiles;                                       // (Parm)
	class UHazardTileComponent*                        HitComponent;                                             // (Parm, OutParm, EditInline)
	bool                                               bTraceThroughVolumes;                                     // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.GetLinkedToLocation
struct AHazardWeap_TileGun_GetLinkedToLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.ProcessBeamHit
struct AHazardWeap_TileGun_ProcessBeamHit_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     AimDir;                                                   // (Parm)
	struct FImpactInfo                                 TestImpact;                                               // (Parm, OutParm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardWeap_TileGun.UpdateBeamEmitter
struct AHazardWeap_TileGun_UpdateBeamEmitter_Params
{
	struct FVector                                     FlashLocation;                                            // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      HitActor;                                                 // (Parm)
};

// Function Hazard.HazardWeap_TileGun.SetBeamEmitterHidden
struct AHazardWeap_TileGun_SetBeamEmitterHidden_Params
{
	bool                                               bHide;                                                    // (Parm)
};

// Function Hazard.HazardWeap_TileGun.KillBeamEmitter
struct AHazardWeap_TileGun_KillBeamEmitter_Params
{
};

// Function Hazard.HazardWeap_TileGun.AddBeamEmitter
struct AHazardWeap_TileGun_AddBeamEmitter_Params
{
};

// Function Hazard.HazardWeap_TileGun.UpdateBeam
struct AHazardWeap_TileGun_UpdateBeam_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardWeap_TileGun.CalcWeaponFire
struct AHazardWeap_TileGun_CalcWeaponFire_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     EndTrace;                                                 // (Parm)
	TArray<struct FImpactInfo>                         ImpactList;                                               // (OptionalParm, Parm, OutParm, NeedCtorLink)
	struct FVector                                     Extent;                                                   // (OptionalParm, Parm)
	struct FImpactInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.PassThroughDamage
struct AHazardWeap_TileGun_PassThroughDamage_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.StopFire
struct AHazardWeap_TileGun_StopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function Hazard.HazardWeap_TileGun.StartFire
struct AHazardWeap_TileGun_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function Hazard.HazardWeap_TileGun.MoveSnake
struct AHazardWeap_TileGun_MoveSnake_Params
{
};

// Function Hazard.HazardWeap_TileGun.TraceThroughGlass
struct AHazardWeap_TileGun_TraceThroughGlass_Params
{
	struct FVector                                     EndTrace;                                                 // (Parm)
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class AActor*                                      HitActor;                                                 // (Parm)
	struct FVector                                     OutHitLocation;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.FindSnake
struct AHazardWeap_TileGun_FindSnake_Params
{
};

// Function Hazard.HazardWeap_TileGun.KillSnake
struct AHazardWeap_TileGun_KillSnake_Params
{
};

// Function Hazard.HazardWeap_TileGun.ShouldRefire
struct AHazardWeap_TileGun_ShouldRefire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.FireBlackTileProjectile
struct AHazardWeap_TileGun_FireBlackTileProjectile_Params
{
	class AProjectile*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.ProjectileFire
struct AHazardWeap_TileGun_ProjectileFire_Params
{
	class AProjectile*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.DelayedHit
struct AHazardWeap_TileGun_DelayedHit_Params
{
	class AProjectile*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.InstantHit
struct AHazardWeap_TileGun_InstantHit_Params
{
	class AProjectile*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.SpendAmmo
struct AHazardWeap_TileGun_SpendAmmo_Params
{
	int                                                Amount;                                                   // (Parm)
};

// Function Hazard.HazardWeap_TileGun.SpawnAmmo
struct AHazardWeap_TileGun_SpawnAmmo_Params
{
	int                                                Amount;                                                   // (Parm)
	class UMaterialInterface*                          InputMaterial;                                            // (Parm)
};

// Function Hazard.HazardWeap_TileGun.CheckOverloaded
struct AHazardWeap_TileGun_CheckOverloaded_Params
{
};

// Function Hazard.HazardWeap_TileGun.DestroyAllAmmo
struct AHazardWeap_TileGun_DestroyAllAmmo_Params
{
};

// Function Hazard.HazardWeap_TileGun.Destroyed
struct AHazardWeap_TileGun_Destroyed_Params
{
};

// Function Hazard.HazardWeap_TileGun.GetCurrentTileMaterial
struct AHazardWeap_TileGun_GetCurrentTileMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.SafeHide
struct AHazardWeap_TileGun_SafeHide_Params
{
	bool                                               bNewHidden;                                               // (Parm)
};

// Function Hazard.HazardWeap_TileGun.PostBeginPlay
struct AHazardWeap_TileGun_PostBeginPlay_Params
{
};

// Function Hazard.HazardWeap_TileGun.PointInBox
struct AHazardWeap_TileGun_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.NormalizeActor
struct AHazardWeap_TileGun_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardWeap_TileGun.GetNextPointOnLine
struct AHazardWeap_TileGun_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.RoundToScale
struct AHazardWeap_TileGun_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.RoundVectorToScale
struct AHazardWeap_TileGun_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.getIndexNormal
struct AHazardWeap_TileGun_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.getMinLocationIndex
struct AHazardWeap_TileGun_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.getLocationIndex
struct AHazardWeap_TileGun_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.RotateAroundAxis
struct AHazardWeap_TileGun_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.CeilValue
struct AHazardWeap_TileGun_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.FloorValue
struct AHazardWeap_TileGun_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardWeap_TileGun.ManhattanVSize
struct AHazardWeap_TileGun_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.Detach
struct AHazardTile_Detach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardTile.SpawnNeighbour
struct AHazardTile_SpawnNeighbour_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	int                                                NeighbourIndex;                                           // (Parm)
	bool                                               bRunLoopDetection;                                        // (Parm)
	bool                                               bLockedAxis;                                              // (Parm)
	bool                                               bLooped;                                                  // (Parm)
	bool                                               bSnaked;                                                  // (Parm)
	class UHazardTileComponent*                        SpawnComponent;                                           // (OptionalParm, Parm, EditInline)
	bool                                               bPreCheck;                                                // (OptionalParm, Parm)
	bool                                               bAutoLoop;                                                // (OptionalParm, Parm)
	class UHazardTileComponent*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardTile.PassThroughDamage
struct AHazardTile_PassThroughDamage_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.CalcWeaponFire
struct AHazardTile_CalcWeaponFire_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     EndTrace;                                                 // (Parm)
	TArray<struct FImpactInfo>                         ImpactList;                                               // (OptionalParm, Parm, OutParm, NeedCtorLink)
	struct FVector                                     Extent;                                                   // (OptionalParm, Parm)
	struct FImpactInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.IsWithinPawn
struct AHazardTile_IsWithinPawn_Params
{
	struct FVector                                     TestLocation;                                             // (Parm)
	struct FVector                                     MoveDirection;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.Attach
struct AHazardTile_Attach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardTile.DoesContainPoint
struct AHazardTile_DoesContainPoint_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.GetClampedLocation
struct AHazardTile_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.SplitTile
struct AHazardTile_SplitTile_Params
{
	struct FVector                                     SplitLocation;                                            // (Parm)
	class UHazardTileComponent*                        SplitComponent;                                           // (OptionalParm, Parm, EditInline)
};

// Function Hazard.HazardTile.CustomSetTickIsDisabled
struct AHazardTile_CustomSetTickIsDisabled_Params
{
	bool                                               bNewTickDisabled;                                         // (Parm)
};

// Function Hazard.HazardTile.Tick
struct AHazardTile_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardTile.TakeDamage
struct AHazardTile_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function Hazard.HazardTile.FindTileComponent
struct AHazardTile_FindTileComponent_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	class UHazardTileComponent*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardTile.SetupTile
struct AHazardTile_SetupTile_Params
{
};

// Function Hazard.HazardTile.PreBeginPlay
struct AHazardTile_PreBeginPlay_Params
{
};

// Function Hazard.HazardTile.ResetState
struct AHazardTile_ResetState_Params
{
};

// Function Hazard.HazardTile.CheckReset
struct AHazardTile_CheckReset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.UpdateDecals
struct AHazardTile_UpdateDecals_Params
{
	bool                                               bPreUpdate;                                               // (Parm)
};

// Function Hazard.HazardTile.Reset
struct AHazardTile_Reset_Params
{
};

// Function Hazard.HazardTile.RemoveComponent
struct AHazardTile_RemoveComponent_Params
{
	class UHazardTileComponent*                        DestroyedComponent;                                       // (Parm, EditInline)
};

// Function Hazard.HazardTile.AddComponent
struct AHazardTile_AddComponent_Params
{
	class UHazardTileComponent*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardTile.PointInBox
struct AHazardTile_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.NormalizeActor
struct AHazardTile_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardTile.GetNextPointOnLine
struct AHazardTile_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.RoundToScale
struct AHazardTile_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.RoundVectorToScale
struct AHazardTile_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.getIndexNormal
struct AHazardTile_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.getMinLocationIndex
struct AHazardTile_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.getLocationIndex
struct AHazardTile_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.RotateAroundAxis
struct AHazardTile_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.CeilValue
struct AHazardTile_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.FloorValue
struct AHazardTile_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTile.ManhattanVSize
struct AHazardTile_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRecursiveCylinder.Tick
struct AHazardRecursiveCylinder_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardRecursiveCylinder.TestTeleport
struct AHazardRecursiveCylinder_TestTeleport_Params
{
};

// Function Hazard.HazardRecursiveCylinder.UnTouch
struct AHazardRecursiveCylinder_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardRecursiveCylinder.Touch
struct AHazardRecursiveCylinder_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardRecursiveCylinder.PostBeginPlay
struct AHazardRecursiveCylinder_PostBeginPlay_Params
{
};

// Function Hazard.HazardProj_GuideTile.UpdateDuplicates
struct AHazardProj_GuideTile_UpdateDuplicates_Params
{
};

// Function Hazard.HazardProj_GuideTile.IsOverlappingVolume
struct AHazardProj_GuideTile_IsOverlappingVolume_Params
{
	class AHazardDuplicateVolume*                      TestVolume;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.KillDuplicate
struct AHazardProj_GuideTile_KillDuplicate_Params
{
	class AHazardDuplicateVolume*                      newDuplicateVolume;                                       // (Parm)
};

// Function Hazard.HazardProj_GuideTile.SpawnDuplicate
struct AHazardProj_GuideTile_SpawnDuplicate_Params
{
	class AHazardDuplicateVolume*                      newDuplicateVolume;                                       // (Parm)
};

// Function Hazard.HazardProj_GuideTile.Explode
struct AHazardProj_GuideTile_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardProj_GuideTile.ProcessTouch
struct AHazardProj_GuideTile_ProcessTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardProj_GuideTile.LockTile
struct AHazardProj_GuideTile_LockTile_Params
{
};

// Function Hazard.HazardProj_GuideTile.HitWall
struct AHazardProj_GuideTile_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
	class UPrimitiveComponent*                         WallComp;                                                 // (Parm, EditInline)
};

// Function Hazard.HazardProj_GuideTile.TakeDamage
struct AHazardProj_GuideTile_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function Hazard.HazardProj_GuideTile.Tick
struct AHazardProj_GuideTile_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardProj_GuideTile.TestSpawnDuplicate
struct AHazardProj_GuideTile_TestSpawnDuplicate_Params
{
};

// Function Hazard.HazardProj_GuideTile.Init
struct AHazardProj_GuideTile_Init_Params
{
	struct FVector                                     Direction;                                                // (Parm)
};

// Function Hazard.HazardProj_GuideTile.TestCollision
struct AHazardProj_GuideTile_TestCollision_Params
{
};

// Function Hazard.HazardProj_GuideTile.Lock
struct AHazardProj_GuideTile_Lock_Params
{
	class UHazardTileComponent*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardProj_GuideTile.Destroyed
struct AHazardProj_GuideTile_Destroyed_Params
{
};

// Function Hazard.HazardProj_GuideTile.InitializeMaterial
struct AHazardProj_GuideTile_InitializeMaterial_Params
{
};

// Function Hazard.HazardProj_GuideTile.PostBeginPlay
struct AHazardProj_GuideTile_PostBeginPlay_Params
{
};

// Function Hazard.HazardProj_GuideTile.PointInBox
struct AHazardProj_GuideTile_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.NormalizeActor
struct AHazardProj_GuideTile_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardProj_GuideTile.GetNextPointOnLine
struct AHazardProj_GuideTile_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.RoundToScale
struct AHazardProj_GuideTile_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.RoundVectorToScale
struct AHazardProj_GuideTile_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.getIndexNormal
struct AHazardProj_GuideTile_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.getMinLocationIndex
struct AHazardProj_GuideTile_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.getLocationIndex
struct AHazardProj_GuideTile_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.RotateAroundAxis
struct AHazardProj_GuideTile_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.CeilValue
struct AHazardProj_GuideTile_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.FloorValue
struct AHazardProj_GuideTile_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_GuideTile.ManhattanVSize
struct AHazardProj_GuideTile_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.Tick
struct AHazardDuplicateVolume_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardDuplicateVolume.UnTouch
struct AHazardDuplicateVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardDuplicateVolume.Touch
struct AHazardDuplicateVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardDuplicateVolume.GetClampedLocation
struct AHazardDuplicateVolume_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.PostBeginPlay
struct AHazardDuplicateVolume_PostBeginPlay_Params
{
};

// Function Hazard.HazardDuplicateVolume.DoesContainPoint
struct AHazardDuplicateVolume_DoesContainPoint_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.PointInBox
struct AHazardDuplicateVolume_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.NormalizeActor
struct AHazardDuplicateVolume_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardDuplicateVolume.GetNextPointOnLine
struct AHazardDuplicateVolume_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.RoundToScale
struct AHazardDuplicateVolume_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.RoundVectorToScale
struct AHazardDuplicateVolume_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.getIndexNormal
struct AHazardDuplicateVolume_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.getMinLocationIndex
struct AHazardDuplicateVolume_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.getLocationIndex
struct AHazardDuplicateVolume_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.RotateAroundAxis
struct AHazardDuplicateVolume_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.CeilValue
struct AHazardDuplicateVolume_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.FloorValue
struct AHazardDuplicateVolume_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDuplicateVolume.ManhattanVSize
struct AHazardDuplicateVolume_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.UnTouch
struct AHazardLaser_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardLaser.Touch
struct AHazardLaser_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardLaser.CheckBlocked
struct AHazardLaser_CheckBlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.CheckTouchingPlayer
struct AHazardLaser_CheckTouchingPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.Tick
struct AHazardLaser_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardLaser.UpdateBeam
struct AHazardLaser_UpdateBeam_Params
{
};

// Function Hazard.HazardLaser.CalcWeaponFire
struct AHazardLaser_CalcWeaponFire_Params
{
	struct FVector                                     TraceStart;                                               // (Parm)
	struct FVector                                     TraceEnd;                                                 // (Parm)
	TArray<struct FImpactInfo>                         ImpactList;                                               // (OptionalParm, Parm, OutParm, NeedCtorLink)
	struct FImpactInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.PassThroughDamage
struct AHazardLaser_PassThroughDamage_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.InitializeMaterial
struct AHazardLaser_InitializeMaterial_Params
{
};

// Function Hazard.HazardLaser.PostBeginPlay
struct AHazardLaser_PostBeginPlay_Params
{
};

// Function Hazard.HazardLaser.PointInBox
struct AHazardLaser_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.NormalizeActor
struct AHazardLaser_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardLaser.GetNextPointOnLine
struct AHazardLaser_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.RoundToScale
struct AHazardLaser_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.RoundVectorToScale
struct AHazardLaser_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.getIndexNormal
struct AHazardLaser_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.getMinLocationIndex
struct AHazardLaser_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.getLocationIndex
struct AHazardLaser_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.RotateAroundAxis
struct AHazardLaser_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.CeilValue
struct AHazardLaser_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.FloorValue
struct AHazardLaser_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardLaser.ManhattanVSize
struct AHazardLaser_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardNoShootField.Tick
struct AHazardNoShootField_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardNoShootField.UnTouch
struct AHazardNoShootField_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardNoShootField.Touch
struct AHazardNoShootField_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardNoShootField.GetClampedLocation
struct AHazardNoShootField_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardNoShootField.PostBeginPlay
struct AHazardNoShootField_PostBeginPlay_Params
{
};

// Function Hazard.HazardDistanceTile.Detach
struct AHazardDistanceTile_Detach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardDistanceTile.Attach
struct AHazardDistanceTile_Attach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardDistanceTile.GetClampedLocation
struct AHazardDistanceTile_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.Tick
struct AHazardDistanceTile_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardDistanceTile.PostBeginPlay
struct AHazardDistanceTile_PostBeginPlay_Params
{
};

// Function Hazard.HazardDistanceTile.CheckReset
struct AHazardDistanceTile_CheckReset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.Reset
struct AHazardDistanceTile_Reset_Params
{
};

// Function Hazard.HazardDistanceTile.RemoveComponent
struct AHazardDistanceTile_RemoveComponent_Params
{
	class UHazardDistanceTileComponent*                DestroyedComponent;                                       // (Parm, EditInline)
};

// Function Hazard.HazardDistanceTile.AddComponent
struct AHazardDistanceTile_AddComponent_Params
{
	class UHazardDistanceTileComponent*                ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardDistanceTile.PointInBox
struct AHazardDistanceTile_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.NormalizeActor
struct AHazardDistanceTile_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardDistanceTile.GetNextPointOnLine
struct AHazardDistanceTile_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.RoundToScale
struct AHazardDistanceTile_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.RoundVectorToScale
struct AHazardDistanceTile_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.getIndexNormal
struct AHazardDistanceTile_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.getMinLocationIndex
struct AHazardDistanceTile_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.getLocationIndex
struct AHazardDistanceTile_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.RotateAroundAxis
struct AHazardDistanceTile_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.CeilValue
struct AHazardDistanceTile_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.FloorValue
struct AHazardDistanceTile_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTile.ManhattanVSize
struct AHazardDistanceTile_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardBlackTileProjectile.Explode
struct AHazardBlackTileProjectile_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardBlackTileProjectile.ProcessTouch
struct AHazardBlackTileProjectile_ProcessTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardBlackTileProjectile.LockTile
struct AHazardBlackTileProjectile_LockTile_Params
{
};

// Function Hazard.HazardBlackTileProjectile.HitWall
struct AHazardBlackTileProjectile_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
	class UPrimitiveComponent*                         WallComp;                                                 // (Parm, EditInline)
};

// Function Hazard.HazardBlackTileProjectile.TakeDamage
struct AHazardBlackTileProjectile_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function Hazard.HazardBlackTileProjectile.Tick
struct AHazardBlackTileProjectile_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardBlackTileProjectile.Init
struct AHazardBlackTileProjectile_Init_Params
{
	struct FVector                                     Direction;                                                // (Parm)
};

// Function Hazard.HazardBlackTileProjectile.FindLockedSpot
struct AHazardBlackTileProjectile_FindLockedSpot_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardBlackTileProjectile.TestCollision
struct AHazardBlackTileProjectile_TestCollision_Params
{
};

// Function Hazard.HazardBlackTileProjectile.Lock
struct AHazardBlackTileProjectile_Lock_Params
{
	class UHazardTileComponent*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardBlackTileProjectile.Destroyed
struct AHazardBlackTileProjectile_Destroyed_Params
{
};

// Function Hazard.HazardBlackTileProjectile.InitializeMaterial
struct AHazardBlackTileProjectile_InitializeMaterial_Params
{
};

// Function Hazard.HazardBlackTileProjectile.PostBeginPlay
struct AHazardBlackTileProjectile_PostBeginPlay_Params
{
};

// Function Hazard.HazardCheatManager.InitCheatManager
struct UHazardCheatManager_InitCheatManager_Params
{
};

// Function Hazard.HazardCheatManager.VerbosePathDebug
struct UHazardCheatManager_VerbosePathDebug_Params
{
};

// Function Hazard.HazardCheatManager.TestLevel
struct UHazardCheatManager_TestLevel_Params
{
};

// Function Hazard.HazardCheatManager.EnableDebugCamera
struct UHazardCheatManager_EnableDebugCamera_Params
{
};

// Function Hazard.HazardCheatManager.ToggleDebugCamera
struct UHazardCheatManager_ToggleDebugCamera_Params
{
};

// Function Hazard.HazardCheatManager.StreamLevelOut
struct UHazardCheatManager_StreamLevelOut_Params
{
	struct FName                                       PackageName;                                              // (Parm)
};

// Function Hazard.HazardCheatManager.OnlyLoadLevel
struct UHazardCheatManager_OnlyLoadLevel_Params
{
	struct FName                                       PackageName;                                              // (Parm)
};

// Function Hazard.HazardCheatManager.StreamLevelIn
struct UHazardCheatManager_StreamLevelIn_Params
{
	struct FName                                       PackageName;                                              // (Parm)
};

// Function Hazard.HazardCheatManager.SetLevelStreamingStatus
struct UHazardCheatManager_SetLevelStreamingStatus_Params
{
	struct FName                                       PackageName;                                              // (Parm)
	bool                                               bShouldBeLoaded;                                          // (Parm)
	bool                                               bShouldBeVisible;                                         // (Parm)
};

// Function Hazard.HazardCheatManager.ViewClass
struct UHazardCheatManager_ViewClass_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
};

// Function Hazard.HazardCheatManager.ViewActor
struct UHazardCheatManager_ViewActor_Params
{
	struct FName                                       actorName;                                                // (Parm)
};

// Function Hazard.HazardCheatManager.ViewPlayer
struct UHazardCheatManager_ViewPlayer_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function Hazard.HazardCheatManager.ViewSelf
struct UHazardCheatManager_ViewSelf_Params
{
	bool                                               bQuiet;                                                   // (OptionalParm, Parm)
};

// Function Hazard.HazardCheatManager.PlayersOnly
struct UHazardCheatManager_PlayersOnly_Params
{
};

// Function Hazard.HazardCheatManager.Slomo
struct UHazardCheatManager_Slomo_Params
{
	float                                              T;                                                        // (Parm)
};

// Function Hazard.HazardCheatManager.Ghost
struct UHazardCheatManager_Ghost_Params
{
};

// Function Hazard.HazardCheatManager.Walk
struct UHazardCheatManager_Walk_Params
{
};

// Function Hazard.HazardCheatManager.Fly
struct UHazardCheatManager_Fly_Params
{
};

// Function Hazard.HazardCheatManager.KillViewedActor
struct UHazardCheatManager_KillViewedActor_Params
{
};

// Function Hazard.HazardCheatManager.WriteToLog
struct UHazardCheatManager_WriteToLog_Params
{
	struct FString                                     Param;                                                    // (Parm, NeedCtorLink)
};

// Function Hazard.HazardCheatManager.FreezeFrame
struct UHazardCheatManager_FreezeFrame_Params
{
	float                                              Delay;                                                    // (Parm)
};

// Function Hazard.HazardCheatManager.ListDynamicActors
struct UHazardCheatManager_ListDynamicActors_Params
{
};

// Function Hazard.HazardCheatManager.DebugPause
struct UHazardCheatManager_DebugPause_Params
{
};

// Function Hazard.HazardCheatManager.EditAIByTrace
struct UHazardCheatManager_EditAIByTrace_Params
{
};

// Function Hazard.HazardCheatManager.DebugAI
struct UHazardCheatManager_DebugAI_Params
{
	struct FName                                       Category;                                                 // (OptionalParm, Parm, CoerceParm)
};

// Function Hazard.HazardCheatManager.UnlockDarkGun
struct UHazardCheatManager_UnlockDarkGun_Params
{
};

// Function Hazard.HazardCheatManager.UnlockBlackGun
struct UHazardCheatManager_UnlockBlackGun_Params
{
};

// Function Hazard.HazardCheatManager.UnlockGun
struct UHazardCheatManager_UnlockGun_Params
{
	int                                                gunLevel;                                                 // (Parm)
};

// Function Hazard.HazardCheatManager.UnlockAll
struct UHazardCheatManager_UnlockAll_Params
{
};

// Function Hazard.HazardCheatManager.UnlockMap
struct UHazardCheatManager_UnlockMap_Params
{
};

// Function Hazard.HazardTrigger.Touch
struct AHazardTrigger_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardTrigger.Unlock
struct AHazardTrigger_Unlock_Params
{
};

// Function Hazard.HazardDistanceTileComponent.SplitCluster
struct UHazardDistanceTileComponent_SplitCluster_Params
{
	struct FVector                                     SplitLocation;                                            // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.SplitAxisCluster
struct UHazardDistanceTileComponent_SplitAxisCluster_Params
{
	struct FVector                                     LocalSplitLocation;                                       // (Parm)
	struct FVector                                     SplitDirection;                                           // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.CheckDistance
struct UHazardDistanceTileComponent_CheckDistance_Params
{
};

// Function Hazard.HazardDistanceTileComponent.GetNumClusters
struct UHazardDistanceTileComponent_GetNumClusters_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.SetNumClusters
struct UHazardDistanceTileComponent_SetNumClusters_Params
{
};

// Function Hazard.HazardDistanceTileComponent.SetScale3D
struct UHazardDistanceTileComponent_SetScale3D_Params
{
	struct FVector                                     NewScale;                                                 // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.FinishedInterpolation
struct UHazardDistanceTileComponent_FinishedInterpolation_Params
{
};

// Function Hazard.HazardDistanceTileComponent.SetBlendAmount
struct UHazardDistanceTileComponent_SetBlendAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.SetGlobalCollision
struct UHazardDistanceTileComponent_SetGlobalCollision_Params
{
	bool                                               bEnabled;                                                 // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.UpdateGlobalCollision
struct UHazardDistanceTileComponent_UpdateGlobalCollision_Params
{
};

// Function Hazard.HazardDistanceTileComponent.UpdateMovement
struct UHazardDistanceTileComponent_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.InterpolateTo
struct UHazardDistanceTileComponent_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.DoClose
struct UHazardDistanceTileComponent_DoClose_Params
{
};

// Function Hazard.HazardDistanceTileComponent.DoOpen
struct UHazardDistanceTileComponent_DoOpen_Params
{
};

// Function Hazard.HazardDistanceTileComponent.FinishedOpen
struct UHazardDistanceTileComponent_FinishedOpen_Params
{
};

// Function Hazard.HazardDistanceTileComponent.FinishedClose
struct UHazardDistanceTileComponent_FinishedClose_Params
{
};

// Function Hazard.HazardDistanceTileComponent.Close
struct UHazardDistanceTileComponent_Close_Params
{
};

// Function Hazard.HazardDistanceTileComponent.Open
struct UHazardDistanceTileComponent_Open_Params
{
};

// Function Hazard.HazardDistanceTileComponent.Tick
struct UHazardDistanceTileComponent_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.UpdateWhiteSounds
struct UHazardDistanceTileComponent_UpdateWhiteSounds_Params
{
};

// Function Hazard.HazardDistanceTileComponent.CreateAndSetNewMaterialInstanceConstant
struct UHazardDistanceTileComponent_CreateAndSetNewMaterialInstanceConstant_Params
{
	int                                                ElementIndex;                                             // (Parm)
	class UMaterialInterface*                          NewMaterial;                                              // (Parm)
	class UMaterialInstanceConstant*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.GetClampedLocation
struct UHazardDistanceTileComponent_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.InitializeTile
struct UHazardDistanceTileComponent_InitializeTile_Params
{
	class AHazardDistanceTile*                         NewOwner;                                                 // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.PointInBox
struct UHazardDistanceTileComponent_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.NormalizeActor
struct UHazardDistanceTileComponent_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardDistanceTileComponent.GetNextPointOnLine
struct UHazardDistanceTileComponent_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.RoundToScale
struct UHazardDistanceTileComponent_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.RoundVectorToScale
struct UHazardDistanceTileComponent_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.getIndexNormal
struct UHazardDistanceTileComponent_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.getMinLocationIndex
struct UHazardDistanceTileComponent_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.getLocationIndex
struct UHazardDistanceTileComponent_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.RotateAroundAxis
struct UHazardDistanceTileComponent_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.CeilValue
struct UHazardDistanceTileComponent_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.FloorValue
struct UHazardDistanceTileComponent_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDistanceTileComponent.ManhattanVSize
struct UHazardDistanceTileComponent_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.UpdateMovement
struct AHazardDoor_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardDoor.CheckLasers
struct AHazardDoor_CheckLasers_Params
{
};

// Function Hazard.HazardDoor.Tick
struct AHazardDoor_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardDoor.Close
struct AHazardDoor_Close_Params
{
};

// Function Hazard.HazardDoor.Open
struct AHazardDoor_Open_Params
{
};

// Function Hazard.HazardDoor.FindOpenEvent
struct AHazardDoor_FindOpenEvent_Params
{
};

// Function Hazard.HazardDoor.Reset
struct AHazardDoor_Reset_Params
{
};

// Function Hazard.HazardDoor.InitializeMaterial
struct AHazardDoor_InitializeMaterial_Params
{
};

// Function Hazard.HazardDoor.SetRingColours
struct AHazardDoor_SetRingColours_Params
{
};

// Function Hazard.HazardDoor.ShouldPlaySound
struct AHazardDoor_ShouldPlaySound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.UpdateRingValues
struct AHazardDoor_UpdateRingValues_Params
{
	int                                                Active;                                                   // (Parm)
	int                                                Required;                                                 // (Parm)
};

// Function Hazard.HazardDoor.PlayRingSound
struct AHazardDoor_PlayRingSound_Params
{
	int                                                Active;                                                   // (Parm)
	int                                                Required;                                                 // (Parm)
};

// Function Hazard.HazardDoor.PlayClosedSound
struct AHazardDoor_PlayClosedSound_Params
{
};

// Function Hazard.HazardDoor.PlayOpenSound
struct AHazardDoor_PlayOpenSound_Params
{
};

// Function Hazard.HazardDoor.PostBeginPlay
struct AHazardDoor_PostBeginPlay_Params
{
};

// Function Hazard.HazardDoor.PointInBox
struct AHazardDoor_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.NormalizeActor
struct AHazardDoor_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardDoor.GetNextPointOnLine
struct AHazardDoor_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.RoundToScale
struct AHazardDoor_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.RoundVectorToScale
struct AHazardDoor_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.getIndexNormal
struct AHazardDoor_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.getMinLocationIndex
struct AHazardDoor_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.getLocationIndex
struct AHazardDoor_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.RotateAroundAxis
struct AHazardDoor_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.CeilValue
struct AHazardDoor_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.FloorValue
struct AHazardDoor_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDoor.ManhattanVSize
struct AHazardDoor_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.TryMove
struct AHazardDummyPlatform_TryMove_Params
{
	float                                              Distance;                                                 // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.SetDefaults
struct AHazardDummyPlatform_SetDefaults_Params
{
};

// Function Hazard.HazardDummyPlatform.PostBeginPlay
struct AHazardDummyPlatform_PostBeginPlay_Params
{
};

// Function Hazard.HazardDummyPlatform.PointInBox
struct AHazardDummyPlatform_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.NormalizeActor
struct AHazardDummyPlatform_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardDummyPlatform.GetNextPointOnLine
struct AHazardDummyPlatform_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.RoundToScale
struct AHazardDummyPlatform_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.RoundVectorToScale
struct AHazardDummyPlatform_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.getIndexNormal
struct AHazardDummyPlatform_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.getMinLocationIndex
struct AHazardDummyPlatform_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.getLocationIndex
struct AHazardDummyPlatform_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.RotateAroundAxis
struct AHazardDummyPlatform_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.CeilValue
struct AHazardDummyPlatform_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.FloorValue
struct AHazardDummyPlatform_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardDummyPlatform.ManhattanVSize
struct AHazardDummyPlatform_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.UpdateMovement
struct AHazardPushBlock_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPushBlock.TryMove
struct AHazardPushBlock_TryMove_Params
{
	struct FVector                                     MovedLocation;                                            // (Parm)
	struct FVector                                     MoveAxis;                                                 // (Parm)
};

// Function Hazard.HazardPushBlock.GetClampedLocation
struct AHazardPushBlock_GetClampedLocation_Params
{
	struct FVector                                     TestLocation;                                             // (Parm)
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.Pushed
struct AHazardPushBlock_Pushed_Params
{
	struct FVector                                     PushDirection;                                            // (Parm)
};

// Function Hazard.HazardPushBlock.UpdateDuplicates
struct AHazardPushBlock_UpdateDuplicates_Params
{
};

// Function Hazard.HazardPushBlock.Tick
struct AHazardPushBlock_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPushBlock.UpdateSounds
struct AHazardPushBlock_UpdateSounds_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPushBlock.Reset
struct AHazardPushBlock_Reset_Params
{
};

// Function Hazard.HazardPushBlock.SpawnDuplicate
struct AHazardPushBlock_SpawnDuplicate_Params
{
	class AHazardDuplicateVolume*                      NewVolume;                                                // (Parm)
};

// Function Hazard.HazardPushBlock.PostBeginPlay
struct AHazardPushBlock_PostBeginPlay_Params
{
};

// Function Hazard.HazardPushBlock.PointInBox
struct AHazardPushBlock_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.NormalizeActor
struct AHazardPushBlock_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardPushBlock.GetNextPointOnLine
struct AHazardPushBlock_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.RoundToScale
struct AHazardPushBlock_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.RoundVectorToScale
struct AHazardPushBlock_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.getIndexNormal
struct AHazardPushBlock_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.getMinLocationIndex
struct AHazardPushBlock_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.getLocationIndex
struct AHazardPushBlock_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.RotateAroundAxis
struct AHazardPushBlock_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.CeilValue
struct AHazardPushBlock_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.FloorValue
struct AHazardPushBlock_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPushBlock.ManhattanVSize
struct AHazardPushBlock_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.UpdateMovement
struct AHazardElevator_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardElevator.Tick
struct AHazardElevator_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardElevator.UpdateSounds
struct AHazardElevator_UpdateSounds_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardElevator.MoveDown
struct AHazardElevator_MoveDown_Params
{
};

// Function Hazard.HazardElevator.MoveUp
struct AHazardElevator_MoveUp_Params
{
};

// Function Hazard.HazardElevator.InterpolateTo
struct AHazardElevator_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardElevator.PostBeginPlay
struct AHazardElevator_PostBeginPlay_Params
{
};

// Function Hazard.HazardElevator.PointInBox
struct AHazardElevator_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.NormalizeActor
struct AHazardElevator_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardElevator.GetNextPointOnLine
struct AHazardElevator_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.RoundToScale
struct AHazardElevator_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.RoundVectorToScale
struct AHazardElevator_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.getIndexNormal
struct AHazardElevator_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.getMinLocationIndex
struct AHazardElevator_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.getLocationIndex
struct AHazardElevator_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.RotateAroundAxis
struct AHazardElevator_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.CeilValue
struct AHazardElevator_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.FloorValue
struct AHazardElevator_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardElevator.ManhattanVSize
struct AHazardElevator_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.SetBlendAmount
struct AHazardEndingLight_SetBlendAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardEndingLight.UpdateMovement
struct AHazardEndingLight_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardEndingLight.InterpolateTo
struct AHazardEndingLight_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardEndingLight.SetDuplicatesHidden
struct AHazardEndingLight_SetDuplicatesHidden_Params
{
	bool                                               bNewHidden;                                               // (Parm)
};

// Function Hazard.HazardEndingLight.Tick
struct AHazardEndingLight_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardEndingLight.SetupDuplicates
struct AHazardEndingLight_SetupDuplicates_Params
{
};

// Function Hazard.HazardEndingLight.PostBeginPlay
struct AHazardEndingLight_PostBeginPlay_Params
{
};

// Function Hazard.HazardEndingLight.UpdateDuplicates
struct AHazardEndingLight_UpdateDuplicates_Params
{
	struct FVector                                     NewTranslation;                                           // (Parm)
};

// Function Hazard.HazardEndingLight.PointInBox
struct AHazardEndingLight_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.NormalizeActor
struct AHazardEndingLight_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardEndingLight.GetNextPointOnLine
struct AHazardEndingLight_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.RoundToScale
struct AHazardEndingLight_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.RoundVectorToScale
struct AHazardEndingLight_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.getIndexNormal
struct AHazardEndingLight_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.getMinLocationIndex
struct AHazardEndingLight_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.getLocationIndex
struct AHazardEndingLight_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.RotateAroundAxis
struct AHazardEndingLight_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.CeilValue
struct AHazardEndingLight_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.FloorValue
struct AHazardEndingLight_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingLight.ManhattanVSize
struct AHazardEndingLight_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.EnableTick
struct AHazardEndingPlatform_EnableTick_Params
{
};

// Function Hazard.HazardEndingPlatform.SetBlendAmount
struct AHazardEndingPlatform_SetBlendAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardEndingPlatform.UpdateMovement
struct AHazardEndingPlatform_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardEndingPlatform.InterpolateTo
struct AHazardEndingPlatform_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardEndingPlatform.DoClose
struct AHazardEndingPlatform_DoClose_Params
{
};

// Function Hazard.HazardEndingPlatform.DoOpen
struct AHazardEndingPlatform_DoOpen_Params
{
};

// Function Hazard.HazardEndingPlatform.SetDuplicatesHidden
struct AHazardEndingPlatform_SetDuplicatesHidden_Params
{
	bool                                               bNewHidden;                                               // (Parm)
};

// Function Hazard.HazardEndingPlatform.Tick
struct AHazardEndingPlatform_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardEndingPlatform.SetupDuplicates
struct AHazardEndingPlatform_SetupDuplicates_Params
{
};

// Function Hazard.HazardEndingPlatform.PostBeginPlay
struct AHazardEndingPlatform_PostBeginPlay_Params
{
};

// Function Hazard.HazardEndingPlatform.UpdateDuplicates
struct AHazardEndingPlatform_UpdateDuplicates_Params
{
	struct FVector                                     NewTranslation;                                           // (OptionalParm, Parm)
};

// Function Hazard.HazardEndingPlatform.PointInBox
struct AHazardEndingPlatform_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.NormalizeActor
struct AHazardEndingPlatform_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardEndingPlatform.GetNextPointOnLine
struct AHazardEndingPlatform_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.RoundToScale
struct AHazardEndingPlatform_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.RoundVectorToScale
struct AHazardEndingPlatform_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.getIndexNormal
struct AHazardEndingPlatform_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.getMinLocationIndex
struct AHazardEndingPlatform_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.getLocationIndex
struct AHazardEndingPlatform_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.RotateAroundAxis
struct AHazardEndingPlatform_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.CeilValue
struct AHazardEndingPlatform_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.FloorValue
struct AHazardEndingPlatform_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardEndingPlatform.ManhattanVSize
struct AHazardEndingPlatform_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.SetBlendAmount
struct AHazardExitDoors_SetBlendAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardExitDoors.UpdateMovement
struct AHazardExitDoors_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardExitDoors.InterpolateTo
struct AHazardExitDoors_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardExitDoors.DoClose
struct AHazardExitDoors_DoClose_Params
{
};

// Function Hazard.HazardExitDoors.DoOpen
struct AHazardExitDoors_DoOpen_Params
{
};

// Function Hazard.HazardExitDoors.Tick
struct AHazardExitDoors_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardExitDoors.PlayClosedSound
struct AHazardExitDoors_PlayClosedSound_Params
{
};

// Function Hazard.HazardExitDoors.PlayOpenSound
struct AHazardExitDoors_PlayOpenSound_Params
{
};

// Function Hazard.HazardExitDoors.PostBeginPlay
struct AHazardExitDoors_PostBeginPlay_Params
{
};

// Function Hazard.HazardExitDoors.PointInBox
struct AHazardExitDoors_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.NormalizeActor
struct AHazardExitDoors_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardExitDoors.GetNextPointOnLine
struct AHazardExitDoors_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.RoundToScale
struct AHazardExitDoors_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.RoundVectorToScale
struct AHazardExitDoors_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.getIndexNormal
struct AHazardExitDoors_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.getMinLocationIndex
struct AHazardExitDoors_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.getLocationIndex
struct AHazardExitDoors_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.RotateAroundAxis
struct AHazardExitDoors_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.CeilValue
struct AHazardExitDoors_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.FloorValue
struct AHazardExitDoors_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardExitDoors.ManhattanVSize
struct AHazardExitDoors_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawnSoundGroup.GetBigLandSound
struct UHazardPawnSoundGroup_GetBigLandSound_Params
{
	TEnumAsByte<EMaterialType>                         MaterialType;                                             // (Parm)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawnSoundGroup.GetLandSound
struct UHazardPawnSoundGroup_GetLandSound_Params
{
	TEnumAsByte<EMaterialType>                         MaterialType;                                             // (Parm)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawnSoundGroup.GetJumpSound
struct UHazardPawnSoundGroup_GetJumpSound_Params
{
	TEnumAsByte<EMaterialType>                         MaterialType;                                             // (Parm)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawnSoundGroup.GetRunningFootstepSound
struct UHazardPawnSoundGroup_GetRunningFootstepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
	TEnumAsByte<EMaterialType>                         MaterialType;                                             // (Parm)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPawnSoundGroup.GetWalkingFootstepSound
struct UHazardPawnSoundGroup_GetWalkingFootstepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
	TEnumAsByte<EMaterialType>                         MaterialType;                                             // (Parm)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardFootstepVolume.ResetMoveThreshold
struct AHazardFootstepVolume_ResetMoveThreshold_Params
{
};

// Function Hazard.HazardFootstepVolume.TestPlayPushSound
struct AHazardFootstepVolume_TestPlayPushSound_Params
{
	class AHazardPawn*                                 MovingPawn;                                               // (Parm)
	float                                              NewDistance;                                              // (Parm)
};

// Function Hazard.HazardFootstepVolume.UnTouch
struct AHazardFootstepVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardFootstepVolume.Touch
struct AHazardFootstepVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardStepTile.Detach
struct AHazardStepTile_Detach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardStepTile.Attach
struct AHazardStepTile_Attach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardStepTile.GetClampedLocation
struct AHazardStepTile_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.Tick
struct AHazardStepTile_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardStepTile.OpenChildren
struct AHazardStepTile_OpenChildren_Params
{
};

// Function Hazard.HazardStepTile.HideChildren
struct AHazardStepTile_HideChildren_Params
{
};

// Function Hazard.HazardStepTile.FindNeighbours
struct AHazardStepTile_FindNeighbours_Params
{
};

// Function Hazard.HazardStepTile.FindClusteredNeighbours
struct AHazardStepTile_FindClusteredNeighbours_Params
{
};

// Function Hazard.HazardStepTile.CreateTiles
struct AHazardStepTile_CreateTiles_Params
{
};

// Function Hazard.HazardStepTile.FindTileComponentFromVector
struct AHazardStepTile_FindTileComponentFromVector_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	class UHazardStepTileComponent*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardStepTile.PostBeginPlay
struct AHazardStepTile_PostBeginPlay_Params
{
};

// Function Hazard.HazardStepTile.DoesContainPoint
struct AHazardStepTile_DoesContainPoint_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.AddComponent
struct AHazardStepTile_AddComponent_Params
{
	class UHazardStepTileComponent*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardStepTile.PointInBox
struct AHazardStepTile_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.NormalizeActor
struct AHazardStepTile_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardStepTile.GetNextPointOnLine
struct AHazardStepTile_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.RoundToScale
struct AHazardStepTile_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.RoundVectorToScale
struct AHazardStepTile_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.getIndexNormal
struct AHazardStepTile_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.getMinLocationIndex
struct AHazardStepTile_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.getLocationIndex
struct AHazardStepTile_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.RotateAroundAxis
struct AHazardStepTile_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.CeilValue
struct AHazardStepTile_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.FloorValue
struct AHazardStepTile_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTile.ManhattanVSize
struct AHazardStepTile_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPickupFactory.NotifyLocalPlayerDead
struct AHazardPickupFactory_NotifyLocalPlayerDead_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function Hazard.HazardPickupFactory.ShowHidden
struct AHazardPickupFactory_ShowHidden_Params
{
};

// Function Hazard.HazardPickupFactory.ShowActive
struct AHazardPickupFactory_ShowActive_Params
{
};

// Function Hazard.HazardPickupFactory.StartSleeping
struct AHazardPickupFactory_StartSleeping_Params
{
};

// Function Hazard.HazardPickupFactory.CheckForErrors
struct AHazardPickupFactory_CheckForErrors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPickupFactory.SetPickupMesh
struct AHazardPickupFactory_SetPickupMesh_Params
{
};

// Function Hazard.HazardPickupFactory.InitializePickup
struct AHazardPickupFactory_InitializePickup_Params
{
};

// Function Hazard.HazardPickupFactory.PickedUpBy
struct AHazardPickupFactory_PickedUpBy_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function Hazard.HazardPickupFactory.SetInitialState
struct AHazardPickupFactory_SetInitialState_Params
{
};

// Function Hazard.HazardPickupFactory.SetPickupHidden
struct AHazardPickupFactory_SetPickupHidden_Params
{
};

// Function Hazard.HazardPickupFactory.SetPickupVisible
struct AHazardPickupFactory_SetPickupVisible_Params
{
};

// Function Hazard.HazardPickupFactory.InitPickupMeshEffects
struct AHazardPickupFactory_InitPickupMeshEffects_Params
{
};

// Function Hazard.HazardPickupFactory.StartPulse
struct AHazardPickupFactory_StartPulse_Params
{
	struct FLinearColor                                TargetEmissive;                                           // (Parm)
};

// Function Hazard.HazardPickupFactory.RespawnEffect
struct AHazardPickupFactory_RespawnEffect_Params
{
};

// Function Hazard.HazardPickupFactory.ShutDown
struct AHazardPickupFactory_ShutDown_Params
{
};

// Function Hazard.HazardPickupFactory.DisablePickup
struct AHazardPickupFactory_DisablePickup_Params
{
};

// Function Hazard.HazardPickupFactory.SetResOut
struct AHazardPickupFactory_SetResOut_Params
{
};

// Function Hazard.HazardPickupFactory.PostBeginPlay
struct AHazardPickupFactory_PostBeginPlay_Params
{
};

// Function Hazard.HazardOptionsButton.UnsaveSetting
struct AHazardOptionsButton_UnsaveSetting_Params
{
	class AHazardOptionsButton*                        HOB;                                                      // (Parm)
};

// Function Hazard.HazardOptionsButton.SaveSettings
struct AHazardOptionsButton_SaveSettings_Params
{
};

// Function Hazard.HazardOptionsButton.Activated
struct AHazardOptionsButton_Activated_Params
{
	bool                                               bLoading;                                                 // (Parm)
};

// Function Hazard.HazardOptionsButton.TakeDamage
struct AHazardOptionsButton_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function Hazard.HazardOptionsButton.InitializeMaterial
struct AHazardOptionsButton_InitializeMaterial_Params
{
};

// Function Hazard.HazardOptionsButton.PostBeginPlay
struct AHazardOptionsButton_PostBeginPlay_Params
{
};

// Function Hazard.HazardSecretTile.PenetratingTrace
struct AHazardSecretTile_PenetratingTrace_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, OutParm)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm)
	struct FVector                                     EndTrace;                                                 // (Parm)
	struct FVector                                     StartTrace;                                               // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.PassThroughDamage
struct AHazardSecretTile_PassThroughDamage_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.UnlockSecret
struct AHazardSecretTile_UnlockSecret_Params
{
};

// Function Hazard.HazardSecretTile.FinishCrawl
struct AHazardSecretTile_FinishCrawl_Params
{
};

// Function Hazard.HazardSecretTile.SetFacingRotation
struct AHazardSecretTile_SetFacingRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.TestRotation
struct AHazardSecretTile_TestRotation_Params
{
	struct FRotator                                    TestRotation;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.StartCrawl
struct AHazardSecretTile_StartCrawl_Params
{
};

// Function Hazard.HazardSecretTile.Crawl
struct AHazardSecretTile_Crawl_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardSecretTile.Tick
struct AHazardSecretTile_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardSecretTile.EnableTick
struct AHazardSecretTile_EnableTick_Params
{
};

// Function Hazard.HazardSecretTile.PostBeginPlay
struct AHazardSecretTile_PostBeginPlay_Params
{
};

// Function Hazard.HazardSecretTile.PointInBox
struct AHazardSecretTile_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.NormalizeActor
struct AHazardSecretTile_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardSecretTile.GetNextPointOnLine
struct AHazardSecretTile_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.RoundToScale
struct AHazardSecretTile_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.RoundVectorToScale
struct AHazardSecretTile_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.getIndexNormal
struct AHazardSecretTile_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.getMinLocationIndex
struct AHazardSecretTile_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.getLocationIndex
struct AHazardSecretTile_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.RotateAroundAxis
struct AHazardSecretTile_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.CeilValue
struct AHazardSecretTile_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.FloorValue
struct AHazardSecretTile_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSecretTile.ManhattanVSize
struct AHazardSecretTile_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardTriggerMap.Touch
struct AHazardTriggerMap_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardTriggerMap.Activate
struct AHazardTriggerMap_Activate_Params
{
};

// Function Hazard.HazardTowerMesh.PostBeginPlay
struct AHazardTowerMesh_PostBeginPlay_Params
{
};

// Function Hazard.HazardIcon.TakeDamage
struct AHazardIcon_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function Hazard.HazardIcon.SetIcons
struct AHazardIcon_SetIcons_Params
{
	class UMaterialInterface*                          IconMaterial;                                             // (Parm)
	class UMaterialInterface*                          TextMaterial;                                             // (Parm)
	class UMaterialInterface*                          TitleMaterial;                                            // (Parm)
};

// Function Hazard.HazardIcon.UpdateIcons
struct AHazardIcon_UpdateIcons_Params
{
};

// Function Hazard.HazardIcon.Unlock
struct AHazardIcon_Unlock_Params
{
};

// Function Hazard.HazardIcon.Hint
struct AHazardIcon_Hint_Params
{
};

// Function Hazard.HazardIcon.Find
struct AHazardIcon_Find_Params
{
};

// Function Hazard.HazardIcon.Hide
struct AHazardIcon_Hide_Params
{
};

// Function Hazard.HazardIcon.PostBeginPlay
struct AHazardIcon_PostBeginPlay_Params
{
};

// Function Hazard.HazardIconPreview.Tick
struct AHazardIconPreview_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardIconPreview.ForceUpdate
struct AHazardIconPreview_ForceUpdate_Params
{
	class AHazardIcon*                                 NewIcon;                                                  // (Parm)
};

// Function Hazard.HazardIconPreview.HidePreview
struct AHazardIconPreview_HidePreview_Params
{
};

// Function Hazard.HazardIconPreview.ShowPreview
struct AHazardIconPreview_ShowPreview_Params
{
	class AHazardIcon*                                 NewIcon;                                                  // (Parm)
};

// Function Hazard.HazardIconPreview.Highlight
struct AHazardIconPreview_Highlight_Params
{
	class AHazardIcon*                                 NewIcon;                                                  // (Parm)
};

// Function Hazard.HazardIconPreview.UnHighlight
struct AHazardIconPreview_UnHighlight_Params
{
};

// Function Hazard.HazardIconPreview.PostBeginPlay
struct AHazardIconPreview_PostBeginPlay_Params
{
};

// Function Hazard.HazardMapPreview.Tick
struct AHazardMapPreview_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardMapPreview.FadeTo
struct AHazardMapPreview_FadeTo_Params
{
	float                                              Target;                                                   // (Parm)
};

// Function Hazard.HazardMapPreview.Interact
struct AHazardMapPreview_Interact_Params
{
};

// Function Hazard.HazardMapPreview.TakeDamage
struct AHazardMapPreview_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function Hazard.HazardMapPreview.HidePreview
struct AHazardMapPreview_HidePreview_Params
{
};

// Function Hazard.HazardMapPreview.CalculateSafeTarget
struct AHazardMapPreview_CalculateSafeTarget_Params
{
	struct FVector                                     TestLocation;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardMapPreview.ShowPreview
struct AHazardMapPreview_ShowPreview_Params
{
	class AHazardMapNode*                              NewNode;                                                  // (Parm)
};

// Function Hazard.HazardMapPreview.PostBeginPlay
struct AHazardMapPreview_PostBeginPlay_Params
{
};

// Function Hazard.HazardSign.UnTouch
struct AHazardSign_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardSign.Touch
struct AHazardSign_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardSign.Tick
struct AHazardSign_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardSign.PenetratingTrace
struct AHazardSign_PenetratingTrace_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, OutParm)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm)
	struct FVector                                     EndTrace;                                                 // (Parm)
	struct FVector                                     StartTrace;                                               // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSign.PassThroughDamage
struct AHazardSign_PassThroughDamage_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSign.CheckDistance
struct AHazardSign_CheckDistance_Params
{
};

// Function Hazard.HazardSign.FadeTo
struct AHazardSign_FadeTo_Params
{
	float                                              Target;                                                   // (Parm)
};

// Function Hazard.HazardSign.Interact
struct AHazardSign_Interact_Params
{
	bool                                               bPlaySound;                                               // (OptionalParm, Parm)
};

// Function Hazard.HazardSign.UpdateSisters
struct AHazardSign_UpdateSisters_Params
{
};

// Function Hazard.HazardSign.PostBeginPlay
struct AHazardSign_PostBeginPlay_Params
{
};

// Function Hazard.HazardHUD.DrawHUD
struct AHazardHUD_DrawHUD_Params
{
};

// Function Hazard.HazardHUD.DisplayConsoleMessages
struct AHazardHUD_DisplayConsoleMessages_Params
{
};

// Function Hazard.HazardGlassPanelNoMiddle.PostBeginPlay
struct AHazardGlassPanelNoMiddle_PostBeginPlay_Params
{
};

// Function Hazard.HazardGuide.Tick
struct AHazardGuide_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardGuide.CheckDistance
struct AHazardGuide_CheckDistance_Params
{
};

// Function Hazard.HazardGuide.SetActive
struct AHazardGuide_SetActive_Params
{
	bool                                               bNewValue;                                                // (Parm)
};

// Function Hazard.HazardGuide.FadeTo
struct AHazardGuide_FadeTo_Params
{
	float                                              Target;                                                   // (Parm)
};

// Function Hazard.HazardGuide.PostBeginPlay
struct AHazardGuide_PostBeginPlay_Params
{
};

// Function Hazard.HazardJumpDownTile.UpdateMovement
struct AHazardJumpDownTile_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardJumpDownTile.AddVelocity
struct AHazardJumpDownTile_AddVelocity_Params
{
	struct FVector                                     Impulse;                                                  // (Parm)
};

// Function Hazard.HazardJumpDownTile.Tick
struct AHazardJumpDownTile_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardJumpDownTile.UpdateSounds
struct AHazardJumpDownTile_UpdateSounds_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardJumpDownTile.PostBeginPlay
struct AHazardJumpDownTile_PostBeginPlay_Params
{
};

// Function Hazard.HazardJumpDownTile.PointInBox
struct AHazardJumpDownTile_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.NormalizeActor
struct AHazardJumpDownTile_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardJumpDownTile.GetNextPointOnLine
struct AHazardJumpDownTile_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.RoundToScale
struct AHazardJumpDownTile_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.RoundVectorToScale
struct AHazardJumpDownTile_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.getIndexNormal
struct AHazardJumpDownTile_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.getMinLocationIndex
struct AHazardJumpDownTile_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.getLocationIndex
struct AHazardJumpDownTile_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.RotateAroundAxis
struct AHazardJumpDownTile_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.CeilValue
struct AHazardJumpDownTile_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.FloorValue
struct AHazardJumpDownTile_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardJumpDownTile.ManhattanVSize
struct AHazardJumpDownTile_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardMapNode.UpdateMapNode
struct AHazardMapNode_UpdateMapNode_Params
{
};

// Function Hazard.HazardMapNode.DelayedJump
struct AHazardMapNode_DelayedJump_Params
{
};

// Function Hazard.HazardMapNode.TakeDamage
struct AHazardMapNode_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function Hazard.HazardMapNode.SetHighlighted
struct AHazardMapNode_SetHighlighted_Params
{
	bool                                               bNewHighlighted;                                          // (Parm)
};

// Function Hazard.HazardMapNode.TestShrink
struct AHazardMapNode_TestShrink_Params
{
};

// Function Hazard.HazardMapNode.ShrinkNode
struct AHazardMapNode_ShrinkNode_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardMapNode.InterpolateTo
struct AHazardMapNode_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardMapNode.CheckShrink
struct AHazardMapNode_CheckShrink_Params
{
};

// Function Hazard.HazardMapNode.Tick
struct AHazardMapNode_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardMapNode.PostBeginPlay
struct AHazardMapNode_PostBeginPlay_Params
{
};

// Function Hazard.HazardMapProxy.SetHighlighted
struct AHazardMapProxy_SetHighlighted_Params
{
	bool                                               bNewHighlighted;                                          // (Parm)
};

// Function Hazard.HazardMapProxy.Tick
struct AHazardMapProxy_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardMapProxy.PostBeginPlay
struct AHazardMapProxy_PostBeginPlay_Params
{
};

// Function Hazard.HazardNoAmmoVolumeMesh.Tick
struct AHazardNoAmmoVolumeMesh_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardNoAmmoVolumeMesh.UnTouch
struct AHazardNoAmmoVolumeMesh_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardNoAmmoVolumeMesh.Touch
struct AHazardNoAmmoVolumeMesh_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardNoAmmoVolumeMesh.GetClampedLocation
struct AHazardNoAmmoVolumeMesh_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardNoAmmoVolumeMesh.PostBeginPlay
struct AHazardNoAmmoVolumeMesh_PostBeginPlay_Params
{
};

// Function Hazard.HazardSnakeFloorComponent.FinishedInterpolation
struct UHazardSnakeFloorComponent_FinishedInterpolation_Params
{
};

// Function Hazard.HazardSnakeFloorComponent.SetBlendAmount
struct UHazardSnakeFloorComponent_SetBlendAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardSnakeFloorComponent.SetGlobalCollision
struct UHazardSnakeFloorComponent_SetGlobalCollision_Params
{
	bool                                               bEnabled;                                                 // (Parm)
};

// Function Hazard.HazardSnakeFloorComponent.UpdateGlobalCollision
struct UHazardSnakeFloorComponent_UpdateGlobalCollision_Params
{
};

// Function Hazard.HazardSnakeFloorComponent.UpdateMovement
struct UHazardSnakeFloorComponent_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardSnakeFloorComponent.InterpolateTo
struct UHazardSnakeFloorComponent_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardSnakeFloorComponent.DoClose
struct UHazardSnakeFloorComponent_DoClose_Params
{
};

// Function Hazard.HazardSnakeFloorComponent.DoOpen
struct UHazardSnakeFloorComponent_DoOpen_Params
{
};

// Function Hazard.HazardSnakeFloorComponent.FinishedOpen
struct UHazardSnakeFloorComponent_FinishedOpen_Params
{
};

// Function Hazard.HazardSnakeFloorComponent.FinishedClose
struct UHazardSnakeFloorComponent_FinishedClose_Params
{
};

// Function Hazard.HazardSnakeFloorComponent.Close
struct UHazardSnakeFloorComponent_Close_Params
{
};

// Function Hazard.HazardSnakeFloorComponent.Open
struct UHazardSnakeFloorComponent_Open_Params
{
};

// Function Hazard.HazardSnakeFloorComponent.Tick
struct UHazardSnakeFloorComponent_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardSnakeFloorComponent.GetClampedLocation
struct UHazardSnakeFloorComponent_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.DoesContainPoint
struct UHazardSnakeFloorComponent_DoesContainPoint_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.InitializeTile
struct UHazardSnakeFloorComponent_InitializeTile_Params
{
	class AHazardSnakeFloor*                           NewOwner;                                                 // (Parm)
};

// Function Hazard.HazardSnakeFloorComponent.PointInBox
struct UHazardSnakeFloorComponent_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.NormalizeActor
struct UHazardSnakeFloorComponent_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardSnakeFloorComponent.GetNextPointOnLine
struct UHazardSnakeFloorComponent_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.RoundToScale
struct UHazardSnakeFloorComponent_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.RoundVectorToScale
struct UHazardSnakeFloorComponent_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.getIndexNormal
struct UHazardSnakeFloorComponent_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.getMinLocationIndex
struct UHazardSnakeFloorComponent_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.getLocationIndex
struct UHazardSnakeFloorComponent_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.RotateAroundAxis
struct UHazardSnakeFloorComponent_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.CeilValue
struct UHazardSnakeFloorComponent_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.FloorValue
struct UHazardSnakeFloorComponent_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloorComponent.ManhattanVSize
struct UHazardSnakeFloorComponent_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.Detach
struct AHazardSnakeFloor_Detach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardSnakeFloor.Attach
struct AHazardSnakeFloor_Attach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardSnakeFloor.GetClampedLocation
struct AHazardSnakeFloor_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.Tick
struct AHazardSnakeFloor_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardSnakeFloor.CreateTiles
struct AHazardSnakeFloor_CreateTiles_Params
{
};

// Function Hazard.HazardSnakeFloor.PostBeginPlay
struct AHazardSnakeFloor_PostBeginPlay_Params
{
};

// Function Hazard.HazardSnakeFloor.DoesContainPoint
struct AHazardSnakeFloor_DoesContainPoint_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.AddComponent
struct AHazardSnakeFloor_AddComponent_Params
{
	class UHazardSnakeFloorComponent*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function Hazard.HazardSnakeFloor.Reset
struct AHazardSnakeFloor_Reset_Params
{
};

// Function Hazard.HazardSnakeFloor.PointInBox
struct AHazardSnakeFloor_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.NormalizeActor
struct AHazardSnakeFloor_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardSnakeFloor.GetNextPointOnLine
struct AHazardSnakeFloor_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.RoundToScale
struct AHazardSnakeFloor_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.RoundVectorToScale
struct AHazardSnakeFloor_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.getIndexNormal
struct AHazardSnakeFloor_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.getMinLocationIndex
struct AHazardSnakeFloor_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.getLocationIndex
struct AHazardSnakeFloor_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.RotateAroundAxis
struct AHazardSnakeFloor_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.CeilValue
struct AHazardSnakeFloor_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.FloorValue
struct AHazardSnakeFloor_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSnakeFloor.ManhattanVSize
struct AHazardSnakeFloor_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.FinishedInterpolation
struct UHazardStepTileComponent_FinishedInterpolation_Params
{
};

// Function Hazard.HazardStepTileComponent.SetBlendAmount
struct UHazardStepTileComponent_SetBlendAmount_Params
{
	float                                              BlendValue;                                               // (Parm)
};

// Function Hazard.HazardStepTileComponent.SetGlobalCollision
struct UHazardStepTileComponent_SetGlobalCollision_Params
{
	bool                                               bEnabled;                                                 // (Parm)
};

// Function Hazard.HazardStepTileComponent.UpdateGlobalCollision
struct UHazardStepTileComponent_UpdateGlobalCollision_Params
{
};

// Function Hazard.HazardStepTileComponent.UpdateMovement
struct UHazardStepTileComponent_UpdateMovement_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardStepTileComponent.InterpolateTo
struct UHazardStepTileComponent_InterpolateTo_Params
{
	float                                              interpValue;                                              // (Parm)
};

// Function Hazard.HazardStepTileComponent.DoClose
struct UHazardStepTileComponent_DoClose_Params
{
};

// Function Hazard.HazardStepTileComponent.DoOpen
struct UHazardStepTileComponent_DoOpen_Params
{
};

// Function Hazard.HazardStepTileComponent.FinishedOpen
struct UHazardStepTileComponent_FinishedOpen_Params
{
};

// Function Hazard.HazardStepTileComponent.FinishedClose
struct UHazardStepTileComponent_FinishedClose_Params
{
};

// Function Hazard.HazardStepTileComponent.Close
struct UHazardStepTileComponent_Close_Params
{
};

// Function Hazard.HazardStepTileComponent.Open
struct UHazardStepTileComponent_Open_Params
{
};

// Function Hazard.HazardStepTileComponent.Tick
struct UHazardStepTileComponent_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardStepTileComponent.UpdateWhiteSounds
struct UHazardStepTileComponent_UpdateWhiteSounds_Params
{
};

// Function Hazard.HazardStepTileComponent.CreateAndSetNewMaterialInstanceConstant
struct UHazardStepTileComponent_CreateAndSetNewMaterialInstanceConstant_Params
{
	int                                                ElementIndex;                                             // (Parm)
	class UMaterialInterface*                          NewMaterial;                                              // (Parm)
	class UMaterialInstanceConstant*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.GetClampedLocation
struct UHazardStepTileComponent_GetClampedLocation_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.RecurseStep
struct UHazardStepTileComponent_RecurseStep_Params
{
	bool                                               bFixedRadius;                                             // (Parm)
};

// Function Hazard.HazardStepTileComponent.DoesContainPoint
struct UHazardStepTileComponent_DoesContainPoint_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.InitializeTile
struct UHazardStepTileComponent_InitializeTile_Params
{
	class AHazardStepTile*                             NewOwner;                                                 // (Parm)
};

// Function Hazard.HazardStepTileComponent.FindNeighbours
struct UHazardStepTileComponent_FindNeighbours_Params
{
};

// Function Hazard.HazardStepTileComponent.PointInBox
struct UHazardStepTileComponent_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.NormalizeActor
struct UHazardStepTileComponent_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardStepTileComponent.GetNextPointOnLine
struct UHazardStepTileComponent_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.RoundToScale
struct UHazardStepTileComponent_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.RoundVectorToScale
struct UHazardStepTileComponent_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.getIndexNormal
struct UHazardStepTileComponent_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.getMinLocationIndex
struct UHazardStepTileComponent_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.getLocationIndex
struct UHazardStepTileComponent_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.RotateAroundAxis
struct UHazardStepTileComponent_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.CeilValue
struct UHazardStepTileComponent_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.FloorValue
struct UHazardStepTileComponent_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardStepTileComponent.ManhattanVSize
struct UHazardStepTileComponent_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.Tick
struct AHazardPortal_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardPortal.ShouldUpdate
struct AHazardPortal_ShouldUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.OffScreen
struct AHazardPortal_OffScreen_Params
{
	class AHazardPlayerController*                     Player;                                                   // (Parm)
};

// Function Hazard.HazardPortal.OnScreen
struct AHazardPortal_OnScreen_Params
{
	class AHazardPlayerController*                     Player;                                                   // (Parm)
};

// Function Hazard.HazardPortal.ViewEncapsulated
struct AHazardPortal_ViewEncapsulated_Params
{
	class AHazardPlayerController*                     Player;                                                   // (Parm)
};

// Function Hazard.HazardPortal.PostBeginPlay
struct AHazardPortal_PostBeginPlay_Params
{
};

// Function Hazard.HazardPortal.PointInBox
struct AHazardPortal_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.NormalizeActor
struct AHazardPortal_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardPortal.GetNextPointOnLine
struct AHazardPortal_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.RoundToScale
struct AHazardPortal_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.RoundVectorToScale
struct AHazardPortal_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.getIndexNormal
struct AHazardPortal_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.getMinLocationIndex
struct AHazardPortal_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.getLocationIndex
struct AHazardPortal_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.RotateAroundAxis
struct AHazardPortal_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.CeilValue
struct AHazardPortal_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.FloorValue
struct AHazardPortal_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardPortal.ManhattanVSize
struct AHazardPortal_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardProj_RiotBall.Initialize
struct AHazardProj_RiotBall_Initialize_Params
{
	class AHazardRiotMaster*                           NewParent;                                                // (Parm)
};

// Function Hazard.HazardRiotMaster.StartRiot
struct AHazardRiotMaster_StartRiot_Params
{
};

// Function Hazard.HazardRiotMaster.UpdateSlaves
struct AHazardRiotMaster_UpdateSlaves_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardRiotMaster.Explode
struct AHazardRiotMaster_Explode_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardRiotMaster.TickSlaves
struct AHazardRiotMaster_TickSlaves_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardRiotMaster.MoveRiot
struct AHazardRiotMaster_MoveRiot_Params
{
	int                                                Index;                                                    // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardRiotMaster.SetVolumeLevels
struct AHazardRiotMaster_SetVolumeLevels_Params
{
	float                                              BlendPct;                                                 // (Parm)
};

// Function Hazard.HazardRiotMaster.UpdateRiotSounds
struct AHazardRiotMaster_UpdateRiotSounds_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardRiotMaster.UpdateRiotColours
struct AHazardRiotMaster_UpdateRiotColours_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardRiotMaster.Tick
struct AHazardRiotMaster_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardRiotMaster.DoesContainPoint
struct AHazardRiotMaster_DoesContainPoint_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.UnTouch
struct AHazardRiotMaster_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function Hazard.HazardRiotMaster.Touch
struct AHazardRiotMaster_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function Hazard.HazardRiotMaster.PostBeginPlay
struct AHazardRiotMaster_PostBeginPlay_Params
{
};

// Function Hazard.HazardRiotMaster.PointInBox
struct AHazardRiotMaster_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     TestBoxLocation;                                          // (Parm)
	struct FVector                                     TestBoxExtent;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.NormalizeActor
struct AHazardRiotMaster_NormalizeActor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function Hazard.HazardRiotMaster.GetNextPointOnLine
struct AHazardRiotMaster_GetNextPointOnLine_Params
{
	struct FVector                                     EndPoint;                                                 // (Parm)
	struct FVector                                     StartPoint;                                               // (Parm)
	float                                              inTileSize;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.RoundToScale
struct AHazardRiotMaster_RoundToScale_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.RoundVectorToScale
struct AHazardRiotMaster_RoundVectorToScale_Params
{
	struct FVector                                     Value;                                                    // (Parm)
	int                                                roundScale;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.getIndexNormal
struct AHazardRiotMaster_getIndexNormal_Params
{
	int                                                NeighbourIndex;                                           // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.getMinLocationIndex
struct AHazardRiotMaster_getMinLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.getLocationIndex
struct AHazardRiotMaster_getLocationIndex_Params
{
	struct FVector                                     SearchLocation;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.RotateAroundAxis
struct AHazardRiotMaster_RotateAroundAxis_Params
{
	int                                                InitialDirection;                                         // (Parm)
	int                                                PlaneAxis;                                                // (Parm)
	int                                                inNumRotations;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.CeilValue
struct AHazardRiotMaster_CeilValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.FloorValue
struct AHazardRiotMaster_FloorValue_Params
{
	float                                              Value;                                                    // (Parm)
	int                                                significance;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardRiotMaster.ManhattanVSize
struct AHazardRiotMaster_ManhattanVSize_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     EndLocation;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardScreenshotPanel.PostBeginPlay
struct AHazardScreenshotPanel_PostBeginPlay_Params
{
};

// Function Hazard.HazardSeqAct_ActivateBlackHole.Activate
struct UHazardSeqAct_ActivateBlackHole_Activate_Params
{
	bool                                               bNewActive;                                               // (Parm)
};

// Function Hazard.HazardSeqAct_ActivateBlackHole.SpinPlatform
struct UHazardSeqAct_ActivateBlackHole_SpinPlatform_Params
{
	bool                                               bNewActive;                                               // (Parm)
};

// Function Hazard.HazardSeqAct_ActivateBlackHole.ShowRing
struct UHazardSeqAct_ActivateBlackHole_ShowRing_Params
{
};

// Function Hazard.HazardSeqAct_ActivateBlackHole.Activated
struct UHazardSeqAct_ActivateBlackHole_Activated_Params
{
};

// Function Hazard.HazardSeqAct_CheckLasers.CheckTriggered
struct UHazardSeqAct_CheckLasers_CheckTriggered_Params
{
};

// Function Hazard.HazardSeqAct_CheckLasers.Update
struct UHazardSeqAct_CheckLasers_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSeqAct_CheckLasers.Activated
struct UHazardSeqAct_CheckLasers_Activated_Params
{
};

// Function Hazard.HazardSeqAct_ClearMap.Activated
struct UHazardSeqAct_ClearMap_Activated_Params
{
};

// Function Hazard.HazardSeqAct_DeleteSaveGame.Activated
struct UHazardSeqAct_DeleteSaveGame_Activated_Params
{
};

// Function Hazard.HazardSeqAct_DisableHolochamber.Activated
struct UHazardSeqAct_DisableHolochamber_Activated_Params
{
};

// Function Hazard.HazardSeqAct_HoloTimer.UpdateTimers
struct UHazardSeqAct_HoloTimer_UpdateTimers_Params
{
};

// Function Hazard.HazardSeqAct_HoloTimer.Update
struct UHazardSeqAct_HoloTimer_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSeqAct_HoloTimer.Activated
struct UHazardSeqAct_HoloTimer_Activated_Params
{
};

// Function Hazard.HazardSeqAct_HoloTransition.Activated
struct UHazardSeqAct_HoloTransition_Activated_Params
{
};

// Function Hazard.HazardSeqAct_ManualReset.ResetActors
struct UHazardSeqAct_ManualReset_ResetActors_Params
{
};

// Function Hazard.HazardSeqAct_ManualReset.Activated
struct UHazardSeqAct_ManualReset_Activated_Params
{
};

// Function Hazard.HazardSeqAct_NoOp.Activated
struct UHazardSeqAct_NoOp_Activated_Params
{
};

// Function Hazard.HazardSeqAct_NoRepeatRandom.Activated
struct UHazardSeqAct_NoRepeatRandom_Activated_Params
{
};

// Function Hazard.HazardSeqAct_OpenExitDoors.Activated
struct UHazardSeqAct_OpenExitDoors_Activated_Params
{
};

// Function Hazard.HazardSeqAct_ResetGunTiles.Activated
struct UHazardSeqAct_ResetGunTiles_Activated_Params
{
};

// Function Hazard.HazardSeqAct_SaveObject.Activated
struct UHazardSeqAct_SaveObject_Activated_Params
{
};

// Function Hazard.HazardSeqAct_ToggleBlackTile.UpdateGuides
struct UHazardSeqAct_ToggleBlackTile_UpdateGuides_Params
{
	bool                                               bNewActive;                                               // (Parm)
};

// Function Hazard.HazardSeqAct_ToggleBlackTile.Activated
struct UHazardSeqAct_ToggleBlackTile_Activated_Params
{
};

// Function Hazard.HazardSeqAct_ToggleDoor.Activated
struct UHazardSeqAct_ToggleDoor_Activated_Params
{
};

// Function Hazard.HazardSeqAct_ToggleElevator.Activated
struct UHazardSeqAct_ToggleElevator_Activated_Params
{
};

// Function Hazard.HazardSeqAct_ToggleGuide.UpdateGuides
struct UHazardSeqAct_ToggleGuide_UpdateGuides_Params
{
	bool                                               bNewActive;                                               // (Parm)
};

// Function Hazard.HazardSeqAct_ToggleGuide.Activated
struct UHazardSeqAct_ToggleGuide_Activated_Params
{
};

// Function Hazard.HazardSeqAct_UnlockTower.Activated
struct UHazardSeqAct_UnlockTower_Activated_Params
{
};

// Function Hazard.HazardWeap_TileGunRotator.UpdateAmmoMeshes
struct AHazardWeap_TileGunRotator_UpdateAmmoMeshes_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardWeap_TileGunRotator.Tick
struct AHazardWeap_TileGunRotator_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardWeap_TileGunAmmo.UpdateTileColour
struct UHazardWeap_TileGunAmmo_UpdateTileColour_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Hazard.HazardWeap_TileGunAmmo.InitializeTileMaterial
struct UHazardWeap_TileGunAmmo_InitializeTileMaterial_Params
{
	class UMaterialInterface*                          InputMaterial;                                            // (Parm)
	bool                                               bCreateNewMaterial;                                       // (Parm)
};

// Function Hazard.HazardSeqAct_PlaySound.Update
struct UHazardSeqAct_PlaySound_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Hazard.HazardSeqAct_PlaySound.Activated
struct UHazardSeqAct_PlaySound_Activated_Params
{
};

// Function Hazard.HazardSeqAct_PlaySound.HandleInputs
struct UHazardSeqAct_PlaySound_HandleInputs_Params
{
};

// Function Hazard.HazardSeqAct_ResetAmbientSound.Activated
struct UHazardSeqAct_ResetAmbientSound_Activated_Params
{
};

// Function Hazard.HazardSeqAct_ToggleAmbientTeleport.Activated
struct UHazardSeqAct_ToggleAmbientTeleport_Activated_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
