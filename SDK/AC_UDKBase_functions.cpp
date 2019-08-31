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

// Function UDKBase.UDKBot.DelayedLeaveVehicle
// ()

void AUDKBot::DelayedLeaveVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.DelayedLeaveVehicle");

	AUDKBot_DelayedLeaveVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.DelayedWarning
// ()

void AUDKBot::DelayedWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.DelayedWarning");

	AUDKBot_DelayedWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.MissedDodge
// ()

void AUDKBot::MissedDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.MissedDodge");

	AUDKBot_MissedDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.AdjustAimError
// ()
// Parameters:
// float                          TargetDist                     (Parm)
// bool                           bInstantProj                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKBot::AdjustAimError(float TargetDist, bool bInstantProj)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.AdjustAimError");

	AUDKBot_AdjustAimError_Params params;
	params.TargetDist = TargetDist;
	params.bInstantProj = bInstantProj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.SuperDesireability
// ()
// Parameters:
// class APickupFactory*          P                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKBot::SuperDesireability(class APickupFactory* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.SuperDesireability");

	AUDKBot_SuperDesireability_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.SpecialJumpCost
// ()
// Parameters:
// float                          RequiredJumpZ                  (Parm)
// float                          Cost                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKBot::SpecialJumpCost(float RequiredJumpZ, float* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.SpecialJumpCost");

	AUDKBot_SpecialJumpCost_Params params;
	params.RequiredJumpZ = RequiredJumpZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.MayDodgeToMoveTarget
// ()

void AUDKBot::MayDodgeToMoveTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.MayDodgeToMoveTarget");

	AUDKBot_MayDodgeToMoveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.TimeDJReset
// ()

void AUDKBot::TimeDJReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.TimeDJReset");

	AUDKBot_TimeDJReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.MonitoredPawnAlert
// ()

void AUDKBot::MonitoredPawnAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.MonitoredPawnAlert");

	AUDKBot_MonitoredPawnAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.WhatToDoNext
// ()

void AUDKBot::WhatToDoNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.WhatToDoNext");

	AUDKBot_WhatToDoNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.FindBestSuperPickup
// ()
// Parameters:
// float                          MaxDist                        (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FindBestSuperPickup(float MaxDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FindBestSuperPickup");

	AUDKBot_FindBestSuperPickup_Params params;
	params.MaxDist = MaxDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.BuildSquadRoute
// ()

void AUDKBot::BuildSquadRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.BuildSquadRoute");

	AUDKBot_BuildSquadRoute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.FindPathToSquadRoute
// ()
// Parameters:
// bool                           bWeightDetours                 (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FindPathToSquadRoute(bool bWeightDetours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FindPathToSquadRoute");

	AUDKBot_FindPathToSquadRoute_Params params;
	params.bWeightDetours = bWeightDetours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.FindBestInventoryPath
// ()
// Parameters:
// float                          MinWeight                      (Parm, OutParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FindBestInventoryPath(float* MinWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FindBestInventoryPath");

	AUDKBot_FindBestInventoryPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinWeight != nullptr)
		*MinWeight = params.MinWeight;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.CanMakePathTo
// ()
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKBot::CanMakePathTo(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.CanMakePathTo");

	AUDKBot_CanMakePathTo_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.LatentWhatToDoNext
// ()

void AUDKBot::LatentWhatToDoNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.LatentWhatToDoNext");

	AUDKBot_LatentWhatToDoNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.WaitToSeeEnemy
// ()

void AUDKBot::WaitToSeeEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.WaitToSeeEnemy");

	AUDKBot_WaitToSeeEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.ReceiveRunOverWarning
// ()
// Parameters:
// class AUDKVehicle*             V                              (Parm)
// float                          projSpeed                      (Parm)
// struct FVector                 VehicleDir                     (Parm)

void AUDKBot::ReceiveRunOverWarning(class AUDKVehicle* V, float projSpeed, const struct FVector& VehicleDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.ReceiveRunOverWarning");

	AUDKBot_ReceiveRunOverWarning_Params params;
	params.V = V;
	params.projSpeed = projSpeed;
	params.VehicleDir = VehicleDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.ExecuteWhatToDoNext
// ()

void AUDKBot::ExecuteWhatToDoNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.ExecuteWhatToDoNext");

	AUDKBot_ExecuteWhatToDoNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.FaceActor
// ()
// Parameters:
// float                          StrafingModifier               (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FaceActor(float StrafingModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FaceActor");

	AUDKBot_FaceActor_Params params;
	params.StrafingModifier = StrafingModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKCarriedObject.GetTeamNum
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKCarriedObject::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.GetTeamNum");

	AUDKCarriedObject_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKCarriedObject.OnBaseChainChanged
// ()

void AUDKCarriedObject::OnBaseChainChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.OnBaseChainChanged");

	AUDKCarriedObject_OnBaseChainChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKCarriedObject.NotReachableBy
// ()
// Parameters:
// class APawn*                   P                              (Parm)

void AUDKCarriedObject::NotReachableBy(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.NotReachableBy");

	AUDKCarriedObject_NotReachableBy_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKCarriedObject.SetHUDLocation
// ()
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKCarriedObject::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.SetHUDLocation");

	AUDKCarriedObject_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::HasExistingSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults");

	UUDKDataStore_GameSearchBase_HasExistingSearchResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries
// ()
// Parameters:
// bool                           bRestrictCheckToSelf           (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::HasOutstandingQueries(bool bRestrictCheckToSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries");

	UUDKDataStore_GameSearchBase_HasOutstandingQueries_Params params;
	params.bRestrictCheckToSelf = bRestrictCheckToSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete
// ()
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UUDKDataStore_GameSearchBase::OnSearchComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete");

	UUDKDataStore_GameSearchBase_OnSearchComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch
// ()
// Parameters:
// unsigned char                  ControllerIndex                (Parm)
// bool                           bInvalidateExistingSearchResults (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::SubmitGameSearch(unsigned char ControllerIndex, bool bInvalidateExistingSearchResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch");

	UUDKDataStore_GameSearchBase_SubmitGameSearch_Params params;
	params.ControllerIndex = ControllerIndex;
	params.bInvalidateExistingSearchResults = bInvalidateExistingSearchResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKDataStore_GameSearchBase.Init
// ()

void UUDKDataStore_GameSearchBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.Init");

	UUDKDataStore_GameSearchBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKDataStore_GameSearchBase.GetEnabledMutators
// ()
// Parameters:
// TArray<int>                    MutatorIndices                 (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::GetEnabledMutators(TArray<int>* MutatorIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.GetEnabledMutators");

	UUDKDataStore_GameSearchBase_GetEnabledMutators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MutatorIndices != nullptr)
		*MutatorIndices = params.MutatorIndices;

	return params.ReturnValue;
}


// Function UDKBase.UDKEmitCameraEffect.UpdateLocation
// ()
// Parameters:
// struct FVector                 CamLoc                         (Const, Parm, OutParm)
// struct FRotator                CamRot                         (Const, Parm, OutParm)
// float                          CamFOVDeg                      (Parm)

void AUDKEmitCameraEffect::UpdateLocation(float CamFOVDeg, struct FVector* CamLoc, struct FRotator* CamRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.UpdateLocation");

	AUDKEmitCameraEffect_UpdateLocation_Params params;
	params.CamFOVDeg = CamFOVDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CamLoc != nullptr)
		*CamLoc = params.CamLoc;
	if (CamRot != nullptr)
		*CamRot = params.CamRot;
}


// Function UDKBase.UDKEmitCameraEffect.RegisterCamera
// ()
// Parameters:
// class AUDKPlayerController*    inCam                          (Parm)

