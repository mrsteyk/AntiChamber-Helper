// Antichamber (1.0.7977.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hazard.HazardGlassPanel.PostBeginPlay
// ()

void AHazardGlassPanel::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGlassPanel.PostBeginPlay");

	AHazardGlassPanel_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardAmbientSoundMovable.RestoreDuplicatedSounds
// (Defined, Iterator, PreOperator)

void AHazardAmbientSoundMovable::RestoreDuplicatedSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardAmbientSoundMovable.RestoreDuplicatedSounds");

	AHazardAmbientSoundMovable_RestoreDuplicatedSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardAmbientSoundMovable.KickDuplicatedSounds
// (Defined, Iterator, PreOperator)

void AHazardAmbientSoundMovable::KickDuplicatedSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardAmbientSoundMovable.KickDuplicatedSounds");

	AHazardAmbientSoundMovable_KickDuplicatedSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardAmbientSoundMovable.Tick
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardAmbientSoundMovable::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardAmbientSoundMovable.Tick");

	AHazardAmbientSoundMovable_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardAmbientSoundMovable.UpdateAmbientSound
// (Defined, Iterator, PreOperator)

void AHazardAmbientSoundMovable::UpdateAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardAmbientSoundMovable.UpdateAmbientSound");

	AHazardAmbientSoundMovable_UpdateAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardAmbientSoundMovable.ResetHASM
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bResetLocation                 (Parm)
// bool                           bResetMaxDistance              (Parm)
// bool                           bResetCanTeleport              (Parm)

