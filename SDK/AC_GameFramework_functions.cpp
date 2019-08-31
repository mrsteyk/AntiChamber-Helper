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

// Function GameFramework.GameAIController.GetActionString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameAIController::GetActionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActionString");

	AGameAIController_GetActionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.SetDesiredRotation
// ()
// Parameters:
// struct FRotator                TargetDesiredRotation          (Parm)
// bool                           InLockDesiredRotation          (OptionalParm, Parm)
// bool                           InUnlockWhenReached            (OptionalParm, Parm)
// float                          InterpolationTime              (OptionalParm, Parm)

void AGameAIController::SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.SetDesiredRotation");

	AGameAIController_SetDesiredRotation_Params params;
	params.TargetDesiredRotation = TargetDesiredRotation;
	params.InLockDesiredRotation = InLockDesiredRotation;
	params.InUnlockWhenReached = InUnlockWhenReached;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AILog_Internal
// ()
// Parameters:
// struct FString                 LogText                        (Parm, CoerceParm, NeedCtorLink)
// struct FName                   LogCategory                    (OptionalParm, Parm)
// bool                           bForce                         (OptionalParm, Parm)

void AGameAIController::AILog_Internal(const struct FString& LogText, const struct FName& LogCategory, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AILog_Internal");

	AGameAIController_AILog_Internal_Params params;
	params.LogText = LogText;
	params.LogCategory = LogCategory;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.RecordDemoAILog
// ()
// Parameters:
// struct FString                 LogText                        (Parm, CoerceParm, NeedCtorLink)

void AGameAIController::RecordDemoAILog(const struct FString& LogText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.RecordDemoAILog");

	AGameAIController_RecordDemoAILog_Params params;
	params.LogText = LogText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.Destroyed
// ()

void AGameAIController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.Destroyed");

	AGameAIController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// ()

void AGameAIController::ReachedIntermediateMoveGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedIntermediateMoveGoal");

	AGameAIController_ReachedIntermediateMoveGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.ReachedMoveGoal
// ()

void AGameAIController::ReachedMoveGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedMoveGoal");

	AGameAIController_ReachedMoveGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetDestinationOffset
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameAIController::GetDestinationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetDestinationOffset");

	AGameAIController_GetDestinationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.GetAICommandInStack
// ()
// Parameters:
// class UClass*                  InClass                        (Const, Parm)
// class UGameAICommand*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameAICommand* AGameAIController::GetAICommandInStack(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetAICommandInStack");

	AGameAIController_GetAICommandInStack_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.FindCommandOfClass
// ()
// Parameters:
// class UClass*                  SearchClass                    (Parm)
// class UGameAICommand*          ReturnValue                    (Parm, OutParm, ReturnParm, CoerceParm)

class UGameAICommand* AGameAIController::FindCommandOfClass(class UClass* SearchClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.FindCommandOfClass");

	AGameAIController_FindCommandOfClass_Params params;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.DumpCommandStack
// ()

void AGameAIController::DumpCommandStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.DumpCommandStack");

	AGameAIController_DumpCommandStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.CheckCommandCount
// ()

void AGameAIController::CheckCommandCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.CheckCommandCount");

	AGameAIController_CheckCommandCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetActiveCommand
// ()
// Parameters:
// class UGameAICommand*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameAICommand* AGameAIController::GetActiveCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActiveCommand");

	AGameAIController_GetActiveCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.AbortCommand
// ()
// Parameters:
// class UGameAICommand*          AbortCmd                       (Parm)
// class UClass*                  AbortClass                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameAIController::AbortCommand(class UGameAICommand* AbortCmd, class UClass* AbortClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AbortCommand");

	AGameAIController_AbortCommand_Params params;
	params.AbortCmd = AbortCmd;
	params.AbortClass = AbortClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.PopCommand
// ()
// Parameters:
// class UGameAICommand*          ToBePoppedCommand              (Parm)

void AGameAIController::PopCommand(class UGameAICommand* ToBePoppedCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PopCommand");

	AGameAIController_PopCommand_Params params;
	params.ToBePoppedCommand = ToBePoppedCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.PushCommand
// ()
// Parameters:
// class UGameAICommand*          NewCommand                     (Parm)

void AGameAIController::PushCommand(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PushCommand");

	AGameAIController_PushCommand_Params params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AllCommands
// ()
// Parameters:
// class UClass*                  BaseClass                      (Parm)
// class UGameAICommand*          Cmd                            (Parm, OutParm)

void AGameAIController::AllCommands(class UClass* BaseClass, class UGameAICommand** Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AllCommands");

	AGameAIController_AllCommands_Params params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cmd != nullptr)
		*Cmd = params.Cmd;
}


// Function GameFramework.GameAICommand.GetDebugVerboseText
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameAICommand::GetDebugVerboseText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugVerboseText");

	UGameAICommand_GetDebugVerboseText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.GetDebugOverheadText
// ()
// Parameters:
// class APlayerController*       PC                             (Parm)
// TArray<struct FString>         OutText                        (Parm, OutParm, NeedCtorLink)

void UGameAICommand::GetDebugOverheadText(class APlayerController* PC, TArray<struct FString>* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugOverheadText");

	UGameAICommand_GetDebugOverheadText_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function GameFramework.GameAICommand.DrawDebug
// ()
// Parameters:
// class AHUD*                    H                              (Parm)
// struct FName                   Category                       (Parm)

void UGameAICommand::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.DrawDebug");

	UGameAICommand_DrawDebug_Params params;
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDumpString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameAICommand::GetDumpString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDumpString");

	UGameAICommand_GetDumpString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.Resumed
// ()
// Parameters:
// struct FName                   OldCommandName                 (Parm)

void UGameAICommand::Resumed(const struct FName& OldCommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Resumed");

	UGameAICommand_Resumed_Params params;
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Paused
// ()
// Parameters:
// class UGameAICommand*          NewCommand                     (Parm)

void UGameAICommand::Paused(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Paused");

	UGameAICommand_Paused_Params params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Popped
// ()

void UGameAICommand::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Popped");

	UGameAICommand_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Pushed
// ()

void UGameAICommand::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Pushed");

	UGameAICommand_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PostPopped
// ()

void UGameAICommand::PostPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PostPopped");

	UGameAICommand_PostPopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PrePushed
// ()
// Parameters:
// class AGameAIController*       AI                             (Parm)

void UGameAICommand::PrePushed(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PrePushed");

	UGameAICommand_PrePushed_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.AllowStateTransitionTo
// ()
// Parameters:
// struct FName                   StateName                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::AllowStateTransitionTo(const struct FName& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowStateTransitionTo");

	UGameAICommand_AllowStateTransitionTo_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.AllowTransitionTo
// ()
// Parameters:
// class UClass*                  AttemptCommand                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::AllowTransitionTo(class UClass* AttemptCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowTransitionTo");

	UGameAICommand_AllowTransitionTo_Params params;
	params.AttemptCommand = AttemptCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.Tick
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameAICommand::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Tick");

	UGameAICommand_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::ShouldIgnoreNotifies()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.ShouldIgnoreNotifies");

	UGameAICommand_ShouldIgnoreNotifies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.InternalTick
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameAICommand::InternalTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalTick");

	UGameAICommand_InternalTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalResumed
// ()
// Parameters:
// struct FName                   OldCommandName                 (Parm)

void UGameAICommand::InternalResumed(const struct FName& OldCommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalResumed");

	UGameAICommand_InternalResumed_Params params;
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPaused
// ()
// Parameters:
// class UGameAICommand*          NewCommand                     (Parm)

void UGameAICommand::InternalPaused(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPaused");

	UGameAICommand_InternalPaused_Params params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPopped
// ()

void UGameAICommand::InternalPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPopped");

	UGameAICommand_InternalPopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPushed
// ()

void UGameAICommand::InternalPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPushed");

	UGameAICommand_InternalPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPrePushed
// ()
// Parameters:
// class AGameAIController*       AI                             (Parm)

void UGameAICommand::InternalPrePushed(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPrePushed");

	UGameAICommand_InternalPrePushed_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InitCommand
// ()
// Parameters:
// class AGameAIController*       AI                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::InitCommand(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommand");

	UGameAICommand_InitCommand_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.InitCommandUserActor
// ()
// Parameters:
// class AGameAIController*       AI                             (Parm)
// class AActor*                  UserActor                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICommand::InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommandUserActor");

	UGameAICommand_InitCommandUserActor_Params params;
	params.AI = AI;
	params.UserActor = UserActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.GetBehaviorString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameCrowdAgent::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetBehaviorString");

	AGameCrowdAgent_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.GetDestString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGameCrowdAgent::GetDestString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetDestString");

	AGameCrowdAgent_GetDestString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.PostRenderFor
// ()
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AGameCrowdAgent::PostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostRenderFor");

	AGameCrowdAgent_PostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// ()
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AGameCrowdAgent::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NativePostRenderFor");

	AGameCrowdAgent_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// ()
// Parameters:
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdAgent::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GeneratePathToActor");

	AGameCrowdAgent_GeneratePathToActor_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// ()

void AGameCrowdAgent::InitNavigationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitNavigationHandle");

	AGameCrowdAgent_InitNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// ()
// Parameters:
// class AActor*                  A                              (Parm)

void AGameCrowdAgent::OverlappedActorEvent(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OverlappedActorEvent");

	AGameCrowdAgent_OverlappedActorEvent_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TakeDamage
// ()
// Parameters:
// int                            DamageAmount                   (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AGameCrowdAgent::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TakeDamage");

	AGameCrowdAgent_TakeDamage_Params params;
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


// Function GameFramework.GameCrowdAgent.FireDeathEvent
// ()

void AGameCrowdAgent::FireDeathEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FireDeathEvent");

	AGameCrowdAgent_FireDeathEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayDeath
// ()
// Parameters:
// struct FVector                 KillMomentum                   (Parm)

void AGameCrowdAgent::PlayDeath(const struct FVector& KillMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayDeath");

	AGameCrowdAgent_PlayDeath_Params params;
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// ()
// Parameters:
// class AActor*                  DestinationActor               (OptionalParm, Parm)

void AGameCrowdAgent::UpdateIntermediatePoint(class AActor* DestinationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint");

	AGameCrowdAgent_UpdateIntermediatePoint_Params params;
	params.DestinationActor = DestinationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.CalcCamera
// ()
// Parameters:
// float                          fDeltaTime                     (Parm)
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.CalcCamera");

	AGameCrowdAgent_CalcCamera_Params params;
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


// Function GameFramework.GameCrowdAgent.IsIdle
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::IsIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsIdle");

	AGameCrowdAgent_IsIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// ()
// Parameters:
// class UGameCrowdAgentBehavior* BehaviorArchetype              (Parm)

void AGameCrowdAgent::SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentBehavior");

	AGameCrowdAgent_SetCurrentBehavior_Params params;
	params.BehaviorArchetype = BehaviorArchetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopBehavior
// ()

void AGameCrowdAgent::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopBehavior");

	AGameCrowdAgent_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// ()
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorObject              (Parm)

void AGameCrowdAgent::ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior");

	AGameCrowdAgent_ActivateInstancedBehavior_Params params;
	params.NewBehaviorObject = NewBehaviorObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateBehavior
// ()
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (Parm)
// class AActor*                  LookAtActor                    (OptionalParm, Parm)

void AGameCrowdAgent::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateBehavior");

	AGameCrowdAgent_ActivateBehavior_Params params;
	params.NewBehaviorArchetype = NewBehaviorArchetype;
	params.LookAtActor = LookAtActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// ()

void AGameCrowdAgent::ResetSeePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetSeePlayer");

	AGameCrowdAgent_ResetSeePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// ()

void AGameCrowdAgent::TryRandomBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TryRandomBehavior");

	AGameCrowdAgent_TryRandomBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// ()
// Parameters:
// class APlayerController*       PC                             (Parm)

void AGameCrowdAgent::NotifySeePlayer(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NotifySeePlayer");

	AGameCrowdAgent_NotifySeePlayer_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// ()

void AGameCrowdAgent::PlaySpawnBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlaySpawnBehavior");

	AGameCrowdAgent_PlaySpawnBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// ()

void AGameCrowdAgent::HandlePotentialAgentEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter");

	AGameCrowdAgent_HandlePotentialAgentEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// ()

void AGameCrowdAgent::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopIdleAnimation");

	AGameCrowdAgent_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// ()

void AGameCrowdAgent::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayIdleAnimation");

	AGameCrowdAgent_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// ()
// Parameters:
// class USeqAct_PlayAgentAnimation* Action                         (Parm)

void AGameCrowdAgent::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation");

	AGameCrowdAgent_OnPlayAgentAnimation_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.InitializeAgent
// ()
// Parameters:
// class AActor*                  SpawnLoc                       (Parm)
// class AGameCrowdAgent*         AgentTemplate                  (Parm)
// class UGameCrowdGroup*         NewGroup                       (Parm)
// float                          AgentWarmupTime                (Parm)
// bool                           bWarmupPosition                (Parm)
// bool                           bCheckWarmupVisibility         (Parm)

void AGameCrowdAgent::InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitializeAgent");

	AGameCrowdAgent_InitializeAgent_Params params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;
	params.AgentWarmupTime = AgentWarmupTime;
	params.bWarmupPosition = bWarmupPosition;
	params.bCheckWarmupVisibility = bCheckWarmupVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetLighting
// ()
// Parameters:
// bool                           bEnableLightEnvironment        (Parm)
// struct FLightingChannelContainer AgentLightingChannel           (Parm)
// bool                           bCastShadows                   (Parm)

void AGameCrowdAgent::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetLighting");

	AGameCrowdAgent_SetLighting_Params params;
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.DisplayDebug
// ()
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGameCrowdAgent::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.DisplayDebug");

	AGameCrowdAgent_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCrowdAgent.Destroyed
// ()

void AGameCrowdAgent::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.Destroyed");

	AGameCrowdAgent_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// ()

void AGameCrowdAgent::ResetPooledAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetPooledAgent");

	AGameCrowdAgent_ResetPooledAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.KillAgent
// ()

void AGameCrowdAgent::KillAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.KillAgent");

	AGameCrowdAgent_KillAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PostBeginPlay
// ()

void AGameCrowdAgent::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostBeginPlay");

	AGameCrowdAgent_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// ()

void AGameCrowdAgent::SetMaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetMaxSpeed");

	AGameCrowdAgent_SetMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// ()
// Parameters:
// class AGameCrowdDestination*   NewDest                        (Parm)

void AGameCrowdAgent::SetCurrentDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentDestination");

	AGameCrowdAgent_SetCurrentDestination_Params params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// ()

void AGameCrowdAgent::WaitForGroupMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.WaitForGroupMembers");

	AGameCrowdAgent_WaitForGroupMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// ()
// Parameters:
// TArray<struct FBehaviorEntry>  BehaviorList                   (Parm, NeedCtorLink)
// struct FVector                 BestCameraLoc                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::PickBehaviorFrom(TArray<struct FBehaviorEntry> BehaviorList, const struct FVector& BestCameraLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PickBehaviorFrom");

	AGameCrowdAgent_PickBehaviorFrom_Params params;
	params.BehaviorList = BehaviorList;
	params.BestCameraLoc = BestCameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.SetPanic
// ()
// Parameters:
// class AActor*                  PanicActor                     (Parm)
// bool                           bNewPanic                      (Parm)

void AGameCrowdAgent::SetPanic(class AActor* PanicActor, bool bNewPanic)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetPanic");

	AGameCrowdAgent_SetPanic_Params params;
	params.PanicActor = PanicActor;
	params.bNewPanic = bNewPanic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.IsPanicked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdAgent::IsPanicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsPanicked");

	AGameCrowdAgent_IsPanicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// ()
// Parameters:
// class UClass*                  dmgType                        (Parm)

void AGameCrowdAgent::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FellOutOfWorld");

	AGameCrowdAgent_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// ()

void AGameCrowdAgentSkeletal::CreateAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments");

	AGameCrowdAgentSkeletal_CreateAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// ()
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AGameCrowdAgentSkeletal::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd");

	AGameCrowdAgentSkeletal_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// ()

void AGameCrowdAgentSkeletal::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation");

	AGameCrowdAgentSkeletal_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// ()

void AGameCrowdAgentSkeletal::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation");

	AGameCrowdAgentSkeletal_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// ()

void AGameCrowdAgentSkeletal::ClearLatentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation");

	AGameCrowdAgentSkeletal_ClearLatentAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// ()
// Parameters:
// class USeqAct_PlayAgentAnimation* Action                         (Parm)

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation");

	AGameCrowdAgentSkeletal_OnPlayAgentAnimation_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// ()
// Parameters:
// bool                           bRootMotionEnabled             (Parm)

void AGameCrowdAgentSkeletal::SetRootMotion(bool bRootMotionEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion");

	AGameCrowdAgentSkeletal_SetRootMotion_Params params;
	params.bRootMotionEnabled = bRootMotionEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// ()
// Parameters:
// struct FVector                 KillMomentum                   (Parm)

void AGameCrowdAgentSkeletal::PlayDeath(const struct FVector& KillMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayDeath");

	AGameCrowdAgentSkeletal_PlayDeath_Params params;
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// ()
// Parameters:
// bool                           bEnableLightEnvironment        (Parm)
// struct FLightingChannelContainer AgentLightingChannel           (Parm)
// bool                           bCastShadows                   (Parm)

void AGameCrowdAgentSkeletal::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetLighting");

	AGameCrowdAgentSkeletal_SetLighting_Params params;
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// ()

void AGameCrowdAgentSkeletal::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay");

	AGameCrowdAgentSkeletal_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// ()
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt");

	UGameCrowdAgentBehavior_AllowBehaviorAt_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// ()
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination");

	UGameCrowdAgentBehavior_AllowThisDestination_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// ()
// Parameters:
// class AGameCrowdAgent*         OtherAgent                     (Parm)

void UGameCrowdAgentBehavior::PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo");

	UGameCrowdAgentBehavior_PropagateViralBehaviorTo_Params params;
	params.OtherAgent = OtherAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// ()
// Parameters:
// class AActor*                  NewActionTarget                (Parm)

void UGameCrowdAgentBehavior::ActivatedBy(class AActor* NewActionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ActivatedBy");

	UGameCrowdAgentBehavior_ActivatedBy_Params params;
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor");

	UGameCrowdAgentBehavior_GetDestinationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// ()
// Parameters:
// class AGameCrowdDestination*   NewDest                        (Parm)

void UGameCrowdAgentBehavior::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ChangingDestination");

	UGameCrowdAgentBehavior_ChangingDestination_Params params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdAgentBehavior::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString");

	UGameCrowdAgentBehavior_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// ()
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void UGameCrowdAgentBehavior::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd");

	UGameCrowdAgentBehavior_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// ()

void UGameCrowdAgentBehavior::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.StopBehavior");

	UGameCrowdAgentBehavior_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdAgentBehavior::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.InitBehavior");

	UGameCrowdAgentBehavior_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.HandleMovement");

	UGameCrowdAgentBehavior_HandleMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// ()

void UGameCrowdAgentBehavior::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation");

	UGameCrowdAgentBehavior_FinishedTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 CameraLoc                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::CanBeUsedBy(class AGameCrowdAgent* Agent, const struct FVector& CameraLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy");

	UGameCrowdAgentBehavior_CanBeUsedBy_Params params;
	params.Agent = Agent;
	params.CameraLoc = CameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.Tick
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameCrowdAgentBehavior::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.Tick");

	UGameCrowdAgentBehavior_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdAgentBehavior::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle");

	UGameCrowdAgentBehavior_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString");

	UGameCrowdBehavior_PlayAnimation_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// ()

void UGameCrowdBehavior_PlayAnimation::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior");

	UGameCrowdBehavior_PlayAnimation_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// ()

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow");

	UGameCrowdBehavior_PlayAnimation_PlayAgentAnimationNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// ()
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void UGameCrowdBehavior_PlayAnimation::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd");

	UGameCrowdBehavior_PlayAnimation_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// ()

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput");

	UGameCrowdBehavior_PlayAnimation_SetSequenceOutput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// ()

void UGameCrowdBehavior_PlayAnimation::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation");

	UGameCrowdBehavior_PlayAnimation_FinishedTargetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdBehavior_PlayAnimation::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior");

	UGameCrowdBehavior_PlayAnimation_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.Tick
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameCrowdBehavior_RunFromPanic::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.Tick");

	UGameCrowdBehavior_RunFromPanic_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString");

	UGameCrowdBehavior_RunFromPanic_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// ()
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt");

	UGameCrowdBehavior_RunFromPanic_AllowBehaviorAt_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// ()
// Parameters:
// class AGameCrowdDestination*   Destination                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination");

	UGameCrowdBehavior_RunFromPanic_AllowThisDestination_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.PropagateViralBehaviorTo
// ()
// Parameters:
// class AGameCrowdAgent*         OtherAgent                     (Parm)

void UGameCrowdBehavior_RunFromPanic::PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.PropagateViralBehaviorTo");

	UGameCrowdBehavior_RunFromPanic_PropagateViralBehaviorTo_Params params;
	params.OtherAgent = OtherAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// ()

void UGameCrowdBehavior_RunFromPanic::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior");

	UGameCrowdBehavior_RunFromPanic_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdBehavior_RunFromPanic::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior");

	UGameCrowdBehavior_RunFromPanic_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// ()
// Parameters:
// class AActor*                  NewActionTarget                (Parm)

void UGameCrowdBehavior_RunFromPanic::ActivatedBy(class AActor* NewActionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy");

	UGameCrowdBehavior_RunFromPanic_ActivatedBy_Params params;
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// ()

void UGameCrowdBehavior_WaitForGroup::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior");

	UGameCrowdBehavior_WaitForGroup_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle");

	UGameCrowdBehavior_WaitForGroup_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString");

	UGameCrowdBehavior_WaitForGroup_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdBehavior_WaitForGroup::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior");

	UGameCrowdBehavior_WaitForGroup_InitBehavior_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// ()

void UGameCrowdBehavior_WaitInQueue::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior");

	UGameCrowdBehavior_WaitInQueue_StopBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle");

	UGameCrowdBehavior_WaitInQueue_ShouldEndIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString");

	UGameCrowdBehavior_WaitInQueue_GetBehaviorString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor");

	UGameCrowdBehavior_WaitInQueue_GetDestinationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// ()
// Parameters:
// class AGameCrowdDestination*   NewDest                        (Parm)

void UGameCrowdBehavior_WaitInQueue::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination");

	UGameCrowdBehavior_WaitInQueue_ChangingDestination_Params params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement");

	UGameCrowdBehavior_WaitInQueue_HandleMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdGroup.UpdateDestinations
// ()
// Parameters:
// class AGameCrowdDestination*   NewDestination                 (Parm)

void UGameCrowdGroup::UpdateDestinations(class AGameCrowdDestination* NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.UpdateDestinations");

	UGameCrowdGroup_UpdateDestinations_Params params;
	params.NewDestination = NewDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.RemoveMember
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdGroup::RemoveMember(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.RemoveMember");

	UGameCrowdGroup_RemoveMember_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.AddMember
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdGroup::AddMember(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.AddMember");

	UGameCrowdGroup_AddMember_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// ()
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AGameCrowdInteractionPoint::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInteractionPoint.OnToggle");

	AGameCrowdInteractionPoint_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// ()
// Parameters:
// class USeqAct_GameCrowdSpawner* Spawner                        (Parm)
// struct FVector                 SpawnPos                       (Parm, OutParm)
// struct FRotator                SpawnRot                       (Parm, OutParm)

void AGameCrowdDestination::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnPosition");

	AGameCrowdDestination_GetSpawnPosition_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::AllowableDestinationFor(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AllowableDestinationFor");

	AGameCrowdDestination_AllowableDestinationFor_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.AtCapacity
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::AtCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AtCapacity");

	AGameCrowdDestination_AtCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// ()
// Parameters:
// class AGameCrowdAgent*         ArrivingAgent                  (Parm)

void AGameCrowdDestination::IncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.IncrementCustomerCount");

	AGameCrowdDestination_IncrementCustomerCount_Params params;
	params.ArrivingAgent = ArrivingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// ()
// Parameters:
// class AGameCrowdAgent*         DepartingAgent                 (Parm)

void AGameCrowdDestination::DecrementCustomerCount(class AGameCrowdAgent* DepartingAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DecrementCustomerCount");

	AGameCrowdDestination_DecrementCustomerCount_Params params;
	params.DepartingAgent = DepartingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           bIgnoreRestrictions            (Parm)

void AGameCrowdDestination::PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PickNewDestinationFor");

	AGameCrowdDestination_PickNewDestinationFor_Params params;
	params.Agent = Agent;
	params.bIgnoreRestrictions = bIgnoreRestrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedDestination
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGameCrowdDestination::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedDestination");

	AGameCrowdDestination_ReachedDestination_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.Destroyed
// ()

void AGameCrowdDestination::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.Destroyed");

	AGameCrowdDestination_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PostBeginPlay
// ()

void AGameCrowdDestination::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PostBeginPlay");

	AGameCrowdDestination_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedByAgent
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 TestPosition                   (Parm)
// bool                           bTestExactly                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestination::ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedByAgent");

	AGameCrowdDestination_ReachedByAgent_Params params;
	params.Agent = Agent;
	params.TestPosition = TestPosition;
	params.bTestExactly = bTestExactly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasCustomer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer");

	AGameCrowdDestinationQueuePoint_HasCustomer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// ()
// Parameters:
// class AGameCrowdAgent*         OldCustomer                    (Parm)

void AGameCrowdDestinationQueuePoint::ClearQueue(class AGameCrowdAgent* OldCustomer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue");

	AGameCrowdDestinationQueuePoint_ClearQueue_Params params;
	params.OldCustomer = OldCustomer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// ()
// Parameters:
// class AGameCrowdAgent*         NewCustomer                    (Parm)
// class AGameCrowdInteractionPoint* PreviousPosition               (Parm)

void AGameCrowdDestinationQueuePoint::AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer");

	AGameCrowdDestinationQueuePoint_AddCustomer_Params params;
	params.NewCustomer = NewCustomer;
	params.PreviousPosition = PreviousPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// ()

void AGameCrowdDestinationQueuePoint::ActuallyAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance");

	AGameCrowdDestinationQueuePoint_ActuallyAdvance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// ()
// Parameters:
// class AGameCrowdInteractionPoint* FrontPosition                  (Parm)

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo");

	AGameCrowdDestinationQueuePoint_AdvanceCustomerTo_Params params;
	params.FrontPosition = FrontPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGameCrowdDestinationQueuePoint::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination");

	AGameCrowdDestinationQueuePoint_ReachedDestination_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace");

	AGameCrowdDestinationQueuePoint_HasSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 TestPosition                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdDestinationQueuePoint::QueueReachedBy(class AGameCrowdAgent* Agent, const struct FVector& TestPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy");

	AGameCrowdDestinationQueuePoint_QueueReachedBy_Params params;
	params.Agent = Agent;
	params.TestPosition = TestPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdForcePoint.AppliedForce
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdForcePoint::AppliedForce(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdForcePoint.AppliedForce");

	AGameCrowdForcePoint_AppliedForce_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdForcePoint.UnTouch
// ()
// Parameters:
// class AActor*                  Other                          (Parm)

void AGameCrowdForcePoint::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdForcePoint.UnTouch");

	AGameCrowdForcePoint_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdForcePoint.Touch
// ()
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AGameCrowdForcePoint::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdForcePoint.Touch");

	AGameCrowdForcePoint_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAttractor.AppliedForce
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdAttractor::AppliedForce(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAttractor.AppliedForce");

	AGameCrowdAttractor_AppliedForce_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdRepulsor.AppliedForce
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGameCrowdRepulsor::AppliedForce(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdRepulsor.AppliedForce");

	AGameCrowdRepulsor_AppliedForce_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_GameCrowdSpawner::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion");

	USeqAct_GameCrowdSpawner_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.CreateNewAgent
// ()
// Parameters:
// class AActor*                  SpawnLoc                       (Parm)
// class AGameCrowdAgent*         AgentTemplate                  (Parm)
// class UGameCrowdGroup*         NewGroup                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* USeqAct_GameCrowdSpawner::CreateNewAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.CreateNewAgent");

	USeqAct_GameCrowdSpawner_CreateNewAgent_Params params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnAgent
// ()
// Parameters:
// class AActor*                  SpawnLoc                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* USeqAct_GameCrowdSpawner::SpawnAgent(class AActor* SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.SpawnAgent");

	USeqAct_GameCrowdSpawner_SpawnAgent_Params params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.UpdateSpawning
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm)

void USeqAct_GameCrowdSpawner::UpdateSpawning(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.UpdateSpawning");

	USeqAct_GameCrowdSpawner_UpdateSpawning_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.KillAgents
// ()

void USeqAct_GameCrowdSpawner::KillAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.KillAgents");

	USeqAct_GameCrowdSpawner_KillAgents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.CacheSpawnerVars
// ()

void USeqAct_GameCrowdSpawner::CacheSpawnerVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.CacheSpawnerVars");

	USeqAct_GameCrowdSpawner_CacheSpawnerVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnedAgent
// ()
// Parameters:
// class AGameCrowdAgent*         NewAgent                       (Parm)

void USeqAct_GameCrowdSpawner::SpawnedAgent(class AGameCrowdAgent* NewAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.SpawnedAgent");

	USeqAct_GameCrowdSpawner_SpawnedAgent_Params params;
	params.NewAgent = NewAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// ()
// Parameters:
// class AGameCrowdDestination*   SpawnLoc                       (Parm)
// class AGameCrowdAgent*         AgentTemplate                  (Parm)
// class UGameCrowdGroup*         NewGroup                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::CreateNewAgent(class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateNewAgent");

	AGameCrowdPopulationManager_CreateNewAgent_Params params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// ()
// Parameters:
// class AGameCrowdDestination*   SpawnLoc                       (Parm)
// class AGameCrowdAgent*         ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgent(class AGameCrowdDestination* SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgent");

	AGameCrowdPopulationManager_SpawnAgent_Params params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// ()
// Parameters:
// class AGameCrowdDestination*   Candidate                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::ValidateSpawnAt(class AGameCrowdDestination* Candidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt");

	AGameCrowdPopulationManager_ValidateSpawnAt_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// ()
// Parameters:
// class AGameCrowdDestination*   GCD                            (Parm)
// struct FVector                 ViewLocation                   (Parm)

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint(class AGameCrowdDestination* GCD, const struct FVector& ViewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint");

	AGameCrowdPopulationManager_AddPrioritizedSpawnPoint_Params params;
	params.GCD = GCD;
	params.ViewLocation = ViewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// ()
// Parameters:
// int                            StartIndex                     (Parm)
// int                            StopIndex                      (Parm)
// struct FVector                 ViewLocation                   (Parm)
// struct FVector                 PredictionLocation             (Parm)

void AGameCrowdPopulationManager::AnalyzeSpawnPoints(int StartIndex, int StopIndex, const struct FVector& ViewLocation, const struct FVector& PredictionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints");

	AGameCrowdPopulationManager_AnalyzeSpawnPoints_Params params;
	params.StartIndex = StartIndex;
	params.StopIndex = StopIndex;
	params.ViewLocation = ViewLocation;
	params.PredictionLocation = PredictionLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm)

void AGameCrowdPopulationManager::PrioritizeSpawnPoints(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints");

	AGameCrowdPopulationManager_PrioritizeSpawnPoints_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// ()
// Parameters:
// class AGameCrowdDestination*   ReturnValue                    (Parm, OutParm, ReturnParm)

class AGameCrowdDestination* AGameCrowdPopulationManager::PickSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint");

	AGameCrowdPopulationManager_PickSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.Tick
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm)

void AGameCrowdPopulationManager::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Tick");

	AGameCrowdPopulationManager_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::IsSpawningActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.IsSpawningActive");

	AGameCrowdPopulationManager_IsSpawningActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// ()
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGameCrowdPopulationManager::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.DisplayDebug");

	AGameCrowdPopulationManager_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCrowdPopulationManager.AddToAgentPool
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameCrowdPopulationManager::AddToAgentPool(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddToAgentPool");

	AGameCrowdPopulationManager_AddToAgentPool_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGameCrowdPopulationManager::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AgentDestroyed");

	AGameCrowdPopulationManager_AgentDestroyed_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// ()

void AGameCrowdPopulationManager::FlushAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.FlushAgents");

	AGameCrowdPopulationManager_FlushAgents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.OnGameCrowdPopulationManagerToggle
// ()
// Parameters:
// class USeqAct_GameCrowdPopulationManagerToggle* inAction                       (Parm)

void AGameCrowdPopulationManager::OnGameCrowdPopulationManagerToggle(class USeqAct_GameCrowdPopulationManagerToggle* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.OnGameCrowdPopulationManagerToggle");

	AGameCrowdPopulationManager_OnGameCrowdPopulationManagerToggle_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// ()
// Parameters:
// class AGameCrowdDestination*   GCD                            (Parm)

void AGameCrowdPopulationManager::RemoveSpawnPoint(class AGameCrowdDestination* GCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint");

	AGameCrowdPopulationManager_RemoveSpawnPoint_Params params;
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// ()
// Parameters:
// class AGameCrowdDestination*   GCD                            (Parm)

void AGameCrowdPopulationManager::AddSpawnPoint(class AGameCrowdDestination* GCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint");

	AGameCrowdPopulationManager_AddSpawnPoint_Params params;
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.GetMaxSpawnDist
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameCrowdPopulationManager::GetMaxSpawnDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.GetMaxSpawnDist");

	AGameCrowdPopulationManager_GetMaxSpawnDist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// ()

void AGameCrowdPopulationManager::NotifyPathChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged");

	AGameCrowdPopulationManager_NotifyPathChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// ()

void AGameCrowdPopulationManager::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PostBeginPlay");

	AGameCrowdPopulationManager_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// ()
// Parameters:
// struct FName                   VarName                        (Parm)

void AGameCrowdReplicationActor::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent");

	AGameCrowdReplicationActor_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.ChooseCameraShake
// ()
// Parameters:
// struct FVector                 Epicenter                      (Parm)
// class APlayerController*       PC                             (Parm)
// class UCameraShake*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UCameraShake* AGameExplosionActor::ChooseCameraShake(const struct FVector& Epicenter, class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.ChooseCameraShake");

	AGameExplosionActor_ChooseCameraShake_Params params;
	params.Epicenter = Epicenter;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// ()

void AGameExplosionActor::SpawnCameraLensEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnCameraLensEffects");

	AGameExplosionActor_SpawnCameraLensEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// ()

void AGameExplosionActor::DoExplosionCameraEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionCameraEffects");

	AGameExplosionActor_DoExplosionCameraEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.Tick
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void AGameExplosionActor::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.Tick");

	AGameExplosionActor_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DrawDebug
// ()

void AGameExplosionActor::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DrawDebug");

	AGameExplosionActor_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// ()

void AGameExplosionActor::DelayedExplosionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DelayedExplosionDamage");

	AGameExplosionActor_DelayedExplosionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.Explode
// ()
// Parameters:
// class UGameExplosion*          NewExplosionTemplate           (Parm)
// struct FVector                 Direction                      (OptionalParm, Parm)

void AGameExplosionActor::Explode(class UGameExplosion* NewExplosionTemplate, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.Explode");

	AGameExplosionActor_Explode_Params params;
	params.NewExplosionTemplate = NewExplosionTemplate;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// ()

void AGameExplosionActor::SpawnExplosionFogVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume");

	AGameExplosionActor_SpawnExplosionFogVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// ()

void AGameExplosionActor::SpawnExplosionDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionDecal");

	AGameExplosionActor_SpawnExplosionDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// ()
// Parameters:
// class UParticleSystem*         Template                       (Parm)

void AGameExplosionActor::SpawnExplosionParticleSystem(class UParticleSystem* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem");

	AGameExplosionActor_SpawnExplosionParticleSystem_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// ()
// Parameters:
// class UPhysicalMaterial*       PhysMaterial                   (Parm)

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX");

	AGameExplosionActor_UpdateExplosionTemplateWithPerMaterialFX_Params params;
	params.PhysMaterial = PhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// ()
// Parameters:
// class AGamePawn*               VictimPawn                     (Parm)
// float                          VictimDist                     (Parm)

void AGameExplosionActor::SpecialPawnEffectsFor(class AGamePawn* VictimPawn, float VictimDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor");

	AGameExplosionActor_SpecialPawnEffectsFor_Params params;
	params.VictimPawn = VictimPawn;
	params.VictimDist = VictimDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameExplosionActor::GetEffectCheckRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetEffectCheckRadius");

	AGameExplosionActor_GetEffectCheckRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.DoExplosionDamage
// ()
// Parameters:
// bool                           bCauseDamage                   (Parm)
// bool                           bCauseEffects                  (Parm)

void AGameExplosionActor::DoExplosionDamage(bool bCauseDamage, bool bCauseEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionDamage");

	AGameExplosionActor_DoExplosionDamage_Params params;
	params.bCauseDamage = bCauseDamage;
	params.bCauseEffects = bCauseEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// ()
// Parameters:
// struct FVector                 Start                          (Parm)
// struct FBox                    BBox                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGameExplosionActor::BoxDistanceToPoint(const struct FVector& Start, const struct FBox& BBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.BoxDistanceToPoint");

	AGameExplosionActor_BoxDistanceToPoint_Params params;
	params.Start = Start;
	params.BBox = BBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.IsBehindExplosion
// ()
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameExplosionActor::IsBehindExplosion(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.IsBehindExplosion");

	AGameExplosionActor_IsBehindExplosion_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// ()
// Parameters:
// class AActor*                  Victim                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGameExplosionActor::DoFullDamageToActor(class AActor* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoFullDamageToActor");

	AGameExplosionActor_DoFullDamageToActor_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// ()
// Parameters:
// class UPhysicalMaterial*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetPhysicalMaterial");

	AGameExplosionActor_GetPhysicalMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.PreBeginPlay
// ()

void AGameExplosionActor::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.PreBeginPlay");

	AGameExplosionActor_PreBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// ()

void AGamePawn::ReattachMeshWithoutBeingSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen");

	AGamePawn_ReattachMeshWithoutBeingSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMesh
// ()

void AGamePawn::ReattachMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMesh");

	AGamePawn_ReattachMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.UpdateShadowSettings
// ()
// Parameters:
// bool                           bInWantShadow                  (Parm)

void AGamePawn::UpdateShadowSettings(bool bInWantShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.UpdateShadowSettings");

	AGamePawn_UpdateShadowSettings_Params params;
	params.bInWantShadow = bInWantShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ClientColorFade
// ()
// Parameters:
// struct FColor                  FadeColor                      (Parm)
// unsigned char                  FromAlpha                      (Parm)
// unsigned char                  ToAlpha                        (Parm)
// float                          FadeTime                       (Parm)

void AGamePlayerController::ClientColorFade(const struct FColor& FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientColorFade");

	AGamePlayerController_ClientColorFade_Params params;
	params.FadeColor = FadeColor;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CallMemLeakCheck
// ()

void AGamePlayerController::CallMemLeakCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CallMemLeakCheck");

	AGamePlayerController_CallMemLeakCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.StopMemLeakChecking
// ()

void AGamePlayerController::StopMemLeakChecking()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.StopMemLeakChecking");

	AGamePlayerController_StopMemLeakChecking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.DoMemLeakChecking
// ()
// Parameters:
// float                          InTimeBetweenMemLeakChecks     (Parm)

void AGamePlayerController::DoMemLeakChecking(float InTimeBetweenMemLeakChecks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.DoMemLeakChecking");

	AGamePlayerController_DoMemLeakChecking_Params params;
	params.InTimeBetweenMemLeakChecks = InTimeBetweenMemLeakChecks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.WarmupPause
// ()
// Parameters:
// bool                           bDesiredPauseState             (Parm)

void AGamePlayerController::WarmupPause(bool bDesiredPauseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.WarmupPause");

	AGamePlayerController_WarmupPause_Params params;
	params.bDesiredPauseState = bDesiredPauseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGamePlayerController::CanUnpauseWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CanUnpauseWarmup");

	AGamePlayerController_CanUnpauseWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerController.GetCurrentMovie
// ()
// Parameters:
// struct FString                 MovieName                      (Parm, OutParm, NeedCtorLink)

void AGamePlayerController::GetCurrentMovie(struct FString* MovieName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetCurrentMovie");

	AGamePlayerController_GetCurrentMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieName != nullptr)
		*MovieName = params.MovieName;
}


// Function GameFramework.GamePlayerController.ClientStopMovie
// ()
// Parameters:
// float                          DelayInSeconds                 (Parm)
// bool                           bAllowMovieToFinish            (Parm)
// bool                           bForceStopNonSkippable         (Parm)
// bool                           bForceStopLoadingMovie         (Parm)

void AGamePlayerController::ClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientStopMovie");

	AGamePlayerController_ClientStopMovie_Params params;
	params.DelayInSeconds = DelayInSeconds;
	params.bAllowMovieToFinish = bAllowMovieToFinish;
	params.bForceStopNonSkippable = bForceStopNonSkippable;
	params.bForceStopLoadingMovie = bForceStopLoadingMovie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ClientPlayMovie
// ()
// Parameters:
// struct FString                 MovieName                      (Parm, NeedCtorLink)
// int                            InStartOfRenderingMovieFrame   (Parm)
// int                            InEndOfRenderingMovieFrame     (Parm)
// bool                           bRestrictPausing               (Parm)
// bool                           bPlayOnceFromStream            (Parm)
// bool                           bOnlyBackButtonSkipsMovie      (Parm)

void AGamePlayerController::ClientPlayMovie(const struct FString& MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, bool bRestrictPausing, bool bPlayOnceFromStream, bool bOnlyBackButtonSkipsMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientPlayMovie");

	AGamePlayerController_ClientPlayMovie_Params params;
	params.MovieName = MovieName;
	params.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	params.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;
	params.bRestrictPausing = bRestrictPausing;
	params.bPlayOnceFromStream = bPlayOnceFromStream;
	params.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// ()

void AGamePlayerController::KeepPlayingLoadingMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie");

	AGamePlayerController_KeepPlayingLoadingMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ShowLoadingMovie
// ()
// Parameters:
// bool                           bShowMovie                     (Parm)
// bool                           bPauseAfterHide                (OptionalParm, Parm)
// float                          PauseDuration                  (OptionalParm, Parm)
// float                          KeepPlayingDuration            (OptionalParm, Parm)
// bool                           bOverridePreviousDelays        (OptionalParm, Parm)

void AGamePlayerController::ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ShowLoadingMovie");

	AGamePlayerController_ShowLoadingMovie_Params params;
	params.bShowMovie = bShowMovie;
	params.bPauseAfterHide = bPauseAfterHide;
	params.PauseDuration = PauseDuration;
	params.KeepPlayingDuration = KeepPlayingDuration;
	params.bOverridePreviousDelays = bOverridePreviousDelays;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.SetSoundMode
// ()
// Parameters:
// struct FName                   InSoundModeName                (Parm)

void AGamePlayerController::SetSoundMode(const struct FName& InSoundModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.SetSoundMode");

	AGamePlayerController_SetSoundMode_Params params;
	params.InSoundModeName = InSoundModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// ()
// Parameters:
// class UCameraShake*            ShakeData                      (Parm)
// float                          Scale                          (Parm)

void AGamePlayerController::DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake");

	AGamePlayerController_DoForceFeedbackForScreenShake_Params params;
	params.ShakeData = ShakeData;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void AGamePlayerController::NotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius");

	AGamePlayerController_NotifyCrowdAgentInRadius_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// ()

void AGamePlayerController::NotifyCrowdAgentRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh");

	AGamePlayerController_NotifyCrowdAgentRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CrowdDebug
// ()
// Parameters:
// bool                           bEnabled                       (Parm)

void AGamePlayerController::CrowdDebug(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdDebug");

	AGamePlayerController_CrowdDebug_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CrowdToggle
// ()

void AGamePlayerController::CrowdToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdToggle");

	AGamePlayerController_CrowdToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CrowdFocus
// ()

void AGamePlayerController::CrowdFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdFocus");

	AGamePlayerController_CrowdFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGamePlayerController::GetUIPlayerIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetUIPlayerIndex");

	AGamePlayerController_GetUIPlayerIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.AddKismetEventHandler
// ()
// Parameters:
// class USeqEvent_MobileZoneBase* NewHandler                     (Parm)

void UMobileInputZone::AddKismetEventHandler(class USeqEvent_MobileZoneBase* NewHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.AddKismetEventHandler");

	UMobileInputZone_AddKismetEventHandler_Params params;
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnPostDrawZone
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// class UCanvas*                 Canvas                         (Parm)

void UMobileInputZone::OnPostDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPostDrawZone");

	UMobileInputZone_OnPostDrawZone_Params params;
	params.Zone = Zone;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnPreDrawZone
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// class UCanvas*                 Canvas                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnPreDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPreDrawZone");

	UMobileInputZone_OnPreDrawZone_Params params;
	params.Zone = Zone;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnProcessSlide
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<EZoneTouchEvent>   EventType                      (Parm)
// int                            SlideValue                     (Parm)
// struct FVector2D               ViewportSize                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnProcessSlide(class UMobileInputZone* Zone, TEnumAsByte<EZoneTouchEvent> EventType, int SlideValue, const struct FVector2D& ViewportSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessSlide");

	UMobileInputZone_OnProcessSlide_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.SlideValue = SlideValue;
	params.ViewportSize = ViewportSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<EZoneTouchEvent>   EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnDoubleTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<EZoneTouchEvent> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnDoubleTapDelegate");

	UMobileInputZone_OnDoubleTapDelegate_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnTapDelegate
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// TEnumAsByte<EZoneTouchEvent>   EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<EZoneTouchEvent> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnTapDelegate");

	UMobileInputZone_OnTapDelegate_Params params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)
// float                          DeltaTime                      (Parm)
// int                            Handle                         (Parm)
// TEnumAsByte<EZoneTouchEvent>   EventType                      (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileInputZone::OnProcessInputDelegate(class UMobileInputZone* Zone, float DeltaTime, int Handle, TEnumAsByte<EZoneTouchEvent> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessInputDelegate");

	UMobileInputZone_OnProcessInputDelegate_Params params;
	params.Zone = Zone;
	params.DeltaTime = DeltaTime;
	params.Handle = Handle;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.DeactivateZone
// ()

void UMobileInputZone::DeactivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.DeactivateZone");

	UMobileInputZone_DeactivateZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.ActivateZone
// ()

void UMobileInputZone::ActivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.ActivateZone");

	UMobileInputZone_ActivateZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RenderKismetHud
// ()

void AMobileHUD::RenderKismetHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderKismetHud");

	AMobileHUD_RenderKismetHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.AddKismetRenderEvent
// ()
// Parameters:
// class USeqEvent_HudRender*     NewEvent                       (Parm)

void AMobileHUD::AddKismetRenderEvent(class USeqEvent_HudRender* NewEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.AddKismetRenderEvent");

	AMobileHUD_AddKismetRenderEvent_Params params;
	params.NewEvent = NewEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RefreshKismetLinks
// ()

void AMobileHUD::RefreshKismetLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RefreshKismetLinks");

	AMobileHUD_RefreshKismetLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUD::DrawMobileZone_Slider(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Slider");

	AMobileHUD_DrawMobileZone_Slider_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileTilt
// ()
// Parameters:
// class UMobilePlayerInput*      MobileInput                    (Parm)

void AMobileHUD::DrawMobileTilt(class UMobilePlayerInput* MobileInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileTilt");

	AMobileHUD_DrawMobileTilt_Params params;
	params.MobileInput = MobileInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUD::DrawMobileZone_Trackball(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Trackball");

	AMobileHUD_DrawMobileZone_Trackball_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUD::DrawMobileZone_Joystick(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Joystick");

	AMobileHUD_DrawMobileZone_Joystick_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Button
// ()
// Parameters:
// class UMobileInputZone*        Zone                           (Parm)

void AMobileHUD::DrawMobileZone_Button(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Button");

	AMobileHUD_DrawMobileZone_Button_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// ()

void AMobileHUD::DrawInputZoneOverlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawInputZoneOverlays");

	AMobileHUD_DrawInputZoneOverlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RenderMobileMenu
// ()

void AMobileHUD::RenderMobileMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderMobileMenu");

	AMobileHUD_RenderMobileMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.ShowMobileHud
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AMobileHUD::ShowMobileHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.ShowMobileHud");

	AMobileHUD_ShowMobileHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileHUD.DrawMobileDebugString
// ()
// Parameters:
// float                          XPos                           (Parm)
// float                          YPos                           (Parm)
// struct FString                 Str                            (Parm, NeedCtorLink)

void AMobileHUD::DrawMobileDebugString(float XPos, float YPos, const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileDebugString");

	AMobileHUD_DrawMobileDebugString_Params params;
	params.XPos = XPos;
	params.YPos = YPos;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostRender
// ()

void AMobileHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostRender");

	AMobileHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostBeginPlay
// ()

void AMobileHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostBeginPlay");

	AMobileHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.RenderObject
// ()
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UMobileMenuObject::RenderObject(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.RenderObject");

	UMobileMenuObject_RenderObject_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.InitMenuObject
// ()
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// class UMobileMenuScene*        Scene                          (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)

void UMobileMenuObject::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.InitMenuObject");

	UMobileMenuObject_InitMenuObject_Params params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuImage.RenderObject
// ()
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UMobileMenuImage::RenderObject(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuImage.RenderObject");

	UMobileMenuImage_RenderObject_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.MobileMenuCommand
// ()
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuScene::MobileMenuCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MobileMenuCommand");

	UMobileMenuScene_MobileMenuCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.FindMenuObject
// ()
// Parameters:
// struct FString                 Tag                            (Parm, NeedCtorLink)
// class UMobileMenuObject*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuObject* UMobileMenuScene::FindMenuObject(const struct FString& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.FindMenuObject");

	UMobileMenuScene_FindMenuObject_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.CleanUpScene
// ()

void UMobileMenuScene::CleanUpScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.CleanUpScene");

	UMobileMenuScene_CleanUpScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Closed
// ()

void UMobileMenuScene::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closed");

	UMobileMenuScene_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Closing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuScene::Closing()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closing");

	UMobileMenuScene_Closing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.MadeTopMenu
// ()

void UMobileMenuScene::MadeTopMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MadeTopMenu");

	UMobileMenuScene_MadeTopMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Opened
// ()
// Parameters:
// struct FString                 Mode                           (Parm, NeedCtorLink)

void UMobileMenuScene::Opened(const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Opened");

	UMobileMenuScene_Opened_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.OnSceneTouch
// ()
// Parameters:
// TEnumAsByte<EZoneTouchEvent>   EventType                      (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobileMenuScene::OnSceneTouch(TEnumAsByte<EZoneTouchEvent> EventType, float TouchX, float TouchY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnSceneTouch");

	UMobileMenuScene_OnSceneTouch_Params params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.OnTouch
// ()
// Parameters:
// class UMobileMenuObject*       Sender                         (Parm)
// float                          TouchX                         (Parm)
// float                          TouchY                         (Parm)
// bool                           bCancel                        (Parm)

void UMobileMenuScene::OnTouch(class UMobileMenuObject* Sender, float TouchX, float TouchY, bool bCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnTouch");

	UMobileMenuScene_OnTouch_Params params;
	params.Sender = Sender;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.bCancel = bCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.RenderScene
// ()
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          RenderDelta                    (Parm)

void UMobileMenuScene::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.RenderScene");

	UMobileMenuScene_RenderScene_Params params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.InitMenuScene
// ()
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)

void UMobileMenuScene::InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.InitMenuScene");

	UMobileMenuScene_InitMenuScene_Params params;
	params.PlayerInput = PlayerInput;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UMobileMenuScene::GetGlobalScaleY()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleY");

	UMobileMenuScene_GetGlobalScaleY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UMobileMenuScene::GetGlobalScaleX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleX");

	UMobileMenuScene_GetGlobalScaleX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// ()
// Parameters:
// struct FString                 MenuClassName                  (Parm, NeedCtorLink)
// struct FString                 Mode                           (Parm, NeedCtorLink)

void UMobilePlayerInput::OpenMobileMenuMode(const struct FString& MenuClassName, const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenuMode");

	UMobilePlayerInput_OpenMobileMenuMode_Params params;
	params.MenuClassName = MenuClassName;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// ()
// Parameters:
// struct FString                 MenuClassName                  (Parm, NeedCtorLink)

void UMobilePlayerInput::OpenMobileMenu(const struct FString& MenuClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenu");

	UMobilePlayerInput_OpenMobileMenu_Params params;
	params.MenuClassName = MenuClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// ()
// Parameters:
// struct FString                 MenuCommand                    (Parm, NeedCtorLink)

void UMobilePlayerInput::MobileMenuCommand(const struct FString& MenuCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.MobileMenuCommand");

	UMobilePlayerInput_MobileMenuCommand_Params params;
	params.MenuCommand = MenuCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.PreClientTravel
// ()
// Parameters:
// struct FString                 PendingURL                     (Parm, NeedCtorLink)
// TEnumAsByte<ETravelType>       TravelType                     (Parm)
// bool                           bIsSeamlessTravel              (Parm)

void UMobilePlayerInput::PreClientTravel(const struct FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.PreClientTravel");

	UMobilePlayerInput_PreClientTravel_Params params;
	params.PendingURL = PendingURL;
	params.TravelType = TravelType;
	params.bIsSeamlessTravel = bIsSeamlessTravel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.RenderMenus
// ()
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          RenderDelta                    (Parm)

void UMobilePlayerInput::RenderMenus(class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RenderMenus");

	UMobilePlayerInput_RenderMenus_Params params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CloseAllMenus
// ()

void UMobilePlayerInput::CloseAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseAllMenus");

	UMobilePlayerInput_CloseAllMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CloseMenuScene
// ()
// Parameters:
// class UMobileMenuScene*        SceneToClose                   (Parm)

void UMobilePlayerInput::CloseMenuScene(class UMobileMenuScene* SceneToClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseMenuScene");

	UMobilePlayerInput_CloseMenuScene_Params params;
	params.SceneToClose = SceneToClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OpenMenuScene
// ()
// Parameters:
// class UClass*                  SceneClass                     (Parm)
// struct FString                 Mode                           (OptionalParm, Parm, NeedCtorLink)
// class UMobileMenuScene*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileMenuScene* UMobilePlayerInput::OpenMenuScene(class UClass* SceneClass, const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMenuScene");

	UMobilePlayerInput_OpenMenuScene_Params params;
	params.SceneClass = SceneClass;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// ()
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UMobilePlayerInput::SetMobileInputConfig(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SetMobileInputConfig");

	UMobilePlayerInput_SetMobileInputConfig_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// ()
// Parameters:
// struct FString                 GroupName                      (Parm, NeedCtorLink)

void UMobilePlayerInput::ActivateInputGroup(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ActivateInputGroup");

	UMobilePlayerInput_ActivateInputGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.GetCurrentZones
// ()
// Parameters:
// TArray<class UMobileInputZone*> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class UMobileInputZone*> UMobilePlayerInput::GetCurrentZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.GetCurrentZones");

	UMobilePlayerInput_GetCurrentZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.HasZones
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobilePlayerInput::HasZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.HasZones");

	UMobilePlayerInput_HasZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.FindorAddZone
// ()
// Parameters:
// struct FString                 ZoneName                       (Parm, NeedCtorLink)
// class UMobileInputZone*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileInputZone* UMobilePlayerInput::FindorAddZone(const struct FString& ZoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindorAddZone");

	UMobilePlayerInput_FindorAddZone_Params params;
	params.ZoneName = ZoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.FindZone
// ()
// Parameters:
// struct FString                 ZoneName                       (Parm, NeedCtorLink)
// class UMobileInputZone*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UMobileInputZone* UMobilePlayerInput::FindZone(const struct FString& ZoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindZone");

	UMobilePlayerInput_FindZone_Params params;
	params.ZoneName = ZoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// ()
// Parameters:
// class USeqEvent_MobileRawInput* NewHandler                     (Parm)

void UMobilePlayerInput::AddKismetRawInputEventHandler(class USeqEvent_MobileRawInput* NewHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler");

	UMobilePlayerInput_AddKismetRawInputEventHandler_Params params;
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// ()
// Parameters:
// class USeqEvent_MobileBase*    NewHandler                     (Parm)

void UMobilePlayerInput::AddKismetEventHandler(class USeqEvent_MobileBase* NewHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetEventHandler");

	UMobilePlayerInput_AddKismetEventHandler_Params params;
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// ()

void UMobilePlayerInput::RefreshKismetLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RefreshKismetLinks");

	UMobilePlayerInput_RefreshKismetLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitializeInputZones
// ()

void UMobilePlayerInput::InitializeInputZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitializeInputZones");

	UMobilePlayerInput_InitializeInputZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitTouchSystem
// ()

void UMobilePlayerInput::InitTouchSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitTouchSystem");

	UMobilePlayerInput_InitTouchSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// ()

void UMobilePlayerInput::ClientInitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ClientInitInputSystem");

	UMobilePlayerInput_ClientInitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitInputSystem
// ()

void UMobilePlayerInput::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitInputSystem");

	UMobilePlayerInput_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SendInputAxis
// ()
// Parameters:
// struct FName                   Key                            (Parm)
// float                          Delta                          (Parm)
// float                          DeltaTime                      (Parm)

void UMobilePlayerInput::SendInputAxis(const struct FName& Key, float Delta, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputAxis");

	UMobilePlayerInput_SendInputAxis_Params params;
	params.Key = Key;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SendInputKey
// ()
// Parameters:
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (Parm)

void UMobilePlayerInput::SendInputKey(const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputKey");

	UMobilePlayerInput_SendInputKey_Params params;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// ()

void UMobilePlayerInput::NativeInitializeInputZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputZones");

	UMobilePlayerInput_NativeInitializeInputZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// ()

void UMobilePlayerInput::NativeInitializeInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem");

	UMobilePlayerInput_NativeInitializeInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnInputTouch
// ()
// Parameters:
// int                            Handle                         (Parm)
// TEnumAsByte<EZoneTouchEvent>   Type                           (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// float                          DeviceTimestamp                (Parm)
// int                            TouchpadIndex                  (Parm)

void UMobilePlayerInput::OnInputTouch(int Handle, TEnumAsByte<EZoneTouchEvent> Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int TouchpadIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnInputTouch");

	UMobilePlayerInput_OnInputTouch_Params params;
	params.Handle = Handle;
	params.Type = Type;
	params.TouchLocation = TouchLocation;
	params.DeviceTimestamp = DeviceTimestamp;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// ()
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// int                            TouchpadIndex                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMobilePlayerInput::OnPreviewTouch(float X, float Y, int TouchpadIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnPreviewTouch");

	UMobilePlayerInput_OnPreviewTouch_Params params;
	params.X = X;
	params.Y = Y;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// ()

void UMobilePlayerInput::OnTouchNotHandledInMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu");

	UMobilePlayerInput_OnTouchNotHandledInMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnMobileMotion
// ()
// Parameters:
// class UPlayerInput*            PlayerInput                    (Parm)
// struct FVector                 CurrentAttitude                (Parm)
// struct FVector                 CurrentRotationRate            (Parm)
// struct FVector                 CurrentGravity                 (Parm)
// struct FVector                 CurrentAcceleration            (Parm)

void UMobilePlayerInput::OnMobileMotion(class UPlayerInput* PlayerInput, const struct FVector& CurrentAttitude, const struct FVector& CurrentRotationRate, const struct FVector& CurrentGravity, const struct FVector& CurrentAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnMobileMotion");

	UMobilePlayerInput_OnMobileMotion_Params params;
	params.PlayerInput = PlayerInput;
	params.CurrentAttitude = CurrentAttitude;
	params.CurrentRotationRate = CurrentRotationRate;
	params.CurrentGravity = CurrentGravity;
	params.CurrentAcceleration = CurrentAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// ()

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");

	UNavMeshGoal_OutOfViewFrom_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// ()
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// struct FVector                 InOutOfViewLocation            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint");

	UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params params;
	params.NavHandle = NavHandle;
	params.InOutOfViewLocation = InOutOfViewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// ()

void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");

	UNavMeshGoal_OutOfViewFrom_RecycleNative_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// ()

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// ()
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// struct FVector                 InLocation                     (Const, Parm)
// struct FRotator                InRotation                     (Const, Parm)
// float                          InDistanceToCheck              (Const, Parm)
// TArray<struct FVector>         InLocationsToCheck             (Const, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params params;
	params.NavHandle = NavHandle;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InDistanceToCheck = InDistanceToCheck;
	params.InLocationsToCheck = InLocationsToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_GameCrowdPopulationManagerToggle::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion");

	USeqAct_GameCrowdPopulationManagerToggle_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FindPopMgrTarget
// ()

void USeqAct_GameCrowdPopulationManagerToggle::FindPopMgrTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FindPopMgrTarget");

	USeqAct_GameCrowdPopulationManagerToggle_FindPopMgrTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_MobileSaveLoadValue::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion");

	USeqAct_MobileSaveLoadValue_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// ()
// Parameters:
// class AGameCrowdAgentSkeletal* Agent                          (Parm)

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor");

	USeqAct_PlayAgentAnimation_SetCurrentAnimationActionFor_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_PlayAgentAnimation::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion");

	USeqAct_PlayAgentAnimation_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_HudRender.Render
// ()
// Parameters:
// class UCanvas*                 TargetCanvas                   (Parm)
// class AHUD*                    TargetHud                      (Parm)

void USeqEvent_HudRender::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.Render");

	USeqEvent_HudRender_Render_Params params;
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// ()

void USeqEvent_HudRender::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.RegisterEvent");

	USeqEvent_HudRender_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// ()
// Parameters:
// class UMobilePlayerInput*      MPI                            (Parm)

void USeqEvent_MobileBase::AddToMobileInput(class UMobilePlayerInput* MPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.AddToMobileInput");

	USeqEvent_MobileBase_AddToMobileInput_Params params;
	params.MPI = MPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// ()

void USeqEvent_MobileBase::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.RegisterEvent");

	USeqEvent_MobileBase_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqEvent_MobileMotion::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion");

	USeqEvent_MobileMotion_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// ()
// Parameters:
// class UMobilePlayerInput*      MPI                            (Parm)

void USeqEvent_MobileZoneBase::AddToMobileInput(class UMobilePlayerInput* MPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput");

	USeqEvent_MobileZoneBase_AddToMobileInput_Params params;
	params.MPI = MPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// ()

void USeqEvent_MobileRawInput::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent");

	USeqEvent_MobileRawInput_RegisterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// ()
// Parameters:
// struct FPostProcessSettings    PP                             (Parm, OutParm, NeedCtorLink)

void UGameCameraBase::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ModifyPostProcessSettings");

	UGameCameraBase_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameCameraBase.Init
// ()

void UGameCameraBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.Init");

	UGameCameraBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.DisplayDebug
// ()
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void UGameCameraBase::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.DisplayDebug");

	UGameCameraBase_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCameraBase.ProcessViewRotation
// ()
// Parameters:
// float                          DeltaTime                      (Parm)
// class AActor*                  ViewTarget                     (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void UGameCameraBase::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ProcessViewRotation");

	UGameCameraBase_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameCameraBase.UpdateCamera
// ()
// Parameters:
// class APawn*                   P                              (Parm)
// class AGamePlayerCamera*       CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameCameraBase::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.UpdateCamera");

	UGameCameraBase_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameCameraBase.ResetInterpolation
// ()

void UGameCameraBase::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ResetInterpolation");

	UGameCameraBase_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeInActive
// ()
// Parameters:
// class UGameCameraBase*         NewCamera                      (Parm)

void UGameCameraBase::OnBecomeInActive(class UGameCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeInActive");

	UGameCameraBase_OnBecomeInActive_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeActive
// ()
// Parameters:
// class UGameCameraBase*         OldCamera                      (Parm)

void UGameCameraBase::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeActive");

	UGameCameraBase_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// ()

void UGameThirdPersonCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ResetInterpolation");

	UGameThirdPersonCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// ()
// Parameters:
// struct FPostProcessSettings    PP                             (Parm, OutParm, NeedCtorLink)

void UGameThirdPersonCamera::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings");

	UGameThirdPersonCamera_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// ()
// Parameters:
// class UGameCameraBase*         OldCamera                      (Parm)

void UGameThirdPersonCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.OnBecomeActive");

	UGameThirdPersonCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// ()
// Parameters:
// float                          DeltaTime                      (Parm)
// class AActor*                  ViewTarget                     (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void UGameThirdPersonCamera::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ProcessViewRotation");

	UGameThirdPersonCamera_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// ()
// Parameters:
// class APawn*                   P                              (Parm)

void UGameThirdPersonCamera::UpdateCameraMode(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCameraMode");

	UGameThirdPersonCamera_UpdateCameraMode_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// ()
// Parameters:
// class APawn*                   P                              (Parm)
// class UGameThirdPersonCameraMode* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.FindBestCameraMode");

	UGameThirdPersonCamera_FindBestCameraMode_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// ()
// Parameters:
// struct FRotator                Delta                          (Parm)

void UGameThirdPersonCamera::AdjustFocusPointInterpolation(const struct FRotator& Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation");

	UGameThirdPersonCamera_AdjustFocusPointInterpolation_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCamera::GetActualFocusLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation");

	UGameThirdPersonCamera_GetActualFocusLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// ()
// Parameters:
// class APawn*                   P                              (Parm)

void UGameThirdPersonCamera::UpdateFocusPoint(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint");

	UGameThirdPersonCamera_UpdateFocusPoint_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// ()
// Parameters:
// bool                           bLeaveCameraRotation           (OptionalParm, Parm)

void UGameThirdPersonCamera::ClearFocusPoint(bool bLeaveCameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ClearFocusPoint");

	UGameThirdPersonCamera_ClearFocusPoint_Params params;
	params.bLeaveCameraRotation = bLeaveCameraRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGameThirdPersonCamera::GetFocusActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetFocusActor");

	UGameThirdPersonCamera_GetFocusActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// ()
// Parameters:
// class AActor*                  FocusActor                     (Parm)
// struct FName                   FocusBoneName                  (Parm)
// struct FVector2D               InterpSpeedRange               (Parm)
// struct FVector2D               InFocusFOV                     (Parm)
// float                          CameraFOV                      (OptionalParm, Parm)
// bool                           bAlwaysFocus                   (OptionalParm, Parm)
// bool                           bAdjustCamera                  (OptionalParm, Parm)
// bool                           bIgnoreTrace                   (OptionalParm, Parm)
// float                          FocusPitchOffsetDeg            (OptionalParm, Parm)

void UGameThirdPersonCamera::SetFocusOnActor(class AActor* FocusActor, const struct FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnActor");

	UGameThirdPersonCamera_SetFocusOnActor_Params params;
	params.FocusActor = FocusActor;
	params.FocusBoneName = FocusBoneName;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// ()
// Parameters:
// struct FVector                 FocusWorldLoc                  (Parm)
// struct FVector2D               InterpSpeedRange               (Parm)
// struct FVector2D               InFocusFOV                     (Parm)
// float                          CameraFOV                      (OptionalParm, Parm)
// bool                           bAlwaysFocus                   (OptionalParm, Parm)
// bool                           bAdjustCamera                  (OptionalParm, Parm)
// bool                           bIgnoreTrace                   (OptionalParm, Parm)
// float                          FocusPitchOffsetDeg            (OptionalParm, Parm)

void UGameThirdPersonCamera::SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc");

	UGameThirdPersonCamera_SetFocusOnLoc_Params params;
	params.FocusWorldLoc = FocusWorldLoc;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// ()
// Parameters:
// int                            AngleOffset                    (Parm)

void UGameThirdPersonCamera::AdjustTurn(int AngleOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustTurn");

	UGameThirdPersonCamera_AdjustTurn_Params params;
	params.AngleOffset = AngleOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.EndTurn
// ()

void UGameThirdPersonCamera::EndTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.EndTurn");

	UGameThirdPersonCamera_EndTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.BeginTurn
// ()
// Parameters:
// int                            StartAngle                     (Parm)
// int                            EndAngle                       (Parm)
// float                          TimeSec                        (Parm)
// float                          DelaySec                       (OptionalParm, Parm)
// bool                           bAlignTargetWhenFinished       (OptionalParm, Parm)

void UGameThirdPersonCamera::BeginTurn(int StartAngle, int EndAngle, float TimeSec, float DelaySec, bool bAlignTargetWhenFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.BeginTurn");

	UGameThirdPersonCamera_BeginTurn_Params params;
	params.StartAngle = StartAngle;
	params.EndAngle = EndAngle;
	params.TimeSec = TimeSec;
	params.DelaySec = DelaySec;
	params.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// ()
// Parameters:
// class APawn*                   P                              (Parm)
// class AGamePlayerCamera*       CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameThirdPersonCamera::PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera");

	UGameThirdPersonCamera_PlayerUpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// ()
// Parameters:
// class APawn*                   P                              (Parm)
// class AGamePlayerCamera*       CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameThirdPersonCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCamera");

	UGameThirdPersonCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// ()
// Parameters:
// class APawn*                   ViewedPawn                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGameThirdPersonCamera::GetDesiredFOV(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetDesiredFOV");

	UGameThirdPersonCamera_GetDesiredFOV_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.Init
// ()

void UGameThirdPersonCamera::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Init");

	UGameThirdPersonCamera_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.Reset
// ()

void UGameThirdPersonCamera::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Reset");

	UGameThirdPersonCamera_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// ()
// Parameters:
// class UClass*                  ModeClass                      (Parm)
// class UGameThirdPersonCameraMode* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode(class UClass* ModeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.CreateCameraMode");

	UGameThirdPersonCamera_CreateCameraMode_Params params;
	params.ModeClass = ModeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// ()
// Parameters:
// float                          inHorizFOV                     (Parm)
// class APawn*                   CameraTargetPawn               (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGamePlayerCamera::AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.AdjustFOVForViewport");

	AGamePlayerCamera_AdjustFOVForViewport_Params params;
	params.inHorizFOV = inHorizFOV;
	params.CameraTargetPawn = CameraTargetPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// ()
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void AGamePlayerCamera::ProcessViewRotation(float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ProcessViewRotation");

	AGamePlayerCamera_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GamePlayerCamera.ResetInterpolation
// ()

void AGamePlayerCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ResetInterpolation");

	AGamePlayerCamera_ResetInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.SetColorScale
// ()
// Parameters:
// struct FVector                 NewColorScale                  (Parm)

void AGamePlayerCamera::SetColorScale(const struct FVector& NewColorScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.SetColorScale");

	AGamePlayerCamera_SetColorScale_Params params;
	params.NewColorScale = NewColorScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.DisplayDebug
// ()
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGamePlayerCamera::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.DisplayDebug");

	AGamePlayerCamera_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// ()
// Parameters:
// struct FTViewTarget            OutVT                          (Const, Parm, OutParm)

void AGamePlayerCamera::UpdateCameraLensEffects(struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects");

	AGamePlayerCamera_UpdateCameraLensEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// ()
// Parameters:
// struct FTViewTarget            OutVT                          (Parm, OutParm)
// float                          DeltaTime                      (Parm)

void AGamePlayerCamera::UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateViewTarget");

	AGamePlayerCamera_UpdateViewTarget_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGamePlayerCamera::ShouldConstrainAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio");

	AGamePlayerCamera_ShouldConstrainAspectRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.FindBestCameraType
// ()
// Parameters:
// class AActor*                  CameraTarget                   (Parm)
// class UGameCameraBase*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType(class AActor* CameraTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.FindBestCameraType");

	AGamePlayerCamera_FindBestCameraType_Params params;
	params.CameraTarget = CameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.Reset
// ()

void AGamePlayerCamera::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.Reset");

	AGamePlayerCamera_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.PostBeginPlay
// ()

void AGamePlayerCamera::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.PostBeginPlay");

	AGamePlayerCamera_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// ()
// Parameters:
// class AActor*                  TargetBase                     (Parm)

void AGamePlayerCamera::CacheLastTargetBaseInfo(class AActor* TargetBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo");

	AGamePlayerCamera_CacheLastTargetBaseInfo_Params params;
	params.TargetBase = TargetBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CreateCamera
// ()
// Parameters:
// class UClass*                  CameraClass                    (Parm)
// class UGameCameraBase*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGameCameraBase* AGamePlayerCamera::CreateCamera(class UClass* CameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CreateCamera");

	AGamePlayerCamera_CreateCamera_Params params;
	params.CameraClass = CameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// ()
// Parameters:
// struct FViewOffsetData         NewViewOffset                  (Const, Parm, OutParm)

void UGameThirdPersonCameraMode::SetViewOffset(struct FViewOffsetData* NewViewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetViewOffset");

	UGameThirdPersonCameraMode_SetViewOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewViewOffset != nullptr)
		*NewViewOffset = params.NewViewOffset;
}


// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// ()
// Parameters:
// struct FPostProcessSettings    PP                             (Parm, OutParm, NeedCtorLink)

void UGameThirdPersonCameraMode::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings");

	UGameThirdPersonCameraMode_ModifyPostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// ()
// Parameters:
// struct FTViewTarget            VT                             (Const, Parm, OutParm)
// float                          DeltaTime                      (Parm)

void UGameThirdPersonCameraMode::UpdatePostProcess(float DeltaTime, struct FTViewTarget* VT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess");

	UGameThirdPersonCameraMode_UpdatePostProcess_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VT != nullptr)
		*VT = params.VT;
}


// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// ()
// Parameters:
// class AActor*                  TraceOwner                     (Parm)
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.DOFTrace");

	UGameThirdPersonCameraMode_DOFTrace_Params params;
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// ()
// Parameters:
// class AActor*                  TraceOwner                     (Parm)
// struct FVector                 StartTrace                     (Parm)
// struct FVector                 EndTrace                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc");

	UGameThirdPersonCameraMode_GetDOFFocusLoc_Params params;
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// ()
// Parameters:
// float                          DeltaTime                      (Parm)
// class AActor*                  ViewTarget                     (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                out_DeltaRot                   (Parm, OutParm)

void UGameThirdPersonCameraMode::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation");

	UGameThirdPersonCameraMode_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// ()
// Parameters:
// class APawn*                   ViewedPawn                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameThirdPersonCameraMode::SetFocusPoint(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint");

	UGameThirdPersonCameraMode_SetFocusPoint_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// ()
// Parameters:
// class APawn*                   TargetPawn                     (Parm)
// struct FTViewTarget            CurrentViewTarget              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::GetCameraWorstCaseLoc(class APawn* TargetPawn, const struct FTViewTarget& CurrentViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc");

	UGameThirdPersonCameraMode_GetCameraWorstCaseLoc_Params params;
	params.TargetPawn = TargetPawn;
	params.CurrentViewTarget = CurrentViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// ()
// Parameters:
// class APawn*                   ViewedPawn                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGameThirdPersonCameraMode::GetDesiredFOV(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV");

	UGameThirdPersonCameraMode_GetDesiredFOV_Params params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// ()
// Parameters:
// class APawn*                   P                              (Parm)
// struct FVector                 Offset                         (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameThirdPersonCameraMode::AdjustViewOffset(class APawn* P, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset");

	UGameThirdPersonCameraMode_AdjustViewOffset_Params params;
	params.P = P;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// ()
// Parameters:
// class APawn*                   TargetPawn                     (Parm)
// class UGameThirdPersonCameraMode* NewMode                        (Parm)

void UGameThirdPersonCameraMode::OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive");

	UGameThirdPersonCameraMode_OnBecomeInActive_Params params;
	params.TargetPawn = TargetPawn;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// ()
// Parameters:
// class APawn*                   TargetPawn                     (Parm)
// class UGameThirdPersonCameraMode* PrevMode                       (Parm)

void UGameThirdPersonCameraMode::OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive");

	UGameThirdPersonCameraMode_OnBecomeActive_Params params;
	params.TargetPawn = TargetPawn;
	params.PrevMode = PrevMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.Init
// ()

void UGameThirdPersonCameraMode::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.Init");

	UGameThirdPersonCameraMode_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// ()
// Parameters:
// struct FRotator                InRotation                     (Parm)
// struct FVector                 RelativeSpaceOffset            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameSpecialMove::RelativeToWorldOffset(const struct FRotator& InRotation, const struct FVector& RelativeSpaceOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.RelativeToWorldOffset");

	UGameSpecialMove_RelativeToWorldOffset_Params params;
	params.InRotation = InRotation;
	params.RelativeSpaceOffset = RelativeSpaceOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// ()
// Parameters:
// struct FRotator                InRotation                     (Parm)
// struct FVector                 WorldSpaceOffset               (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGameSpecialMove::WorldToRelativeOffset(const struct FRotator& InRotation, const struct FVector& WorldSpaceOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.WorldToRelativeOffset");

	UGameSpecialMove_WorldToRelativeOffset_Params params;
	params.InRotation = InRotation;
	params.WorldSpaceOffset = WorldSpaceOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ForcePawnRotation
// ()
// Parameters:
// class APawn*                   P                              (Parm)
// struct FRotator                NewRotation                    (Parm)

void UGameSpecialMove::ForcePawnRotation(class APawn* P, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ForcePawnRotation");

	UGameSpecialMove_ForcePawnRotation_Params params;
	params.P = P;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.MessageEvent
// ()
// Parameters:
// struct FName                   EventName                      (Parm)
// class UObject*                 Sender                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::MessageEvent(const struct FName& EventName, class UObject* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.MessageEvent");

	UGameSpecialMove_MessageEvent_Params params;
	params.EventName = EventName;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// ()

void UGameSpecialMove::ResetFacePreciseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ResetFacePreciseRotation");

	UGameSpecialMove_ResetFacePreciseRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// ()

void UGameSpecialMove::ReachedPrecisePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ReachedPrecisePosition");

	UGameSpecialMove_ReachedPrecisePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// ()
// Parameters:
// struct FRotator                RotationToFace                 (Parm)
// float                          InterpolationTime              (Parm)

void UGameSpecialMove::SetFacePreciseRotation(const struct FRotator& RotationToFace, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetFacePreciseRotation");

	UGameSpecialMove_SetFacePreciseRotation_Params params;
	params.RotationToFace = RotationToFace;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// ()
// Parameters:
// struct FVector                 DestinationToReach             (Parm)
// bool                           bCancel                        (OptionalParm, Parm)

void UGameSpecialMove::SetReachPreciseDestination(const struct FVector& DestinationToReach, bool bCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetReachPreciseDestination");

	UGameSpecialMove_SetReachPreciseDestination_Params params;
	params.DestinationToReach = DestinationToReach;
	params.bCancel = bCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ShouldReplicate
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::ShouldReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ShouldReplicate");

	UGameSpecialMove_ShouldReplicate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// ()

void UGameSpecialMove::SpecialMoveFlagsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated");

	UGameSpecialMove_SpecialMoveFlagsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.Tick
// ()
// Parameters:
// float                          DeltaTime                      (Parm)

void UGameSpecialMove::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.Tick");

	UGameSpecialMove_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// ()
// Parameters:
// struct FName                   PrevMove                       (Parm)
// struct FName                   NextMove                       (Parm)

void UGameSpecialMove::SpecialMoveEnded(const struct FName& PrevMove, const struct FName& NextMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveEnded");

	UGameSpecialMove_SpecialMoveEnded_Params params;
	params.PrevMove = PrevMove;
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// ()
// Parameters:
// bool                           bForced                        (Parm)
// struct FName                   PrevMove                       (Parm)

void UGameSpecialMove::SpecialMoveStarted(bool bForced, const struct FName& PrevMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveStarted");

	UGameSpecialMove_SpecialMoveStarted_Params params;
	params.bForced = bForced;
	params.PrevMove = PrevMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::InternalCanDoSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove");

	UGameSpecialMove_InternalCanDoSpecialMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// ()
// Parameters:
// bool                           bForceCheck                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanDoSpecialMove(bool bForceCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanDoSpecialMove");

	UGameSpecialMove_CanDoSpecialMove_Params params;
	params.bForceCheck = bForceCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// ()
// Parameters:
// struct FName                   InMove                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanOverrideSpecialMove(const struct FName& InMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideSpecialMove");

	UGameSpecialMove_CanOverrideSpecialMove_Params params;
	params.InMove = InMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// ()
// Parameters:
// struct FName                   NewMove                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanOverrideMoveWith(const struct FName& NewMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideMoveWith");

	UGameSpecialMove_CanOverrideMoveWith_Params params;
	params.NewMove = NewMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanChainMove
// ()
// Parameters:
// struct FName                   NextMove                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameSpecialMove::CanChainMove(const struct FName& NextMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanChainMove");

	UGameSpecialMove_CanChainMove_Params params;
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// ()
// Parameters:
// int                            Flags                          (Parm)

void UGameSpecialMove::ExtractSpecialMoveFlags(int Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags");

	UGameSpecialMove_ExtractSpecialMoveFlags_Params params;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// ()
// Parameters:
// int                            out_Flags                      (Parm, OutParm)

void UGameSpecialMove::InitSpecialMoveFlags(int* out_Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMoveFlags");

	UGameSpecialMove_InitSpecialMoveFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Flags != nullptr)
		*out_Flags = params.out_Flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMove
// ()
// Parameters:
// class AGamePawn*               inPawn                         (Parm)
// struct FName                   InHandle                       (Parm)

void UGameSpecialMove::InitSpecialMove(class AGamePawn* inPawn, const struct FName& InHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMove");

	UGameSpecialMove_InitSpecialMove_Params params;
	params.inPawn = inPawn;
	params.InHandle = InHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStateObject.Reset
// ()

void UGameStateObject::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.Reset");

	UGameStateObject_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStateObject.PreProcessStream
// ()

void UGameStateObject::PreProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.PreProcessStream");

	UGameStateObject_PreProcessStream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// ()
// Parameters:
// int                            EventID                        (Parm)
// int                            AggregateID                    (Parm, OutParm)
// int                            TargetAggregateID              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameStatsAggregator::GetAggregateMappingIDs(int EventID, int* AggregateID, int* TargetAggregateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs");

	UGameStatsAggregator_GetAggregateMappingIDs_Params params;
	params.EventID = EventID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AggregateID != nullptr)
		*AggregateID = params.AggregateID;
	if (TargetAggregateID != nullptr)
		*TargetAggregateID = params.TargetAggregateID;

	return params.ReturnValue;
}


// Function GameFramework.GameStatsAggregator.PostProcessStream
// ()

void UGameStatsAggregator::PostProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PostProcessStream");

	UGameStatsAggregator_PostProcessStream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.PreProcessStream
// ()

void UGameStatsAggregator::PreProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PreProcessStream");

	UGameStatsAggregator_PreProcessStream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGameCrowdSpawnerInterface::GetMaxSpawnDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist");

	UGameCrowdSpawnerInterface_GetMaxSpawnDist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdSpawnerInterface.AddToAgentPool
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameCrowdSpawnerInterface::AddToAgentPool(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.AddToAgentPool");

	UGameCrowdSpawnerInterface_AddToAgentPool_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// ()
// Parameters:
// class AGameCrowdAgent*         Agent                          (Parm)

void UGameCrowdSpawnerInterface::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed");

	UGameCrowdSpawnerInterface_AgentDestroyed_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// ()
// Parameters:
// class USeqAct_GameCrowdSpawner* Spawner                        (Parm)
// struct FVector                 SpawnPos                       (Parm, OutParm)
// struct FRotator                SpawnRot                       (Parm, OutParm)

void UGameCrowdSpawnInterface::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition");

	UGameCrowdSpawnInterface_GetSpawnPosition_Params params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// ()
// Parameters:
// class APawn*                   InEnemy                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor");

	UGameAICmd_Hover_MoveToGoal_IsEnemyBasedOnInterpActor_Params params;
	params.InEnemy = InEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// ()
// Parameters:
// class AActor*                  BlockedBy                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal::HandlePathObstruction(class AActor* BlockedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction");

	UGameAICmd_Hover_MoveToGoal_HandlePathObstruction_Params params;
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// ()

void UGameAICmd_Hover_MoveToGoal::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed");

	UGameAICmd_Hover_MoveToGoal_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// ()
// Parameters:
// class AGameAIController*       AI                             (Parm)
// class AActor*                  InGoal                         (Parm)
// float                          InGoalDistance                 (Parm)
// float                          InHoverHeight                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal::MoveToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal");

	UGameAICmd_Hover_MoveToGoal_MoveToGoal_Params params;
	params.AI = AI;
	params.InGoal = InGoal;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// ()
// Parameters:
// class AHUD*                    H                              (Parm)
// struct FName                   Category                       (Parm)

void UGameAICmd_Hover_MoveToGoal_Mesh::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug");

	UGameAICmd_Hover_MoveToGoal_Mesh_DrawDebug_Params params;
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// ()
// Parameters:
// class APawn*                   InEnemy                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor");

	UGameAICmd_Hover_MoveToGoal_Mesh_IsEnemyBasedOnInterpActor_Params params;
	params.InEnemy = InEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HasReachedGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal");

	UGameAICmd_Hover_MoveToGoal_Mesh_HasReachedGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// ()

void UGameAICmd_Hover_MoveToGoal_Mesh::ReEvaluatePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath");

	UGameAICmd_Hover_MoveToGoal_Mesh_ReEvaluatePath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// ()
// Parameters:
// class AActor*                  BlockedBy                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction(class AActor* BlockedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction");

	UGameAICmd_Hover_MoveToGoal_Mesh_HandlePathObstruction_Params params;
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// ()

void UGameAICmd_Hover_MoveToGoal_Mesh::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped");

	UGameAICmd_Hover_MoveToGoal_Mesh_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// ()

void UGameAICmd_Hover_MoveToGoal_Mesh::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed");

	UGameAICmd_Hover_MoveToGoal_Mesh_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// ()
// Parameters:
// class AGameAIController*       AI                             (Parm)
// struct FVector                 InPoint                        (Parm)
// float                          InGoalDistance                 (Parm)
// float                          InHoverHeight                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToPoint(class AGameAIController* AI, const struct FVector& InPoint, float InGoalDistance, float InHoverHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverToPoint_Params params;
	params.AI = AI;
	params.InPoint = InPoint;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// ()
// Parameters:
// class AGameAIController*       AI                             (Parm)
// class AActor*                  InGoal                         (Parm)
// float                          InGoalDistance                 (Parm)
// float                          InHoverHeight                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverToGoal_Params params;
	params.AI = AI;
	params.InGoal = InGoal;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameFixedCamera.OnBecomeActive
// ()
// Parameters:
// class UGameCameraBase*         OldCamera                      (Parm)

void UGameFixedCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.OnBecomeActive");

	UGameFixedCamera_OnBecomeActive_Params params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameFixedCamera.UpdateCamera
// ()
// Parameters:
// class APawn*                   P                              (Parm)
// class AGamePlayerCamera*       CameraActor                    (Parm)
// float                          DeltaTime                      (Parm)
// struct FTViewTarget            OutVT                          (Parm, OutParm)

void UGameFixedCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.UpdateCamera");

	UGameFixedCamera_UpdateCamera_Params params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// ()

void AGameKActorSpawnableEffect::StartScalingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.StartScalingDown");

	AGameKActorSpawnableEffect_StartScalingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// ()
// Parameters:
// class UClass*                  dmgType                        (Parm)

void AGameKActorSpawnableEffect::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld");

	AGameKActorSpawnableEffect_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// ()

void AGameKActorSpawnableEffect::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay");

	AGameKActorSpawnableEffect_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.RenderCaption
// ()
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UMobileMenuButton::RenderCaption(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderCaption");

	UMobileMenuButton_RenderCaption_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.RenderObject
// ()
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UMobileMenuButton::RenderObject(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderObject");

	UMobileMenuButton_RenderObject_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.InitMenuObject
// ()
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (Parm)
// class UMobileMenuScene*        Scene                          (Parm)
// int                            ScreenWidth                    (Parm)
// int                            ScreenHeight                   (Parm)

void UMobileMenuButton::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.InitMenuObject");

	UMobileMenuButton_InitMenuObject_Params params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.RestartPlayer
// ()
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AMobileMenuGame::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.RestartPlayer");

	AMobileMenuGame_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.StartMatch
// ()

void AMobileMenuGame::StartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.StartMatch");

	AMobileMenuGame_StartMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.PostLogin
// ()
// Parameters:
// class APlayerController*       NewPlayer                      (Parm)

void AMobileMenuGame::PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.PostLogin");

	AMobileMenuGame_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuLabel.RenderObject
// ()
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UMobileMenuLabel::RenderObject(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuLabel.RenderObject");

	UMobileMenuLabel_RenderObject_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// ()
// Parameters:
// bool                           bToEntry                       (Parm)
// TArray<class AActor*>          ActorList                      (Parm, OutParm, NeedCtorLink)

void APlayerCollectorGame::GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList");

	APlayerCollectorGame_GetSeamlessTravelActorList_Params params;
	params.bToEntry = bToEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
}


// Function GameFramework.PlayerCollectorGame.Login
// ()
// Parameters:
// struct FString                 Portal                         (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FUniqueNetId            UniqueId                       (Const, Parm)
// struct FString                 ErrorMessage                   (Parm, OutParm, NeedCtorLink)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* APlayerCollectorGame::Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.Login");

	APlayerCollectorGame_Login_Params params;
	params.Portal = Portal;
	params.Options = Options;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_HudRenderImage.Render
// ()
// Parameters:
// class UCanvas*                 TargetCanvas                   (Parm)
// class AHUD*                    TargetHud                      (Parm)

void USeqEvent_HudRenderImage::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderImage.Render");

	USeqEvent_HudRenderImage_Render_Params params;
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqEvent_HudRenderText::GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion");

	USeqEvent_HudRenderText_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_HudRenderText.Render
// ()
// Parameters:
// class UCanvas*                 TargetCanvas                   (Parm)
// class AHUD*                    TargetHud                      (Parm)

void USeqEvent_HudRenderText::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.Render");

	USeqEvent_HudRenderText_Render_Params params;
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