void AUDKEmitCameraEffect::RegisterCamera(class AUDKPlayerController* inCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.RegisterCamera");

	AUDKEmitCameraEffect_RegisterCamera_Params params;
	params.inCam = inCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitCameraEffect.Destroyed
// ()

void AUDKEmitCameraEffect::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.Destroyed");

	AUDKEmitCameraEffect_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitCameraEffect.PostBeginPlay
// ()

void AUDKEmitCameraEffect::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.PostBeginPlay");

	AUDKEmitCameraEffect_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitterPool.SpawnExplosionLight
// ()
// Parameters:
// class UClass*                  LightClass                     (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// class AActor*                  AttachToActor                  (OptionalParm, Parm)
// class UUDKExplosionLight*      ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UUDKExplosionLight* AUDKEmitterPool::SpawnExplosionLight(class UClass* LightClass, const struct FVector& SpawnLocation, class AActor* AttachToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitterPool.SpawnExplosionLight");

	AUDKEmitterPool_SpawnExplosionLight_Params params;
	params.LightClass = LightClass;
	params.SpawnLocation = SpawnLocation;
	params.AttachToActor = AttachToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKEmitterPool.OnExplosionLightFinished
// ()
// Parameters:
// class UUDKExplosionLight*      Light                          (Parm, EditInline)

void AUDKEmitterPool::OnExplosionLightFinished(class UUDKExplosionLight* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitterPool.OnExplosionLightFinished");

	AUDKEmitterPool_OnExplosionLightFinished_Params params;
	params.Light = Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitterPool.SpawnEmitter
// ()
// Parameters:
// class UParticleSystem*         EmitterTemplate                (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (OptionalParm, Parm)
// class AActor*                  AttachToActor                  (OptionalParm, Parm)
// bool                           bInheritScaleFromBase          (OptionalParm, Parm)
// class UParticleSystemComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UParticleSystemComponent* AUDKEmitterPool::SpawnEmitter(class UParticleSystem* EmitterTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* AttachToActor, bool bInheritScaleFromBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitterPool.SpawnEmitter");

	AUDKEmitterPool_SpawnEmitter_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.AttachToActor = AttachToActor;
	params.bInheritScaleFromBase = bInheritScaleFromBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKExplosionLight.OnLightFinished
// ()
// Parameters:
// class UUDKExplosionLight*      Light                          (Parm, EditInline)

void UUDKExplosionLight::OnLightFinished(class UUDKExplosionLight* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKExplosionLight.OnLightFinished");

	UUDKExplosionLight_OnLightFinished_Params params;
	params.Light = Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKExplosionLight.ResetLight
// ()

void UUDKExplosionLight::ResetLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKExplosionLight.ResetLight");

	UUDKExplosionLight_ResetLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.StopsProjectile
// ()
// Parameters:
// class AProjectile*             P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKForcedDirectionVolume::StopsProjectile(class AProjectile* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.StopsProjectile");

	AUDKForcedDirectionVolume_StopsProjectile_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKForcedDirectionVolume.UnTouch
// ()
// Parameters:
// class AActor*                  Other                          (Parm)

void AUDKForcedDirectionVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.UnTouch");

	AUDKForcedDirectionVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.Touch
// ()
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AUDKForcedDirectionVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.Touch");

	AUDKForcedDirectionVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume
// ()
// Parameters:
// class AActor*                  Other                          (Parm)

void AUDKForcedDirectionVolume::ActorEnteredVolume(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume");

	AUDKForcedDirectionVolume_ActorEnteredVolume_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay
// ()

void AUDKForcedDirectionVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay");

	AUDKForcedDirectionVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded
// ()

void UUDKGameInteraction::NotifyGameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded");

	UUDKGameInteraction_NotifyGameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.BlockUIInput
// ()
// Parameters:
// bool                           bBlock                         (Parm)

void UUDKGameInteraction::BlockUIInput(bool bBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.BlockUIInput");

	UUDKGameInteraction_BlockUIInput_Params params;
	params.bBlock = bBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.ClearUIInputBlocks
// ()

void UUDKGameInteraction::ClearUIInputBlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.ClearUIInputBlocks");

	UUDKGameInteraction_ClearUIInputBlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.ShouldProcessUIInput
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKGameInteraction::ShouldProcessUIInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.ShouldProcessUIInput");

	UUDKGameInteraction_ShouldProcessUIInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.GetTeamNum
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKGameObjective::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.GetTeamNum");

	AUDKGameObjective_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.DrawIcon
// ()
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 IconLocation                   (Parm)
// float                          IconWidth                      (Parm)
// float                          IconAlpha                      (Parm)
// class AUDKPlayerController*    PlayerOwner                    (Parm)
// struct FLinearColor            DrawColor                      (Parm)

void AUDKGameObjective::DrawIcon(class UCanvas* Canvas, const struct FVector& IconLocation, float IconWidth, float IconAlpha, class AUDKPlayerController* PlayerOwner, const struct FLinearColor& DrawColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.DrawIcon");

	AUDKGameObjective_DrawIcon_Params params;
	params.Canvas = Canvas;
	params.IconLocation = IconLocation;
	params.IconWidth = IconWidth;
	params.IconAlpha = IconAlpha;
	params.PlayerOwner = PlayerOwner;
	params.DrawColor = DrawColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameObjective.SetHUDLocation
// ()
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKGameObjective::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.SetHUDLocation");

	AUDKGameObjective_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameObjective.TriggerFlagEvent
// ()
// Parameters:
// struct FName                   EventType                      (Parm)
// class AController*             EventInstigator                (Parm)

void AUDKGameObjective::TriggerFlagEvent(const struct FName& EventType, class AController* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.TriggerFlagEvent");

	AUDKGameObjective_TriggerFlagEvent_Params params;
	params.EventType = EventType;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameObjective.BotNearObjective
// ()
// Parameters:
// class AAIController*           C                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKGameObjective::BotNearObjective(class AAIController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.BotNearObjective");

	AUDKGameObjective_BotNearObjective_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.GetBestViewTarget
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKGameObjective::GetBestViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.GetBestViewTarget");

	AUDKGameObjective_GetBestViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.ObjectiveChanged
// ()

void AUDKGameObjective::ObjectiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.ObjectiveChanged");

	AUDKGameObjective_ObjectiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameSettingsCommon.BlobToString
// ()
// Parameters:
// struct FString                 InBlob                         (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKGameSettingsCommon::BlobToString(struct FString* InBlob)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameSettingsCommon.BlobToString");

	UUDKGameSettingsCommon_BlobToString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBlob != nullptr)
		*InBlob = params.InBlob;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameSettingsCommon.StringToBlob
// ()
// Parameters:
// struct FString                 InString                       (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 OutBlob                        (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKGameSettingsCommon::StringToBlob(struct FString* InString, struct FString* OutBlob)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameSettingsCommon.StringToBlob");

	UUDKGameSettingsCommon_StringToBlob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InString != nullptr)
		*InString = params.InString;
	if (OutBlob != nullptr)
		*OutBlob = params.OutBlob;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage
// ()
// Parameters:
// struct FString                 Category1Name                  (Parm, NeedCtorLink)
// struct FString                 Category2Name                  (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKGameViewportClient::LoadRandomLocalizedHintMessage(const struct FString& Category1Name, const struct FString& Category2Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage");

	UUDKGameViewportClient_LoadRandomLocalizedHintMessage_Params params;
	params.Category1Name = Category1Name;
	params.Category2Name = Category2Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKHUD.TranslateBindToFont
// ()
// Parameters:
// struct FString                 InBindStr                      (Parm, NeedCtorLink)
// class UFont*                   DrawFont                       (Parm, OutParm)
// struct FString                 OutBindStr                     (Parm, OutParm, NeedCtorLink)

void AUDKHUD::TranslateBindToFont(const struct FString& InBindStr, class UFont** DrawFont, struct FString* OutBindStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKHUD.TranslateBindToFont");

	AUDKHUD_TranslateBindToFont_Params params;
	params.InBindStr = InBindStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DrawFont != nullptr)
		*DrawFont = params.DrawFont;
	if (OutBindStr != nullptr)
		*OutBindStr = params.OutBindStr;
}


// Function UDKBase.UDKHUD.DrawGlowText
// ()
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          MaxHeightInPixels              (OptionalParm, Parm)
// float                          PulseTime                      (OptionalParm, Parm)
// bool                           bRightJustified                (OptionalParm, Parm)

void AUDKHUD::DrawGlowText(const struct FString& Text, float X, float Y, float MaxHeightInPixels, float PulseTime, bool bRightJustified)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKHUD.DrawGlowText");

	AUDKHUD_DrawGlowText_Params params;
	params.Text = Text;
	params.X = X;
	params.Y = Y;
	params.MaxHeightInPixels = MaxHeightInPixels;
	params.PulseTime = PulseTime;
	params.bRightJustified = bRightJustified;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKJumpPad.SuggestMovePreparation
// ()
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKJumpPad::SuggestMovePreparation(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKJumpPad.SuggestMovePreparation");

	AUDKJumpPad_SuggestMovePreparation_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKJumpPad.PostTouch
// ()
// Parameters:
// class AActor*                  Other                          (Parm)

void AUDKJumpPad::PostTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKJumpPad.PostTouch");

	AUDKJumpPad_PostTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKJumpPad.Touch
// ()
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AUDKJumpPad::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKJumpPad.Touch");

	AUDKJumpPad_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.ReplicatedEvent
// ()
// Parameters:
// struct FName                   VarName                        (Parm)

void AUDKKActorBreakable::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.ReplicatedEvent");

	AUDKKActorBreakable_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.BreakApart
// ()

void AUDKKActorBreakable::BreakApart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.BreakApart");

	AUDKKActorBreakable_BreakApart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.EncroachingOn
// ()
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKKActorBreakable::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.EncroachingOn");

	AUDKKActorBreakable_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKKActorBreakable.TakeDamage
// ()
// Parameters:
// int                            Damage                         (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AUDKKActorBreakable::TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.TakeDamage");

	AUDKKActorBreakable_TakeDamage_Params params;
	params.Damage = Damage;
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


// Function UDKBase.UDKKActorBreakable.OnEncroach
// ()
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKKActorBreakable::OnEncroach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.OnEncroach");

	AUDKKActorBreakable_OnEncroach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKKActorBreakable.OnBreakApart
// ()

void AUDKKActorBreakable::OnBreakApart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.OnBreakApart");

	AUDKKActorBreakable_OnBreakApart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKParticleSystemComponent.SetFOV
// ()
// Parameters:
// float                          NewFOV                         (Parm)

void UUDKParticleSystemComponent::SetFOV(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKParticleSystemComponent.SetFOV");

	UUDKParticleSystemComponent_SetFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.StuckFalling
// ()

void AUDKPawn::StuckFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StuckFalling");

	AUDKPawn_StuckFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.UpdateEyeHeight
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void AUDKPawn::UpdateEyeHeight(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.UpdateEyeHeight");

	AUDKPawn_UpdateEyeHeight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.TakeHitBlendedOut
// ()

void AUDKPawn::TakeHitBlendedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.TakeHitBlendedOut");

	AUDKPawn_TakeHitBlendedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim
// ()

void AUDKPawn::StartFeignDeathRecoveryAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim");

	AUDKPawn_StartFeignDeathRecoveryAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SetHandIKEnabled
// ()
// Parameters:
// bool                           bEnabled                       (Parm)

void AUDKPawn::SetHandIKEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SetHandIKEnabled");

	AUDKPawn_SetHandIKEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility
// ()
// Parameters:
// bool                           bAttachmentVisible             (Parm)

void AUDKPawn::SetWeaponAttachmentVisibility(bool bAttachmentVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility");

	AUDKPawn_SetWeaponAttachmentVisibility_Params params;
	params.bAttachmentVisible = bAttachmentVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.NativePostRenderFor
// ()
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AUDKPawn::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.NativePostRenderFor");

	AUDKPawn_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SetHUDLocation
// ()
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKPawn::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SetHUDLocation");

	AUDKPawn_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SuggestJumpVelocity
// ()
// Parameters:
// struct FVector                 JumpVelocity                   (Parm, OutParm)
// struct FVector                 Destination                    (Parm)
// struct FVector                 Start                          (Parm)
// bool                           bRequireFallLanding            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPawn::SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool bRequireFallLanding, struct FVector* JumpVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SuggestJumpVelocity");

	AUDKPawn_SuggestJumpVelocity_Params params;
	params.Destination = Destination;
	params.Start = Start;
	params.bRequireFallLanding = bRequireFallLanding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpVelocity != nullptr)
		*JumpVelocity = params.JumpVelocity;

	return params.ReturnValue;
}


// Function UDKBase.UDKPawn.StartCrouch
// ()
// Parameters:
// float                          HeightAdjust                   (Parm)

void AUDKPawn::StartCrouch(float HeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StartCrouch");

	AUDKPawn_StartCrouch_Params params;
	params.HeightAdjust = HeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.EndCrouch
// ()
// Parameters:
// float                          HeightAdjust                   (Parm)

void AUDKPawn::EndCrouch(float HeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.EndCrouch");

	AUDKPawn_EndCrouch_Params params;
	params.HeightAdjust = HeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.StoppedFalling
// ()

void AUDKPawn::StoppedFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StoppedFalling");

	AUDKPawn_StoppedFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.HoldGameObject
// ()
// Parameters:
// class AUDKCarriedObject*       UDKGameObj                     (Parm)

void AUDKPawn::HoldGameObject(class AUDKCarriedObject* UDKGameObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.HoldGameObject");

	AUDKPawn_HoldGameObject_Params params;
	params.UDKGameObj = UDKGameObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.IsInvisible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPawn::IsInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.IsInvisible");

	AUDKPawn_IsInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPawn.GetTargetLocation
// ()
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// bool                           bRequestAlternateLoc           (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKPawn::GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.GetTargetLocation");

	AUDKPawn_GetTargetLocation_Params params;
	params.RequestedBy = RequestedBy;
	params.bRequestAlternateLoc = bRequestAlternateLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPawn.EnsureOverlayComponentLast
// ()

void AUDKPawn::EnsureOverlayComponentLast()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.EnsureOverlayComponentLast");

	AUDKPawn_EnsureOverlayComponentLast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent
// ()

void AUDKPawn::RestorePreRagdollCollisionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent");

	AUDKPawn_RestorePreRagdollCollisionComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.GetBoundingCylinder
// ()
// Parameters:
// float                          CollisionRadius                (Parm, OutParm)
// float                          CollisionHeight                (Parm, OutParm)

void AUDKPawn::GetBoundingCylinder(float* CollisionRadius, float* CollisionHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.GetBoundingCylinder");

	AUDKPawn_GetBoundingCylinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionRadius != nullptr)
		*CollisionRadius = params.CollisionRadius;
	if (CollisionHeight != nullptr)
		*CollisionHeight = params.CollisionHeight;
}


// Function UDKBase.UDKPickupFactory.SetPickupHidden
// ()

void AUDKPickupFactory::SetPickupHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPickupFactory.SetPickupHidden");

	AUDKPickupFactory_SetPickupHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPickupFactory.SetPickupVisible
// ()

void AUDKPickupFactory::SetPickupVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPickupFactory.SetPickupVisible");

	AUDKPickupFactory_SetPickupVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.SetUseTiltForwardAndBack
// ()
// Parameters:
// bool                           bActive                        (Parm)

void AUDKPlayerController::SetUseTiltForwardAndBack(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.SetUseTiltForwardAndBack");

	AUDKPlayerController_SetUseTiltForwardAndBack_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.SetOnlyUseControllerTiltInput
// ()
// Parameters:
// bool                           bActive                        (Parm)

void AUDKPlayerController::SetOnlyUseControllerTiltInput(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.SetOnlyUseControllerTiltInput");

	AUDKPlayerController_SetOnlyUseControllerTiltInput_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.SetControllerTiltActive
// ()
// Parameters:
// bool                           bActive                        (Parm)

void AUDKPlayerController::SetControllerTiltActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.SetControllerTiltActive");

	AUDKPlayerController_SetControllerTiltActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.SetControllerTiltDesiredIfAvailable
// ()
// Parameters:
// bool                           bActive                        (Parm)

void AUDKPlayerController::SetControllerTiltDesiredIfAvailable(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.SetControllerTiltDesiredIfAvailable");

	AUDKPlayerController_SetControllerTiltDesiredIfAvailable_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.IsControllerTiltActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPlayerController::IsControllerTiltActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.IsControllerTiltActive");

	AUDKPlayerController_IsControllerTiltActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget
// ()
// Parameters:
// float                          MaxDistance                    (Parm)
// struct FVector                 CamLoc                         (Const, Parm, OutParm)
// struct FRotator                CamRot                         (Const, Parm, OutParm)
// class APawn*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class APawn* AUDKPlayerController::GetTargetAdhesionFrictionTarget(float MaxDistance, struct FVector* CamLoc, struct FRotator* CamRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget");

	AUDKPlayerController_GetTargetAdhesionFrictionTarget_Params params;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CamLoc != nullptr)
		*CamLoc = params.CamLoc;
	if (CamRot != nullptr)
		*CamRot = params.CamRot;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.ClearCameraEffect
// ()

void AUDKPlayerController::ClearCameraEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.ClearCameraEffect");

	AUDKPlayerController_ClearCameraEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect
// ()
// Parameters:
// class UClass*                  CameraEffectClass              (Parm)

void AUDKPlayerController::ClientSpawnCameraEffect(class UClass* CameraEffectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect");

	AUDKPlayerController_ClientSpawnCameraEffect_Params params;
	params.CameraEffectClass = CameraEffectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.RemoveCameraEffect
// ()
// Parameters:
// class AUDKEmitCameraEffect*    CamEmitter                     (Parm)

void AUDKPlayerController::RemoveCameraEffect(class AUDKEmitCameraEffect* CamEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.RemoveCameraEffect");

	AUDKPlayerController_RemoveCameraEffect_Params params;
	params.CamEmitter = CamEmitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.IsMouseAvailable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPlayerController::IsMouseAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.IsMouseAvailable");

	AUDKPlayerController_IsMouseAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.IsKeyboardAvailable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPlayerController::IsKeyboardAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.IsKeyboardAvailable");

	AUDKPlayerController_IsKeyboardAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.SetHardwarePhysicsEnabled
// ()
// Parameters:
// bool                           bEnabled                       (Parm)

void AUDKPlayerController::SetHardwarePhysicsEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.SetHardwarePhysicsEnabled");

	AUDKPlayerController_SetHardwarePhysicsEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.SetGamma
// ()
// Parameters:
// float                          GammaValue                     (Parm)

void AUDKPlayerController::SetGamma(float GammaValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.SetGamma");

	AUDKPlayerController_SetGamma_Params params;
	params.GammaValue = GammaValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand
// ()
// Parameters:
// struct FString                 BindCommand                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKPlayerInput::GetUDKBindNameFromCommand(const struct FString& BindCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand");

	UUDKPlayerInput_GetUDKBindNameFromCommand_Params params;
	params.BindCommand = BindCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKProfileSettings.ResetKeysToDefault
// ()
// Parameters:
// class ULocalPlayer*            InPlayerOwner                  (OptionalParm, Parm)

void UUDKProfileSettings::ResetKeysToDefault(class ULocalPlayer* InPlayerOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProfileSettings.ResetKeysToDefault");

	UUDKProfileSettings_ResetKeysToDefault_Params params;
	params.InPlayerOwner = InPlayerOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKProfileSettings.ResetToDefault
// ()
// Parameters:
// int                            ProfileId                      (Parm)

void UUDKProfileSettings::ResetToDefault(int ProfileId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProfileSettings.ResetToDefault");

	UUDKProfileSettings_ResetToDefault_Params params;
	params.ProfileId = ProfileId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKProjectile.CreateProjectileLight
// ()

void AUDKProjectile::CreateProjectileLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProjectile.CreateProjectileLight");

	AUDKProjectile_CreateProjectileLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKProjectile.GetTerminalVelocity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKProjectile::GetTerminalVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProjectile.GetTerminalVelocity");

	AUDKProjectile_GetTerminalVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKScout.SuggestJumpVelocity
// ()
// Parameters:
// struct FVector                 JumpVelocity                   (Parm, OutParm)
// struct FVector                 Destination                    (Parm)
// struct FVector                 Start                          (Parm)
// bool                           bRequireFallLanding            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKScout::SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool bRequireFallLanding, struct FVector* JumpVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKScout.SuggestJumpVelocity");

	AUDKScout_SuggestJumpVelocity_Params params;
	params.Destination = Destination;
	params.Start = Start;
	params.bRequireFallLanding = bRequireFallLanding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpVelocity != nullptr)
		*JumpVelocity = params.JumpVelocity;

	return params.ReturnValue;
}


// Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult
// ()
// Parameters:
// class ANavigationPoint*        EndAnchor                      (Parm)
// class APawn*                   RouteFinder                    (Parm)

void AUDKScriptedNavigationPoint::NotifyAnchorFindingResult(class ANavigationPoint* EndAnchor, class APawn* RouteFinder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult");

	AUDKScriptedNavigationPoint_NotifyAnchorFindingResult_Params params;
	params.EndAnchor = EndAnchor;
	params.RouteFinder = RouteFinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor
// ()
// Parameters:
// class APawn*                   RouteFinder                    (Parm)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* AUDKScriptedNavigationPoint::SpecifyEndAnchor(class APawn* RouteFinder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor");

	AUDKScriptedNavigationPoint_SpecifyEndAnchor_Params params;
	params.RouteFinder = RouteFinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkeletalMeshComponent.SetFOV
// ()
// Parameters:
// float                          NewFOV                         (Parm)

void UUDKSkeletalMeshComponent::SetFOV(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkeletalMeshComponent.SetFOV");

	UUDKSkeletalMeshComponent_SetFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures
// ()
// Parameters:
// bool                           bForcePreload                  (Parm)
// float                          ClearTime                      (Parm)

void UUDKSkeletalMeshComponent::PreloadTextures(bool bForcePreload, float ClearTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures");

	UUDKSkeletalMeshComponent_PreloadTextures_Params params;
	params.bForcePreload = bForcePreload;
	params.ClearTime = ClearTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKTeamOwnedInfo.GetTeamNum
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKTeamOwnedInfo::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeamOwnedInfo.GetTeamNum");

	AUDKTeamOwnedInfo_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKTeleporterBase.Accept
// ()
// Parameters:
// class AActor*                  Incoming                       (Parm)
// class AActor*                  Source                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKTeleporterBase::Accept(class AActor* Incoming, class AActor* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeleporterBase.Accept");

	AUDKTeleporterBase_Accept_Params params;
	params.Incoming = Incoming;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKTeleporterBase.InitializePortalEffect
// ()
// Parameters:
// class AActor*                  Dest                           (Parm)

void AUDKTeleporterBase::InitializePortalEffect(class AActor* Dest)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeleporterBase.InitializePortalEffect");

	AUDKTeleporterBase_InitializePortalEffect_Params params;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKTeleporterBase.PostBeginPlay
// ()

void AUDKTeleporterBase::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeleporterBase.PostBeginPlay");

	AUDKTeleporterBase_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataProvider_SearchResult::IsPrivateServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer");

	UUDKUIDataProvider_SearchResult_IsPrivateServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataProvider_SimpleElementProvider.GetElementCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataProvider_SimpleElementProvider::GetElementCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataProvider_SimpleElementProvider.GetElementCount");

	UUDKUIDataProvider_SimpleElementProvider_GetElementCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataProvider_ServerDetails.GetElementCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataProvider_ServerDetails::GetElementCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataProvider_ServerDetails.GetElementCount");

	UUDKUIDataProvider_ServerDetails_GetElementCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataProvider_ServerDetails.GetSearchResultsProvider
// ()
// Parameters:
// class UUIDataProvider_Settings* ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIDataProvider_Settings* UUDKUIDataProvider_ServerDetails::GetSearchResultsProvider()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataProvider_ServerDetails.GetSearchResultsProvider");

	UUDKUIDataProvider_ServerDetails_GetSearchResultsProvider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataProvider_StringArray.GetElementCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataProvider_StringArray::GetElementCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataProvider_StringArray.GetElementCount");

	UUDKUIDataProvider_StringArray_GetElementCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey
// ()
// Parameters:
// struct FName                   KeyName                        (Parm)
// class UUDKUIResourceDataProvider* Provider                       (Parm)

void UUDKUIDataStore_MenuItems::AddListElementProvidersKey(const struct FName& KeyName, class UUDKUIResourceDataProvider* Provider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey");

	UUDKUIDataStore_MenuItems_AddListElementProvidersKey_Params params;
	params.KeyName = KeyName;
	params.Provider = Provider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey
// ()
// Parameters:
// struct FName                   KeyName                        (Parm)

void UUDKUIDataStore_MenuItems::RemoveListElementProvidersKey(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey");

	UUDKUIDataStore_MenuItems_RemoveListElementProvidersKey_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders
// ()

void UUDKUIDataStore_MenuItems::InitializeListElementProviders()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders");

	UUDKUIDataStore_MenuItems_InitializeListElementProviders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet
// ()
// Parameters:
// struct FName                   ProviderFieldName              (Parm)
// TArray<class UUDKUIResourceDataProvider*> OutProviders                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_MenuItems::GetProviderSet(const struct FName& ProviderFieldName, TArray<class UUDKUIResourceDataProvider*>* OutProviders)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet");

	UUDKUIDataStore_MenuItems_GetProviderSet_Params params;
	params.ProviderFieldName = ProviderFieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProviders != nullptr)
		*OutProviders = params.OutProviders;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_MenuItems.GetValueFromProviderSet
// ()
// Parameters:
// struct FName                   ProviderFieldName              (Parm)
// struct FName                   SearchTag                      (Parm)
// int                            ListIndex                      (Parm)
// struct FString                 OutValue                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_MenuItems::GetValueFromProviderSet(const struct FName& ProviderFieldName, const struct FName& SearchTag, int ListIndex, struct FString* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.GetValueFromProviderSet");

	UUDKUIDataStore_MenuItems_GetValueFromProviderSet_Params params;
	params.ProviderFieldName = ProviderFieldName;
	params.SearchTag = SearchTag;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_MenuItems.FindValueInProviderSet
// ()
// Parameters:
// struct FName                   ProviderFieldName              (Parm)
// struct FName                   SearchTag                      (Parm)
// struct FString                 SearchValue                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_MenuItems::FindValueInProviderSet(const struct FName& ProviderFieldName, const struct FName& SearchTag, const struct FString& SearchValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.FindValueInProviderSet");

	UUDKUIDataStore_MenuItems_FindValueInProviderSet_Params params;
	params.ProviderFieldName = ProviderFieldName;
	params.SearchTag = SearchTag;
	params.SearchValue = SearchValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders
// ()
// Parameters:
// class UClass*                  ProviderClass                  (Parm)
// TArray<class UUDKUIResourceDataProvider*> Providers                      (Parm, OutParm, NeedCtorLink)

void UUDKUIDataStore_MenuItems::GetAllResourceDataProviders(class UClass* ProviderClass, TArray<class UUDKUIResourceDataProvider*>* Providers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders");

	UUDKUIDataStore_MenuItems_GetAllResourceDataProviders_Params params;
	params.ProviderClass = ProviderClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Providers != nullptr)
		*Providers = params.Providers;
}


// Function UDKBase.UDKUIDataStore_MenuItems.IsProviderFiltered
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ProviderIdx                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_MenuItems::IsProviderFiltered(const struct FName& FieldName, int ProviderIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.IsProviderFiltered");

	UUDKUIDataStore_MenuItems_IsProviderFiltered_Params params;
	params.FieldName = FieldName;
	params.ProviderIdx = ProviderIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_MenuItems.GetProviderCount
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_MenuItems::GetProviderCount(const struct FName& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.GetProviderCount");

	UUDKUIDataStore_MenuItems_GetProviderCount_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_Options.GetSet
// ()
// Parameters:
// struct FName                   SetName                        (Parm)
// TArray<class UUDKUIResourceDataProvider*> OutProviders                   (Parm, OutParm, NeedCtorLink)

void UUDKUIDataStore_Options::GetSet(const struct FName& SetName, TArray<class UUDKUIResourceDataProvider*>* OutProviders)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_Options.GetSet");

	UUDKUIDataStore_Options_GetSet_Params params;
	params.SetName = SetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProviders != nullptr)
		*OutProviders = params.OutProviders;
}


// Function UDKBase.UDKUIDataStore_Options.AppendToSet
// ()
// Parameters:
// struct FName                   SetName                        (Parm)
// int                            NumOptions                     (Parm)

void UUDKUIDataStore_Options::AppendToSet(const struct FName& SetName, int NumOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_Options.AppendToSet");

	UUDKUIDataStore_Options_AppendToSet_Params params;
	params.SetName = SetName;
	params.NumOptions = NumOptions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_Options.ClearSet
// ()
// Parameters:
// struct FName                   SetName                        (Parm)

void UUDKUIDataStore_Options::ClearSet(const struct FName& SetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_Options.ClearSet");

	UUDKUIDataStore_Options_ClearSet_Params params;
	params.SetName = SetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache
// ()

void UUDKUIDataStore_StringAliasBindingMap::ClearBoundKeyCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache");

	UUDKUIDataStore_StringAliasBindingMap_ClearBoundKeyCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache
// ()
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 MappingStr                     (Parm, NeedCtorLink)
// int                            FieldIndex                     (Parm)

void UUDKUIDataStore_StringAliasBindingMap::AddMappingToBoundKeyCache(const struct FString& Command, const struct FString& MappingStr, int FieldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache");

	UUDKUIDataStore_StringAliasBindingMap_AddMappingToBoundKeyCache_Params params;
	params.Command = Command;
	params.MappingStr = MappingStr;
	params.FieldIndex = FieldIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache
// ()
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 MappingStr                     (Parm, OutParm, NeedCtorLink)
// int                            FieldIndex                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_StringAliasBindingMap::FindMappingInBoundKeyCache(const struct FString& Command, struct FString* MappingStr, int* FieldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache");

	UUDKUIDataStore_StringAliasBindingMap_FindMappingInBoundKeyCache_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappingStr != nullptr)
		*MappingStr = params.MappingStr;
	if (FieldIndex != nullptr)
		*FieldIndex = params.FieldIndex;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FString                 MappedString                   (Parm, OutParm, NeedCtorLink)
// int                            StartIndex                     (OptionalParm, Parm, OutParm)
// struct FString                 BindString                     (OptionalParm, Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringAliasBindingMap::GetBoundStringWithFieldName(const struct FString& FieldName, struct FString* MappedString, int* StartIndex, struct FString* BindString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName");

	UUDKUIDataStore_StringAliasBindingMap_GetBoundStringWithFieldName_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedString != nullptr)
		*MappedString = params.MappedString;
	if (StartIndex != nullptr)
		*StartIndex = params.StartIndex;
	if (BindString != nullptr)
		*BindString = params.BindString;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FString                 MappedString                   (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringAliasBindingMap::GetStringWithFieldName(const struct FString& FieldName, struct FString* MappedString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName");

	UUDKUIDataStore_StringAliasBindingMap_GetStringWithFieldName_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedString != nullptr)
		*MappedString = params.MappedString;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName
// ()
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FString                 MappedString                   (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringAliasMap::GetStringWithFieldName(const struct FString& FieldName, struct FString* MappedString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName");

	UUDKUIDataStore_StringAliasMap_GetStringWithFieldName_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedString != nullptr)
		*MappedString = params.MappedString;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.Num
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::Num(const struct FName& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.Num");

	UUDKUIDataStore_StringList_Num_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            NewValueIndex                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::SetCurrentValueIndex(const struct FName& FieldName, int NewValueIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex");

	UUDKUIDataStore_StringList_SetCurrentValueIndex_Params params;
	params.FieldName = FieldName;
	params.NewValueIndex = NewValueIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::GetCurrentValueIndex(const struct FName& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex");

	UUDKUIDataStore_StringList_GetCurrentValueIndex_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 out_Value                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_StringList::GetCurrentValue(const struct FName& FieldName, struct FString* out_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue");

	UUDKUIDataStore_StringList_GetCurrentValue_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Value != nullptr)
		*out_Value = params.out_Value;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetList
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UUDKUIDataStore_StringList::GetList(const struct FName& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetList");

	UUDKUIDataStore_StringList_GetList_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetStr
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            StrIndex                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKUIDataStore_StringList::GetStr(const struct FName& FieldName, int StrIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetStr");

	UUDKUIDataStore_StringList_GetStr_Params params;
	params.FieldName = FieldName;
	params.StrIndex = StrIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.FindStr
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 SearchString                   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::FindStr(const struct FName& FieldName, const struct FString& SearchString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.FindStr");

	UUDKUIDataStore_StringList_FindStr_Params params;
	params.FieldName = FieldName;
	params.SearchString = SearchString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.Empty
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::Empty(const struct FName& FieldName, bool bBatchOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.Empty");

	UUDKUIDataStore_StringList_Empty_Params params;
	params.FieldName = FieldName;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            Index                          (Parm)
// int                            Count                          (OptionalParm, Parm)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::RemoveStrByIndex(const struct FName& FieldName, int Index, int Count, bool bBatchOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex");

	UUDKUIDataStore_StringList_RemoveStrByIndex_Params params;
	params.FieldName = FieldName;
	params.Index = Index;
	params.Count = Count;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.RemoveStr
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 StringToRemove                 (Parm, NeedCtorLink)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::RemoveStr(const struct FName& FieldName, const struct FString& StringToRemove, bool bBatchOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.RemoveStr");

	UUDKUIDataStore_StringList_RemoveStr_Params params;
	params.FieldName = FieldName;
	params.StringToRemove = StringToRemove;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.InsertStr
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 NewString                      (Parm, NeedCtorLink)
// int                            InsertIndex                    (Parm)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::InsertStr(const struct FName& FieldName, const struct FString& NewString, int InsertIndex, bool bBatchOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.InsertStr");

	UUDKUIDataStore_StringList_InsertStr_Params params;
	params.FieldName = FieldName;
	params.NewString = NewString;
	params.InsertIndex = InsertIndex;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.AddStr
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 NewString                      (Parm, NeedCtorLink)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::AddStr(const struct FName& FieldName, const struct FString& NewString, bool bBatchOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.AddStr");

	UUDKUIDataStore_StringList_AddStr_Params params;
	params.FieldName = FieldName;
	params.NewString = NewString;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex
// ()
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::GetFieldIndex(const struct FName& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex");

	UUDKUIDataStore_StringList_GetFieldIndex_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.Registered
// ()
// Parameters:
// class ULocalPlayer*            PlayerOwner                    (Parm)

void UUDKUIDataStore_StringList::Registered(class ULocalPlayer* PlayerOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.Registered");

	UUDKUIDataStore_StringList_Registered_Params params;
	params.PlayerOwner = PlayerOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIResourceDataProvider::ShouldBeFiltered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered");

	UUDKUIResourceDataProvider_ShouldBeFiltered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIResourceDataProvider.IsFiltered
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIResourceDataProvider::IsFiltered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIResourceDataProvider.IsFiltered");

	UUDKUIResourceDataProvider_IsFiltered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver
// ()

void AUDKVehicleBase::HandleDeadVehicleDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver");

	AUDKVehicleBase_HandleDeadVehicleDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.DriverLeft
// ()

void AUDKVehicleBase::DriverLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DriverLeft");

	AUDKVehicleBase_DriverLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.StopFiringWeapon
// ()

void AUDKVehicleBase::StopFiringWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.StopFiringWeapon");

	AUDKVehicleBase_StopFiringWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.BotFire
// ()
// Parameters:
// bool                           bFinished                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicleBase::BotFire(bool bFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.BotFire");

	AUDKVehicleBase_BotFire_Params params;
	params.bFinished = bFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.ChooseFireMode
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicleBase::ChooseFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ChooseFireMode");

	AUDKVehicleBase_ChooseFireMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.DetachDriver
// ()
// Parameters:
// class APawn*                   P                              (Parm)

void AUDKVehicleBase::DetachDriver(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DetachDriver");

	AUDKVehicleBase_DetachDriver_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.EjectDriver
// ()

void AUDKVehicleBase::EjectDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.EjectDriver");

	AUDKVehicleBase_EjectDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AUDKVehicleBase::GetVehicleDrivingStatName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName");

	AUDKVehicleBase_GetVehicleDrivingStatName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.ApplyWeaponEffects
// ()
// Parameters:
// int                            OverlayFlags                   (Parm)
// int                            SeatIndex                      (OptionalParm, Parm)

void AUDKVehicleBase::ApplyWeaponEffects(int OverlayFlags, int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ApplyWeaponEffects");

	AUDKVehicleBase_ApplyWeaponEffects_Params params;
	params.OverlayFlags = OverlayFlags;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.DriverEnter
// ()
// Parameters:
// class APawn*                   P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicleBase::DriverEnter(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DriverEnter");

	AUDKVehicleBase_DriverEnter_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.DrivingStatusChanged
// ()

void AUDKVehicleBase::DrivingStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DrivingStatusChanged");

	AUDKVehicleBase_DrivingStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.NeedToTurn
// ()
// Parameters:
// struct FVector                 targ                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicleBase::NeedToTurn(const struct FVector& targ)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.NeedToTurn");

	AUDKVehicleBase_NeedToTurn_Params params;
	params.targ = targ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.GetDamageScaling
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKVehicleBase::GetDamageScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.GetDamageScaling");

	AUDKVehicleBase_GetDamageScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.ServerChangeSeat
// ()
// Parameters:
// int                            RequestedSeat                  (Parm)

void AUDKVehicleBase::ServerChangeSeat(int RequestedSeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ServerChangeSeat");

	AUDKVehicleBase_ServerChangeSeat_Params params;
	params.RequestedSeat = RequestedSeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.ServerAdjacentSeat
// ()
// Parameters:
// int                            Direction                      (Parm)
// class AController*             C                              (Parm)

void AUDKVehicleBase::ServerAdjacentSeat(int Direction, class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ServerAdjacentSeat");

	AUDKVehicleBase_ServerAdjacentSeat_Params params;
	params.Direction = Direction;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.AdjacentSeat
// ()
// Parameters:
// int                            Direction                      (Parm)
// class AController*             C                              (Parm)

void AUDKVehicleBase::AdjacentSeat(int Direction, class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.AdjacentSeat");

	AUDKVehicleBase_AdjacentSeat_Params params;
	params.Direction = Direction;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.SwitchWeapon
// ()
// Parameters:
// unsigned char                  NewGroup                       (Parm)

void AUDKVehicleBase::SwitchWeapon(unsigned char NewGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.SwitchWeapon");

	AUDKVehicleBase_SwitchWeapon_Params params;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.HoldGameObject
// ()
// Parameters:
// class AUDKCarriedObject*       GameObj                        (Parm)

void AUDKVehicleBase::HoldGameObject(class AUDKCarriedObject* GameObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.HoldGameObject");

	AUDKVehicleBase_HoldGameObject_Params params;
	params.GameObj = GameObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect
// ()
// Parameters:
// float                          DustHeight                     (Parm)

void AUDKVehicle::UpdateHoverboardDustEffect(float DustHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect");

	AUDKVehicle_UpdateHoverboardDustEffect_Params params;
	params.DustHeight = DustHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.PostInitRigidBody
// ()
// Parameters:
// class UPrimitiveComponent*     PrimComp                       (Parm, EditInline)

void AUDKVehicle::PostInitRigidBody(class UPrimitiveComponent* PrimComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.PostInitRigidBody");

	AUDKVehicle_PostInitRigidBody_Params params;
	params.PrimComp = PrimComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.TakeFireDamage
// ()

void AUDKVehicle::TakeFireDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.TakeFireDamage");

	AUDKVehicle_TakeFireDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.CheckReset
// ()

void AUDKVehicle::CheckReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.CheckReset");

	AUDKVehicle_CheckReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.TakeWaterDamage
// ()

void AUDKVehicle::TakeWaterDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.TakeWaterDamage");

	AUDKVehicle_TakeWaterDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.RBPenetrationDestroy
// ()

void AUDKVehicle::RBPenetrationDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.RBPenetrationDestroy");

	AUDKVehicle_RBPenetrationDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.MorphTargetDestroyed
// ()
// Parameters:
// int                            MorphNodeIndex                 (Parm)

void AUDKVehicle::MorphTargetDestroyed(int MorphNodeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.MorphTargetDestroyed");

	AUDKVehicle_MorphTargetDestroyed_Params params;
	params.MorphNodeIndex = MorphNodeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.ApplyMorphDamage
// ()
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// struct FVector                 Momentum                       (Parm)

void AUDKVehicle::ApplyMorphDamage(const struct FVector& HitLocation, int Damage, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.ApplyMorphDamage");

	AUDKVehicle_ApplyMorphDamage_Params params;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.UpdateDamageMaterial
// ()

void AUDKVehicle::UpdateDamageMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.UpdateDamageMaterial");

	AUDKVehicle_UpdateDamageMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.InitDamageSkel
// ()

void AUDKVehicle::InitDamageSkel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.InitDamageSkel");

	AUDKVehicle_InitDamageSkel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.SetHUDLocation
// ()
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKVehicle::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SetHUDLocation");

	AUDKVehicle_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.InUseableRange
// ()
// Parameters:
// class AUDKPlayerController*    PC                             (Parm)
// float                          Dist                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::InUseableRange(class AUDKPlayerController* PC, float Dist)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.InUseableRange");

	AUDKVehicle_InUseableRange_Params params;
	params.PC = PC;
	params.Dist = Dist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.NativePostRenderFor
// ()
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AUDKVehicle::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.NativePostRenderFor");

	AUDKVehicle_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.GetTeamNum
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicle::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetTeamNum");

	AUDKVehicle_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SelfDestruct
// ()
// Parameters:
// class AActor*                  ImpactedActor                  (Parm)

void AUDKVehicle::SelfDestruct(class AActor* ImpactedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SelfDestruct");

	AUDKVehicle_SelfDestruct_Params params;
	params.ImpactedActor = ImpactedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.CheckAutoDestruct
// ()
// Parameters:
// class ATeamInfo*               InstigatorTeam                 (Parm)
// float                          CheckRadius                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::CheckAutoDestruct(class ATeamInfo* InstigatorTeam, float CheckRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.CheckAutoDestruct");

	AUDKVehicle_CheckAutoDestruct_Params params;
	params.InstigatorTeam = InstigatorTeam;
	params.CheckRadius = CheckRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetMaxRiseForce
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKVehicle::GetMaxRiseForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetMaxRiseForce");

	AUDKVehicle_GetMaxRiseForce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.JumpOutCheck
// ()

void AUDKVehicle::JumpOutCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.JumpOutCheck");

	AUDKVehicle_JumpOutCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.ReceivedHealthChange
// ()

void AUDKVehicle::ReceivedHealthChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.ReceivedHealthChange");

	AUDKVehicle_ReceivedHealthChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.PlayTakeHitEffects
// ()

void AUDKVehicle::PlayTakeHitEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.PlayTakeHitEffects");

	AUDKVehicle_PlayTakeHitEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.OnTouchForcedDirVolume
// ()
// Parameters:
// class AUDKForcedDirectionVolume* Vol                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::OnTouchForcedDirVolume(class AUDKForcedDirectionVolume* Vol)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.OnTouchForcedDirVolume");

	AUDKVehicle_OnTouchForcedDirVolume_Params params;
	params.Vol = Vol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetGravityZ
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKVehicle::GetGravityZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetGravityZ");

	AUDKVehicle_GetGravityZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.OnPropertyChange
// ()
// Parameters:
// struct FName                   PropName                       (Parm)

void AUDKVehicle::OnPropertyChange(const struct FName& PropName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.OnPropertyChange");

	AUDKVehicle_OnPropertyChange_Params params;
	params.PropName = PropName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.LockOnWarning
// ()
// Parameters:
// class AUDKProjectile*          IncomingMissile                (Parm)

void AUDKVehicle::LockOnWarning(class AUDKProjectile* IncomingMissile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.LockOnWarning");

	AUDKVehicle_LockOnWarning_Params params;
	params.IncomingMissile = IncomingMissile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.GetRanOverDamageType
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AUDKVehicle::GetRanOverDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetRanOverDamageType");

	AUDKVehicle_GetRanOverDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer
// ()
// Parameters:
// int                            SeatIndex                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::IsSeatControllerReplicationViewer(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer");

	AUDKVehicle_IsSeatControllerReplicationViewer_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetBarrelIndex
// ()
// Parameters:
// int                            SeatIndex                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AUDKVehicle::GetBarrelIndex(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetBarrelIndex");

	AUDKVehicle_GetBarrelIndex_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetSeatPivotPoint
// ()
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKVehicle::GetSeatPivotPoint(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetSeatPivotPoint");

	AUDKVehicle_GetSeatPivotPoint_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.ForceWeaponRotation
// ()
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FRotator                NewRotation                    (Parm)

void AUDKVehicle::ForceWeaponRotation(int SeatIndex, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.ForceWeaponRotation");

	AUDKVehicle_ForceWeaponRotation_Params params;
	params.SeatIndex = SeatIndex;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.SeatFiringMode
// ()
// Parameters:
// int                            SeatIndex                      (Parm)
// unsigned char                  NewFireMode                    (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicle::SeatFiringMode(int SeatIndex, unsigned char NewFireMode, bool bReadValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatFiringMode");

	AUDKVehicle_SeatFiringMode_Params params;
	params.SeatIndex = SeatIndex;
	params.NewFireMode = NewFireMode;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SeatFlashCount
// ()
// Parameters:
// int                            SeatIndex                      (Parm)
// unsigned char                  NewCount                       (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicle::SeatFlashCount(int SeatIndex, unsigned char NewCount, bool bReadValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatFlashCount");

	AUDKVehicle_SeatFlashCount_Params params;
	params.SeatIndex = SeatIndex;
	params.NewCount = NewCount;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SeatFlashLocation
// ()
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FVector                 NewLoc                         (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKVehicle::SeatFlashLocation(int SeatIndex, const struct FVector& NewLoc, bool bReadValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatFlashLocation");

	AUDKVehicle_SeatFlashLocation_Params params;
	params.SeatIndex = SeatIndex;
	params.NewLoc = NewLoc;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SeatWeaponRotation
// ()
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FRotator                NewRot                         (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AUDKVehicle::SeatWeaponRotation(int SeatIndex, const struct FRotator& NewRot, bool bReadValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatWeaponRotation");

	AUDKVehicle_SeatWeaponRotation_Params params;
	params.SeatIndex = SeatIndex;
	params.NewRot = NewRot;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKWeaponPawn.GetTargetLocation
// ()
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// bool                           bRequestAlternateLoc           (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKWeaponPawn::GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeaponPawn.GetTargetLocation");

	AUDKWeaponPawn_GetTargetLocation_Params params;
	params.RequestedBy = RequestedBy;
	params.bRequestAlternateLoc = bRequestAlternateLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleFactory.GetTeamNum
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicleFactory::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleFactory.GetTeamNum");

	AUDKVehicleFactory_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleFactory.SetHUDLocation
// ()
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKVehicleFactory::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleFactory.SetHUDLocation");

	AUDKVehicleFactory_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleFactory.SpawnVehicle
// ()

void AUDKVehicleFactory::SpawnVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleFactory.SpawnVehicle");

	AUDKVehicleFactory_SpawnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint
// ()
// Parameters:
// class URB_ConstraintInstance*  LeanUprightConstraintInstance  (Parm)
// struct FVector                 LeanY                          (Parm)
// struct FVector                 LeanZ                          (Parm)

void UUDKVehicleSimHoverboard::UpdateLeanConstraint(class URB_ConstraintInstance* LeanUprightConstraintInstance, const struct FVector& LeanY, const struct FVector& LeanZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint");

	UUDKVehicleSimHoverboard_UpdateLeanConstraint_Params params;
	params.LeanUprightConstraintInstance = LeanUprightConstraintInstance;
	params.LeanY = LeanY;
	params.LeanZ = LeanZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleSimHoverboard.InitWheels
// ()
// Parameters:
// class AUDKVehicle*             Vehicle                        (Parm)

void UUDKVehicleSimHoverboard::InitWheels(class AUDKVehicle* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleSimHoverboard.InitWheels");

	UUDKVehicleSimHoverboard_InitWheels_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleWheel.OldEffectFinished
// ()
// Parameters:
// class UParticleSystemComponent* PSystem                        (Parm, EditInline)

void UUDKVehicleWheel::OldEffectFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleWheel.OldEffectFinished");

	UUDKVehicleWheel_OldEffectFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleWheel.SetParticleEffect
// ()
// Parameters:
// class AUDKVehicle*             OwnerVehicle                   (Parm)
// class UParticleSystem*         NewTemplate                    (Parm)

void UUDKVehicleWheel::SetParticleEffect(class AUDKVehicle* OwnerVehicle, class UParticleSystem* NewTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleWheel.SetParticleEffect");

	UUDKVehicleWheel_SetParticleEffect_Params params;
	params.OwnerVehicle = OwnerVehicle;
	params.NewTemplate = NewTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKWeapon.SetPosition
// ()
// Parameters:
// class AUDKPawn*                Holder                         (Parm)

void AUDKWeapon::SetPosition(class AUDKPawn* Holder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.SetPosition");

	AUDKWeapon_SetPosition_Params params;
	params.Holder = Holder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast
// ()

void AUDKWeapon::EnsureWeaponOverlayComponentLast()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast");

	AUDKWeapon_EnsureWeaponOverlayComponentLast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKWeapon.BestMode
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKWeapon::BestMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.BestMode");

	AUDKWeapon_BestMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKWeapon.IsAimCorrect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKWeapon::IsAimCorrect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.IsAimCorrect");

	AUDKWeapon_IsAimCorrect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKWeapon.PostBeginPlay
// ()

void AUDKWeapon::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.PostBeginPlay");

	AUDKWeapon_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendBase.TickAnim
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UUDKAnimBlendBase::TickAnim(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendBase.TickAnim");

	UUDKAnimBlendBase_TickAnim_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendBase.GetAnimDuration
// ()
// Parameters:
// int                            ChildIndex                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKAnimBlendBase::GetAnimDuration(int ChildIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendBase.GetAnimDuration");

	UUDKAnimBlendBase_GetAnimDuration_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKAnimBlendBase.GetBlendTime
// ()
// Parameters:
// int                            ChildIndex                     (Parm)
// bool                           bGetDefault                    (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKAnimBlendBase::GetBlendTime(int ChildIndex, bool bGetDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendBase.GetBlendTime");

	UUDKAnimBlendBase_GetBlendTime_Params params;
	params.ChildIndex = ChildIndex;
	params.bGetDefault = bGetDefault;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState
// ()

void UUDKAnimBlendByFlying::UpdateFlyingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState");

	UUDKAnimBlendByFlying_UpdateFlyingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged
// ()
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)

void UUDKAnimBlendByPhysicsVolume::PhysicsVolumeChanged(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged");

	UUDKAnimBlendByPhysicsVolume_PhysicsVolumeChanged_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState
// ()

void UUDKAnimBlendByVehicle::UpdateVehicleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState");

	UUDKAnimBlendByVehicle_UpdateVehicleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState
// ()

void UUDKAnimBlendByDriving::UpdateDrivingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState");

	UUDKAnimBlendByDriving_UpdateDrivingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire
// ()
// Parameters:
// float                          SpecialBlendTime               (OptionalParm, Parm)

void UUDKAnimBlendByWeapon::AnimStopFire(float SpecialBlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire");

	UUDKAnimBlendByWeapon_AnimStopFire_Params params;
	params.SpecialBlendTime = SpecialBlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByWeapon.AnimFire
// ()
// Parameters:
// struct FName                   FireSequence                   (Parm)
// bool                           bAutoFire                      (Parm)
// float                          AnimRate                       (OptionalParm, Parm)
// float                          SpecialBlendTime               (OptionalParm, Parm)
// struct FName                   LoopSequence                   (OptionalParm, Parm)

void UUDKAnimBlendByWeapon::AnimFire(const struct FName& FireSequence, bool bAutoFire, float AnimRate, float SpecialBlendTime, const struct FName& LoopSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByWeapon.AnimFire");

	UUDKAnimBlendByWeapon_AnimFire_Params params;
	params.FireSequence = FireSequence;
	params.bAutoFire = bAutoFire;
	params.AnimRate = AnimRate;
	params.SpecialBlendTime = SpecialBlendTime;
	params.LoopSequence = LoopSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition
// ()
// Parameters:
// float                          Perc                           (Parm)

void UUDKAnimNodeFramePlayer::SetAnimPosition(float Perc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition");

	UUDKAnimNodeFramePlayer_SetAnimPosition_Params params;
	params.Perc = Perc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation
// ()
// Parameters:
// struct FName                   Sequence                       (Parm)
// float                          RateScale                      (Parm)

void UUDKAnimNodeFramePlayer::SetAnimation(const struct FName& Sequence, float RateScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation");

	UUDKAnimNodeFramePlayer_SetAnimation_Params params;
	params.Sequence = Sequence;
	params.RateScale = RateScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight
// ()
// Parameters:
// float                          WeightTarget                   (Parm)
// float                          BlendTime                      (Parm)

void UUDKAnimNodeJumpLeanOffset::SetLeanWeight(float WeightTarget, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight");

	UUDKAnimNodeJumpLeanOffset_SetLeanWeight_Params params;
	params.WeightTarget = WeightTarget;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequence.OnInit
// ()

void UUDKAnimNodeSequence::OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequence.OnInit");

	UUDKAnimNodeSequence_OnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet
// ()
// Parameters:
// TArray<struct FName>           Sequences                      (Parm, NeedCtorLink)
// float                          SeqRate                        (Parm)
// bool                           bLoopLast                      (Parm)

void UUDKAnimNodeSequence::PlayAnimationSet(TArray<struct FName> Sequences, float SeqRate, bool bLoopLast)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet");

	UUDKAnimNodeSequence_PlayAnimationSet_Params params;
	params.Sequences = Sequences;
	params.SeqRate = SeqRate;
	params.bLoopLast = bLoopLast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequence.PlayAnimation
// ()
// Parameters:
// struct FName                   Sequence                       (Parm)
// float                          SeqRate                        (Parm)
// bool                           bSeqLoop                       (Parm)

void UUDKAnimNodeSequence::PlayAnimation(const struct FName& Sequence, float SeqRate, bool bSeqLoop)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequence.PlayAnimation");

	UUDKAnimNodeSequence_PlayAnimation_Params params;
	params.Sequence = Sequence;
	params.SeqRate = SeqRate;
	params.bSeqLoop = bSeqLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UUDKSkelControl_CantileverBeam::EntireBeamVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity");

	UUDKSkelControl_CantileverBeam_EntireBeamVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_Damage.RestorePart
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKSkelControl_Damage::RestorePart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_Damage.RestorePart");

	UUDKSkelControl_Damage_RestorePart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath
// ()
// Parameters:
// struct FVector                 PartLocation                   (Parm)
// bool                           bIsVisible                     (Parm)

void UUDKSkelControl_Damage::BreakApartOnDeath(const struct FVector& PartLocation, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath");

	UUDKSkelControl_Damage_BreakApartOnDeath_Params params;
	params.PartLocation = PartLocation;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_Damage.BreakApart
// ()
// Parameters:
// struct FVector                 PartLocation                   (Parm)
// bool                           bIsVisible                     (Parm)

void UUDKSkelControl_Damage::BreakApart(const struct FVector& PartLocation, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_Damage.BreakApart");

	UUDKSkelControl_Damage_BreakApart_Params params;
	params.PartLocation = PartLocation;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale
// ()
// Parameters:
// struct FName                   BoneName                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKSkelControl_MassBoneScaling::GetBoneScale(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale");

	UUDKSkelControl_MassBoneScaling_GetBoneScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale
// ()
// Parameters:
// struct FName                   BoneName                       (Parm)
// float                          Scale                          (Parm)

void UUDKSkelControl_MassBoneScaling::SetBoneScale(const struct FName& BoneName, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale");

	UUDKSkelControl_MassBoneScaling_SetBoneScale_Params params;
	params.BoneName = BoneName;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch
// ()
// Parameters:
// int                            TestPitch                      (Parm)
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKSkelControl_TurretConstrained::WouldConstrainPitch(int TestPitch, class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch");

	UUDKSkelControl_TurretConstrained_WouldConstrainPitch_Params params;
	params.TestPitch = TestPitch;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret
// ()
// Parameters:
// struct FRotator                InitRot                        (Parm)
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void UUDKSkelControl_TurretConstrained::InitTurret(const struct FRotator& InitRot, class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret");

	UUDKSkelControl_TurretConstrained_InitTurret_Params params;
	params.InitRot = InitRot;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange
// ()
// Parameters:
// bool                           bIsMoving                      (Parm)

void UUDKSkelControl_TurretConstrained::OnTurretStatusChange(bool bIsMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange");

	UUDKSkelControl_TurretConstrained_OnTurretStatusChange_Params params;
	params.bIsMoving = bIsMoving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant
// ()

void UUDKAnimNodeSequenceByBoneRotation::OnBecomeRelevant()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant");

	UUDKAnimNodeSequenceByBoneRotation_OnBecomeRelevant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