void AHazardAmbientSoundMovable::ResetHASM(bool bResetLocation, bool bResetMaxDistance, bool bResetCanTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardAmbientSoundMovable.ResetHASM");

	AHazardAmbientSoundMovable_ResetHASM_Params params;
	params.bResetLocation = bResetLocation;
	params.bResetMaxDistance = bResetMaxDistance;
	params.bResetCanTeleport = bResetCanTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardAmbientSoundMovable.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardAmbientSoundMovable::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardAmbientSoundMovable.PostBeginPlay");

	AHazardAmbientSoundMovable_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.UpdateNumIconsFound
// (Iterator)

void AHazardGame::UpdateNumIconsFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.UpdateNumIconsFound");

	AHazardGame_UpdateNumIconsFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.HitNoShootField
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardGame::HitNoShootField(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.HitNoShootField");

	AHazardGame_HitNoShootField_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.GetAxisAsVector
// (Iterator)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardGame::GetAxisAsVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.GetAxisAsVector");

	AHazardGame_GetAxisAsVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.SetCurrentAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 StartLocation                  (Parm)

void AHazardGame::SetCurrentAxis(const struct FVector& HitLocation, const struct FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SetCurrentAxis");

	AHazardGame_SetCurrentAxis_Params params;
	params.HitLocation = HitLocation;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.AddDefaultInventory
// (Defined, Iterator, PreOperator)
// Parameters:
// class APawn*                   P                              (Parm)

void AHazardGame::AddDefaultInventory(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.AddDefaultInventory");

	AHazardGame_AddDefaultInventory_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.SaveGame
// (Defined, Iterator, PreOperator)

void AHazardGame::SaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SaveGame");

	AHazardGame_SaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.DeleteSaveGame
// (Defined, Iterator, PreOperator)

void AHazardGame::DeleteSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.DeleteSaveGame");

	AHazardGame_DeleteSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.HideSignHints
// (Defined, Iterator, PreOperator)

void AHazardGame::HideSignHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.HideSignHints");

	AHazardGame_HideSignHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.UnsaveObject
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardGame::UnsaveObject(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.UnsaveObject");

	AHazardGame_UnsaveObject_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.SaveObject
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardGame::SaveObject(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SaveObject");

	AHazardGame_SaveObject_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.Tick
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardGame::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.Tick");

	AHazardGame_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.UpdateSounds
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardGame::UpdateSounds(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.UpdateSounds");

	AHazardGame_UpdateSounds_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.SetWhiteSoundParameters
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 UpdateLocation                 (Parm)

void AHazardGame::SetWhiteSoundParameters(const struct FVector& UpdateLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SetWhiteSoundParameters");

	AHazardGame_SetWhiteSoundParameters_Params params;
	params.UpdateLocation = UpdateLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.UpdateDecals
// (Iterator)

void AHazardGame::UpdateDecals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.UpdateDecals");

	AHazardGame_UpdateDecals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.AddDecal
// (Iterator)
// Parameters:
// class UDecalComponent*         NewDecal                       (Parm, EditInline)

void AHazardGame::AddDecal(class UDecalComponent* NewDecal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.AddDecal");

	AHazardGame_AddDecal_Params params;
	params.NewDecal = NewDecal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.SetupTile
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardTile*             SetupTile                      (Parm, OutParm)
// class UMaterialInterface*      SetupMaterial                  (Parm)
// bool                           bNewDestroyOnOpen              (Parm)

void AHazardGame::SetupTile(class UMaterialInterface* SetupMaterial, bool bNewDestroyOnOpen, class AHazardTile** SetupTile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SetupTile");

	AHazardGame_SetupTile_Params params;
	params.SetupMaterial = SetupMaterial;
	params.bNewDestroyOnOpen = bNewDestroyOnOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SetupTile != nullptr)
		*SetupTile = params.SetupTile;
}


// Function Hazard.HazardGame.SetupDefaultTiles
// (Defined, Iterator, PreOperator)

void AHazardGame::SetupDefaultTiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SetupDefaultTiles");

	AHazardGame_SetupDefaultTiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.LoadSavedGame
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AHazardPawn*             Pawn                           (Parm)

void AHazardGame::LoadSavedGame(class AHazardPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.LoadSavedGame");

	AHazardGame_LoadSavedGame_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.InitializeGame
// (Defined, Iterator, PreOperator)

void AHazardGame::InitializeGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.InitializeGame");

	AHazardGame_InitializeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.ShouldUpdate
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  CheckActor                     (Parm)
// float                          UpdateDistance                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardGame::ShouldUpdate(class AActor* CheckActor, float UpdateDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.ShouldUpdate");

	AHazardGame_ShouldUpdate_Params params;
	params.CheckActor = CheckActor;
	params.UpdateDistance = UpdateDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.ResetGunTiles
// (Iterator)

void AHazardGame::ResetGunTiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.ResetGunTiles");

	AHazardGame_ResetGunTiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.ResetGame
// (Defined, Iterator, PreOperator)

void AHazardGame::ResetGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.ResetGame");

	AHazardGame_ResetGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.KillMapEmitters
// (Defined, Iterator, PreOperator)

void AHazardGame::KillMapEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.KillMapEmitters");

	AHazardGame_KillMapEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.SpawnMapEmitters
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm)

void AHazardGame::SpawnMapEmitters(const struct FVector& SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SpawnMapEmitters");

	AHazardGame_SpawnMapEmitters_Params params;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.DeactivateMap
// (Defined, Iterator, PreOperator)

void AHazardGame::DeactivateMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.DeactivateMap");

	AHazardGame_DeactivateMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.DeactivateMapNode
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardTriggerMap*       TempNode                       (Parm)

void AHazardGame::DeactivateMapNode(class AHazardTriggerMap* TempNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.DeactivateMapNode");

	AHazardGame_DeactivateMapNode_Params params;
	params.TempNode = TempNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.SaveMap
// (Iterator)

void AHazardGame::SaveMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SaveMap");

	AHazardGame_SaveMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.ActivateMap
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardTriggerMap*       MapTrigger                     (Parm)

void AHazardGame::ActivateMap(class AHazardTriggerMap* MapTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.ActivateMap");

	AHazardGame_ActivateMap_Params params;
	params.MapTrigger = MapTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.UnlockTower
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            TowerLevel                     (Parm)

void AHazardGame::UnlockTower(int TowerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.UnlockTower");

	AHazardGame_UnlockTower_Params params;
	params.TowerLevel = TowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.RegisterTowerPiece
// (Iterator)
// Parameters:
// class AHazardTowerMesh*        CurrentMesh                    (Parm)

void AHazardGame::RegisterTowerPiece(class AHazardTowerMesh* CurrentMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.RegisterTowerPiece");

	AHazardGame_RegisterTowerPiece_Params params;
	params.CurrentMesh = CurrentMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.FindTileComponent
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// class UHazardTileComponent*    CallingComponent               (OptionalParm, Parm, EditInline)
// class UHazardTileComponent*    ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardTileComponent* AHazardGame::FindTileComponent(const struct FVector& SearchLocation, class UHazardTileComponent* CallingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.FindTileComponent");

	AHazardGame_FindTileComponent_Params params;
	params.SearchLocation = SearchLocation;
	params.CallingComponent = CallingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.TestKillBlocking
// (Defined, Iterator, PreOperator)
// Parameters:
// class UHazardTileComponent*    TestComponent                  (Parm, EditInline)
// struct FVector                 TestLocation                   (Parm)

void AHazardGame::TestKillBlocking(class UHazardTileComponent* TestComponent, const struct FVector& TestLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.TestKillBlocking");

	AHazardGame_TestKillBlocking_Params params;
	params.TestComponent = TestComponent;
	params.TestLocation = TestLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.SpawnLoop
// (Final, Defined, Iterator, Latent, Singular)

void AHazardGame::SpawnLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SpawnLoop");

	AHazardGame_SpawnLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.CheckTimers
// (Defined, Iterator, PreOperator)

void AHazardGame::CheckTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.CheckTimers");

	AHazardGame_CheckTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.TimerFinished
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Time                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardGame::TimerFinished(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.TimerFinished");

	AHazardGame_TimerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.PostLogin
// (Iterator)
// Parameters:
// class APlayerController*       NewPlayer                      (Parm)

void AHazardGame::PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.PostLogin");

	AHazardGame_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.SetGameType
// (Iterator)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Portal                         (Parm, NeedCtorLink)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AHazardGame::SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.SetGameType");

	AHazardGame_SetGameType_Params params;
	params.MapName = MapName;
	params.Options = Options;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardGame::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.PointInBox");

	AHazardGame_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardGame::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.NormalizeActor");

	AHazardGame_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGame.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardGame::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.GetNextPointOnLine");

	AHazardGame_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardGame::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.RoundToScale");

	AHazardGame_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardGame::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.RoundVectorToScale");

	AHazardGame_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardGame::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.getIndexNormal");

	AHazardGame_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardGame::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.getMinLocationIndex");

	AHazardGame_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardGame::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.getLocationIndex");

	AHazardGame_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardGame::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.RotateAroundAxis");

	AHazardGame_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardGame::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.CeilValue");

	AHazardGame_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardGame::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.FloorValue");

	AHazardGame_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardGame.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardGame::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGame.ManhattanVSize");

	AHazardGame_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardConsole.InputKey
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (OptionalParm, Parm)
// bool                           bGamepad                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardConsole::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardConsole.InputKey");

	UHazardConsole_InputKey_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardActor.EnableTick
// (Iterator)

void AHazardActor::EnableTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardActor.EnableTick");

	AHazardActor_EnableTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardActor.TestDisableTick
// (Defined, Iterator, PreOperator)

void AHazardActor::TestDisableTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardActor.TestDisableTick");

	AHazardActor_TestDisableTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardActor.Tick
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardActor::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardActor.Tick");

	AHazardActor_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardActor.ShouldUpdate
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardActor::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardActor.ShouldUpdate");

	AHazardActor_ShouldUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.NeedToTurn
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 targ                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::NeedToTurn(const struct FVector& targ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.NeedToTurn");

	AHazardPawn_NeedToTurn_Params params;
	params.targ = targ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.PossessedBy
// (Iterator)
// Parameters:
// class AController*             C                              (Parm)
// bool                           bVehicleTransition             (Parm)

void AHazardPawn::PossessedBy(class AController* C, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.PossessedBy");

	AHazardPawn_PossessedBy_Params params;
	params.C = C;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.RigidBodyCollision
// (Defined, Iterator, PreOperator)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, EditInline)
// class UPrimitiveComponent*     OtherComponent                 (Parm, EditInline)
// struct FCollisionImpactData    RigidCollisionData             (Const, Parm, OutParm, NeedCtorLink)
// int                            ContactIndex                   (Parm)

void AHazardPawn::RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.RigidBodyCollision");

	AHazardPawn_RigidBodyCollision_Params params;
	params.HitComponent = HitComponent;
	params.OtherComponent = OtherComponent;
	params.ContactIndex = ContactIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RigidCollisionData != nullptr)
		*RigidCollisionData = params.RigidCollisionData;
}


// Function Hazard.HazardPawn.GetViewRotation
// (Iterator)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AHazardPawn::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetViewRotation");

	AHazardPawn_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.IsFirstPerson
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::IsFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.IsFirstPerson");

	AHazardPawn_IsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.GetPuttingDownWeapon
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::GetPuttingDownWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetPuttingDownWeapon");

	AHazardPawn_GetPuttingDownWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.SetPuttingDownWeapon
// (Iterator)
// Parameters:
// bool                           bNowPuttingDownWeapon          (Parm)

void AHazardPawn::SetPuttingDownWeapon(bool bNowPuttingDownWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.SetPuttingDownWeapon");

	AHazardPawn_SetPuttingDownWeapon_Params params;
	params.bNowPuttingDownWeapon = bNowPuttingDownWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.FiringModeUpdated
// (Iterator)
// Parameters:
// class AWeapon*                 InWeapon                       (Parm)
// unsigned char                  InFiringMode                   (Parm)
// bool                           bViaReplication                (Parm)

void AHazardPawn::FiringModeUpdated(class AWeapon* InWeapon, unsigned char InFiringMode, bool bViaReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.FiringModeUpdated");

	AHazardPawn_FiringModeUpdated_Params params;
	params.InWeapon = InWeapon;
	params.InFiringMode = InFiringMode;
	params.bViaReplication = bViaReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.GetWeaponAmbientSound
// (Iterator)
// Parameters:
// class USoundCue*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundCue* AHazardPawn::GetWeaponAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetWeaponAmbientSound");

	AHazardPawn_GetWeaponAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.SetWeaponAmbientSound
// (Defined, Iterator, PreOperator)
// Parameters:
// class USoundCue*               NewAmbientSound                (Parm)

void AHazardPawn::SetWeaponAmbientSound(class USoundCue* NewAmbientSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.SetWeaponAmbientSound");

	AHazardPawn_SetWeaponAmbientSound_Params params;
	params.NewAmbientSound = NewAmbientSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.GetPawnAmbientSound
// (Iterator)
// Parameters:
// class USoundCue*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundCue* AHazardPawn::GetPawnAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetPawnAmbientSound");

	AHazardPawn_GetPawnAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.SetPawnAmbientSound
// (Defined, Iterator, PreOperator)
// Parameters:
// class USoundCue*               NewAmbientSound                (Parm)

void AHazardPawn::SetPawnAmbientSound(class USoundCue* NewAmbientSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.SetPawnAmbientSound");

	AHazardPawn_SetPawnAmbientSound_Params params;
	params.NewAmbientSound = NewAmbientSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.DisplayDebug
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AHazardPawn::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.DisplayDebug");

	AHazardPawn_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function Hazard.HazardPawn.StopFlying
// ()

void AHazardPawn::StopFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.StopFlying");

	AHazardPawn_StopFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.StartFlying
// ()

void AHazardPawn::StartFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.StartFlying");

	AHazardPawn_StartFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.GetWeaponStartTraceLocation
// (Iterator)
// Parameters:
// class AWeapon*                 CurrentWeapon                  (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPawn::GetWeaponStartTraceLocation(class AWeapon* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetWeaponStartTraceLocation");

	AHazardPawn_GetWeaponStartTraceLocation_Params params;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.AddDefaultInventory
// (Iterator)

void AHazardPawn::AddDefaultInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.AddDefaultInventory");

	AHazardPawn_AddDefaultInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.Destroyed
// (Defined, Iterator, PreOperator)

void AHazardPawn::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.Destroyed");

	AHazardPawn_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.GetMaterialBelowFeet
// (Iterator)
// Parameters:
// TEnumAsByte<EMaterialType>     ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EMaterialType> AHazardPawn::GetMaterialBelowFeet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetMaterialBelowFeet");

	AHazardPawn_GetMaterialBelowFeet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.GetFootstepVolume
// (Iterator)
// Parameters:
// class AHazardFootstepVolume*   ReturnValue                    (Parm, OutParm, ReturnParm)

class AHazardFootstepVolume* AHazardPawn::GetFootstepVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetFootstepVolume");

	AHazardPawn_GetFootstepVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.PlayFootStepSound
// (Iterator)
// Parameters:
// int                            FootDown                       (Parm)

void AHazardPawn::PlayFootStepSound(int FootDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.PlayFootStepSound");

	AHazardPawn_PlayFootStepSound_Params params;
	params.FootDown = FootDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.GetDebugName
// (Iterator)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AHazardPawn::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetDebugName");

	AHazardPawn_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.ClientRestart
// (Defined, Iterator, PreOperator)

void AHazardPawn::ClientRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.ClientRestart");

	AHazardPawn_ClientRestart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.EndViewTarget
// (Iterator)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AHazardPawn::EndViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.EndViewTarget");

	AHazardPawn_EndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.GetPawnViewLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPawn::GetPawnViewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetPawnViewLocation");

	AHazardPawn_GetPawnViewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.UpdateEyeHeight
// (Defined, PreOperator, Net)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardPawn::UpdateEyeHeight(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.UpdateEyeHeight");

	AHazardPawn_UpdateEyeHeight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.UpdatePushSounds
// (Defined, Iterator, PreOperator)

void AHazardPawn::UpdatePushSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.UpdatePushSounds");

	AHazardPawn_UpdatePushSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.FaceRotation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FRotator                NewRotation                    (Parm)
// float                          DeltaTime                      (Parm)

void AHazardPawn::FaceRotation(const struct FRotator& NewRotation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.FaceRotation");

	AHazardPawn_FaceRotation_Params params;
	params.NewRotation = NewRotation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.GetScreenName
// (Iterator)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AHazardPawn::GetScreenName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetScreenName");

	AHazardPawn_GetScreenName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.GetEyeHeight
// (Iterator)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPawn::GetEyeHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetEyeHeight");

	AHazardPawn_GetEyeHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.StopWeaponFiring
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::StopWeaponFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.StopWeaponFiring");

	AHazardPawn_StopWeaponFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.StopFiring
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::StopFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.StopFiring");

	AHazardPawn_StopFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.AddVelocity
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 NewVelocity                    (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)

void AHazardPawn::AddVelocity(const struct FVector& NewVelocity, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.AddVelocity");

	AHazardPawn_AddVelocity_Params params;
	params.NewVelocity = NewVelocity;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.Falling
// ()

void AHazardPawn::Falling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.Falling");

	AHazardPawn_Falling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.TurnOff
// (Iterator)

void AHazardPawn::TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.TurnOff");

	AHazardPawn_TurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.WeaponBob
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BobDamping                     (Parm)
// float                          JumpDamping                    (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPawn::WeaponBob(float BobDamping, float JumpDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.WeaponBob");

	AHazardPawn_WeaponBob_Params params;
	params.BobDamping = BobDamping;
	params.JumpDamping = JumpDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.SpawnDefaultController
// (Iterator)

void AHazardPawn::SpawnDefaultController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.SpawnDefaultController");

	AHazardPawn_SpawnDefaultController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.SetAnimRateScale
// (Iterator)
// Parameters:
// float                          RateScale                      (Parm)

void AHazardPawn::SetAnimRateScale(float RateScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.SetAnimRateScale");

	AHazardPawn_SetAnimRateScale_Params params;
	params.RateScale = RateScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.ReattachMesh
// (Iterator)

void AHazardPawn::ReattachMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.ReattachMesh");

	AHazardPawn_ReattachMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardPawn::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.PostBeginPlay");

	AHazardPawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.PlayFootSounds
// (Defined, Iterator, PreOperator)
// Parameters:
// class USoundCue*               CurrentSound                   (Parm)

void AHazardPawn::PlayFootSounds(class USoundCue* CurrentSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.PlayFootSounds");

	AHazardPawn_PlayFootSounds_Params params;
	params.CurrentSound = CurrentSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.ActuallyPlayWalkingFootstepSound
// (Iterator)
// Parameters:
// int                            FootDown                       (Parm)

void AHazardPawn::ActuallyPlayWalkingFootstepSound(int FootDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.ActuallyPlayWalkingFootstepSound");

	AHazardPawn_ActuallyPlayWalkingFootstepSound_Params params;
	params.FootDown = FootDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.ActuallyPlayRunningFootstepSound
// (Iterator)
// Parameters:
// int                            FootDown                       (Parm)

void AHazardPawn::ActuallyPlayRunningFootstepSound(int FootDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.ActuallyPlayRunningFootstepSound");

	AHazardPawn_ActuallyPlayRunningFootstepSound_Params params;
	params.FootDown = FootDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.PlayJumpingSound
// (Iterator)

void AHazardPawn::PlayJumpingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.PlayJumpingSound");

	AHazardPawn_PlayJumpingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.PlayLandingSound
// (Defined, Iterator, PreOperator)

void AHazardPawn::PlayLandingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.PlayLandingSound");

	AHazardPawn_PlayLandingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.DoJump
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// bool                           bUpdating                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::DoJump(bool bUpdating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.DoJump");

	AHazardPawn_DoJump_Params params;
	params.bUpdating = bUpdating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.DoDoubleJump
// (Iterator)
// Parameters:
// bool                           bUpdating                      (Parm)

void AHazardPawn::DoDoubleJump(bool bUpdating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.DoDoubleJump");

	AHazardPawn_DoDoubleJump_Params params;
	params.bUpdating = bUpdating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.Landed
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  FloorActor                     (Parm)

void AHazardPawn::Landed(const struct FVector& HitNormal, class AActor* FloorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.Landed");

	AHazardPawn_Landed_Params params;
	params.HitNormal = HitNormal;
	params.FloorActor = FloorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.PlayTeleportEffect
// ()
// Parameters:
// bool                           bOut                           (Parm)
// bool                           bSound                         (Parm)

void AHazardPawn::PlayTeleportEffect(bool bOut, bool bSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.PlayTeleportEffect");

	AHazardPawn_PlayTeleportEffect_Params params;
	params.bOut = bOut;
	params.bSound = bSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.CalcCamera
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          fDeltaTime                     (Parm)
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.CalcCamera");

	AHazardPawn_CalcCamera_Params params;
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.CheckRecurseStep
// (Defined, Iterator, PreOperator)

void AHazardPawn::CheckRecurseStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.CheckRecurseStep");

	AHazardPawn_CheckRecurseStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.FindRecurseFloor
// (Defined, Iterator, PreOperator)

void AHazardPawn::FindRecurseFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.FindRecurseFloor");

	AHazardPawn_FindRecurseFloor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.ActivateStepFloors
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bActive                        (Parm)

void AHazardPawn::ActivateStepFloors(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.ActivateStepFloors");

	AHazardPawn_ActivateStepFloors_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.BaseChange
// (Defined, Iterator, PreOperator)

void AHazardPawn::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.BaseChange");

	AHazardPawn_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.UpdateFallingSound
// (Defined, Iterator, PreOperator)

void AHazardPawn::UpdateFallingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.UpdateFallingSound");

	AHazardPawn_UpdateFallingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.UpdateNoAmmoSounds
// (Final, Defined, Iterator, Latent, Singular)

void AHazardPawn::UpdateNoAmmoSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.UpdateNoAmmoSounds");

	AHazardPawn_UpdateNoAmmoSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.CheckSnakeStep
// (Iterator)

void AHazardPawn::CheckSnakeStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.CheckSnakeStep");

	AHazardPawn_CheckSnakeStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.FindSnakeFloor
// (Final, Defined, Iterator, Latent, Singular)

void AHazardPawn::FindSnakeFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.FindSnakeFloor");

	AHazardPawn_FindSnakeFloor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.Tick
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardPawn::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.Tick");

	AHazardPawn_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.HitWall
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  Wall                           (Parm)
// class UPrimitiveComponent*     WallComp                       (Parm, EditInline)

void AHazardPawn::HitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.HitWall");

	AHazardPawn_HitWall_Params params;
	params.HitNormal = HitNormal;
	params.Wall = Wall;
	params.WallComp = WallComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.Bump
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitNormal                      (Parm)

void AHazardPawn::Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.Bump");

	AHazardPawn_Bump_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.CheatFly
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::CheatFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.CheatFly");

	AHazardPawn_CheatFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.CheatGhost
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::CheatGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.CheatGhost");

	AHazardPawn_CheatGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.CheatWalk
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::CheatWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.CheatWalk");

	AHazardPawn_CheatWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.SetWalking
// (Iterator)
// Parameters:
// bool                           bNewIsWalking                  (Parm)

void AHazardPawn::SetWalking(bool bNewIsWalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.SetWalking");

	AHazardPawn_SetWalking_Params params;
	params.bNewIsWalking = bNewIsWalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.StartFire
// (Defined, Iterator, PreOperator)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void AHazardPawn::StartFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.StartFire");

	AHazardPawn_StartFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.Interact
// (Defined, Iterator, PreOperator)

void AHazardPawn::Interact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.Interact");

	AHazardPawn_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.InteractTest
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AActor*                  InteractActor                  (OptionalParm, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::InteractTest(class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.InteractTest");

	AHazardPawn_InteractTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InteractActor != nullptr)
		*InteractActor = params.InteractActor;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.InteractGame
// (Iterator)

void AHazardPawn::InteractGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.InteractGame");

	AHazardPawn_InteractGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.InteractTestGame
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  InteractActor                  (OptionalParm, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::InteractTestGame(class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.InteractTestGame");

	AHazardPawn_InteractTestGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InteractActor != nullptr)
		*InteractActor = params.InteractActor;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.BecomeViewTarget
// (Defined, Iterator, PreOperator)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AHazardPawn::BecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.BecomeViewTarget");

	AHazardPawn_BecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.UpdateGridLocation
// (Defined, Iterator, PreOperator)

void AHazardPawn::UpdateGridLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.UpdateGridLocation");

	AHazardPawn_UpdateGridLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.UntouchedNoAmmo
// (Iterator)

void AHazardPawn::UntouchedNoAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.UntouchedNoAmmo");

	AHazardPawn_UntouchedNoAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.TouchedNoAmmo
// (Iterator)

void AHazardPawn::TouchedNoAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.TouchedNoAmmo");

	AHazardPawn_TouchedNoAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPawn::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.PointInBox");

	AHazardPawn_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardPawn::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.NormalizeActor");

	AHazardPawn_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPawn.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPawn::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.GetNextPointOnLine");

	AHazardPawn_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPawn::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.RoundToScale");

	AHazardPawn_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPawn::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.RoundVectorToScale");

	AHazardPawn_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPawn::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.getIndexNormal");

	AHazardPawn_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPawn::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.getMinLocationIndex");

	AHazardPawn_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPawn::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.getLocationIndex");

	AHazardPawn_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPawn::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.RotateAroundAxis");

	AHazardPawn_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPawn::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.CeilValue");

	AHazardPawn_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPawn::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.FloorValue");

	AHazardPawn_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawn.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPawn::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawn.ManhattanVSize");

	AHazardPawn_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPlayerController.TeamTalk
// ()

void AHazardPlayerController::TeamTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.TeamTalk");

	AHazardPlayerController_TeamTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.Talk
// ()

void AHazardPlayerController::Talk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.Talk");

	AHazardPlayerController_Talk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.DrawHUD
// (Iterator)
// Parameters:
// class AHUD*                    H                              (Parm)

void AHazardPlayerController::DrawHUD(class AHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.DrawHUD");

	AHazardPlayerController_DrawHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.UpdateMaterialResolutionsConsoles
// (Iterator)
// Parameters:
// class UMaterialInstanceConstant* CurrentMaterial                (Parm)
// struct FVector2D               ViewportSize                   (Parm)

void AHazardPlayerController::UpdateMaterialResolutionsConsoles(class UMaterialInstanceConstant* CurrentMaterial, const struct FVector2D& ViewportSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.UpdateMaterialResolutionsConsoles");

	AHazardPlayerController_UpdateMaterialResolutionsConsoles_Params params;
	params.CurrentMaterial = CurrentMaterial;
	params.ViewportSize = ViewportSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.UpdateMaterialResolutionsPC
// (Defined, Iterator, PreOperator)
// Parameters:
// class UMaterialInstanceConstant* CurrentMaterial                (Parm)
// struct FVector2D               ViewportSize                   (Parm)
// class UTexture*                NewTexture                     (Parm)

void AHazardPlayerController::UpdateMaterialResolutionsPC(class UMaterialInstanceConstant* CurrentMaterial, const struct FVector2D& ViewportSize, class UTexture* NewTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.UpdateMaterialResolutionsPC");

	AHazardPlayerController_UpdateMaterialResolutionsPC_Params params;
	params.CurrentMaterial = CurrentMaterial;
	params.ViewportSize = ViewportSize;
	params.NewTexture = NewTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.UpdateResolutionsConsoles
// (Iterator)

void AHazardPlayerController::UpdateResolutionsConsoles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.UpdateResolutionsConsoles");

	AHazardPlayerController_UpdateResolutionsConsoles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.UpdateResolutionsPC
// (Final, Defined, Iterator, Latent, Singular)

void AHazardPlayerController::UpdateResolutionsPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.UpdateResolutionsPC");

	AHazardPlayerController_UpdateResolutionsPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.UpdateScreenMaterialResolutions
// (Iterator)

void AHazardPlayerController::UpdateScreenMaterialResolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.UpdateScreenMaterialResolutions");

	AHazardPlayerController_UpdateScreenMaterialResolutions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.ConsoleCommand
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           bWriteToLog                    (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AHazardPlayerController::ConsoleCommand(const struct FString& Command, bool bWriteToLog)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.ConsoleCommand");

	AHazardPlayerController_ConsoleCommand_Params params;
	params.Command = Command;
	params.bWriteToLog = bWriteToLog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPlayerController.StopTriFire
// ()
// Parameters:
// unsigned char                  FireModeNum                    (OptionalParm, Parm)

void AHazardPlayerController::StopTriFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.StopTriFire");

	AHazardPlayerController_StopTriFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.StartTriFire
// ()
// Parameters:
// unsigned char                  FireModeNum                    (OptionalParm, Parm)

void AHazardPlayerController::StartTriFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.StartTriFire");

	AHazardPlayerController_StartTriFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.StopFire
// (Iterator)
// Parameters:
// unsigned char                  FireModeNum                    (OptionalParm, Parm)

void AHazardPlayerController::StopFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.StopFire");

	AHazardPlayerController_StopFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.StartFire
// (Iterator)
// Parameters:
// unsigned char                  FireModeNum                    (OptionalParm, Parm)

void AHazardPlayerController::StartFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.StartFire");

	AHazardPlayerController_StartFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.HandlePickup
// (Defined, Iterator, PreOperator)
// Parameters:
// class AInventory*              Inv                            (Parm)

void AHazardPlayerController::HandlePickup(class AInventory* Inv)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.HandlePickup");

	AHazardPlayerController_HandlePickup_Params params;
	params.Inv = Inv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.ShowMenu
// (Defined, Iterator, PreOperator)

void AHazardPlayerController::ShowMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.ShowMenu");

	AHazardPlayerController_ShowMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.BlendCredits
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardPlayerController::BlendCredits(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.BlendCredits");

	AHazardPlayerController_BlendCredits_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.ShowCredits
// (Defined, Iterator, PreOperator)

void AHazardPlayerController::ShowCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.ShowCredits");

	AHazardPlayerController_ShowCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.NotifyChamberTransition
// (Iterator)
// Parameters:
// bool                           bEnteringChamber               (Parm)

void AHazardPlayerController::NotifyChamberTransition(bool bEnteringChamber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.NotifyChamberTransition");

	AHazardPlayerController_NotifyChamberTransition_Params params;
	params.bEnteringChamber = bEnteringChamber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.SetFPS
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          FrameRate                      (OptionalParm, Parm)

void AHazardPlayerController::SetFPS(float FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.SetFPS");

	AHazardPlayerController_SetFPS_Params params;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.CancelExit
// (Iterator)

void AHazardPlayerController::CancelExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.CancelExit");

	AHazardPlayerController_CancelExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.UpdateChamberCamera
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 CameraLocation                 (Parm)
// struct FRotator                CameraRotation                 (Parm)
// float                          FOV                            (Parm)

void AHazardPlayerController::UpdateChamberCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.UpdateChamberCamera");

	AHazardPlayerController_UpdateChamberCamera_Params params;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.UpdateCreditsCamera
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 CameraLocation                 (Parm)
// struct FRotator                CameraRotation                 (Parm)
// float                          FOV                            (Parm)

void AHazardPlayerController::UpdateCreditsCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.UpdateCreditsCamera");

	AHazardPlayerController_UpdateCreditsCamera_Params params;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.UpdateWorldCamera
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 CameraLocation                 (Parm)
// struct FRotator                CameraRotation                 (Parm)
// float                          FOV                            (Parm)

void AHazardPlayerController::UpdateWorldCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.UpdateWorldCamera");

	AHazardPlayerController_UpdateWorldCamera_Params params;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.DrawCamera
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 CameraLocation                 (Parm)
// struct FRotator                CameraRotation                 (Parm)
// float                          FOV                            (Parm)

void AHazardPlayerController::DrawCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.DrawCamera");

	AHazardPlayerController_DrawCamera_Params params;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.CalculateViewFrustum
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 CameraLocation                 (Parm)
// struct FRotator                CameraRotation                 (Parm)
// float                          FOV                            (Parm)

void AHazardPlayerController::CalculateViewFrustum(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.CalculateViewFrustum");

	AHazardPlayerController_CalculateViewFrustum_Params params;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.ObjectVisible
// (Iterator)
// Parameters:
// class AHazardPortal*           TestObject                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPlayerController::ObjectVisible(class AHazardPortal* TestObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.ObjectVisible");

	AHazardPlayerController_ObjectVisible_Params params;
	params.TestObject = TestObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPlayerController.FacingPlayer
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardPortal*           TestObject                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPlayerController::FacingPlayer(class AHazardPortal* TestObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.FacingPlayer");

	AHazardPlayerController_FacingPlayer_Params params;
	params.TestObject = TestObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPlayerController.TestIntersects
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardPortal*           TestObject                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPlayerController::TestIntersects(class AHazardPortal* TestObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.TestIntersects");

	AHazardPlayerController_TestIntersects_Params params;
	params.TestObject = TestObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPlayerController.IntersectsPlane
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 N                              (Parm)
// struct FVector                 P0                             (Parm)
// struct FVector                 P1                             (Parm)
// struct FVector                 V0                             (Parm)
// class AHazardPortal*           TestObject                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPlayerController::IntersectsPlane(const struct FVector& N, const struct FVector& P0, const struct FVector& P1, const struct FVector& V0, class AHazardPortal* TestObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.IntersectsPlane");

	AHazardPlayerController_IntersectsPlane_Params params;
	params.N = N;
	params.P0 = P0;
	params.P1 = P1;
	params.V0 = V0;
	params.TestObject = TestObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPlayerController.PointWithinFrustum
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPlayerController::PointWithinFrustum(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.PointWithinFrustum");

	AHazardPlayerController_PointWithinFrustum_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPlayerController.DistanceToPlane
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FHazardPlane            TestPlane                      (Parm)
// struct FVector                 Point                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPlayerController::DistanceToPlane(const struct FHazardPlane& TestPlane, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.DistanceToPlane");

	AHazardPlayerController_DistanceToPlane_Params params;
	params.TestPlane = TestPlane;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPlayerController.CreatePlane
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point1                         (Parm)
// struct FVector                 Point2                         (Parm)
// struct FVector                 Point3                         (Parm)
// struct FHazardPlane            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHazardPlane AHazardPlayerController::CreatePlane(const struct FVector& Point1, const struct FVector& Point2, const struct FVector& Point3)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.CreatePlane");

	AHazardPlayerController_CreatePlane_Params params;
	params.Point1 = Point1;
	params.Point2 = Point2;
	params.Point3 = Point3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPlayerController.ResetGame
// (Iterator)

void AHazardPlayerController::ResetGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.ResetGame");

	AHazardPlayerController_ResetGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.ToggleScreenShotMode
// (Iterator)

void AHazardPlayerController::ToggleScreenShotMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.ToggleScreenShotMode");

	AHazardPlayerController_ToggleScreenShotMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.PlayerTick
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardPlayerController::PlayerTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.PlayerTick");

	AHazardPlayerController_PlayerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.HoloJump
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 CurrentRoomLocation            (Parm)
// struct FRotator                CurrentRoomRotation            (Parm)
// struct FVector                 OtherRoomLocation              (Parm)
// struct FRotator                OtherRoomRotation              (Parm)

void AHazardPlayerController::HoloJump(const struct FVector& CurrentRoomLocation, const struct FRotator& CurrentRoomRotation, const struct FVector& OtherRoomLocation, const struct FRotator& OtherRoomRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.HoloJump");

	AHazardPlayerController_HoloJump_Params params;
	params.CurrentRoomLocation = CurrentRoomLocation;
	params.CurrentRoomRotation = CurrentRoomRotation;
	params.OtherRoomLocation = OtherRoomLocation;
	params.OtherRoomRotation = OtherRoomRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.SetupScreen
// (Final, Defined, Iterator, Latent, Singular)

void AHazardPlayerController::SetupScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.SetupScreen");

	AHazardPlayerController_SetupScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.UpdateRotation
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardPlayerController::UpdateRotation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.UpdateRotation");

	AHazardPlayerController_UpdateRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPlayerController.OnSetSoundMode
// (Defined, Iterator, PreOperator)
// Parameters:
// class USeqAct_SetSoundMode*    Action                         (Parm)

void AHazardPlayerController::OnSetSoundMode(class USeqAct_SetSoundMode* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPlayerController.OnSetSoundMode");

	AHazardPlayerController_OnSetSoundMode_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.SpinDown
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bAccelerate                    (Parm)
// float                          newSpinInterpTime              (Parm)
// float                          NumRotations                   (Parm)
// float                          Exponent                       (Parm)

void AHazardBlackHole::SpinDown(bool bAccelerate, float newSpinInterpTime, float NumRotations, float Exponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.SpinDown");

	AHazardBlackHole_SpinDown_Params params;
	params.bAccelerate = bAccelerate;
	params.newSpinInterpTime = newSpinInterpTime;
	params.NumRotations = NumRotations;
	params.Exponent = Exponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.SpinUp
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bAccelerate                    (Parm)
// float                          newSpinInterpTime              (Parm)
// float                          NumRotations                   (Parm)
// float                          Exponent                       (Parm)

void AHazardBlackHole::SpinUp(bool bAccelerate, float newSpinInterpTime, float NumRotations, float Exponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.SpinUp");

	AHazardBlackHole_SpinUp_Params params;
	params.bAccelerate = bAccelerate;
	params.newSpinInterpTime = newSpinInterpTime;
	params.NumRotations = NumRotations;
	params.Exponent = Exponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.UpdateSpin
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackHole::UpdateSpin(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.UpdateSpin");

	AHazardBlackHole_UpdateSpin_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.UpdateExplosion
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackHole::UpdateExplosion(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.UpdateExplosion");

	AHazardBlackHole_UpdateExplosion_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.Explode
// (Defined, Iterator, PreOperator)

void AHazardBlackHole::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.Explode");

	AHazardBlackHole_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackHole::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.Tick");

	AHazardBlackHole_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.UpdateSpinningMesh
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackHole::UpdateSpinningMesh(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.UpdateSpinningMesh");

	AHazardBlackHole_UpdateSpinningMesh_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.UpdateOpening
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackHole::UpdateOpening(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.UpdateOpening");

	AHazardBlackHole_UpdateOpening_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.UpdateActive
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackHole::UpdateActive(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.UpdateActive");

	AHazardBlackHole_UpdateActive_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.UpdateDying
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackHole::UpdateDying(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.UpdateDying");

	AHazardBlackHole_UpdateDying_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.UpdateShrinkingSpinningMesh
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackHole::UpdateShrinkingSpinningMesh(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.UpdateShrinkingSpinningMesh");

	AHazardBlackHole_UpdateShrinkingSpinningMesh_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.ActivateBlackHole
// (Defined, Iterator, PreOperator)

void AHazardBlackHole::ActivateBlackHole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.ActivateBlackHole");

	AHazardBlackHole_ActivateBlackHole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.ActivateBlackHoleSphere
// (Defined, Iterator, PreOperator)

void AHazardBlackHole::ActivateBlackHoleSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.ActivateBlackHoleSphere");

	AHazardBlackHole_ActivateBlackHoleSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.ShowRing
// (Iterator)

void AHazardBlackHole::ShowRing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.ShowRing");

	AHazardBlackHole_ShowRing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.TriggerFinalSequence
// (Defined, Iterator, PreOperator)

void AHazardBlackHole::TriggerFinalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.TriggerFinalSequence");

	AHazardBlackHole_TriggerFinalSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHole.PostBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardBlackHole::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHole.PostBeginPlay");

	AHazardBlackHole_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHoleSphereMesh.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardBlackHoleSphereMesh::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHoleSphereMesh.Tick");

	UHazardBlackHoleSphereMesh_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHoleSphereMesh.UpdateDying
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardBlackHoleSphereMesh::UpdateDying(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHoleSphereMesh.UpdateDying");

	UHazardBlackHoleSphereMesh_UpdateDying_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHoleSphereMesh.Kill
// (Iterator)

void UHazardBlackHoleSphereMesh::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHoleSphereMesh.Kill");

	UHazardBlackHoleSphereMesh_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHoleSphereMesh.UpdateActivating
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardBlackHoleSphereMesh::UpdateActivating(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHoleSphereMesh.UpdateActivating");

	UHazardBlackHoleSphereMesh_UpdateActivating_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHoleSphereMesh.Activate
// (Defined, Iterator, PreOperator)

void UHazardBlackHoleSphereMesh::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHoleSphereMesh.Activate");

	UHazardBlackHoleSphereMesh_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackHoleSphereMesh.Initialize
// (Defined, Iterator, PreOperator)

void UHazardBlackHoleSphereMesh::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackHoleSphereMesh.Initialize");

	UHazardBlackHoleSphereMesh_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.SetFadeAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void AHazardBlackTileEnding::SetFadeAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.SetFadeAmount");

	AHazardBlackTileEnding_SetFadeAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.SetBlendAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void AHazardBlackTileEnding::SetBlendAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.SetBlendAmount");

	AHazardBlackTileEnding_SetBlendAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.UpdateMovement
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTileEnding::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.UpdateMovement");

	AHazardBlackTileEnding_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.UpdateFade
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTileEnding::UpdateFade(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.UpdateFade");

	AHazardBlackTileEnding_UpdateFade_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.FadeTo
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          interpValue                    (Parm)

void AHazardBlackTileEnding::FadeTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.FadeTo");

	AHazardBlackTileEnding_FadeTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.InterpolateTo
// (Iterator)
// Parameters:
// float                          interpValue                    (Parm)

void AHazardBlackTileEnding::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.InterpolateTo");

	AHazardBlackTileEnding_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.DoClose
// (Iterator)

void AHazardBlackTileEnding::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.DoClose");

	AHazardBlackTileEnding_DoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.DoOpen
// (Iterator)

void AHazardBlackTileEnding::DoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.DoOpen");

	AHazardBlackTileEnding_DoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.UpdateTrailMeshes
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTileEnding::UpdateTrailMeshes(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.UpdateTrailMeshes");

	AHazardBlackTileEnding_UpdateTrailMeshes_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.UpdateDuplicates
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 NewTranslation                 (OptionalParm, Parm)

void AHazardBlackTileEnding::UpdateDuplicates(const struct FVector& NewTranslation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.UpdateDuplicates");

	AHazardBlackTileEnding_UpdateDuplicates_Params params;
	params.NewTranslation = NewTranslation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.SetupDuplicates
// (Defined, PreOperator, Net)

void AHazardBlackTileEnding::SetupDuplicates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.SetupDuplicates");

	AHazardBlackTileEnding_SetupDuplicates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTileEnding::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.Tick");

	AHazardBlackTileEnding_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.SetActive
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bNewActive                     (Parm)

void AHazardBlackTileEnding::SetActive(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.SetActive");

	AHazardBlackTileEnding_SetActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.TakeDamage
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AHazardBlackTileEnding::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.TakeDamage");

	AHazardBlackTileEnding_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileEnding.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardBlackTileEnding::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileEnding.PostBeginPlay");

	AHazardBlackTileEnding_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.SetFadeAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void AHazardBlackTile::SetFadeAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.SetFadeAmount");

	AHazardBlackTile_SetFadeAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.SetBlendAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void AHazardBlackTile::SetBlendAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.SetBlendAmount");

	AHazardBlackTile_SetBlendAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.UpdateMovement
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTile::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.UpdateMovement");

	AHazardBlackTile_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.UpdateFade
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTile::UpdateFade(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.UpdateFade");

	AHazardBlackTile_UpdateFade_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.FadeTo
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          interpValue                    (Parm)

void AHazardBlackTile::FadeTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.FadeTo");

	AHazardBlackTile_FadeTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.InterpolateTo
// (Iterator)
// Parameters:
// float                          interpValue                    (Parm)

void AHazardBlackTile::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.InterpolateTo");

	AHazardBlackTile_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.DoClose
// (Iterator)

void AHazardBlackTile::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.DoClose");

	AHazardBlackTile_DoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.DoOpen
// (Iterator)

void AHazardBlackTile::DoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.DoOpen");

	AHazardBlackTile_DoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.UpdateTrailMeshes
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTile::UpdateTrailMeshes(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.UpdateTrailMeshes");

	AHazardBlackTile_UpdateTrailMeshes_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTile::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.Tick");

	AHazardBlackTile_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.SetActive
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bNewActive                     (Parm)

void AHazardBlackTile::SetActive(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.SetActive");

	AHazardBlackTile_SetActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.PostBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardBlackTile::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.PostBeginPlay");

	AHazardBlackTile_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.SetupMirageMeshes
// (Final, Defined, Iterator, Latent, Singular)

void AHazardBlackTile::SetupMirageMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.SetupMirageMeshes");

	AHazardBlackTile_SetupMirageMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.ShrinkMirage
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTile::ShrinkMirage(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.ShrinkMirage");

	AHazardBlackTile_ShrinkMirage_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.TakeDamage
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AHazardBlackTile::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.TakeDamage");

	AHazardBlackTile_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTile.KillGunTile
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          NumToKill                      (Parm)

void AHazardBlackTile::KillGunTile(float NumToKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTile.KillGunTile");

	AHazardBlackTile_KillGunTile_Params params;
	params.NumToKill = NumToKill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.UpdateDuplicates
// (Final, Defined, Iterator, Latent, Singular)

void UHazardTileComponent::UpdateDuplicates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.UpdateDuplicates");

	UHazardTileComponent_UpdateDuplicates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SpawnDuplicate
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AHazardDuplicateVolume*  NewVolume                      (Parm)

void UHazardTileComponent::SpawnDuplicate(class AHazardDuplicateVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SpawnDuplicate");

	UHazardTileComponent_SpawnDuplicate_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.RemoveDuplicates
// (Iterator)

void UHazardTileComponent::RemoveDuplicates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.RemoveDuplicates");

	UHazardTileComponent_RemoveDuplicates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FindFurthestCorners
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 SearchPoint                    (Parm)
// float                          DistanceToPoint                (Parm)

void UHazardTileComponent::FindFurthestCorners(const struct FVector& SearchPoint, float DistanceToPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FindFurthestCorners");

	UHazardTileComponent_FindFurthestCorners_Params params;
	params.SearchPoint = SearchPoint;
	params.DistanceToPoint = DistanceToPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.BruteForceFurthestPoints
// (Final, Defined, Iterator, Latent, Singular)

void UHazardTileComponent::BruteForceFurthestPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.BruteForceFurthestPoints");

	UHazardTileComponent_BruteForceFurthestPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FindFurthestPoints
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 SearchPoint                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardTileComponent::FindFurthestPoints(const struct FVector& SearchPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FindFurthestPoints");

	UHazardTileComponent_FindFurthestPoints_Params params;
	params.SearchPoint = SearchPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.RecurseDestruct
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 SearchPoint                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardTileComponent::RecurseDestruct(const struct FVector& SearchPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.RecurseDestruct");

	UHazardTileComponent_RecurseDestruct_Params params;
	params.SearchPoint = SearchPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.RecurseConstruct
// (Defined, NetReliable)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// int                            MinConstructDepth              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardTileComponent::RecurseConstruct(const struct FVector& StartLocation, int* MinConstructDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.RecurseConstruct");

	UHazardTileComponent_RecurseConstruct_Params params;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinConstructDepth != nullptr)
		*MinConstructDepth = params.MinConstructDepth;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.GetNextRecursePoint
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            TestIndex                      (Parm)
// struct FRecurseConstructPoint  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRecurseConstructPoint UHazardTileComponent::GetNextRecursePoint(int TestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.GetNextRecursePoint");

	UHazardTileComponent_GetNextRecursePoint_Params params;
	params.TestIndex = TestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.AddRecurseConstructPoint
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FRecurseConstructPoint  NewConstructPoint              (Parm)

void UHazardTileComponent::AddRecurseConstructPoint(const struct FRecurseConstructPoint& NewConstructPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.AddRecurseConstructPoint");

	UHazardTileComponent_AddRecurseConstructPoint_Params params;
	params.NewConstructPoint = NewConstructPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.GetRecurseLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 CancelledDirection             (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardTileComponent::GetRecurseLocation(const struct FVector& StartLocation, const struct FVector& CancelledDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.GetRecurseLocation");

	UHazardTileComponent_GetRecurseLocation_Params params;
	params.StartLocation = StartLocation;
	params.CancelledDirection = CancelledDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.FindClosestTile
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 SearchPoint                    (Parm)
// bool                           bUseCameraDistance             (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardTileComponent::FindClosestTile(const struct FVector& SearchPoint, bool bUseCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FindClosestTile");

	UHazardTileComponent_FindClosestTile_Params params;
	params.SearchPoint = SearchPoint;
	params.bUseCameraDistance = bUseCameraDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.EqualClusters
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class UHazardTileComponent*    FirstCluster                   (Parm, EditInline)
// class UHazardTileComponent*    SecondCluster                  (Parm, EditInline)
// struct FVector                 CancelledDirection             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardTileComponent::EqualClusters(class UHazardTileComponent* FirstCluster, class UHazardTileComponent* SecondCluster, const struct FVector& CancelledDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.EqualClusters");

	UHazardTileComponent_EqualClusters_Params params;
	params.FirstCluster = FirstCluster;
	params.SecondCluster = SecondCluster;
	params.CancelledDirection = CancelledDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.JoinClusters
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// int                            Axis                           (Parm)
// int                            I                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardTileComponent::JoinClusters(int Axis, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.JoinClusters");

	UHazardTileComponent_JoinClusters_Params params;
	params.Axis = Axis;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.MergeClusters
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::MergeClusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.MergeClusters");

	UHazardTileComponent_MergeClusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FindLoopedClusters
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// int                            StartDirection                 (Parm, OutParm)
// struct FVector                 LastLoopLocation               (Parm, OutParm)
// int                            PlaneAxis                      (Parm)
// class UHazardTileComponent*    ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardTileComponent* UHazardTileComponent::FindLoopedClusters(int PlaneAxis, int* StartDirection, struct FVector* LastLoopLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FindLoopedClusters");

	UHazardTileComponent_FindLoopedClusters_Params params;
	params.PlaneAxis = PlaneAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartDirection != nullptr)
		*StartDirection = params.StartDirection;
	if (LastLoopLocation != nullptr)
		*LastLoopLocation = params.LastLoopLocation;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.VectorToName
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 InVect                         (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UHazardTileComponent::VectorToName(const struct FVector& InVect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.VectorToName");

	UHazardTileComponent_VectorToName_Params params;
	params.InVect = InVect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.FindLoop
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          NewLoopTimeStamp               (Parm)
// int                            PlaneAxis                      (Parm)
// struct FVector                 StartLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardTileComponent::FindLoop(float NewLoopTimeStamp, int PlaneAxis, const struct FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FindLoop");

	UHazardTileComponent_FindLoop_Params params;
	params.NewLoopTimeStamp = NewLoopTimeStamp;
	params.PlaneAxis = PlaneAxis;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.LoopDetection
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          NewLoopTimeStamp               (Parm)
// struct FVector                 StartLocation                  (Parm)

void UHazardTileComponent::LoopDetection(float NewLoopTimeStamp, const struct FVector& StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.LoopDetection");

	UHazardTileComponent_LoopDetection_Params params;
	params.NewLoopTimeStamp = NewLoopTimeStamp;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FindLoops
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::FindLoops()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FindLoops");

	UHazardTileComponent_FindLoops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.LatentSnakeToPoint
// (Iterator)

void UHazardTileComponent::LatentSnakeToPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.LatentSnakeToPoint");

	UHazardTileComponent_LatentSnakeToPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.EnableTimer
// (Iterator)

void UHazardTileComponent::EnableTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.EnableTimer");

	UHazardTileComponent_EnableTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SnakeToPoint
// (Defined, PreOperator, Net)
// Parameters:
// struct FVector                 EndPoint                       (Parm)

void UHazardTileComponent::SnakeToPoint(const struct FVector& EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SnakeToPoint");

	UHazardTileComponent_SnakeToPoint_Params params;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.Explode
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void UHazardTileComponent::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.Explode");

	UHazardTileComponent_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.CompoundRecursion
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardTileComponent::CompoundRecursion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.CompoundRecursion");

	UHazardTileComponent_CompoundRecursion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.GetNeighbourFromAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            Index                          (Parm)
// class UHazardTileComponent*    ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardTileComponent* UHazardTileComponent::GetNeighbourFromAxis(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.GetNeighbourFromAxis");

	UHazardTileComponent_GetNeighbourFromAxis_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.Recurse
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::Recurse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.Recurse");

	UHazardTileComponent_Recurse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FindAxisClusters
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 CancelledDirection             (Parm)

void UHazardTileComponent::FindAxisClusters(const struct FVector& CancelledDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FindAxisClusters");

	UHazardTileComponent_FindAxisClusters_Params params;
	params.CancelledDirection = CancelledDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FindClusteredNeighbours
// (Iterator)

void UHazardTileComponent::FindClusteredNeighbours()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FindClusteredNeighbours");

	UHazardTileComponent_FindClusteredNeighbours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.VoidClusteredNeighbours
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::VoidClusteredNeighbours()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.VoidClusteredNeighbours");

	UHazardTileComponent_VoidClusteredNeighbours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SplitCluster
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 SplitLocation                  (Parm)

void UHazardTileComponent::SplitCluster(const struct FVector& SplitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SplitCluster");

	UHazardTileComponent_SplitCluster_Params params;
	params.SplitLocation = SplitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SplitAxisCluster
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 SplitLocation                  (Parm)
// struct FVector                 SplitDirection                 (Parm)
// class UHazardTileComponent*    ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardTileComponent* UHazardTileComponent::SplitAxisCluster(const struct FVector& SplitLocation, const struct FVector& SplitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SplitAxisCluster");

	UHazardTileComponent_SplitAxisCluster_Params params;
	params.SplitLocation = SplitLocation;
	params.SplitDirection = SplitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.DoesContainPoint
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardTileComponent::DoesContainPoint(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.DoesContainPoint");

	UHazardTileComponent_DoesContainPoint_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.GetNumClusters
// (Iterator)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardTileComponent::GetNumClusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.GetNumClusters");

	UHazardTileComponent_GetNumClusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.SetNumClusters
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::SetNumClusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SetNumClusters");

	UHazardTileComponent_SetNumClusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SetScale3D
// (Iterator)
// Parameters:
// struct FVector                 NewScale                       (Parm)

void UHazardTileComponent::SetScale3D(const struct FVector& NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SetScale3D");

	UHazardTileComponent_SetScale3D_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.TimerFinished
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Time                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardTileComponent::TimerFinished(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.TimerFinished");

	UHazardTileComponent_TimerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.CheckTimers
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::CheckTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.CheckTimers");

	UHazardTileComponent_CheckTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.KillBlockingTiles
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::KillBlockingTiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.KillBlockingTiles");

	UHazardTileComponent_KillBlockingTiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FindLasers
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::FindLasers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FindLasers");

	UHazardTileComponent_FindLasers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FinishedInterpolation
// (Iterator)

void UHazardTileComponent::FinishedInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FinishedInterpolation");

	UHazardTileComponent_FinishedInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SetBlendAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void UHazardTileComponent::SetBlendAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SetBlendAmount");

	UHazardTileComponent_SetBlendAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SetGlobalCollision
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bEnabled                       (Parm)

void UHazardTileComponent::SetGlobalCollision(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SetGlobalCollision");

	UHazardTileComponent_SetGlobalCollision_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.UpdateGlobalCollision
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::UpdateGlobalCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.UpdateGlobalCollision");

	UHazardTileComponent_UpdateGlobalCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FullMerge
// (Iterator)

void UHazardTileComponent::FullMerge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FullMerge");

	UHazardTileComponent_FullMerge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.UpdateMovement
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardTileComponent::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.UpdateMovement");

	UHazardTileComponent_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.UpdateWhiteSounds
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::UpdateWhiteSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.UpdateWhiteSounds");

	UHazardTileComponent_UpdateWhiteSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.TestMovePawn
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 MoveDistance                   (Parm)
// float                          DeltaTime                      (Parm)

void UHazardTileComponent::TestMovePawn(const struct FVector& MoveDistance, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.TestMovePawn");

	UHazardTileComponent_TestMovePawn_Params params;
	params.MoveDistance = MoveDistance;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.WillHitGeometry
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 TestLocation                   (Parm)
// struct FVector                 MoveDirection                  (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardTileComponent::WillHitGeometry(const struct FVector& TestLocation, const struct FVector& MoveDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.WillHitGeometry");

	UHazardTileComponent_WillHitGeometry_Params params;
	params.TestLocation = TestLocation;
	params.MoveDirection = MoveDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.ForceMovePlayer
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::ForceMovePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.ForceMovePlayer");

	UHazardTileComponent_ForceMovePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.InterpolateTo
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 NewLocation                    (Parm)
// struct FRotator                NewRotation                    (Parm)
// float                          interpValue                    (Parm)

void UHazardTileComponent::InterpolateTo(const struct FVector& NewLocation, const struct FRotator& NewRotation, float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.InterpolateTo");

	UHazardTileComponent_InterpolateTo_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.UnregisterActive
// (Iterator)

void UHazardTileComponent::UnregisterActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.UnregisterActive");

	UHazardTileComponent_UnregisterActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.RegisterActive
// (Iterator)

void UHazardTileComponent::RegisterActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.RegisterActive");

	UHazardTileComponent_RegisterActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.DoClose
// (Final, Defined, Iterator, Latent, Singular)

void UHazardTileComponent::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.DoClose");

	UHazardTileComponent_DoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SpawnRenderDummy
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::SpawnRenderDummy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SpawnRenderDummy");

	UHazardTileComponent_SpawnRenderDummy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SpawnDrawnTile
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm)

void UHazardTileComponent::SpawnDrawnTile(const struct FVector& SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SpawnDrawnTile");

	UHazardTileComponent_SpawnDrawnTile_Params params;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.SpawnShotTile
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 HitLocation                    (Parm)

void UHazardTileComponent::SpawnShotTile(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.SpawnShotTile");

	UHazardTileComponent_SpawnShotTile_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.DoOpen
// (Defined, PreOperator, Net)

void UHazardTileComponent::DoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.DoOpen");

	UHazardTileComponent_DoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FinishedOpen
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::FinishedOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FinishedOpen");

	UHazardTileComponent_FinishedOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.FinishedClose
// (Final, Defined, Iterator, Latent, Singular)

void UHazardTileComponent::FinishedClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FinishedClose");

	UHazardTileComponent_FinishedClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.KillRenderDummy
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::KillRenderDummy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.KillRenderDummy");

	UHazardTileComponent_KillRenderDummy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.Close
// (Iterator)

void UHazardTileComponent::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.Close");

	UHazardTileComponent_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.Wait
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::Wait()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.Wait");

	UHazardTileComponent_Wait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.Open
// (Defined, Iterator, PreOperator)

void UHazardTileComponent::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.Open");

	UHazardTileComponent_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardTileComponent::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.Tick");

	UHazardTileComponent_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.CreateAndSetNewMaterialInstanceConstant
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            ElementIndex                   (Parm)
// class UMaterialInterface*      NewMaterial                    (Parm)
// class UMaterialInstanceConstant* ReturnValue                    (Parm, OutParm, ReturnParm)

class UMaterialInstanceConstant* UHazardTileComponent::CreateAndSetNewMaterialInstanceConstant(int ElementIndex, class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.CreateAndSetNewMaterialInstanceConstant");

	UHazardTileComponent_CreateAndSetNewMaterialInstanceConstant_Params params;
	params.ElementIndex = ElementIndex;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardTileComponent::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.GetClampedLocation");

	UHazardTileComponent_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.InitializeTile
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardTile*             NewOwner                       (Parm)

void UHazardTileComponent::InitializeTile(class AHazardTile* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.InitializeTile");

	UHazardTileComponent_InitializeTile_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardTileComponent::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.PointInBox");

	UHazardTileComponent_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void UHazardTileComponent::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.NormalizeActor");

	UHazardTileComponent_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTileComponent.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardTileComponent::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.GetNextPointOnLine");

	UHazardTileComponent_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardTileComponent::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.RoundToScale");

	UHazardTileComponent_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardTileComponent::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.RoundVectorToScale");

	UHazardTileComponent_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardTileComponent::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.getIndexNormal");

	UHazardTileComponent_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardTileComponent::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.getMinLocationIndex");

	UHazardTileComponent_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardTileComponent::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.getLocationIndex");

	UHazardTileComponent_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardTileComponent::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.RotateAroundAxis");

	UHazardTileComponent_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardTileComponent::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.CeilValue");

	UHazardTileComponent_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardTileComponent::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.FloorValue");

	UHazardTileComponent_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTileComponent.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardTileComponent::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTileComponent.ManhattanVSize");

	UHazardTileComponent_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.SetImpactedActor
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AActor*                  HitActor                       (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)
// struct FTraceHitInfo           HitInfo                        (Parm)

void AHazardWeap_TileGun::SetImpactedActor(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.SetImpactedActor");

	AHazardWeap_TileGun_SetImpactedActor_Params params;
	params.HitActor = HitActor;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.SendToFiringState
// (Defined, Iterator, PreOperator)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void AHazardWeap_TileGun::SendToFiringState(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.SendToFiringState");

	AHazardWeap_TileGun_SendToFiringState_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.UpdateWeaponColour
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardWeap_TileGun::UpdateWeaponColour(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.UpdateWeaponColour");

	AHazardWeap_TileGun_UpdateWeaponColour_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.SetPosition
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AUDKPawn*                Holder                         (Parm)

void AHazardWeap_TileGun::SetPosition(class AUDKPawn* Holder)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.SetPosition");

	AHazardWeap_TileGun_SetPosition_Params params;
	params.Holder = Holder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.GetHand
// (Defined, Iterator, PreOperator)
// Parameters:
// TEnumAsByte<EWeaponHand>       ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EWeaponHand> AHazardWeap_TileGun::GetHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.GetHand");

	AHazardWeap_TileGun_GetHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.AttachWeaponTo
// (Defined, Iterator, PreOperator)
// Parameters:
// class USkeletalMeshComponent*  MeshCpnt                       (Parm, EditInline)
// struct FName                   SocketName                     (OptionalParm, Parm)

void AHazardWeap_TileGun::AttachWeaponTo(class USkeletalMeshComponent* MeshCpnt, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.AttachWeaponTo");

	AHazardWeap_TileGun_AttachWeaponTo_Params params;
	params.MeshCpnt = MeshCpnt;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.ActiveRenderOverlays
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHUD*                    H                              (Parm)

void AHazardWeap_TileGun::ActiveRenderOverlays(class AHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.ActiveRenderOverlays");

	AHazardWeap_TileGun_ActiveRenderOverlays_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.GetEquipTime
// (Iterator)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardWeap_TileGun::GetEquipTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.GetEquipTime");

	AHazardWeap_TileGun_GetEquipTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.TimeWeaponEquipping
// (Iterator)

void AHazardWeap_TileGun::TimeWeaponEquipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.TimeWeaponEquipping");

	AHazardWeap_TileGun_TimeWeaponEquipping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.GetProjectileClass
// (Iterator)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AHazardWeap_TileGun::GetProjectileClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.GetProjectileClass");

	AHazardWeap_TileGun_GetProjectileClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.UnlockBlackGun
// (Defined, Iterator, PreOperator)

void AHazardWeap_TileGun::UnlockBlackGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.UnlockBlackGun");

	AHazardWeap_TileGun_UnlockBlackGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.UnlockDarkGun
// (Iterator)

void AHazardWeap_TileGun::UnlockDarkGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.UnlockDarkGun");

	AHazardWeap_TileGun_UnlockDarkGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.Upgrade
// (Defined, Iterator, PreOperator)

void AHazardWeap_TileGun::Upgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.Upgrade");

	AHazardWeap_TileGun_Upgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.UpdateWeaponPosition
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardWeap_TileGun::UpdateWeaponPosition(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.UpdateWeaponPosition");

	AHazardWeap_TileGun_UpdateWeaponPosition_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.KillSnakeBeamEmitter
// (Defined, Iterator, PreOperator)

void AHazardWeap_TileGun::KillSnakeBeamEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.KillSnakeBeamEmitter");

	AHazardWeap_TileGun_KillSnakeBeamEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.SpawnSnakeBeamEmitter
// (Defined, Iterator, PreOperator)

void AHazardWeap_TileGun::SpawnSnakeBeamEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.SpawnSnakeBeamEmitter");

	AHazardWeap_TileGun_SpawnSnakeBeamEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.UpdateSnakeBeam
// (Defined, PreOperator, Net)

void AHazardWeap_TileGun::UpdateSnakeBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.UpdateSnakeBeam");

	AHazardWeap_TileGun_UpdateSnakeBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.Tick
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardWeap_TileGun::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.Tick");

	AHazardWeap_TileGun_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.DrawWeaponCrosshair
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AHUD*                    HUD                            (Parm)

void AHazardWeap_TileGun::DrawWeaponCrosshair(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.DrawWeaponCrosshair");

	AHazardWeap_TileGun_DrawWeaponCrosshair_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.HideProjectedTile
// (Iterator)

void AHazardWeap_TileGun::HideProjectedTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.HideProjectedTile");

	AHazardWeap_TileGun_HideProjectedTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.ShowProjectedTile
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 NewProjectedLocation           (Parm)
// struct FVector                 NewProjectedSize               (Parm)

void AHazardWeap_TileGun::ShowProjectedTile(const struct FVector& NewProjectedLocation, const struct FVector& NewProjectedSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.ShowProjectedTile");

	AHazardWeap_TileGun_ShowProjectedTile_Params params;
	params.NewProjectedLocation = NewProjectedLocation;
	params.NewProjectedSize = NewProjectedSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.ProjectTile
// (Defined, PreOperator, Net)

void AHazardWeap_TileGun::ProjectTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.ProjectTile");

	AHazardWeap_TileGun_ProjectTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.SimpleCalculateDrawingConstruct
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 AimDir                         (Parm)
// class UHazardTileComponent*    LinkedTileComponent            (Parm, EditInline)

void AHazardWeap_TileGun::SimpleCalculateDrawingConstruct(const struct FVector& StartTrace, const struct FVector& AimDir, class UHazardTileComponent* LinkedTileComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.SimpleCalculateDrawingConstruct");

	AHazardWeap_TileGun_SimpleCalculateDrawingConstruct_Params params;
	params.StartTrace = StartTrace;
	params.AimDir = AimDir;
	params.LinkedTileComponent = LinkedTileComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.CalculateDrawingConstruct
// (Defined, PreOperator, Net)
// Parameters:
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 AimDir                         (Parm)
// class UHazardTileComponent*    LinkedTileComponent            (Parm, EditInline)

void AHazardWeap_TileGun::CalculateDrawingConstruct(const struct FVector& StartTrace, const struct FVector& AimDir, class UHazardTileComponent* LinkedTileComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.CalculateDrawingConstruct");

	AHazardWeap_TileGun_CalculateDrawingConstruct_Params params;
	params.StartTrace = StartTrace;
	params.AimDir = AimDir;
	params.LinkedTileComponent = LinkedTileComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.CalculateRecurseConstruct
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 AimDir                         (Parm)
// class UHazardTileComponent*    LinkedTileComponent            (Parm, EditInline)

void AHazardWeap_TileGun::CalculateRecurseConstruct(const struct FVector& StartTrace, const struct FVector& AimDir, class UHazardTileComponent* LinkedTileComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.CalculateRecurseConstruct");

	AHazardWeap_TileGun_CalculateRecurseConstruct_Params params;
	params.StartTrace = StartTrace;
	params.AimDir = AimDir;
	params.LinkedTileComponent = LinkedTileComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.ProjectLink
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 NewLinkedLocation              (Parm)

void AHazardWeap_TileGun::ProjectLink(const struct FVector& NewLinkedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.ProjectLink");

	AHazardWeap_TileGun_ProjectLink_Params params;
	params.NewLinkedLocation = NewLinkedLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.CalculatePositiveLink
// (Final, Defined, Iterator, Latent, Singular)

void AHazardWeap_TileGun::CalculatePositiveLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.CalculatePositiveLink");

	AHazardWeap_TileGun_CalculatePositiveLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.NoVolumesBetweenCamera
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// class UHazardTileComponent*    LinkedTileComponent            (Parm, EditInline)
// int                            NeighbourIndex                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardWeap_TileGun::NoVolumesBetweenCamera(const struct FVector& StartTrace, const struct FVector& SpawnLocation, class UHazardTileComponent* LinkedTileComponent, int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.NoVolumesBetweenCamera");

	AHazardWeap_TileGun_NoVolumesBetweenCamera_Params params;
	params.StartTrace = StartTrace;
	params.SpawnLocation = SpawnLocation;
	params.LinkedTileComponent = LinkedTileComponent;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.NoVolume
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 CheckAxis                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardWeap_TileGun::NoVolume(const struct FVector& StartLocation, const struct FVector& CheckAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.NoVolume");

	AHazardWeap_TileGun_NoVolume_Params params;
	params.StartLocation = StartLocation;
	params.CheckAxis = CheckAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.PenetratingTrace
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 HitLocation                    (Parm, OutParm)
// struct FVector                 HitNormal                      (Parm, OutParm)
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 StartTrace                     (Parm)
// bool                           bTraceThroughTiles             (Parm)
// class UHazardTileComponent*    HitComponent                   (Parm, OutParm, EditInline)
// bool                           bTraceThroughVolumes           (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AHazardWeap_TileGun::PenetratingTrace(const struct FVector& EndTrace, const struct FVector& StartTrace, bool bTraceThroughTiles, bool bTraceThroughVolumes, struct FVector* HitLocation, struct FVector* HitNormal, class UHazardTileComponent** HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.PenetratingTrace");

	AHazardWeap_TileGun_PenetratingTrace_Params params;
	params.EndTrace = EndTrace;
	params.StartTrace = StartTrace;
	params.bTraceThroughTiles = bTraceThroughTiles;
	params.bTraceThroughVolumes = bTraceThroughVolumes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (HitComponent != nullptr)
		*HitComponent = params.HitComponent;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.GetLinkedToLocation
// (Iterator)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardWeap_TileGun::GetLinkedToLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.GetLinkedToLocation");

	AHazardWeap_TileGun_GetLinkedToLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.ProcessBeamHit
// (Defined, PreOperator, Net)
// Parameters:
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 AimDir                         (Parm)
// struct FImpactInfo             TestImpact                     (Parm, OutParm)
// float                          DeltaTime                      (Parm)

void AHazardWeap_TileGun::ProcessBeamHit(const struct FVector& StartTrace, const struct FVector& AimDir, float DeltaTime, struct FImpactInfo* TestImpact)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.ProcessBeamHit");

	AHazardWeap_TileGun_ProcessBeamHit_Params params;
	params.StartTrace = StartTrace;
	params.AimDir = AimDir;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestImpact != nullptr)
		*TestImpact = params.TestImpact;
}


// Function Hazard.HazardWeap_TileGun.UpdateBeamEmitter
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 FlashLocation                  (Parm)
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  HitActor                       (Parm)

void AHazardWeap_TileGun::UpdateBeamEmitter(const struct FVector& FlashLocation, const struct FVector& HitNormal, class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.UpdateBeamEmitter");

	AHazardWeap_TileGun_UpdateBeamEmitter_Params params;
	params.FlashLocation = FlashLocation;
	params.HitNormal = HitNormal;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.SetBeamEmitterHidden
// (Iterator)
// Parameters:
// bool                           bHide                          (Parm)

void AHazardWeap_TileGun::SetBeamEmitterHidden(bool bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.SetBeamEmitterHidden");

	AHazardWeap_TileGun_SetBeamEmitterHidden_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.KillBeamEmitter
// (Iterator)

void AHazardWeap_TileGun::KillBeamEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.KillBeamEmitter");

	AHazardWeap_TileGun_KillBeamEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.AddBeamEmitter
// (Final, Defined, Iterator, Latent, Singular)

void AHazardWeap_TileGun::AddBeamEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.AddBeamEmitter");

	AHazardWeap_TileGun_AddBeamEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.UpdateBeam
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardWeap_TileGun::UpdateBeam(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.UpdateBeam");

	AHazardWeap_TileGun_UpdateBeam_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.CalcWeaponFire
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 EndTrace                       (Parm)
// TArray<struct FImpactInfo>     ImpactList                     (OptionalParm, Parm, OutParm, NeedCtorLink)
// struct FVector                 Extent                         (OptionalParm, Parm)
// struct FImpactInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FImpactInfo AHazardWeap_TileGun::CalcWeaponFire(const struct FVector& StartTrace, const struct FVector& EndTrace, const struct FVector& Extent, TArray<struct FImpactInfo>* ImpactList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.CalcWeaponFire");

	AHazardWeap_TileGun_CalcWeaponFire_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactList != nullptr)
		*ImpactList = params.ImpactList;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.PassThroughDamage
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  HitActor                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardWeap_TileGun::PassThroughDamage(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.PassThroughDamage");

	AHazardWeap_TileGun_PassThroughDamage_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.StopFire
// (Defined, Iterator, PreOperator)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void AHazardWeap_TileGun::StopFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.StopFire");

	AHazardWeap_TileGun_StopFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.StartFire
// (Defined, Iterator, PreOperator)
// Parameters:
// unsigned char                  FireModeNum                    (Parm)

void AHazardWeap_TileGun::StartFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.StartFire");

	AHazardWeap_TileGun_StartFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.MoveSnake
// (Defined, Iterator, PreOperator)

void AHazardWeap_TileGun::MoveSnake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.MoveSnake");

	AHazardWeap_TileGun_MoveSnake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.TraceThroughGlass
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// class AActor*                  HitActor                       (Parm)
// struct FVector                 OutHitLocation                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardWeap_TileGun::TraceThroughGlass(const struct FVector& EndTrace, const struct FVector& StartTrace, const struct FVector& HitLocation, class AActor* HitActor, struct FVector* OutHitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.TraceThroughGlass");

	AHazardWeap_TileGun_TraceThroughGlass_Params params;
	params.EndTrace = EndTrace;
	params.StartTrace = StartTrace;
	params.HitLocation = HitLocation;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHitLocation != nullptr)
		*OutHitLocation = params.OutHitLocation;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.FindSnake
// (Defined, Iterator, PreOperator)

void AHazardWeap_TileGun::FindSnake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.FindSnake");

	AHazardWeap_TileGun_FindSnake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.KillSnake
// (Iterator)

void AHazardWeap_TileGun::KillSnake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.KillSnake");

	AHazardWeap_TileGun_KillSnake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.ShouldRefire
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardWeap_TileGun::ShouldRefire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.ShouldRefire");

	AHazardWeap_TileGun_ShouldRefire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.FireBlackTileProjectile
// (Defined, Iterator, PreOperator)
// Parameters:
// class AProjectile*             ReturnValue                    (Parm, OutParm, ReturnParm)

class AProjectile* AHazardWeap_TileGun::FireBlackTileProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.FireBlackTileProjectile");

	AHazardWeap_TileGun_FireBlackTileProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.ProjectileFire
// (Iterator)
// Parameters:
// class AProjectile*             ReturnValue                    (Parm, OutParm, ReturnParm)

class AProjectile* AHazardWeap_TileGun::ProjectileFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.ProjectileFire");

	AHazardWeap_TileGun_ProjectileFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.DelayedHit
// (Defined, Iterator, PreOperator)
// Parameters:
// class AProjectile*             ReturnValue                    (Parm, OutParm, ReturnParm)

class AProjectile* AHazardWeap_TileGun::DelayedHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.DelayedHit");

	AHazardWeap_TileGun_DelayedHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.InstantHit
// (Defined, Iterator, PreOperator)
// Parameters:
// class AProjectile*             ReturnValue                    (Parm, OutParm, ReturnParm)

class AProjectile* AHazardWeap_TileGun::InstantHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.InstantHit");

	AHazardWeap_TileGun_InstantHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.SpendAmmo
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            Amount                         (Parm)

void AHazardWeap_TileGun::SpendAmmo(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.SpendAmmo");

	AHazardWeap_TileGun_SpendAmmo_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.SpawnAmmo
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// int                            Amount                         (Parm)
// class UMaterialInterface*      InputMaterial                  (Parm)

void AHazardWeap_TileGun::SpawnAmmo(int Amount, class UMaterialInterface* InputMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.SpawnAmmo");

	AHazardWeap_TileGun_SpawnAmmo_Params params;
	params.Amount = Amount;
	params.InputMaterial = InputMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.CheckOverloaded
// (Iterator)

void AHazardWeap_TileGun::CheckOverloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.CheckOverloaded");

	AHazardWeap_TileGun_CheckOverloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.DestroyAllAmmo
// (Iterator)

void AHazardWeap_TileGun::DestroyAllAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.DestroyAllAmmo");

	AHazardWeap_TileGun_DestroyAllAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.Destroyed
// (Iterator)

void AHazardWeap_TileGun::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.Destroyed");

	AHazardWeap_TileGun_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.GetCurrentTileMaterial
// (Iterator)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UMaterialInterface* AHazardWeap_TileGun::GetCurrentTileMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.GetCurrentTileMaterial");

	AHazardWeap_TileGun_GetCurrentTileMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.SafeHide
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bNewHidden                     (Parm)

void AHazardWeap_TileGun::SafeHide(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.SafeHide");

	AHazardWeap_TileGun_SafeHide_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.PostBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardWeap_TileGun::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.PostBeginPlay");

	AHazardWeap_TileGun_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardWeap_TileGun::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.PointInBox");

	AHazardWeap_TileGun_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardWeap_TileGun::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.NormalizeActor");

	AHazardWeap_TileGun_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGun.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardWeap_TileGun::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.GetNextPointOnLine");

	AHazardWeap_TileGun_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardWeap_TileGun::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.RoundToScale");

	AHazardWeap_TileGun_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardWeap_TileGun::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.RoundVectorToScale");

	AHazardWeap_TileGun_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardWeap_TileGun::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.getIndexNormal");

	AHazardWeap_TileGun_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardWeap_TileGun::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.getMinLocationIndex");

	AHazardWeap_TileGun_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardWeap_TileGun::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.getLocationIndex");

	AHazardWeap_TileGun_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardWeap_TileGun::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.RotateAroundAxis");

	AHazardWeap_TileGun_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardWeap_TileGun::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.CeilValue");

	AHazardWeap_TileGun_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardWeap_TileGun::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.FloorValue");

	AHazardWeap_TileGun_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardWeap_TileGun.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardWeap_TileGun::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGun.ManhattanVSize");

	AHazardWeap_TileGun_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.Detach
// ()
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardTile::Detach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.Detach");

	AHazardTile_Detach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.SpawnNeighbour
// (Defined, PreOperator, Net)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// int                            NeighbourIndex                 (Parm)
// bool                           bRunLoopDetection              (Parm)
// bool                           bLockedAxis                    (Parm)
// bool                           bLooped                        (Parm)
// bool                           bSnaked                        (Parm)
// class UHazardTileComponent*    SpawnComponent                 (OptionalParm, Parm, EditInline)
// bool                           bPreCheck                      (OptionalParm, Parm)
// bool                           bAutoLoop                      (OptionalParm, Parm)
// class UHazardTileComponent*    ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardTileComponent* AHazardTile::SpawnNeighbour(const struct FVector& StartLocation, int NeighbourIndex, bool bRunLoopDetection, bool bLockedAxis, bool bLooped, bool bSnaked, class UHazardTileComponent* SpawnComponent, bool bPreCheck, bool bAutoLoop)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.SpawnNeighbour");

	AHazardTile_SpawnNeighbour_Params params;
	params.StartLocation = StartLocation;
	params.NeighbourIndex = NeighbourIndex;
	params.bRunLoopDetection = bRunLoopDetection;
	params.bLockedAxis = bLockedAxis;
	params.bLooped = bLooped;
	params.bSnaked = bSnaked;
	params.SpawnComponent = SpawnComponent;
	params.bPreCheck = bPreCheck;
	params.bAutoLoop = bAutoLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.PassThroughDamage
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  HitActor                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardTile::PassThroughDamage(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.PassThroughDamage");

	AHazardTile_PassThroughDamage_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.CalcWeaponFire
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 EndTrace                       (Parm)
// TArray<struct FImpactInfo>     ImpactList                     (OptionalParm, Parm, OutParm, NeedCtorLink)
// struct FVector                 Extent                         (OptionalParm, Parm)
// struct FImpactInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FImpactInfo AHazardTile::CalcWeaponFire(const struct FVector& StartTrace, const struct FVector& EndTrace, const struct FVector& Extent, TArray<struct FImpactInfo>* ImpactList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.CalcWeaponFire");

	AHazardTile_CalcWeaponFire_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactList != nullptr)
		*ImpactList = params.ImpactList;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.IsWithinPawn
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 TestLocation                   (Parm)
// struct FVector                 MoveDirection                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardTile::IsWithinPawn(const struct FVector& TestLocation, const struct FVector& MoveDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.IsWithinPawn");

	AHazardTile_IsWithinPawn_Params params;
	params.TestLocation = TestLocation;
	params.MoveDirection = MoveDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.Attach
// (Iterator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardTile::Attach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.Attach");

	AHazardTile_Attach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.DoesContainPoint
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardTile::DoesContainPoint(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.DoesContainPoint");

	AHazardTile_DoesContainPoint_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardTile::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.GetClampedLocation");

	AHazardTile_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.SplitTile
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SplitLocation                  (Parm)
// class UHazardTileComponent*    SplitComponent                 (OptionalParm, Parm, EditInline)

void AHazardTile::SplitTile(const struct FVector& SplitLocation, class UHazardTileComponent* SplitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.SplitTile");

	AHazardTile_SplitTile_Params params;
	params.SplitLocation = SplitLocation;
	params.SplitComponent = SplitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.CustomSetTickIsDisabled
// (Iterator)
// Parameters:
// bool                           bNewTickDisabled               (Parm)

void AHazardTile::CustomSetTickIsDisabled(bool bNewTickDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.CustomSetTickIsDisabled");

	AHazardTile_CustomSetTickIsDisabled_Params params;
	params.bNewTickDisabled = bNewTickDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardTile::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.Tick");

	AHazardTile_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.TakeDamage
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AHazardTile::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.TakeDamage");

	AHazardTile_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.FindTileComponent
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// class UHazardTileComponent*    ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardTileComponent* AHazardTile::FindTileComponent(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.FindTileComponent");

	AHazardTile_FindTileComponent_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.SetupTile
// ()

void AHazardTile::SetupTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.SetupTile");

	AHazardTile_SetupTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.PreBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardTile::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.PreBeginPlay");

	AHazardTile_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.ResetState
// (Iterator)

void AHazardTile::ResetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.ResetState");

	AHazardTile_ResetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.CheckReset
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardTile::CheckReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.CheckReset");

	AHazardTile_CheckReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.UpdateDecals
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bPreUpdate                     (Parm)

void AHazardTile::UpdateDecals(bool bPreUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.UpdateDecals");

	AHazardTile_UpdateDecals_Params params;
	params.bPreUpdate = bPreUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.Reset
// (Final, Defined, Iterator, Latent, Singular)

void AHazardTile::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.Reset");

	AHazardTile_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.RemoveComponent
// (Defined, Iterator, PreOperator)
// Parameters:
// class UHazardTileComponent*    DestroyedComponent             (Parm, EditInline)

void AHazardTile::RemoveComponent(class UHazardTileComponent* DestroyedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.RemoveComponent");

	AHazardTile_RemoveComponent_Params params;
	params.DestroyedComponent = DestroyedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.AddComponent
// (Iterator)
// Parameters:
// class UHazardTileComponent*    ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardTileComponent* AHazardTile::AddComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.AddComponent");

	AHazardTile_AddComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardTile::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.PointInBox");

	AHazardTile_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardTile::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.NormalizeActor");

	AHazardTile_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTile.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardTile::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.GetNextPointOnLine");

	AHazardTile_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardTile::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.RoundToScale");

	AHazardTile_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardTile::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.RoundVectorToScale");

	AHazardTile_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardTile::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.getIndexNormal");

	AHazardTile_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardTile::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.getMinLocationIndex");

	AHazardTile_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardTile::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.getLocationIndex");

	AHazardTile_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardTile::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.RotateAroundAxis");

	AHazardTile_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardTile::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.CeilValue");

	AHazardTile_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardTile::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.FloorValue");

	AHazardTile_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTile.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardTile::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTile.ManhattanVSize");

	AHazardTile_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRecursiveCylinder.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardRecursiveCylinder::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRecursiveCylinder.Tick");

	AHazardRecursiveCylinder_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRecursiveCylinder.TestTeleport
// (Final, Defined, Iterator, Latent, Singular)

void AHazardRecursiveCylinder::TestTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRecursiveCylinder.TestTeleport");

	AHazardRecursiveCylinder_TestTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRecursiveCylinder.UnTouch
// (Iterator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardRecursiveCylinder::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRecursiveCylinder.UnTouch");

	AHazardRecursiveCylinder_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRecursiveCylinder.Touch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardRecursiveCylinder::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRecursiveCylinder.Touch");

	AHazardRecursiveCylinder_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRecursiveCylinder.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardRecursiveCylinder::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRecursiveCylinder.PostBeginPlay");

	AHazardRecursiveCylinder_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.UpdateDuplicates
// (Final, Defined, Iterator, Latent, Singular)

void AHazardProj_GuideTile::UpdateDuplicates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.UpdateDuplicates");

	AHazardProj_GuideTile_UpdateDuplicates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.IsOverlappingVolume
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardDuplicateVolume*  TestVolume                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardProj_GuideTile::IsOverlappingVolume(class AHazardDuplicateVolume* TestVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.IsOverlappingVolume");

	AHazardProj_GuideTile_IsOverlappingVolume_Params params;
	params.TestVolume = TestVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.KillDuplicate
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardDuplicateVolume*  newDuplicateVolume             (Parm)

void AHazardProj_GuideTile::KillDuplicate(class AHazardDuplicateVolume* newDuplicateVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.KillDuplicate");

	AHazardProj_GuideTile_KillDuplicate_Params params;
	params.newDuplicateVolume = newDuplicateVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.SpawnDuplicate
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AHazardDuplicateVolume*  newDuplicateVolume             (Parm)

void AHazardProj_GuideTile::SpawnDuplicate(class AHazardDuplicateVolume* newDuplicateVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.SpawnDuplicate");

	AHazardProj_GuideTile_SpawnDuplicate_Params params;
	params.newDuplicateVolume = newDuplicateVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.Explode
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardProj_GuideTile::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.Explode");

	AHazardProj_GuideTile_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.ProcessTouch
// (Iterator)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardProj_GuideTile::ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.ProcessTouch");

	AHazardProj_GuideTile_ProcessTouch_Params params;
	params.Other = Other;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.LockTile
// (Defined, Iterator, PreOperator)

void AHazardProj_GuideTile::LockTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.LockTile");

	AHazardProj_GuideTile_LockTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.HitWall
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  Wall                           (Parm)
// class UPrimitiveComponent*     WallComp                       (Parm, EditInline)

void AHazardProj_GuideTile::HitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.HitWall");

	AHazardProj_GuideTile_HitWall_Params params;
	params.HitNormal = HitNormal;
	params.Wall = Wall;
	params.WallComp = WallComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.TakeDamage
// (Iterator)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AHazardProj_GuideTile::TakeDamage(int DamageAmount, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.TakeDamage");

	AHazardProj_GuideTile_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardProj_GuideTile::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.Tick");

	AHazardProj_GuideTile_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.TestSpawnDuplicate
// (Defined, Iterator, PreOperator)

void AHazardProj_GuideTile::TestSpawnDuplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.TestSpawnDuplicate");

	AHazardProj_GuideTile_TestSpawnDuplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.Init
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Direction                      (Parm)

void AHazardProj_GuideTile::Init(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.Init");

	AHazardProj_GuideTile_Init_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.TestCollision
// (Final, Defined, Iterator, Latent, Singular)

void AHazardProj_GuideTile::TestCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.TestCollision");

	AHazardProj_GuideTile_TestCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.Lock
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class UHazardTileComponent*    ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardTileComponent* AHazardProj_GuideTile::Lock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.Lock");

	AHazardProj_GuideTile_Lock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.Destroyed
// (Iterator)

void AHazardProj_GuideTile::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.Destroyed");

	AHazardProj_GuideTile_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.InitializeMaterial
// (Defined, Iterator, PreOperator)

void AHazardProj_GuideTile::InitializeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.InitializeMaterial");

	AHazardProj_GuideTile_InitializeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.PostBeginPlay
// (Iterator)

void AHazardProj_GuideTile::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.PostBeginPlay");

	AHazardProj_GuideTile_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardProj_GuideTile::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.PointInBox");

	AHazardProj_GuideTile_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardProj_GuideTile::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.NormalizeActor");

	AHazardProj_GuideTile_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardProj_GuideTile.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardProj_GuideTile::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.GetNextPointOnLine");

	AHazardProj_GuideTile_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardProj_GuideTile::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.RoundToScale");

	AHazardProj_GuideTile_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardProj_GuideTile::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.RoundVectorToScale");

	AHazardProj_GuideTile_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardProj_GuideTile::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.getIndexNormal");

	AHazardProj_GuideTile_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardProj_GuideTile::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.getMinLocationIndex");

	AHazardProj_GuideTile_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardProj_GuideTile::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.getLocationIndex");

	AHazardProj_GuideTile_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardProj_GuideTile::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.RotateAroundAxis");

	AHazardProj_GuideTile_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardProj_GuideTile::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.CeilValue");

	AHazardProj_GuideTile_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardProj_GuideTile::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.FloorValue");

	AHazardProj_GuideTile_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_GuideTile.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardProj_GuideTile::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_GuideTile.ManhattanVSize");

	AHazardProj_GuideTile_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardDuplicateVolume::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.Tick");

	AHazardDuplicateVolume_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDuplicateVolume.UnTouch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardDuplicateVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.UnTouch");

	AHazardDuplicateVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDuplicateVolume.Touch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardDuplicateVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.Touch");

	AHazardDuplicateVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDuplicateVolume.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDuplicateVolume::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.GetClampedLocation");

	AHazardDuplicateVolume_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardDuplicateVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.PostBeginPlay");

	AHazardDuplicateVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDuplicateVolume.DoesContainPoint
// (Iterator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardDuplicateVolume::DoesContainPoint(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.DoesContainPoint");

	AHazardDuplicateVolume_DoesContainPoint_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardDuplicateVolume::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.PointInBox");

	AHazardDuplicateVolume_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardDuplicateVolume::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.NormalizeActor");

	AHazardDuplicateVolume_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDuplicateVolume.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDuplicateVolume::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.GetNextPointOnLine");

	AHazardDuplicateVolume_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDuplicateVolume::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.RoundToScale");

	AHazardDuplicateVolume_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDuplicateVolume::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.RoundVectorToScale");

	AHazardDuplicateVolume_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDuplicateVolume::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.getIndexNormal");

	AHazardDuplicateVolume_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDuplicateVolume::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.getMinLocationIndex");

	AHazardDuplicateVolume_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDuplicateVolume::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.getLocationIndex");

	AHazardDuplicateVolume_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDuplicateVolume::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.RotateAroundAxis");

	AHazardDuplicateVolume_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDuplicateVolume::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.CeilValue");

	AHazardDuplicateVolume_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDuplicateVolume::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.FloorValue");

	AHazardDuplicateVolume_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDuplicateVolume.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDuplicateVolume::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDuplicateVolume.ManhattanVSize");

	AHazardDuplicateVolume_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.UnTouch
// (Iterator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardLaser::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.UnTouch");

	AHazardLaser_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardLaser.Touch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardLaser::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.Touch");

	AHazardLaser_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardLaser.CheckBlocked
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardLaser::CheckBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.CheckBlocked");

	AHazardLaser_CheckBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.CheckTouchingPlayer
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardLaser::CheckTouchingPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.CheckTouchingPlayer");

	AHazardLaser_CheckTouchingPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.Tick
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardLaser::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.Tick");

	AHazardLaser_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardLaser.UpdateBeam
// (Defined, PreOperator, Net)

void AHazardLaser::UpdateBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.UpdateBeam");

	AHazardLaser_UpdateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardLaser.CalcWeaponFire
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 TraceStart                     (Parm)
// struct FVector                 TraceEnd                       (Parm)
// TArray<struct FImpactInfo>     ImpactList                     (OptionalParm, Parm, OutParm, NeedCtorLink)
// struct FImpactInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FImpactInfo AHazardLaser::CalcWeaponFire(const struct FVector& TraceStart, const struct FVector& TraceEnd, TArray<struct FImpactInfo>* ImpactList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.CalcWeaponFire");

	AHazardLaser_CalcWeaponFire_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactList != nullptr)
		*ImpactList = params.ImpactList;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.PassThroughDamage
// (Iterator)
// Parameters:
// class AActor*                  HitActor                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardLaser::PassThroughDamage(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.PassThroughDamage");

	AHazardLaser_PassThroughDamage_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.InitializeMaterial
// (Defined, Iterator, PreOperator)

void AHazardLaser::InitializeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.InitializeMaterial");

	AHazardLaser_InitializeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardLaser.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardLaser::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.PostBeginPlay");

	AHazardLaser_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardLaser.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardLaser::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.PointInBox");

	AHazardLaser_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardLaser::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.NormalizeActor");

	AHazardLaser_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardLaser.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardLaser::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.GetNextPointOnLine");

	AHazardLaser_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardLaser::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.RoundToScale");

	AHazardLaser_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardLaser::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.RoundVectorToScale");

	AHazardLaser_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardLaser::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.getIndexNormal");

	AHazardLaser_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardLaser::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.getMinLocationIndex");

	AHazardLaser_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardLaser::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.getLocationIndex");

	AHazardLaser_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardLaser::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.RotateAroundAxis");

	AHazardLaser_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardLaser::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.CeilValue");

	AHazardLaser_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardLaser::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.FloorValue");

	AHazardLaser_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardLaser.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardLaser::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardLaser.ManhattanVSize");

	AHazardLaser_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardNoShootField.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardNoShootField::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoShootField.Tick");

	AHazardNoShootField_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardNoShootField.UnTouch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardNoShootField::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoShootField.UnTouch");

	AHazardNoShootField_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardNoShootField.Touch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardNoShootField::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoShootField.Touch");

	AHazardNoShootField_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardNoShootField.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardNoShootField::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoShootField.GetClampedLocation");

	AHazardNoShootField_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardNoShootField.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardNoShootField::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoShootField.PostBeginPlay");

	AHazardNoShootField_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTile.Detach
// ()
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardDistanceTile::Detach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.Detach");

	AHazardDistanceTile_Detach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTile.Attach
// (Iterator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardDistanceTile::Attach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.Attach");

	AHazardDistanceTile_Attach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTile.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDistanceTile::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.GetClampedLocation");

	AHazardDistanceTile_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardDistanceTile::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.Tick");

	AHazardDistanceTile_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTile.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardDistanceTile::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.PostBeginPlay");

	AHazardDistanceTile_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTile.CheckReset
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardDistanceTile::CheckReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.CheckReset");

	AHazardDistanceTile_CheckReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.Reset
// (Defined, Iterator, PreOperator)

void AHazardDistanceTile::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.Reset");

	AHazardDistanceTile_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTile.RemoveComponent
// (Defined, Iterator, PreOperator)
// Parameters:
// class UHazardDistanceTileComponent* DestroyedComponent             (Parm, EditInline)

void AHazardDistanceTile::RemoveComponent(class UHazardDistanceTileComponent* DestroyedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.RemoveComponent");

	AHazardDistanceTile_RemoveComponent_Params params;
	params.DestroyedComponent = DestroyedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTile.AddComponent
// (Iterator)
// Parameters:
// class UHazardDistanceTileComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardDistanceTileComponent* AHazardDistanceTile::AddComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.AddComponent");

	AHazardDistanceTile_AddComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardDistanceTile::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.PointInBox");

	AHazardDistanceTile_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardDistanceTile::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.NormalizeActor");

	AHazardDistanceTile_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTile.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDistanceTile::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.GetNextPointOnLine");

	AHazardDistanceTile_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDistanceTile::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.RoundToScale");

	AHazardDistanceTile_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDistanceTile::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.RoundVectorToScale");

	AHazardDistanceTile_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDistanceTile::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.getIndexNormal");

	AHazardDistanceTile_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDistanceTile::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.getMinLocationIndex");

	AHazardDistanceTile_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDistanceTile::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.getLocationIndex");

	AHazardDistanceTile_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDistanceTile::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.RotateAroundAxis");

	AHazardDistanceTile_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDistanceTile::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.CeilValue");

	AHazardDistanceTile_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDistanceTile::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.FloorValue");

	AHazardDistanceTile_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTile.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDistanceTile::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTile.ManhattanVSize");

	AHazardDistanceTile_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardBlackTileProjectile.Explode
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardBlackTileProjectile::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.Explode");

	AHazardBlackTileProjectile_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.ProcessTouch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardBlackTileProjectile::ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.ProcessTouch");

	AHazardBlackTileProjectile_ProcessTouch_Params params;
	params.Other = Other;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.LockTile
// (Defined, Iterator, PreOperator)

void AHazardBlackTileProjectile::LockTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.LockTile");

	AHazardBlackTileProjectile_LockTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.HitWall
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  Wall                           (Parm)
// class UPrimitiveComponent*     WallComp                       (Parm, EditInline)

void AHazardBlackTileProjectile::HitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.HitWall");

	AHazardBlackTileProjectile_HitWall_Params params;
	params.HitNormal = HitNormal;
	params.Wall = Wall;
	params.WallComp = WallComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.TakeDamage
// (Iterator)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AHazardBlackTileProjectile::TakeDamage(int DamageAmount, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.TakeDamage");

	AHazardBlackTileProjectile_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.Tick
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardBlackTileProjectile::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.Tick");

	AHazardBlackTileProjectile_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.Init
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Direction                      (Parm)

void AHazardBlackTileProjectile::Init(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.Init");

	AHazardBlackTileProjectile_Init_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.FindLockedSpot
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardBlackTileProjectile::FindLockedSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.FindLockedSpot");

	AHazardBlackTileProjectile_FindLockedSpot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardBlackTileProjectile.TestCollision
// (Defined, Iterator, PreOperator)

void AHazardBlackTileProjectile::TestCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.TestCollision");

	AHazardBlackTileProjectile_TestCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.Lock
// (Defined, Iterator, PreOperator)
// Parameters:
// class UHazardTileComponent*    ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardTileComponent* AHazardBlackTileProjectile::Lock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.Lock");

	AHazardBlackTileProjectile_Lock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardBlackTileProjectile.Destroyed
// (Iterator)

void AHazardBlackTileProjectile::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.Destroyed");

	AHazardBlackTileProjectile_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.InitializeMaterial
// (Defined, Iterator, PreOperator)

void AHazardBlackTileProjectile::InitializeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.InitializeMaterial");

	AHazardBlackTileProjectile_InitializeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardBlackTileProjectile.PostBeginPlay
// (Iterator)

void AHazardBlackTileProjectile::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardBlackTileProjectile.PostBeginPlay");

	AHazardBlackTileProjectile_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.InitCheatManager
// ()

void UHazardCheatManager::InitCheatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.InitCheatManager");

	UHazardCheatManager_InitCheatManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.VerbosePathDebug
// (Defined, Iterator, PreOperator)

void UHazardCheatManager::VerbosePathDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.VerbosePathDebug");

	UHazardCheatManager_VerbosePathDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.TestLevel
// (Defined, Iterator, PreOperator)

void UHazardCheatManager::TestLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.TestLevel");

	UHazardCheatManager_TestLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.EnableDebugCamera
// (Defined, Iterator, PreOperator)

void UHazardCheatManager::EnableDebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.EnableDebugCamera");

	UHazardCheatManager_EnableDebugCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.ToggleDebugCamera
// (Defined, Iterator, PreOperator)

void UHazardCheatManager::ToggleDebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.ToggleDebugCamera");

	UHazardCheatManager_ToggleDebugCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.StreamLevelOut
// (Iterator)
// Parameters:
// struct FName                   PackageName                    (Parm)

void UHazardCheatManager::StreamLevelOut(const struct FName& PackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.StreamLevelOut");

	UHazardCheatManager_StreamLevelOut_Params params;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.OnlyLoadLevel
// (Iterator)
// Parameters:
// struct FName                   PackageName                    (Parm)

void UHazardCheatManager::OnlyLoadLevel(const struct FName& PackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.OnlyLoadLevel");

	UHazardCheatManager_OnlyLoadLevel_Params params;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.StreamLevelIn
// (Iterator)
// Parameters:
// struct FName                   PackageName                    (Parm)

void UHazardCheatManager::StreamLevelIn(const struct FName& PackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.StreamLevelIn");

	UHazardCheatManager_StreamLevelIn_Params params;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.SetLevelStreamingStatus
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FName                   PackageName                    (Parm)
// bool                           bShouldBeLoaded                (Parm)
// bool                           bShouldBeVisible               (Parm)

void UHazardCheatManager::SetLevelStreamingStatus(const struct FName& PackageName, bool bShouldBeLoaded, bool bShouldBeVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.SetLevelStreamingStatus");

	UHazardCheatManager_SetLevelStreamingStatus_Params params;
	params.PackageName = PackageName;
	params.bShouldBeLoaded = bShouldBeLoaded;
	params.bShouldBeVisible = bShouldBeVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.ViewClass
// (Defined, Iterator, PreOperator)
// Parameters:
// class UClass*                  aClass                         (Parm)

void UHazardCheatManager::ViewClass(class UClass* aClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.ViewClass");

	UHazardCheatManager_ViewClass_Params params;
	params.aClass = aClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.ViewActor
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FName                   actorName                      (Parm)

void UHazardCheatManager::ViewActor(const struct FName& actorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.ViewActor");

	UHazardCheatManager_ViewActor_Params params;
	params.actorName = actorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.ViewPlayer
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void UHazardCheatManager::ViewPlayer(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.ViewPlayer");

	UHazardCheatManager_ViewPlayer_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.ViewSelf
// (Iterator)
// Parameters:
// bool                           bQuiet                         (OptionalParm, Parm)

void UHazardCheatManager::ViewSelf(bool bQuiet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.ViewSelf");

	UHazardCheatManager_ViewSelf_Params params;
	params.bQuiet = bQuiet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.PlayersOnly
// (Iterator)

void UHazardCheatManager::PlayersOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.PlayersOnly");

	UHazardCheatManager_PlayersOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.Slomo
// (Iterator)
// Parameters:
// float                          T                              (Parm)

void UHazardCheatManager::Slomo(float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.Slomo");

	UHazardCheatManager_Slomo_Params params;
	params.T = T;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.Ghost
// (Defined, Iterator, PreOperator)

void UHazardCheatManager::Ghost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.Ghost");

	UHazardCheatManager_Ghost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.Walk
// (Iterator)

void UHazardCheatManager::Walk()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.Walk");

	UHazardCheatManager_Walk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.Fly
// (Iterator)

void UHazardCheatManager::Fly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.Fly");

	UHazardCheatManager_Fly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.KillViewedActor
// (Defined, Iterator, PreOperator)

void UHazardCheatManager::KillViewedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.KillViewedActor");

	UHazardCheatManager_KillViewedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.WriteToLog
// (Iterator)
// Parameters:
// struct FString                 Param                          (Parm, NeedCtorLink)

void UHazardCheatManager::WriteToLog(const struct FString& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.WriteToLog");

	UHazardCheatManager_WriteToLog_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.FreezeFrame
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Delay                          (Parm)

void UHazardCheatManager::FreezeFrame(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.FreezeFrame");

	UHazardCheatManager_FreezeFrame_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.ListDynamicActors
// (Iterator)

void UHazardCheatManager::ListDynamicActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.ListDynamicActors");

	UHazardCheatManager_ListDynamicActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.DebugPause
// (Iterator)

void UHazardCheatManager::DebugPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.DebugPause");

	UHazardCheatManager_DebugPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.EditAIByTrace
// (Defined, Iterator, PreOperator)

void UHazardCheatManager::EditAIByTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.EditAIByTrace");

	UHazardCheatManager_EditAIByTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.DebugAI
// ()
// Parameters:
// struct FName                   Category                       (OptionalParm, Parm, CoerceParm)

void UHazardCheatManager::DebugAI(const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.DebugAI");

	UHazardCheatManager_DebugAI_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.UnlockDarkGun
// (Iterator)

void UHazardCheatManager::UnlockDarkGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.UnlockDarkGun");

	UHazardCheatManager_UnlockDarkGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.UnlockBlackGun
// (Iterator)

void UHazardCheatManager::UnlockBlackGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.UnlockBlackGun");

	UHazardCheatManager_UnlockBlackGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.UnlockGun
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            gunLevel                       (Parm)

void UHazardCheatManager::UnlockGun(int gunLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.UnlockGun");

	UHazardCheatManager_UnlockGun_Params params;
	params.gunLevel = gunLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.UnlockAll
// ()

void UHazardCheatManager::UnlockAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.UnlockAll");

	UHazardCheatManager_UnlockAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardCheatManager.UnlockMap
// (Defined, Iterator, PreOperator)

void UHazardCheatManager::UnlockMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardCheatManager.UnlockMap");

	UHazardCheatManager_UnlockMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTrigger.Touch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardTrigger::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTrigger.Touch");

	AHazardTrigger_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTrigger.Unlock
// (Defined, Iterator, PreOperator)

void AHazardTrigger::Unlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTrigger.Unlock");

	AHazardTrigger_Unlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.SplitCluster
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SplitLocation                  (Parm)

void UHazardDistanceTileComponent::SplitCluster(const struct FVector& SplitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.SplitCluster");

	UHazardDistanceTileComponent_SplitCluster_Params params;
	params.SplitLocation = SplitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.SplitAxisCluster
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 LocalSplitLocation             (Parm)
// struct FVector                 SplitDirection                 (Parm)

void UHazardDistanceTileComponent::SplitAxisCluster(const struct FVector& LocalSplitLocation, const struct FVector& SplitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.SplitAxisCluster");

	UHazardDistanceTileComponent_SplitAxisCluster_Params params;
	params.LocalSplitLocation = LocalSplitLocation;
	params.SplitDirection = SplitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.CheckDistance
// (Defined, Iterator, PreOperator)

void UHazardDistanceTileComponent::CheckDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.CheckDistance");

	UHazardDistanceTileComponent_CheckDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.GetNumClusters
// (Iterator)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardDistanceTileComponent::GetNumClusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.GetNumClusters");

	UHazardDistanceTileComponent_GetNumClusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.SetNumClusters
// (Defined, Iterator, PreOperator)

void UHazardDistanceTileComponent::SetNumClusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.SetNumClusters");

	UHazardDistanceTileComponent_SetNumClusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.SetScale3D
// (Iterator)
// Parameters:
// struct FVector                 NewScale                       (Parm)

void UHazardDistanceTileComponent::SetScale3D(const struct FVector& NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.SetScale3D");

	UHazardDistanceTileComponent_SetScale3D_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.FinishedInterpolation
// (Iterator)

void UHazardDistanceTileComponent::FinishedInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.FinishedInterpolation");

	UHazardDistanceTileComponent_FinishedInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.SetBlendAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void UHazardDistanceTileComponent::SetBlendAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.SetBlendAmount");

	UHazardDistanceTileComponent_SetBlendAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.SetGlobalCollision
// (Iterator)
// Parameters:
// bool                           bEnabled                       (Parm)

void UHazardDistanceTileComponent::SetGlobalCollision(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.SetGlobalCollision");

	UHazardDistanceTileComponent_SetGlobalCollision_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.UpdateGlobalCollision
// (Iterator)

void UHazardDistanceTileComponent::UpdateGlobalCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.UpdateGlobalCollision");

	UHazardDistanceTileComponent_UpdateGlobalCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.UpdateMovement
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardDistanceTileComponent::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.UpdateMovement");

	UHazardDistanceTileComponent_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.InterpolateTo
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          interpValue                    (Parm)

void UHazardDistanceTileComponent::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.InterpolateTo");

	UHazardDistanceTileComponent_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.DoClose
// (Iterator)

void UHazardDistanceTileComponent::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.DoClose");

	UHazardDistanceTileComponent_DoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.DoOpen
// (Iterator)

void UHazardDistanceTileComponent::DoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.DoOpen");

	UHazardDistanceTileComponent_DoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.FinishedOpen
// (Iterator)

void UHazardDistanceTileComponent::FinishedOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.FinishedOpen");

	UHazardDistanceTileComponent_FinishedOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.FinishedClose
// (Iterator)

void UHazardDistanceTileComponent::FinishedClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.FinishedClose");

	UHazardDistanceTileComponent_FinishedClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.Close
// (Iterator)

void UHazardDistanceTileComponent::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.Close");

	UHazardDistanceTileComponent_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.Open
// (Defined, Iterator, PreOperator)

void UHazardDistanceTileComponent::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.Open");

	UHazardDistanceTileComponent_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardDistanceTileComponent::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.Tick");

	UHazardDistanceTileComponent_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.UpdateWhiteSounds
// (Iterator)

void UHazardDistanceTileComponent::UpdateWhiteSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.UpdateWhiteSounds");

	UHazardDistanceTileComponent_UpdateWhiteSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.CreateAndSetNewMaterialInstanceConstant
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            ElementIndex                   (Parm)
// class UMaterialInterface*      NewMaterial                    (Parm)
// class UMaterialInstanceConstant* ReturnValue                    (Parm, OutParm, ReturnParm)

class UMaterialInstanceConstant* UHazardDistanceTileComponent::CreateAndSetNewMaterialInstanceConstant(int ElementIndex, class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.CreateAndSetNewMaterialInstanceConstant");

	UHazardDistanceTileComponent_CreateAndSetNewMaterialInstanceConstant_Params params;
	params.ElementIndex = ElementIndex;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardDistanceTileComponent::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.GetClampedLocation");

	UHazardDistanceTileComponent_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.InitializeTile
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardDistanceTile*     NewOwner                       (Parm)

void UHazardDistanceTileComponent::InitializeTile(class AHazardDistanceTile* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.InitializeTile");

	UHazardDistanceTileComponent_InitializeTile_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardDistanceTileComponent::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.PointInBox");

	UHazardDistanceTileComponent_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void UHazardDistanceTileComponent::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.NormalizeActor");

	UHazardDistanceTileComponent_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDistanceTileComponent.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardDistanceTileComponent::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.GetNextPointOnLine");

	UHazardDistanceTileComponent_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardDistanceTileComponent::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.RoundToScale");

	UHazardDistanceTileComponent_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardDistanceTileComponent::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.RoundVectorToScale");

	UHazardDistanceTileComponent_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardDistanceTileComponent::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.getIndexNormal");

	UHazardDistanceTileComponent_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardDistanceTileComponent::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.getMinLocationIndex");

	UHazardDistanceTileComponent_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardDistanceTileComponent::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.getLocationIndex");

	UHazardDistanceTileComponent_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardDistanceTileComponent::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.RotateAroundAxis");

	UHazardDistanceTileComponent_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardDistanceTileComponent::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.CeilValue");

	UHazardDistanceTileComponent_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardDistanceTileComponent::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.FloorValue");

	UHazardDistanceTileComponent_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDistanceTileComponent.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardDistanceTileComponent::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDistanceTileComponent.ManhattanVSize");

	UHazardDistanceTileComponent_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.UpdateMovement
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardDoor::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.UpdateMovement");

	AHazardDoor_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.CheckLasers
// (Defined, Iterator, PreOperator)

void AHazardDoor::CheckLasers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.CheckLasers");

	AHazardDoor_CheckLasers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardDoor::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.Tick");

	AHazardDoor_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.Close
// (Defined, Iterator, PreOperator)

void AHazardDoor::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.Close");

	AHazardDoor_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.Open
// (Defined, Iterator, PreOperator)

void AHazardDoor::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.Open");

	AHazardDoor_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.FindOpenEvent
// (Defined, Iterator, PreOperator)

void AHazardDoor::FindOpenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.FindOpenEvent");

	AHazardDoor_FindOpenEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.Reset
// (Defined, Iterator, PreOperator)

void AHazardDoor::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.Reset");

	AHazardDoor_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.InitializeMaterial
// (Iterator)

void AHazardDoor::InitializeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.InitializeMaterial");

	AHazardDoor_InitializeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.SetRingColours
// (Defined, Iterator, PreOperator)

void AHazardDoor::SetRingColours()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.SetRingColours");

	AHazardDoor_SetRingColours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.ShouldPlaySound
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardDoor::ShouldPlaySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.ShouldPlaySound");

	AHazardDoor_ShouldPlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.UpdateRingValues
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            Active                         (Parm)
// int                            Required                       (Parm)

void AHazardDoor::UpdateRingValues(int Active, int Required)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.UpdateRingValues");

	AHazardDoor_UpdateRingValues_Params params;
	params.Active = Active;
	params.Required = Required;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.PlayRingSound
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            Active                         (Parm)
// int                            Required                       (Parm)

void AHazardDoor::PlayRingSound(int Active, int Required)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.PlayRingSound");

	AHazardDoor_PlayRingSound_Params params;
	params.Active = Active;
	params.Required = Required;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.PlayClosedSound
// (Defined, Iterator, PreOperator)

void AHazardDoor::PlayClosedSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.PlayClosedSound");

	AHazardDoor_PlayClosedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.PlayOpenSound
// (Defined, Iterator, PreOperator)

void AHazardDoor::PlayOpenSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.PlayOpenSound");

	AHazardDoor_PlayOpenSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.PostBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardDoor::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.PostBeginPlay");

	AHazardDoor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardDoor::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.PointInBox");

	AHazardDoor_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardDoor::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.NormalizeActor");

	AHazardDoor_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDoor.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDoor::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.GetNextPointOnLine");

	AHazardDoor_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDoor::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.RoundToScale");

	AHazardDoor_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDoor::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.RoundVectorToScale");

	AHazardDoor_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDoor::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.getIndexNormal");

	AHazardDoor_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDoor::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.getMinLocationIndex");

	AHazardDoor_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDoor::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.getLocationIndex");

	AHazardDoor_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDoor::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.RotateAroundAxis");

	AHazardDoor_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDoor::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.CeilValue");

	AHazardDoor_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDoor::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.FloorValue");

	AHazardDoor_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDoor.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDoor::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDoor.ManhattanVSize");

	AHazardDoor_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.TryMove
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          Distance                       (Parm)
// float                          DeltaTime                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDummyPlatform::TryMove(float Distance, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.TryMove");

	AHazardDummyPlatform_TryMove_Params params;
	params.Distance = Distance;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.SetDefaults
// (Defined, Iterator, PreOperator)

void AHazardDummyPlatform::SetDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.SetDefaults");

	AHazardDummyPlatform_SetDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDummyPlatform.PostBeginPlay
// (Iterator)

void AHazardDummyPlatform::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.PostBeginPlay");

	AHazardDummyPlatform_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDummyPlatform.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardDummyPlatform::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.PointInBox");

	AHazardDummyPlatform_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardDummyPlatform::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.NormalizeActor");

	AHazardDummyPlatform_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardDummyPlatform.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDummyPlatform::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.GetNextPointOnLine");

	AHazardDummyPlatform_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDummyPlatform::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.RoundToScale");

	AHazardDummyPlatform_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDummyPlatform::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.RoundVectorToScale");

	AHazardDummyPlatform_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardDummyPlatform::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.getIndexNormal");

	AHazardDummyPlatform_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDummyPlatform::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.getMinLocationIndex");

	AHazardDummyPlatform_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDummyPlatform::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.getLocationIndex");

	AHazardDummyPlatform_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardDummyPlatform::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.RotateAroundAxis");

	AHazardDummyPlatform_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDummyPlatform::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.CeilValue");

	AHazardDummyPlatform_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDummyPlatform::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.FloorValue");

	AHazardDummyPlatform_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardDummyPlatform.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardDummyPlatform::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardDummyPlatform.ManhattanVSize");

	AHazardDummyPlatform_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.UpdateMovement
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardPushBlock::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.UpdateMovement");

	AHazardPushBlock_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.TryMove
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 MovedLocation                  (Parm)
// struct FVector                 MoveAxis                       (Parm)

void AHazardPushBlock::TryMove(const struct FVector& MovedLocation, const struct FVector& MoveAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.TryMove");

	AHazardPushBlock_TryMove_Params params;
	params.MovedLocation = MovedLocation;
	params.MoveAxis = MoveAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 TestLocation                   (Parm)
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPushBlock::GetClampedLocation(const struct FVector& TestLocation, const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.GetClampedLocation");

	AHazardPushBlock_GetClampedLocation_Params params;
	params.TestLocation = TestLocation;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.Pushed
// (Iterator)
// Parameters:
// struct FVector                 PushDirection                  (Parm)

void AHazardPushBlock::Pushed(const struct FVector& PushDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.Pushed");

	AHazardPushBlock_Pushed_Params params;
	params.PushDirection = PushDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.UpdateDuplicates
// (Final, Defined, Iterator, Latent, Singular)

void AHazardPushBlock::UpdateDuplicates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.UpdateDuplicates");

	AHazardPushBlock_UpdateDuplicates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardPushBlock::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.Tick");

	AHazardPushBlock_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.UpdateSounds
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardPushBlock::UpdateSounds(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.UpdateSounds");

	AHazardPushBlock_UpdateSounds_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.Reset
// (Defined, Iterator, PreOperator)

void AHazardPushBlock::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.Reset");

	AHazardPushBlock_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.SpawnDuplicate
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AHazardDuplicateVolume*  NewVolume                      (Parm)

void AHazardPushBlock::SpawnDuplicate(class AHazardDuplicateVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.SpawnDuplicate");

	AHazardPushBlock_SpawnDuplicate_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.PostBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardPushBlock::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.PostBeginPlay");

	AHazardPushBlock_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPushBlock::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.PointInBox");

	AHazardPushBlock_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardPushBlock::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.NormalizeActor");

	AHazardPushBlock_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPushBlock.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPushBlock::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.GetNextPointOnLine");

	AHazardPushBlock_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPushBlock::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.RoundToScale");

	AHazardPushBlock_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPushBlock::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.RoundVectorToScale");

	AHazardPushBlock_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPushBlock::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.getIndexNormal");

	AHazardPushBlock_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPushBlock::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.getMinLocationIndex");

	AHazardPushBlock_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPushBlock::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.getLocationIndex");

	AHazardPushBlock_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPushBlock::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.RotateAroundAxis");

	AHazardPushBlock_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPushBlock::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.CeilValue");

	AHazardPushBlock_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPushBlock::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.FloorValue");

	AHazardPushBlock_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPushBlock.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPushBlock::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPushBlock.ManhattanVSize");

	AHazardPushBlock_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.UpdateMovement
// (Defined, PreOperator, Net)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardElevator::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.UpdateMovement");

	AHazardElevator_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardElevator.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardElevator::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.Tick");

	AHazardElevator_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardElevator.UpdateSounds
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardElevator::UpdateSounds(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.UpdateSounds");

	AHazardElevator_UpdateSounds_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardElevator.MoveDown
// (Defined, Iterator, PreOperator)

void AHazardElevator::MoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.MoveDown");

	AHazardElevator_MoveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardElevator.MoveUp
// (Defined, Iterator, PreOperator)

void AHazardElevator::MoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.MoveUp");

	AHazardElevator_MoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardElevator.InterpolateTo
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          interpValue                    (Parm)

void AHazardElevator::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.InterpolateTo");

	AHazardElevator_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardElevator.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardElevator::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.PostBeginPlay");

	AHazardElevator_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardElevator.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardElevator::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.PointInBox");

	AHazardElevator_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardElevator::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.NormalizeActor");

	AHazardElevator_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardElevator.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardElevator::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.GetNextPointOnLine");

	AHazardElevator_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardElevator::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.RoundToScale");

	AHazardElevator_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardElevator::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.RoundVectorToScale");

	AHazardElevator_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardElevator::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.getIndexNormal");

	AHazardElevator_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardElevator::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.getMinLocationIndex");

	AHazardElevator_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardElevator::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.getLocationIndex");

	AHazardElevator_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardElevator::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.RotateAroundAxis");

	AHazardElevator_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardElevator::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.CeilValue");

	AHazardElevator_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardElevator::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.FloorValue");

	AHazardElevator_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardElevator.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardElevator::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardElevator.ManhattanVSize");

	AHazardElevator_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.SetBlendAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void AHazardEndingLight::SetBlendAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.SetBlendAmount");

	AHazardEndingLight_SetBlendAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingLight.UpdateMovement
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardEndingLight::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.UpdateMovement");

	AHazardEndingLight_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingLight.InterpolateTo
// (Iterator)
// Parameters:
// float                          interpValue                    (Parm)

void AHazardEndingLight::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.InterpolateTo");

	AHazardEndingLight_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingLight.SetDuplicatesHidden
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bNewHidden                     (Parm)

void AHazardEndingLight::SetDuplicatesHidden(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.SetDuplicatesHidden");

	AHazardEndingLight_SetDuplicatesHidden_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingLight.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardEndingLight::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.Tick");

	AHazardEndingLight_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingLight.SetupDuplicates
// (Final, Defined, Iterator, Latent, Singular)

void AHazardEndingLight::SetupDuplicates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.SetupDuplicates");

	AHazardEndingLight_SetupDuplicates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingLight.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardEndingLight::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.PostBeginPlay");

	AHazardEndingLight_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingLight.UpdateDuplicates
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 NewTranslation                 (Parm)

void AHazardEndingLight::UpdateDuplicates(const struct FVector& NewTranslation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.UpdateDuplicates");

	AHazardEndingLight_UpdateDuplicates_Params params;
	params.NewTranslation = NewTranslation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingLight.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardEndingLight::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.PointInBox");

	AHazardEndingLight_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardEndingLight::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.NormalizeActor");

	AHazardEndingLight_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingLight.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardEndingLight::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.GetNextPointOnLine");

	AHazardEndingLight_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardEndingLight::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.RoundToScale");

	AHazardEndingLight_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardEndingLight::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.RoundVectorToScale");

	AHazardEndingLight_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardEndingLight::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.getIndexNormal");

	AHazardEndingLight_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardEndingLight::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.getMinLocationIndex");

	AHazardEndingLight_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardEndingLight::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.getLocationIndex");

	AHazardEndingLight_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardEndingLight::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.RotateAroundAxis");

	AHazardEndingLight_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardEndingLight::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.CeilValue");

	AHazardEndingLight_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardEndingLight::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.FloorValue");

	AHazardEndingLight_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingLight.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardEndingLight::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingLight.ManhattanVSize");

	AHazardEndingLight_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.EnableTick
// (Iterator)

void AHazardEndingPlatform::EnableTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.EnableTick");

	AHazardEndingPlatform_EnableTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.SetBlendAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void AHazardEndingPlatform::SetBlendAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.SetBlendAmount");

	AHazardEndingPlatform_SetBlendAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.UpdateMovement
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardEndingPlatform::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.UpdateMovement");

	AHazardEndingPlatform_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.InterpolateTo
// (Iterator)
// Parameters:
// float                          interpValue                    (Parm)

void AHazardEndingPlatform::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.InterpolateTo");

	AHazardEndingPlatform_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.DoClose
// (Iterator)

void AHazardEndingPlatform::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.DoClose");

	AHazardEndingPlatform_DoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.DoOpen
// (Iterator)

void AHazardEndingPlatform::DoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.DoOpen");

	AHazardEndingPlatform_DoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.SetDuplicatesHidden
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bNewHidden                     (Parm)

void AHazardEndingPlatform::SetDuplicatesHidden(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.SetDuplicatesHidden");

	AHazardEndingPlatform_SetDuplicatesHidden_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardEndingPlatform::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.Tick");

	AHazardEndingPlatform_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.SetupDuplicates
// (Final, Defined, Iterator, Latent, Singular)

void AHazardEndingPlatform::SetupDuplicates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.SetupDuplicates");

	AHazardEndingPlatform_SetupDuplicates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardEndingPlatform::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.PostBeginPlay");

	AHazardEndingPlatform_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.UpdateDuplicates
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// struct FVector                 NewTranslation                 (OptionalParm, Parm)

void AHazardEndingPlatform::UpdateDuplicates(const struct FVector& NewTranslation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.UpdateDuplicates");

	AHazardEndingPlatform_UpdateDuplicates_Params params;
	params.NewTranslation = NewTranslation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardEndingPlatform::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.PointInBox");

	AHazardEndingPlatform_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardEndingPlatform::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.NormalizeActor");

	AHazardEndingPlatform_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardEndingPlatform.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardEndingPlatform::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.GetNextPointOnLine");

	AHazardEndingPlatform_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardEndingPlatform::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.RoundToScale");

	AHazardEndingPlatform_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardEndingPlatform::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.RoundVectorToScale");

	AHazardEndingPlatform_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardEndingPlatform::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.getIndexNormal");

	AHazardEndingPlatform_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardEndingPlatform::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.getMinLocationIndex");

	AHazardEndingPlatform_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardEndingPlatform::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.getLocationIndex");

	AHazardEndingPlatform_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardEndingPlatform::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.RotateAroundAxis");

	AHazardEndingPlatform_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardEndingPlatform::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.CeilValue");

	AHazardEndingPlatform_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardEndingPlatform::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.FloorValue");

	AHazardEndingPlatform_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardEndingPlatform.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardEndingPlatform::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardEndingPlatform.ManhattanVSize");

	AHazardEndingPlatform_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.SetBlendAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void AHazardExitDoors::SetBlendAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.SetBlendAmount");

	AHazardExitDoors_SetBlendAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.UpdateMovement
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardExitDoors::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.UpdateMovement");

	AHazardExitDoors_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.InterpolateTo
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          interpValue                    (Parm)

void AHazardExitDoors::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.InterpolateTo");

	AHazardExitDoors_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.DoClose
// (Iterator)

void AHazardExitDoors::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.DoClose");

	AHazardExitDoors_DoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.DoOpen
// (Iterator)

void AHazardExitDoors::DoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.DoOpen");

	AHazardExitDoors_DoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardExitDoors::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.Tick");

	AHazardExitDoors_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.PlayClosedSound
// (Defined, Iterator, PreOperator)

void AHazardExitDoors::PlayClosedSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.PlayClosedSound");

	AHazardExitDoors_PlayClosedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.PlayOpenSound
// (Defined, Iterator, PreOperator)

void AHazardExitDoors::PlayOpenSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.PlayOpenSound");

	AHazardExitDoors_PlayOpenSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardExitDoors::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.PostBeginPlay");

	AHazardExitDoors_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardExitDoors::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.PointInBox");

	AHazardExitDoors_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardExitDoors::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.NormalizeActor");

	AHazardExitDoors_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardExitDoors.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardExitDoors::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.GetNextPointOnLine");

	AHazardExitDoors_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardExitDoors::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.RoundToScale");

	AHazardExitDoors_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardExitDoors::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.RoundVectorToScale");

	AHazardExitDoors_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardExitDoors::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.getIndexNormal");

	AHazardExitDoors_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardExitDoors::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.getMinLocationIndex");

	AHazardExitDoors_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardExitDoors::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.getLocationIndex");

	AHazardExitDoors_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardExitDoors::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.RotateAroundAxis");

	AHazardExitDoors_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardExitDoors::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.CeilValue");

	AHazardExitDoors_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardExitDoors::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.FloorValue");

	AHazardExitDoors_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardExitDoors.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardExitDoors::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardExitDoors.ManhattanVSize");

	AHazardExitDoors_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawnSoundGroup.GetBigLandSound
// (Defined, Iterator, PreOperator)
// Parameters:
// TEnumAsByte<EMaterialType>     MaterialType                   (Parm)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundCue* UHazardPawnSoundGroup::GetBigLandSound(TEnumAsByte<EMaterialType> MaterialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawnSoundGroup.GetBigLandSound");

	UHazardPawnSoundGroup_GetBigLandSound_Params params;
	params.MaterialType = MaterialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawnSoundGroup.GetLandSound
// (Defined, Iterator, PreOperator)
// Parameters:
// TEnumAsByte<EMaterialType>     MaterialType                   (Parm)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundCue* UHazardPawnSoundGroup::GetLandSound(TEnumAsByte<EMaterialType> MaterialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawnSoundGroup.GetLandSound");

	UHazardPawnSoundGroup_GetLandSound_Params params;
	params.MaterialType = MaterialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawnSoundGroup.GetJumpSound
// (Defined, Iterator, PreOperator)
// Parameters:
// TEnumAsByte<EMaterialType>     MaterialType                   (Parm)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundCue* UHazardPawnSoundGroup::GetJumpSound(TEnumAsByte<EMaterialType> MaterialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawnSoundGroup.GetJumpSound");

	UHazardPawnSoundGroup_GetJumpSound_Params params;
	params.MaterialType = MaterialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawnSoundGroup.GetRunningFootstepSound
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            FootDown                       (Parm)
// TEnumAsByte<EMaterialType>     MaterialType                   (Parm)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundCue* UHazardPawnSoundGroup::GetRunningFootstepSound(int FootDown, TEnumAsByte<EMaterialType> MaterialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawnSoundGroup.GetRunningFootstepSound");

	UHazardPawnSoundGroup_GetRunningFootstepSound_Params params;
	params.FootDown = FootDown;
	params.MaterialType = MaterialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPawnSoundGroup.GetWalkingFootstepSound
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            FootDown                       (Parm)
// TEnumAsByte<EMaterialType>     MaterialType                   (Parm)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundCue* UHazardPawnSoundGroup::GetWalkingFootstepSound(int FootDown, TEnumAsByte<EMaterialType> MaterialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPawnSoundGroup.GetWalkingFootstepSound");

	UHazardPawnSoundGroup_GetWalkingFootstepSound_Params params;
	params.FootDown = FootDown;
	params.MaterialType = MaterialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardFootstepVolume.ResetMoveThreshold
// (Defined, Iterator, PreOperator)

void AHazardFootstepVolume::ResetMoveThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardFootstepVolume.ResetMoveThreshold");

	AHazardFootstepVolume_ResetMoveThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardFootstepVolume.TestPlayPushSound
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardPawn*             MovingPawn                     (Parm)
// float                          NewDistance                    (Parm)

void AHazardFootstepVolume::TestPlayPushSound(class AHazardPawn* MovingPawn, float NewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardFootstepVolume.TestPlayPushSound");

	AHazardFootstepVolume_TestPlayPushSound_Params params;
	params.MovingPawn = MovingPawn;
	params.NewDistance = NewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardFootstepVolume.UnTouch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardFootstepVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardFootstepVolume.UnTouch");

	AHazardFootstepVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardFootstepVolume.Touch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardFootstepVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardFootstepVolume.Touch");

	AHazardFootstepVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.Detach
// ()
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardStepTile::Detach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.Detach");

	AHazardStepTile_Detach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.Attach
// (Iterator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardStepTile::Attach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.Attach");

	AHazardStepTile_Attach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardStepTile::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.GetClampedLocation");

	AHazardStepTile_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardStepTile::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.Tick");

	AHazardStepTile_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.OpenChildren
// (Iterator)

void AHazardStepTile::OpenChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.OpenChildren");

	AHazardStepTile_OpenChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.HideChildren
// (Iterator)

void AHazardStepTile::HideChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.HideChildren");

	AHazardStepTile_HideChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.FindNeighbours
// (Defined, Iterator, PreOperator)

void AHazardStepTile::FindNeighbours()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.FindNeighbours");

	AHazardStepTile_FindNeighbours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.FindClusteredNeighbours
// (Defined, Iterator, PreOperator)

void AHazardStepTile::FindClusteredNeighbours()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.FindClusteredNeighbours");

	AHazardStepTile_FindClusteredNeighbours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.CreateTiles
// (Final, Defined, Iterator, Latent, Singular)

void AHazardStepTile::CreateTiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.CreateTiles");

	AHazardStepTile_CreateTiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.FindTileComponentFromVector
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// class UHazardStepTileComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardStepTileComponent* AHazardStepTile::FindTileComponentFromVector(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.FindTileComponentFromVector");

	AHazardStepTile_FindTileComponentFromVector_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardStepTile::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.PostBeginPlay");

	AHazardStepTile_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.DoesContainPoint
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardStepTile::DoesContainPoint(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.DoesContainPoint");

	AHazardStepTile_DoesContainPoint_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.AddComponent
// (Iterator)
// Parameters:
// class UHazardStepTileComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardStepTileComponent* AHazardStepTile::AddComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.AddComponent");

	AHazardStepTile_AddComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardStepTile::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.PointInBox");

	AHazardStepTile_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardStepTile::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.NormalizeActor");

	AHazardStepTile_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTile.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardStepTile::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.GetNextPointOnLine");

	AHazardStepTile_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardStepTile::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.RoundToScale");

	AHazardStepTile_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardStepTile::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.RoundVectorToScale");

	AHazardStepTile_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardStepTile::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.getIndexNormal");

	AHazardStepTile_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardStepTile::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.getMinLocationIndex");

	AHazardStepTile_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardStepTile::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.getLocationIndex");

	AHazardStepTile_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardStepTile::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.RotateAroundAxis");

	AHazardStepTile_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardStepTile::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.CeilValue");

	AHazardStepTile_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardStepTile::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.FloorValue");

	AHazardStepTile_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTile.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardStepTile::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTile.ManhattanVSize");

	AHazardStepTile_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPickupFactory.NotifyLocalPlayerDead
// ()
// Parameters:
// class APlayerController*       PC                             (Parm)

void AHazardPickupFactory::NotifyLocalPlayerDead(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.NotifyLocalPlayerDead");

	AHazardPickupFactory_NotifyLocalPlayerDead_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.ShowHidden
// (Defined, Iterator, PreOperator)

void AHazardPickupFactory::ShowHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.ShowHidden");

	AHazardPickupFactory_ShowHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.ShowActive
// ()

void AHazardPickupFactory::ShowActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.ShowActive");

	AHazardPickupFactory_ShowActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.StartSleeping
// ()

void AHazardPickupFactory::StartSleeping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.StartSleeping");

	AHazardPickupFactory_StartSleeping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.CheckForErrors
// (Iterator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPickupFactory::CheckForErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.CheckForErrors");

	AHazardPickupFactory_CheckForErrors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPickupFactory.SetPickupMesh
// (Defined, Iterator, PreOperator)

void AHazardPickupFactory::SetPickupMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.SetPickupMesh");

	AHazardPickupFactory_SetPickupMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.InitializePickup
// (Defined, Iterator, PreOperator)

void AHazardPickupFactory::InitializePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.InitializePickup");

	AHazardPickupFactory_InitializePickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.PickedUpBy
// (Iterator)
// Parameters:
// class APawn*                   P                              (Parm)

void AHazardPickupFactory::PickedUpBy(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.PickedUpBy");

	AHazardPickupFactory_PickedUpBy_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.SetInitialState
// (Iterator)

void AHazardPickupFactory::SetInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.SetInitialState");

	AHazardPickupFactory_SetInitialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.SetPickupHidden
// (Defined, Iterator, PreOperator)

void AHazardPickupFactory::SetPickupHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.SetPickupHidden");

	AHazardPickupFactory_SetPickupHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.SetPickupVisible
// (Defined, Iterator, PreOperator)

void AHazardPickupFactory::SetPickupVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.SetPickupVisible");

	AHazardPickupFactory_SetPickupVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.InitPickupMeshEffects
// (Defined, Iterator, PreOperator)

void AHazardPickupFactory::InitPickupMeshEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.InitPickupMeshEffects");

	AHazardPickupFactory_InitPickupMeshEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.StartPulse
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FLinearColor            TargetEmissive                 (Parm)

void AHazardPickupFactory::StartPulse(const struct FLinearColor& TargetEmissive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.StartPulse");

	AHazardPickupFactory_StartPulse_Params params;
	params.TargetEmissive = TargetEmissive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.RespawnEffect
// (Iterator)

void AHazardPickupFactory::RespawnEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.RespawnEffect");

	AHazardPickupFactory_RespawnEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.ShutDown
// ()

void AHazardPickupFactory::ShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.ShutDown");

	AHazardPickupFactory_ShutDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.DisablePickup
// (Iterator)

void AHazardPickupFactory::DisablePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.DisablePickup");

	AHazardPickupFactory_DisablePickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.SetResOut
// (Iterator)

void AHazardPickupFactory::SetResOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.SetResOut");

	AHazardPickupFactory_SetResOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPickupFactory.PostBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardPickupFactory::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPickupFactory.PostBeginPlay");

	AHazardPickupFactory_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardOptionsButton.UnsaveSetting
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardOptionsButton*    HOB                            (Parm)

void AHazardOptionsButton::UnsaveSetting(class AHazardOptionsButton* HOB)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardOptionsButton.UnsaveSetting");

	AHazardOptionsButton_UnsaveSetting_Params params;
	params.HOB = HOB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardOptionsButton.SaveSettings
// (Defined, Iterator, PreOperator)

void AHazardOptionsButton::SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardOptionsButton.SaveSettings");

	AHazardOptionsButton_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardOptionsButton.Activated
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// bool                           bLoading                       (Parm)

void AHazardOptionsButton::Activated(bool bLoading)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardOptionsButton.Activated");

	AHazardOptionsButton_Activated_Params params;
	params.bLoading = bLoading;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardOptionsButton.TakeDamage
// ()
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AHazardOptionsButton::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardOptionsButton.TakeDamage");

	AHazardOptionsButton_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardOptionsButton.InitializeMaterial
// (Iterator)

void AHazardOptionsButton::InitializeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardOptionsButton.InitializeMaterial");

	AHazardOptionsButton_InitializeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardOptionsButton.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardOptionsButton::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardOptionsButton.PostBeginPlay");

	AHazardOptionsButton_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSecretTile.PenetratingTrace
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 HitLocation                    (Parm, OutParm)
// struct FVector                 HitNormal                      (Parm, OutParm)
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 StartTrace                     (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AHazardSecretTile::PenetratingTrace(const struct FVector& EndTrace, const struct FVector& StartTrace, struct FVector* HitLocation, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.PenetratingTrace");

	AHazardSecretTile_PenetratingTrace_Params params;
	params.EndTrace = EndTrace;
	params.StartTrace = StartTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.PassThroughDamage
// (Iterator)
// Parameters:
// class AActor*                  HitActor                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardSecretTile::PassThroughDamage(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.PassThroughDamage");

	AHazardSecretTile_PassThroughDamage_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.UnlockSecret
// (Defined, Iterator, PreOperator)

void AHazardSecretTile::UnlockSecret()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.UnlockSecret");

	AHazardSecretTile_UnlockSecret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSecretTile.FinishCrawl
// (Defined, Iterator, PreOperator)

void AHazardSecretTile::FinishCrawl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.FinishCrawl");

	AHazardSecretTile_FinishCrawl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSecretTile.SetFacingRotation
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardSecretTile::SetFacingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.SetFacingRotation");

	AHazardSecretTile_SetFacingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.TestRotation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FRotator                TestRotation                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardSecretTile::TestRotation(const struct FRotator& TestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.TestRotation");

	AHazardSecretTile_TestRotation_Params params;
	params.TestRotation = TestRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.StartCrawl
// (Defined, Iterator, PreOperator)

void AHazardSecretTile::StartCrawl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.StartCrawl");

	AHazardSecretTile_StartCrawl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSecretTile.Crawl
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardSecretTile::Crawl(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.Crawl");

	AHazardSecretTile_Crawl_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSecretTile.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardSecretTile::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.Tick");

	AHazardSecretTile_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSecretTile.EnableTick
// (Iterator)

void AHazardSecretTile::EnableTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.EnableTick");

	AHazardSecretTile_EnableTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSecretTile.PostBeginPlay
// (Iterator)

void AHazardSecretTile::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.PostBeginPlay");

	AHazardSecretTile_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSecretTile.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardSecretTile::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.PointInBox");

	AHazardSecretTile_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardSecretTile::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.NormalizeActor");

	AHazardSecretTile_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSecretTile.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardSecretTile::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.GetNextPointOnLine");

	AHazardSecretTile_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardSecretTile::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.RoundToScale");

	AHazardSecretTile_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardSecretTile::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.RoundVectorToScale");

	AHazardSecretTile_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardSecretTile::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.getIndexNormal");

	AHazardSecretTile_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardSecretTile::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.getMinLocationIndex");

	AHazardSecretTile_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardSecretTile::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.getLocationIndex");

	AHazardSecretTile_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardSecretTile::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.RotateAroundAxis");

	AHazardSecretTile_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardSecretTile::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.CeilValue");

	AHazardSecretTile_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardSecretTile::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.FloorValue");

	AHazardSecretTile_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSecretTile.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardSecretTile::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSecretTile.ManhattanVSize");

	AHazardSecretTile_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardTriggerMap.Touch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardTriggerMap::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTriggerMap.Touch");

	AHazardTriggerMap_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTriggerMap.Activate
// (Iterator)

void AHazardTriggerMap::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTriggerMap.Activate");

	AHazardTriggerMap_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardTowerMesh.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardTowerMesh::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardTowerMesh.PostBeginPlay");

	AHazardTowerMesh_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIcon.TakeDamage
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AHazardIcon::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIcon.TakeDamage");

	AHazardIcon_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIcon.SetIcons
// (Defined, Iterator, PreOperator)
// Parameters:
// class UMaterialInterface*      IconMaterial                   (Parm)
// class UMaterialInterface*      TextMaterial                   (Parm)
// class UMaterialInterface*      TitleMaterial                  (Parm)

void AHazardIcon::SetIcons(class UMaterialInterface* IconMaterial, class UMaterialInterface* TextMaterial, class UMaterialInterface* TitleMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIcon.SetIcons");

	AHazardIcon_SetIcons_Params params;
	params.IconMaterial = IconMaterial;
	params.TextMaterial = TextMaterial;
	params.TitleMaterial = TitleMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIcon.UpdateIcons
// (Defined, Iterator, PreOperator)

void AHazardIcon::UpdateIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIcon.UpdateIcons");

	AHazardIcon_UpdateIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIcon.Unlock
// (Defined, Iterator, PreOperator)

void AHazardIcon::Unlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIcon.Unlock");

	AHazardIcon_Unlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIcon.Hint
// (Iterator)

void AHazardIcon::Hint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIcon.Hint");

	AHazardIcon_Hint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIcon.Find
// (Defined, Iterator, PreOperator)

void AHazardIcon::Find()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIcon.Find");

	AHazardIcon_Find_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIcon.Hide
// (Iterator)

void AHazardIcon::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIcon.Hide");

	AHazardIcon_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIcon.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardIcon::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIcon.PostBeginPlay");

	AHazardIcon_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIconPreview.Tick
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardIconPreview::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIconPreview.Tick");

	AHazardIconPreview_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIconPreview.ForceUpdate
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardIcon*             NewIcon                        (Parm)

void AHazardIconPreview::ForceUpdate(class AHazardIcon* NewIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIconPreview.ForceUpdate");

	AHazardIconPreview_ForceUpdate_Params params;
	params.NewIcon = NewIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIconPreview.HidePreview
// (Defined, Iterator, PreOperator)

void AHazardIconPreview::HidePreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIconPreview.HidePreview");

	AHazardIconPreview_HidePreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIconPreview.ShowPreview
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AHazardIcon*             NewIcon                        (Parm)

void AHazardIconPreview::ShowPreview(class AHazardIcon* NewIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIconPreview.ShowPreview");

	AHazardIconPreview_ShowPreview_Params params;
	params.NewIcon = NewIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIconPreview.Highlight
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardIcon*             NewIcon                        (Parm)

void AHazardIconPreview::Highlight(class AHazardIcon* NewIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIconPreview.Highlight");

	AHazardIconPreview_Highlight_Params params;
	params.NewIcon = NewIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIconPreview.UnHighlight
// (Iterator)

void AHazardIconPreview::UnHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIconPreview.UnHighlight");

	AHazardIconPreview_UnHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardIconPreview.PostBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardIconPreview::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardIconPreview.PostBeginPlay");

	AHazardIconPreview_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapPreview.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardMapPreview::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapPreview.Tick");

	AHazardMapPreview_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapPreview.FadeTo
// (Iterator)
// Parameters:
// float                          Target                         (Parm)

void AHazardMapPreview::FadeTo(float Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapPreview.FadeTo");

	AHazardMapPreview_FadeTo_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapPreview.Interact
// (Iterator)

void AHazardMapPreview::Interact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapPreview.Interact");

	AHazardMapPreview_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapPreview.TakeDamage
// ()
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AHazardMapPreview::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapPreview.TakeDamage");

	AHazardMapPreview_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapPreview.HidePreview
// (Defined, Iterator, PreOperator)

void AHazardMapPreview::HidePreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapPreview.HidePreview");

	AHazardMapPreview_HidePreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapPreview.CalculateSafeTarget
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 TestLocation                   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardMapPreview::CalculateSafeTarget(const struct FVector& TestLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapPreview.CalculateSafeTarget");

	AHazardMapPreview_CalculateSafeTarget_Params params;
	params.TestLocation = TestLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardMapPreview.ShowPreview
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// class AHazardMapNode*          NewNode                        (Parm)

void AHazardMapPreview::ShowPreview(class AHazardMapNode* NewNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapPreview.ShowPreview");

	AHazardMapPreview_ShowPreview_Params params;
	params.NewNode = NewNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapPreview.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardMapPreview::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapPreview.PostBeginPlay");

	AHazardMapPreview_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSign.UnTouch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardSign::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.UnTouch");

	AHazardSign_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSign.Touch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardSign::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.Touch");

	AHazardSign_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSign.Tick
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardSign::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.Tick");

	AHazardSign_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSign.PenetratingTrace
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 HitLocation                    (Parm, OutParm)
// struct FVector                 HitNormal                      (Parm, OutParm)
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 StartTrace                     (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AHazardSign::PenetratingTrace(const struct FVector& EndTrace, const struct FVector& StartTrace, struct FVector* HitLocation, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.PenetratingTrace");

	AHazardSign_PenetratingTrace_Params params;
	params.EndTrace = EndTrace;
	params.StartTrace = StartTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;

	return params.ReturnValue;
}


// Function Hazard.HazardSign.PassThroughDamage
// (Iterator)
// Parameters:
// class AActor*                  HitActor                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardSign::PassThroughDamage(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.PassThroughDamage");

	AHazardSign_PassThroughDamage_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSign.CheckDistance
// (Final, Defined, Iterator, Latent, Singular)

void AHazardSign::CheckDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.CheckDistance");

	AHazardSign_CheckDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSign.FadeTo
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Target                         (Parm)

void AHazardSign::FadeTo(float Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.FadeTo");

	AHazardSign_FadeTo_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSign.Interact
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bPlaySound                     (OptionalParm, Parm)

void AHazardSign::Interact(bool bPlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.Interact");

	AHazardSign_Interact_Params params;
	params.bPlaySound = bPlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSign.UpdateSisters
// (Iterator)

void AHazardSign::UpdateSisters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.UpdateSisters");

	AHazardSign_UpdateSisters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSign.PostBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardSign::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSign.PostBeginPlay");

	AHazardSign_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardHUD.DrawHUD
// (Final, Defined, Iterator, Latent, Singular)

void AHazardHUD::DrawHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardHUD.DrawHUD");

	AHazardHUD_DrawHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardHUD.DisplayConsoleMessages
// (Final, Defined, Iterator, Latent, Singular)

void AHazardHUD::DisplayConsoleMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardHUD.DisplayConsoleMessages");

	AHazardHUD_DisplayConsoleMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGlassPanelNoMiddle.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardGlassPanelNoMiddle::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGlassPanelNoMiddle.PostBeginPlay");

	AHazardGlassPanelNoMiddle_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGuide.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardGuide::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGuide.Tick");

	AHazardGuide_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGuide.CheckDistance
// (Defined, Iterator, PreOperator)

void AHazardGuide::CheckDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGuide.CheckDistance");

	AHazardGuide_CheckDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGuide.SetActive
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bNewValue                      (Parm)

void AHazardGuide::SetActive(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGuide.SetActive");

	AHazardGuide_SetActive_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGuide.FadeTo
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Target                         (Parm)

void AHazardGuide::FadeTo(float Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGuide.FadeTo");

	AHazardGuide_FadeTo_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardGuide.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardGuide::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardGuide.PostBeginPlay");

	AHazardGuide_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardJumpDownTile.UpdateMovement
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardJumpDownTile::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.UpdateMovement");

	AHazardJumpDownTile_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardJumpDownTile.AddVelocity
// (Iterator)
// Parameters:
// struct FVector                 Impulse                        (Parm)

void AHazardJumpDownTile::AddVelocity(const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.AddVelocity");

	AHazardJumpDownTile_AddVelocity_Params params;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardJumpDownTile.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardJumpDownTile::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.Tick");

	AHazardJumpDownTile_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardJumpDownTile.UpdateSounds
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardJumpDownTile::UpdateSounds(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.UpdateSounds");

	AHazardJumpDownTile_UpdateSounds_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardJumpDownTile.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardJumpDownTile::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.PostBeginPlay");

	AHazardJumpDownTile_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardJumpDownTile.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardJumpDownTile::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.PointInBox");

	AHazardJumpDownTile_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardJumpDownTile::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.NormalizeActor");

	AHazardJumpDownTile_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardJumpDownTile.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardJumpDownTile::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.GetNextPointOnLine");

	AHazardJumpDownTile_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardJumpDownTile::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.RoundToScale");

	AHazardJumpDownTile_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardJumpDownTile::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.RoundVectorToScale");

	AHazardJumpDownTile_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardJumpDownTile::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.getIndexNormal");

	AHazardJumpDownTile_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardJumpDownTile::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.getMinLocationIndex");

	AHazardJumpDownTile_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardJumpDownTile::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.getLocationIndex");

	AHazardJumpDownTile_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardJumpDownTile::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.RotateAroundAxis");

	AHazardJumpDownTile_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardJumpDownTile::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.CeilValue");

	AHazardJumpDownTile_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardJumpDownTile::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.FloorValue");

	AHazardJumpDownTile_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardJumpDownTile.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardJumpDownTile::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardJumpDownTile.ManhattanVSize");

	AHazardJumpDownTile_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardMapNode.UpdateMapNode
// (Defined, Iterator, PreOperator)

void AHazardMapNode::UpdateMapNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.UpdateMapNode");

	AHazardMapNode_UpdateMapNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapNode.DelayedJump
// (Defined, Iterator, PreOperator)

void AHazardMapNode::DelayedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.DelayedJump");

	AHazardMapNode_DelayedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapNode.TakeDamage
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AHazardMapNode::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.TakeDamage");

	AHazardMapNode_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapNode.SetHighlighted
// (Iterator)
// Parameters:
// bool                           bNewHighlighted                (Parm)

void AHazardMapNode::SetHighlighted(bool bNewHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.SetHighlighted");

	AHazardMapNode_SetHighlighted_Params params;
	params.bNewHighlighted = bNewHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapNode.TestShrink
// (Defined, Iterator, PreOperator)

void AHazardMapNode::TestShrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.TestShrink");

	AHazardMapNode_TestShrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapNode.ShrinkNode
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardMapNode::ShrinkNode(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.ShrinkNode");

	AHazardMapNode_ShrinkNode_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapNode.InterpolateTo
// (Iterator)
// Parameters:
// float                          interpValue                    (Parm)

void AHazardMapNode::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.InterpolateTo");

	AHazardMapNode_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapNode.CheckShrink
// (Iterator)

void AHazardMapNode::CheckShrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.CheckShrink");

	AHazardMapNode_CheckShrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapNode.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardMapNode::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.Tick");

	AHazardMapNode_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapNode.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardMapNode::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapNode.PostBeginPlay");

	AHazardMapNode_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapProxy.SetHighlighted
// (Iterator)
// Parameters:
// bool                           bNewHighlighted                (Parm)

void AHazardMapProxy::SetHighlighted(bool bNewHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapProxy.SetHighlighted");

	AHazardMapProxy_SetHighlighted_Params params;
	params.bNewHighlighted = bNewHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapProxy.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardMapProxy::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapProxy.Tick");

	AHazardMapProxy_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardMapProxy.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardMapProxy::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardMapProxy.PostBeginPlay");

	AHazardMapProxy_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardNoAmmoVolumeMesh.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardNoAmmoVolumeMesh::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoAmmoVolumeMesh.Tick");

	AHazardNoAmmoVolumeMesh_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardNoAmmoVolumeMesh.UnTouch
// (Iterator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardNoAmmoVolumeMesh::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoAmmoVolumeMesh.UnTouch");

	AHazardNoAmmoVolumeMesh_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardNoAmmoVolumeMesh.Touch
// (Iterator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardNoAmmoVolumeMesh::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoAmmoVolumeMesh.Touch");

	AHazardNoAmmoVolumeMesh_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardNoAmmoVolumeMesh.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardNoAmmoVolumeMesh::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoAmmoVolumeMesh.GetClampedLocation");

	AHazardNoAmmoVolumeMesh_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardNoAmmoVolumeMesh.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardNoAmmoVolumeMesh::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardNoAmmoVolumeMesh.PostBeginPlay");

	AHazardNoAmmoVolumeMesh_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.FinishedInterpolation
// (Iterator)

void UHazardSnakeFloorComponent::FinishedInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.FinishedInterpolation");

	UHazardSnakeFloorComponent_FinishedInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.SetBlendAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void UHazardSnakeFloorComponent::SetBlendAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.SetBlendAmount");

	UHazardSnakeFloorComponent_SetBlendAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.SetGlobalCollision
// (Iterator)
// Parameters:
// bool                           bEnabled                       (Parm)

void UHazardSnakeFloorComponent::SetGlobalCollision(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.SetGlobalCollision");

	UHazardSnakeFloorComponent_SetGlobalCollision_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.UpdateGlobalCollision
// (Iterator)

void UHazardSnakeFloorComponent::UpdateGlobalCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.UpdateGlobalCollision");

	UHazardSnakeFloorComponent_UpdateGlobalCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.UpdateMovement
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardSnakeFloorComponent::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.UpdateMovement");

	UHazardSnakeFloorComponent_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.InterpolateTo
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          interpValue                    (Parm)

void UHazardSnakeFloorComponent::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.InterpolateTo");

	UHazardSnakeFloorComponent_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.DoClose
// (Iterator)

void UHazardSnakeFloorComponent::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.DoClose");

	UHazardSnakeFloorComponent_DoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.DoOpen
// (Iterator)

void UHazardSnakeFloorComponent::DoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.DoOpen");

	UHazardSnakeFloorComponent_DoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.FinishedOpen
// (Defined, Iterator, PreOperator)

void UHazardSnakeFloorComponent::FinishedOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.FinishedOpen");

	UHazardSnakeFloorComponent_FinishedOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.FinishedClose
// (Iterator)

void UHazardSnakeFloorComponent::FinishedClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.FinishedClose");

	UHazardSnakeFloorComponent_FinishedClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.Close
// (Iterator)

void UHazardSnakeFloorComponent::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.Close");

	UHazardSnakeFloorComponent_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.Open
// (Defined, Iterator, PreOperator)

void UHazardSnakeFloorComponent::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.Open");

	UHazardSnakeFloorComponent_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardSnakeFloorComponent::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.Tick");

	UHazardSnakeFloorComponent_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardSnakeFloorComponent::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.GetClampedLocation");

	UHazardSnakeFloorComponent_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.DoesContainPoint
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardSnakeFloorComponent::DoesContainPoint(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.DoesContainPoint");

	UHazardSnakeFloorComponent_DoesContainPoint_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.InitializeTile
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardSnakeFloor*       NewOwner                       (Parm)

void UHazardSnakeFloorComponent::InitializeTile(class AHazardSnakeFloor* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.InitializeTile");

	UHazardSnakeFloorComponent_InitializeTile_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardSnakeFloorComponent::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.PointInBox");

	UHazardSnakeFloorComponent_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void UHazardSnakeFloorComponent::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.NormalizeActor");

	UHazardSnakeFloorComponent_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloorComponent.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardSnakeFloorComponent::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.GetNextPointOnLine");

	UHazardSnakeFloorComponent_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardSnakeFloorComponent::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.RoundToScale");

	UHazardSnakeFloorComponent_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardSnakeFloorComponent::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.RoundVectorToScale");

	UHazardSnakeFloorComponent_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardSnakeFloorComponent::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.getIndexNormal");

	UHazardSnakeFloorComponent_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardSnakeFloorComponent::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.getMinLocationIndex");

	UHazardSnakeFloorComponent_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardSnakeFloorComponent::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.getLocationIndex");

	UHazardSnakeFloorComponent_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardSnakeFloorComponent::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.RotateAroundAxis");

	UHazardSnakeFloorComponent_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardSnakeFloorComponent::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.CeilValue");

	UHazardSnakeFloorComponent_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardSnakeFloorComponent::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.FloorValue");

	UHazardSnakeFloorComponent_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloorComponent.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardSnakeFloorComponent::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloorComponent.ManhattanVSize");

	UHazardSnakeFloorComponent_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.Detach
// ()
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardSnakeFloor::Detach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.Detach");

	AHazardSnakeFloor_Detach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloor.Attach
// (Iterator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardSnakeFloor::Attach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.Attach");

	AHazardSnakeFloor_Attach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloor.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardSnakeFloor::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.GetClampedLocation");

	AHazardSnakeFloor_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardSnakeFloor::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.Tick");

	AHazardSnakeFloor_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloor.CreateTiles
// (Defined, Iterator, PreOperator)

void AHazardSnakeFloor::CreateTiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.CreateTiles");

	AHazardSnakeFloor_CreateTiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloor.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardSnakeFloor::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.PostBeginPlay");

	AHazardSnakeFloor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloor.DoesContainPoint
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardSnakeFloor::DoesContainPoint(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.DoesContainPoint");

	AHazardSnakeFloor_DoesContainPoint_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.AddComponent
// (Iterator)
// Parameters:
// class UHazardSnakeFloorComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UHazardSnakeFloorComponent* AHazardSnakeFloor::AddComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.AddComponent");

	AHazardSnakeFloor_AddComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.Reset
// (Iterator)

void AHazardSnakeFloor::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.Reset");

	AHazardSnakeFloor_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloor.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardSnakeFloor::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.PointInBox");

	AHazardSnakeFloor_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardSnakeFloor::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.NormalizeActor");

	AHazardSnakeFloor_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSnakeFloor.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardSnakeFloor::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.GetNextPointOnLine");

	AHazardSnakeFloor_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardSnakeFloor::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.RoundToScale");

	AHazardSnakeFloor_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardSnakeFloor::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.RoundVectorToScale");

	AHazardSnakeFloor_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardSnakeFloor::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.getIndexNormal");

	AHazardSnakeFloor_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardSnakeFloor::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.getMinLocationIndex");

	AHazardSnakeFloor_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardSnakeFloor::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.getLocationIndex");

	AHazardSnakeFloor_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardSnakeFloor::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.RotateAroundAxis");

	AHazardSnakeFloor_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardSnakeFloor::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.CeilValue");

	AHazardSnakeFloor_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardSnakeFloor::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.FloorValue");

	AHazardSnakeFloor_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSnakeFloor.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardSnakeFloor::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSnakeFloor.ManhattanVSize");

	AHazardSnakeFloor_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.FinishedInterpolation
// (Iterator)

void UHazardStepTileComponent::FinishedInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.FinishedInterpolation");

	UHazardStepTileComponent_FinishedInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.SetBlendAmount
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendValue                     (Parm)

void UHazardStepTileComponent::SetBlendAmount(float BlendValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.SetBlendAmount");

	UHazardStepTileComponent_SetBlendAmount_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.SetGlobalCollision
// (Iterator)
// Parameters:
// bool                           bEnabled                       (Parm)

void UHazardStepTileComponent::SetGlobalCollision(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.SetGlobalCollision");

	UHazardStepTileComponent_SetGlobalCollision_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.UpdateGlobalCollision
// (Iterator)

void UHazardStepTileComponent::UpdateGlobalCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.UpdateGlobalCollision");

	UHazardStepTileComponent_UpdateGlobalCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.UpdateMovement
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardStepTileComponent::UpdateMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.UpdateMovement");

	UHazardStepTileComponent_UpdateMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.InterpolateTo
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          interpValue                    (Parm)

void UHazardStepTileComponent::InterpolateTo(float interpValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.InterpolateTo");

	UHazardStepTileComponent_InterpolateTo_Params params;
	params.interpValue = interpValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.DoClose
// (Iterator)

void UHazardStepTileComponent::DoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.DoClose");

	UHazardStepTileComponent_DoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.DoOpen
// (Iterator)

void UHazardStepTileComponent::DoOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.DoOpen");

	UHazardStepTileComponent_DoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.FinishedOpen
// (Iterator)

void UHazardStepTileComponent::FinishedOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.FinishedOpen");

	UHazardStepTileComponent_FinishedOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.FinishedClose
// (Iterator)

void UHazardStepTileComponent::FinishedClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.FinishedClose");

	UHazardStepTileComponent_FinishedClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.Close
// (Defined, Iterator, PreOperator)

void UHazardStepTileComponent::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.Close");

	UHazardStepTileComponent_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.Open
// (Iterator)

void UHazardStepTileComponent::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.Open");

	UHazardStepTileComponent_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.Tick
// (Iterator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardStepTileComponent::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.Tick");

	UHazardStepTileComponent_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.UpdateWhiteSounds
// (Iterator)

void UHazardStepTileComponent::UpdateWhiteSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.UpdateWhiteSounds");

	UHazardStepTileComponent_UpdateWhiteSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.CreateAndSetNewMaterialInstanceConstant
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            ElementIndex                   (Parm)
// class UMaterialInterface*      NewMaterial                    (Parm)
// class UMaterialInstanceConstant* ReturnValue                    (Parm, OutParm, ReturnParm)

class UMaterialInstanceConstant* UHazardStepTileComponent::CreateAndSetNewMaterialInstanceConstant(int ElementIndex, class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.CreateAndSetNewMaterialInstanceConstant");

	UHazardStepTileComponent_CreateAndSetNewMaterialInstanceConstant_Params params;
	params.ElementIndex = ElementIndex;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.GetClampedLocation
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardStepTileComponent::GetClampedLocation(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.GetClampedLocation");

	UHazardStepTileComponent_GetClampedLocation_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.RecurseStep
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bFixedRadius                   (Parm)

void UHazardStepTileComponent::RecurseStep(bool bFixedRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.RecurseStep");

	UHazardStepTileComponent_RecurseStep_Params params;
	params.bFixedRadius = bFixedRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.DoesContainPoint
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardStepTileComponent::DoesContainPoint(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.DoesContainPoint");

	UHazardStepTileComponent_DoesContainPoint_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.InitializeTile
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardStepTile*         NewOwner                       (Parm)

void UHazardStepTileComponent::InitializeTile(class AHazardStepTile* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.InitializeTile");

	UHazardStepTileComponent_InitializeTile_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.FindNeighbours
// (Defined, Iterator, PreOperator)

void UHazardStepTileComponent::FindNeighbours()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.FindNeighbours");

	UHazardStepTileComponent_FindNeighbours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardStepTileComponent::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.PointInBox");

	UHazardStepTileComponent_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void UHazardStepTileComponent::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.NormalizeActor");

	UHazardStepTileComponent_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardStepTileComponent.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardStepTileComponent::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.GetNextPointOnLine");

	UHazardStepTileComponent_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardStepTileComponent::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.RoundToScale");

	UHazardStepTileComponent_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardStepTileComponent::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.RoundVectorToScale");

	UHazardStepTileComponent_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UHazardStepTileComponent::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.getIndexNormal");

	UHazardStepTileComponent_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardStepTileComponent::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.getMinLocationIndex");

	UHazardStepTileComponent_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardStepTileComponent::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.getLocationIndex");

	UHazardStepTileComponent_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHazardStepTileComponent::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.RotateAroundAxis");

	UHazardStepTileComponent_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardStepTileComponent::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.CeilValue");

	UHazardStepTileComponent_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardStepTileComponent::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.FloorValue");

	UHazardStepTileComponent_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardStepTileComponent.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UHazardStepTileComponent::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardStepTileComponent.ManhattanVSize");

	UHazardStepTileComponent_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardPortal::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.Tick");

	AHazardPortal_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPortal.ShouldUpdate
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPortal::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.ShouldUpdate");

	AHazardPortal_ShouldUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.OffScreen
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardPlayerController* Player                         (Parm)

void AHazardPortal::OffScreen(class AHazardPlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.OffScreen");

	AHazardPortal_OffScreen_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPortal.OnScreen
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardPlayerController* Player                         (Parm)

void AHazardPortal::OnScreen(class AHazardPlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.OnScreen");

	AHazardPortal_OnScreen_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPortal.ViewEncapsulated
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardPlayerController* Player                         (Parm)

void AHazardPortal::ViewEncapsulated(class AHazardPlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.ViewEncapsulated");

	AHazardPortal_ViewEncapsulated_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPortal.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardPortal::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.PostBeginPlay");

	AHazardPortal_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPortal.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardPortal::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.PointInBox");

	AHazardPortal_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardPortal::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.NormalizeActor");

	AHazardPortal_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardPortal.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPortal::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.GetNextPointOnLine");

	AHazardPortal_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPortal::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.RoundToScale");

	AHazardPortal_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPortal::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.RoundVectorToScale");

	AHazardPortal_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardPortal::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.getIndexNormal");

	AHazardPortal_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPortal::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.getMinLocationIndex");

	AHazardPortal_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPortal::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.getLocationIndex");

	AHazardPortal_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardPortal::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.RotateAroundAxis");

	AHazardPortal_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPortal::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.CeilValue");

	AHazardPortal_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPortal::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.FloorValue");

	AHazardPortal_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardPortal.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardPortal::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardPortal.ManhattanVSize");

	AHazardPortal_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardProj_RiotBall.Initialize
// (Defined, Iterator, PreOperator)
// Parameters:
// class AHazardRiotMaster*       NewParent                      (Parm)

void AHazardProj_RiotBall::Initialize(class AHazardRiotMaster* NewParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardProj_RiotBall.Initialize");

	AHazardProj_RiotBall_Initialize_Params params;
	params.NewParent = NewParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.StartRiot
// (Defined, Iterator, PreOperator)

void AHazardRiotMaster::StartRiot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.StartRiot");

	AHazardRiotMaster_StartRiot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.UpdateSlaves
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardRiotMaster::UpdateSlaves(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.UpdateSlaves");

	AHazardRiotMaster_UpdateSlaves_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.Explode
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardRiotMaster::Explode(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.Explode");

	AHazardRiotMaster_Explode_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.TickSlaves
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardRiotMaster::TickSlaves(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.TickSlaves");

	AHazardRiotMaster_TickSlaves_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.MoveRiot
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// int                            Index                          (Parm)
// float                          DeltaTime                      (Parm)

void AHazardRiotMaster::MoveRiot(int Index, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.MoveRiot");

	AHazardRiotMaster_MoveRiot_Params params;
	params.Index = Index;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.SetVolumeLevels
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          BlendPct                       (Parm)

void AHazardRiotMaster::SetVolumeLevels(float BlendPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.SetVolumeLevels");

	AHazardRiotMaster_SetVolumeLevels_Params params;
	params.BlendPct = BlendPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.UpdateRiotSounds
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardRiotMaster::UpdateRiotSounds(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.UpdateRiotSounds");

	AHazardRiotMaster_UpdateRiotSounds_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.UpdateRiotColours
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardRiotMaster::UpdateRiotColours(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.UpdateRiotColours");

	AHazardRiotMaster_UpdateRiotColours_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardRiotMaster::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.Tick");

	AHazardRiotMaster_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.DoesContainPoint
// (Iterator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardRiotMaster::DoesContainPoint(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.DoesContainPoint");

	AHazardRiotMaster_DoesContainPoint_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.UnTouch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)

void AHazardRiotMaster::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.UnTouch");

	AHazardRiotMaster_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.Touch
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AHazardRiotMaster::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.Touch");

	AHazardRiotMaster_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.PostBeginPlay
// (Final, Defined, Iterator, Latent, Singular)

void AHazardRiotMaster::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.PostBeginPlay");

	AHazardRiotMaster_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.PointInBox
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 TestBoxLocation                (Parm)
// struct FVector                 TestBoxExtent                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AHazardRiotMaster::PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.PointInBox");

	AHazardRiotMaster_PointInBox_Params params;
	params.Point = Point;
	params.TestBoxLocation = TestBoxLocation;
	params.TestBoxExtent = TestBoxExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.NormalizeActor
// (Defined, Iterator, PreOperator)
// Parameters:
// class AActor*                  Target                         (Parm)

void AHazardRiotMaster::NormalizeActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.NormalizeActor");

	AHazardRiotMaster_NormalizeActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardRiotMaster.GetNextPointOnLine
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 EndPoint                       (Parm)
// struct FVector                 StartPoint                     (Parm)
// float                          inTileSize                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardRiotMaster::GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.GetNextPointOnLine");

	AHazardRiotMaster_GetNextPointOnLine_Params params;
	params.EndPoint = EndPoint;
	params.StartPoint = StartPoint;
	params.inTileSize = inTileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.RoundToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          Value                          (Parm)
// int                            roundScale                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardRiotMaster::RoundToScale(float Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.RoundToScale");

	AHazardRiotMaster_RoundToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.RoundVectorToScale
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 Value                          (Parm)
// int                            roundScale                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardRiotMaster::RoundVectorToScale(const struct FVector& Value, int roundScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.RoundVectorToScale");

	AHazardRiotMaster_RoundVectorToScale_Params params;
	params.Value = Value;
	params.roundScale = roundScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.getIndexNormal
// (Iterator)
// Parameters:
// int                            NeighbourIndex                 (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AHazardRiotMaster::getIndexNormal(int NeighbourIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.getIndexNormal");

	AHazardRiotMaster_getIndexNormal_Params params;
	params.NeighbourIndex = NeighbourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.getMinLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardRiotMaster::getMinLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.getMinLocationIndex");

	AHazardRiotMaster_getMinLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.getLocationIndex
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 SearchLocation                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardRiotMaster::getLocationIndex(const struct FVector& SearchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.getLocationIndex");

	AHazardRiotMaster_getLocationIndex_Params params;
	params.SearchLocation = SearchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.RotateAroundAxis
// (Defined, Iterator, PreOperator)
// Parameters:
// int                            InitialDirection               (Parm)
// int                            PlaneAxis                      (Parm)
// int                            inNumRotations                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AHazardRiotMaster::RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.RotateAroundAxis");

	AHazardRiotMaster_RotateAroundAxis_Params params;
	params.InitialDirection = InitialDirection;
	params.PlaneAxis = PlaneAxis;
	params.inNumRotations = inNumRotations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.CeilValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardRiotMaster::CeilValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.CeilValue");

	AHazardRiotMaster_CeilValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.FloorValue
// (Iterator)
// Parameters:
// float                          Value                          (Parm)
// int                            significance                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardRiotMaster::FloorValue(float Value, int significance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.FloorValue");

	AHazardRiotMaster_FloorValue_Params params;
	params.Value = Value;
	params.significance = significance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardRiotMaster.ManhattanVSize
// (Defined, Iterator, PreOperator)
// Parameters:
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 EndLocation                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AHazardRiotMaster::ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardRiotMaster.ManhattanVSize");

	AHazardRiotMaster_ManhattanVSize_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardScreenshotPanel.PostBeginPlay
// (Defined, Iterator, PreOperator)

void AHazardScreenshotPanel::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardScreenshotPanel.PostBeginPlay");

	AHazardScreenshotPanel_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ActivateBlackHole.Activate
// (Iterator)
// Parameters:
// bool                           bNewActive                     (Parm)

void UHazardSeqAct_ActivateBlackHole::Activate(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ActivateBlackHole.Activate");

	UHazardSeqAct_ActivateBlackHole_Activate_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ActivateBlackHole.SpinPlatform
// (Defined, Iterator, PreOperator)
// Parameters:
// bool                           bNewActive                     (Parm)

void UHazardSeqAct_ActivateBlackHole::SpinPlatform(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ActivateBlackHole.SpinPlatform");

	UHazardSeqAct_ActivateBlackHole_SpinPlatform_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ActivateBlackHole.ShowRing
// (Iterator)

void UHazardSeqAct_ActivateBlackHole::ShowRing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ActivateBlackHole.ShowRing");

	UHazardSeqAct_ActivateBlackHole_ShowRing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ActivateBlackHole.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ActivateBlackHole::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ActivateBlackHole.Activated");

	UHazardSeqAct_ActivateBlackHole_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_CheckLasers.CheckTriggered
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_CheckLasers::CheckTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_CheckLasers.CheckTriggered");

	UHazardSeqAct_CheckLasers_CheckTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_CheckLasers.Update
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardSeqAct_CheckLasers::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_CheckLasers.Update");

	UHazardSeqAct_CheckLasers_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSeqAct_CheckLasers.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_CheckLasers::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_CheckLasers.Activated");

	UHazardSeqAct_CheckLasers_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ClearMap.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ClearMap::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ClearMap.Activated");

	UHazardSeqAct_ClearMap_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_DeleteSaveGame.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_DeleteSaveGame::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_DeleteSaveGame.Activated");

	UHazardSeqAct_DeleteSaveGame_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_DisableHolochamber.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_DisableHolochamber::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_DisableHolochamber.Activated");

	UHazardSeqAct_DisableHolochamber_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_HoloTimer.UpdateTimers
// (Final, Defined, Iterator, Latent, Singular)

void UHazardSeqAct_HoloTimer::UpdateTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_HoloTimer.UpdateTimers");

	UHazardSeqAct_HoloTimer_UpdateTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_HoloTimer.Update
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardSeqAct_HoloTimer::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_HoloTimer.Update");

	UHazardSeqAct_HoloTimer_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSeqAct_HoloTimer.Activated
// (Final, Defined, Iterator, Latent, Singular)

void UHazardSeqAct_HoloTimer::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_HoloTimer.Activated");

	UHazardSeqAct_HoloTimer_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_HoloTransition.Activated
// (Defined, PreOperator, Net)

void UHazardSeqAct_HoloTransition::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_HoloTransition.Activated");

	UHazardSeqAct_HoloTransition_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ManualReset.ResetActors
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ManualReset::ResetActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ManualReset.ResetActors");

	UHazardSeqAct_ManualReset_ResetActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ManualReset.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ManualReset::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ManualReset.Activated");

	UHazardSeqAct_ManualReset_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_NoOp.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_NoOp::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_NoOp.Activated");

	UHazardSeqAct_NoOp_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_NoRepeatRandom.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_NoRepeatRandom::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_NoRepeatRandom.Activated");

	UHazardSeqAct_NoRepeatRandom_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_OpenExitDoors.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_OpenExitDoors::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_OpenExitDoors.Activated");

	UHazardSeqAct_OpenExitDoors_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ResetGunTiles.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ResetGunTiles::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ResetGunTiles.Activated");

	UHazardSeqAct_ResetGunTiles_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_SaveObject.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_SaveObject::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_SaveObject.Activated");

	UHazardSeqAct_SaveObject_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ToggleBlackTile.UpdateGuides
// (Iterator)
// Parameters:
// bool                           bNewActive                     (Parm)

void UHazardSeqAct_ToggleBlackTile::UpdateGuides(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ToggleBlackTile.UpdateGuides");

	UHazardSeqAct_ToggleBlackTile_UpdateGuides_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ToggleBlackTile.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ToggleBlackTile::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ToggleBlackTile.Activated");

	UHazardSeqAct_ToggleBlackTile_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ToggleDoor.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ToggleDoor::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ToggleDoor.Activated");

	UHazardSeqAct_ToggleDoor_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ToggleElevator.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ToggleElevator::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ToggleElevator.Activated");

	UHazardSeqAct_ToggleElevator_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ToggleGuide.UpdateGuides
// (Iterator)
// Parameters:
// bool                           bNewActive                     (Parm)

void UHazardSeqAct_ToggleGuide::UpdateGuides(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ToggleGuide.UpdateGuides");

	UHazardSeqAct_ToggleGuide_UpdateGuides_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ToggleGuide.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ToggleGuide::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ToggleGuide.Activated");

	UHazardSeqAct_ToggleGuide_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_UnlockTower.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_UnlockTower::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_UnlockTower.Activated");

	UHazardSeqAct_UnlockTower_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGunRotator.UpdateAmmoMeshes
// (Final, Defined, Iterator, Latent, Singular)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardWeap_TileGunRotator::UpdateAmmoMeshes(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGunRotator.UpdateAmmoMeshes");

	AHazardWeap_TileGunRotator_UpdateAmmoMeshes_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGunRotator.Tick
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void AHazardWeap_TileGunRotator::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGunRotator.Tick");

	AHazardWeap_TileGunRotator_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGunAmmo.UpdateTileColour
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)

void UHazardWeap_TileGunAmmo::UpdateTileColour(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGunAmmo.UpdateTileColour");

	UHazardWeap_TileGunAmmo_UpdateTileColour_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardWeap_TileGunAmmo.InitializeTileMaterial
// (Defined, Iterator, PreOperator)
// Parameters:
// class UMaterialInterface*      InputMaterial                  (Parm)
// bool                           bCreateNewMaterial             (Parm)

void UHazardWeap_TileGunAmmo::InitializeTileMaterial(class UMaterialInterface* InputMaterial, bool bCreateNewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardWeap_TileGunAmmo.InitializeTileMaterial");

	UHazardWeap_TileGunAmmo_InitializeTileMaterial_Params params;
	params.InputMaterial = InputMaterial;
	params.bCreateNewMaterial = bCreateNewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_PlaySound.Update
// (Defined, Iterator, PreOperator)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHazardSeqAct_PlaySound::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_PlaySound.Update");

	UHazardSeqAct_PlaySound_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hazard.HazardSeqAct_PlaySound.Activated
// ()

void UHazardSeqAct_PlaySound::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_PlaySound.Activated");

	UHazardSeqAct_PlaySound_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_PlaySound.HandleInputs
// (Final, Defined, Iterator, Latent, Singular)

void UHazardSeqAct_PlaySound::HandleInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_PlaySound.HandleInputs");

	UHazardSeqAct_PlaySound_HandleInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ResetAmbientSound.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ResetAmbientSound::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ResetAmbientSound.Activated");

	UHazardSeqAct_ResetAmbientSound_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard.HazardSeqAct_ToggleAmbientTeleport.Activated
// (Defined, Iterator, PreOperator)

void UHazardSeqAct_ToggleAmbientTeleport::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard.HazardSeqAct_ToggleAmbientTeleport.Activated");

	UHazardSeqAct_ToggleAmbientTeleport_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
