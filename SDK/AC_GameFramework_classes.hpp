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

// Class GameFramework.DynamicSpriteComponent
// 0x0040 (0x0234 - 0x01F4)
class UDynamicSpriteComponent : public USpriteComponent
{
public:
	struct FInterpCurveFloat                           AnimatedScale;                                            // 0x01F4(0x0010) (Edit, NeedCtorLink)
	struct FInterpCurveLinearColor                     AnimatedColor;                                            // 0x0204(0x0010) (Edit, NeedCtorLink)
	struct FInterpCurveVector2D                        AnimatedPosition;                                         // 0x0214(0x0010) (Edit, NeedCtorLink)
	struct FVector                                     LocationOffset;                                           // 0x0224(0x000C) (Edit)
	int                                                LoopCount;                                                // 0x0230(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DynamicSpriteComponent");
		return ptr;
	}

};


// Class GameFramework.FrameworkGame
// 0x000C (0x037C - 0x0370)
class AFrameworkGame : public AGameInfo
{
public:
	TArray<struct FRequiredMobileInputConfig>          RequiredMobileInputConfigs;                               // 0x0370(0x000C) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.FrameworkGame");
		return ptr;
	}

};


// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameTypes");
		return ptr;
	}

};


// Class GameFramework.GameAIController
// 0x006C (0x0400 - 0x0394)
class AGameAIController : public AAIController
{
public:
	class UAITree*                                     AITree;                                                   // 0x0394(0x0004) (Edit, Const)
	struct FAITreeHandle                               AITreeHandle;                                             // 0x0398(0x0030) (Edit, NeedCtorLink)
	unsigned long                                      bUseAITree : 1;                                           // 0x03C8(0x0004) (Edit, Config)
	unsigned long                                      bHasRunawayCommandList : 1;                               // 0x03C8(0x0004) (Transient)
	unsigned long                                      bAILogging : 1;                                           // 0x03C8(0x0004) (Edit, Config)
	unsigned long                                      bAILogToWindow : 1;                                       // 0x03C8(0x0004) (Edit, Config)
	unsigned long                                      bFlushAILogEachLine : 1;                                  // 0x03C8(0x0004) (Edit, Config)
	unsigned long                                      bMapBasedLogName : 1;                                     // 0x03C8(0x0004) (Edit, Config)
	unsigned long                                      bAIDrawDebug : 1;                                         // 0x03C8(0x0004) (Edit, Config)
	unsigned long                                      bAIBroken : 1;                                            // 0x03C8(0x0004) (Transient)
	class UGameAICommand*                              CommandList;                                              // 0x03CC(0x0004) (Edit, Const, Transient, EditInline)
	class AFileLog*                                    AILogFile;                                                // 0x03D0(0x0004) (Transient)
	float                                              DebugTextMaxLen;                                          // 0x03D4(0x0004) (Edit)
	TArray<struct FAICmdHistoryItem>                   CommandHistory;                                           // 0x03D8(0x000C) (Edit, Const, Transient, NeedCtorLink)
	int                                                CommandHistoryNum;                                        // 0x03E4(0x0004) (Edit, Config)
	TArray<struct FName>                               AILogFilter;                                              // 0x03E8(0x000C) (Edit, Config, NeedCtorLink)
	struct FString                                     DemoActionString;                                         // 0x03F4(0x000C) (Net, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAIController");
		return ptr;
	}


	struct FString GetActionString();
	void SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime);
	void AILog_Internal(const struct FString& LogText, const struct FName& LogCategory, bool bForce);
	void RecordDemoAILog(const struct FString& LogText);
	void Destroyed();
	void ReachedIntermediateMoveGoal();
	void ReachedMoveGoal();
	float GetDestinationOffset();
	class UGameAICommand* GetAICommandInStack(class UClass* InClass);
	class UGameAICommand* FindCommandOfClass(class UClass* SearchClass);
	void DumpCommandStack();
	void CheckCommandCount();
	class UGameAICommand* GetActiveCommand();
	bool AbortCommand(class UGameAICommand* AbortCmd, class UClass* AbortClass);
	void PopCommand(class UGameAICommand* ToBePoppedCommand);
	void PushCommand(class UGameAICommand* NewCommand);
	void AllCommands(class UClass* BaseClass, class UGameAICommand** Cmd);
};


// Class GameFramework.GameAICommand
// 0x001C (0x0058 - 0x003C)
class UGameAICommand : public UAICommandBase
{
public:
	class UGameAICommand*                              ChildCommand;                                             // 0x003C(0x0004) (Edit, Const, Transient, EditInline)
	struct FName                                       ChildStatus;                                              // 0x0040(0x0008) (Edit, Const, Transient)
	class AGameAIController*                           GameAIOwner;                                              // 0x0048(0x0004) (Edit, Transient)
	struct FName                                       Status;                                                   // 0x004C(0x0008) (Edit, Transient)
	unsigned long                                      bAllowNewSameClassInstance : 1;                           // 0x0054(0x0004)
	unsigned long                                      bReplaceActiveSameClassInstance : 1;                      // 0x0054(0x0004)
	unsigned long                                      bAborted : 1;                                             // 0x0054(0x0004) (Transient)
	unsigned long                                      bIgnoreNotifies : 1;                                      // 0x0054(0x0004)
	unsigned long                                      bIgnoreStepAside : 1;                                     // 0x0054(0x0004)
	unsigned long                                      bPendingPop : 1;                                          // 0x0054(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICommand");
		return ptr;
	}


	struct FString GetDebugVerboseText();
	void GetDebugOverheadText(class APlayerController* PC, TArray<struct FString>* OutText);
	void DrawDebug(class AHUD* H, const struct FName& Category);
	struct FString GetDumpString();
	void Resumed(const struct FName& OldCommandName);
	void Paused(class UGameAICommand* NewCommand);
	void Popped();
	void Pushed();
	void PostPopped();
	void PrePushed(class AGameAIController* AI);
	bool AllowStateTransitionTo(const struct FName& StateName);
	bool AllowTransitionTo(class UClass* AttemptCommand);
	void Tick(float DeltaTime);
	bool ShouldIgnoreNotifies();
	void InternalTick(float DeltaTime);
	void InternalResumed(const struct FName& OldCommandName);
	void InternalPaused(class UGameAICommand* NewCommand);
	void InternalPopped();
	void InternalPushed();
	void InternalPrePushed(class AGameAIController* AI);
	bool InitCommand(class AGameAIController* AI);
	bool InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor);
};


// Class GameFramework.GameCameraBlockingVolume
// 0x0000 (0x0204 - 0x0204)
class AGameCameraBlockingVolume : public ABlockingVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCameraBlockingVolume");
		return ptr;
	}

};


// Class GameFramework.GameCrowdAgent
// 0x01E8 (0x03C0 - 0x01D8)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	class UGameCrowdGroup*                             MyGroup;                                                  // 0x01D8(0x0004)
	struct FVector                                     PreferredVelocity;                                        // 0x01DC(0x000C)
	float                                              AvoidanceShare;                                           // 0x01E8(0x0004)
	class AGameCrowdDestination*                       CurrentDestination;                                       // 0x01EC(0x0004)
	class AGameCrowdDestination*                       BehaviorDestination;                                      // 0x01F0(0x0004)
	class AGameCrowdDestination*                       PreviousDestination;                                      // 0x01F4(0x0004)
	struct FVector                                     ExternalForce;                                            // 0x01F8(0x000C)
	float                                              InterpZTranslation;                                       // 0x0204(0x0004)
	int                                                Health;                                                   // 0x0208(0x0004) (Edit)
	float                                              DeadBodyDuration;                                         // 0x020C(0x0004) (Edit)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0210(0x0004) (Const, ExportObject, EditConst, Component, EditInline)
	int                                                ConformTraceFrameCount;                                   // 0x0214(0x0004) (Transient)
	int                                                AwareUpdateFrameCount;                                    // 0x0218(0x0004) (Transient)
	TArray<class AActor*>                              NearbyDynamics;                                           // 0x021C(0x000C) (Transient, NeedCtorLink)
	TArray<class AGameCrowdForcePoint*>                RelevantAttractors;                                       // 0x0228(0x000C) (Transient, NeedCtorLink)
	unsigned long                                      bUniformScale : 1;                                        // 0x0234(0x0004)
	unsigned long                                      bCheckForObstacles : 1;                                   // 0x0234(0x0004) (Edit)
	unsigned long                                      bUseNavMeshPathing : 1;                                   // 0x0234(0x0004) (Edit)
	unsigned long                                      bWantsSeePlayerNotification : 1;                          // 0x0234(0x0004)
	unsigned long                                      bAllowPitching : 1;                                       // 0x0234(0x0004) (Edit)
	unsigned long                                      bHitObstacle : 1;                                         // 0x0234(0x0004)
	unsigned long                                      bBadHitNormal : 1;                                        // 0x0234(0x0004)
	unsigned long                                      bSimulateThisTick : 1;                                    // 0x0234(0x0004)
	unsigned long                                      bClampMovementSpeed : 1;                                  // 0x0234(0x0004) (Edit)
	unsigned long                                      bPotentialEncounter : 1;                                  // 0x0234(0x0004)
	unsigned long                                      bIsPanicked : 1;                                          // 0x0234(0x0004)
	unsigned long                                      bWantsGroupIdle : 1;                                      // 0x0234(0x0004)
	unsigned long                                      bPreferVisibleDestination : 1;                            // 0x0234(0x0004) (Edit)
	unsigned long                                      bPreferVisibleDestinationOnSpawn : 1;                     // 0x0234(0x0004) (Edit)
	unsigned long                                      bHasNotifiedSpawner : 1;                                  // 0x0234(0x0004)
	unsigned long                                      bIsInSpawnPool : 1;                                       // 0x0234(0x0004)
	TEnumAsByte<EConformType>                          ConformType;                                              // 0x0238(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	float                                              ConformTraceDist;                                         // 0x023C(0x0004) (Edit)
	int                                                ConformTraceInterval;                                     // 0x0240(0x0004) (Edit)
	int                                                CurrentConformTraceInterval;                              // 0x0244(0x0004)
	float                                              LastGroundZ;                                              // 0x0248(0x0004)
	float                                              AwareRadius;                                              // 0x024C(0x0004) (Edit)
	int                                                AwareUpdateInterval;                                      // 0x0250(0x0004) (Edit)
	float                                              AvoidOtherStrength;                                       // 0x0254(0x0004) (Edit)
	float                                              AvoidPlayerStrength;                                      // 0x0258(0x0004) (Edit)
	float                                              AvoidOtherRadius;                                         // 0x025C(0x0004) (Edit)
	float                                              GroupAttractionStrength;                                  // 0x0260(0x0004) (Edit)
	float                                              MatchVelStrength;                                         // 0x0264(0x0004) (Edit)
	float                                              FollowPathStrength;                                       // 0x0268(0x0004) (Edit)
	float                                              VelocityDamping;                                          // 0x026C(0x0004) (Edit)
	float                                              RotateToTargetSpeed;                                      // 0x0270(0x0004) (Edit)
	float                                              MaxYawRate;                                               // 0x0274(0x0004) (Edit)
	struct FVector                                     MeshMinScale3D;                                           // 0x0278(0x000C) (Edit)
	struct FVector                                     MeshMaxScale3D;                                           // 0x0284(0x000C) (Edit)
	float                                              EyeZOffset;                                               // 0x0290(0x0004)
	float                                              ProximityLODDist;                                         // 0x0294(0x0004) (Edit)
	float                                              VisibleProximityLODDist;                                  // 0x0298(0x0004) (Edit)
	struct FVector                                     LastKnownGoodPosition;                                    // 0x029C(0x000C)
	float                                              GroundOffset;                                             // 0x02A8(0x0004) (Edit)
	struct FVector                                     IntermediatePoint;                                        // 0x02AC(0x000C)
	struct FVector                                     SearchExtent;                                             // 0x02B8(0x000C)
	class UClass*                                      NavigationHandleClass;                                    // 0x02C4(0x0004)
	class UNavigationHandle*                           NavigationHandle;                                         // 0x02C8(0x0004)
	int                                                ObstacleCheckCount;                                       // 0x02CC(0x0004)
	float                                              WalkableFloorZ;                                           // 0x02D0(0x0004)
	float                                              LastPathingAttempt;                                       // 0x02D4(0x0004)
	float                                              LastUpdateTime;                                           // 0x02D8(0x0004)
	float                                              NotVisibleLifeSpan;                                       // 0x02DC(0x0004) (Edit)
	float                                              NotVisibleTickScalingFactor;                              // 0x02E0(0x0004) (Edit)
	class AGameCrowdAgent*                             MyArchetype;                                              // 0x02E4(0x0004)
	float                                              MaxWalkingSpeed;                                          // 0x02E8(0x0004) (Edit)
	float                                              MaxRunningSpeed;                                          // 0x02EC(0x0004) (Edit)
	float                                              MaxSpeed;                                                 // 0x02F0(0x0004)
	TArray<struct FRecentInteraction>                  RecentInteractions;                                       // 0x02F4(0x000C) (NeedCtorLink)
	float                                              BeaconMaxDist;                                            // 0x0300(0x0004)
	struct FVector                                     BeaconOffset;                                             // 0x0304(0x000C)
	class UTexture2D*                                  BeaconTexture;                                            // 0x0310(0x0004) (Const)
	struct FLinearColor                                BeaconColor;                                              // 0x0314(0x0010) (Const)
	class USoundCue*                                   AmbientSoundCue;                                          // 0x0324(0x0004) (Edit)
	class UAudioComponent*                             AmbientSoundComponent;                                    // 0x0328(0x0004) (ExportObject, Component, EditInline)
	class UGameCrowdAgentBehavior*                     CurrentBehavior;                                          // 0x032C(0x0004)
	TArray<struct FBehaviorEntry>                      EncounterAgentBehaviors;                                  // 0x0330(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBehaviorEntry>                      SeePlayerBehaviors;                                       // 0x033C(0x000C) (Edit, NeedCtorLink)
	float                                              MaxSeePlayerDistSq;                                       // 0x0348(0x0004)
	float                                              SeePlayerInterval;                                        // 0x034C(0x0004) (Edit)
	TArray<struct FBehaviorEntry>                      SpawnBehaviors;                                           // 0x0350(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBehaviorEntry>                      PanicBehaviors;                                           // 0x035C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBehaviorEntry>                      RandomBehaviors;                                          // 0x0368(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBehaviorEntry>                      TakeDamageBehaviors;                                      // 0x0374(0x000C) (Edit, NeedCtorLink)
	float                                              RandomBehaviorInterval;                                   // 0x0380(0x0004) (Edit)
	float                                              ForceUpdateTime;                                          // 0x0384(0x0004)
	float                                              ReachThreshold;                                           // 0x0388(0x0004)
	TArray<struct FBehaviorEntry>                      GroupWaitingBehaviors;                                    // 0x038C(0x000C) (Edit, NeedCtorLink)
	float                                              DesiredGroupRadius;                                       // 0x0398(0x0004) (Edit)
	float                                              DesiredGroupRadiusSq;                                     // 0x039C(0x0004)
	float                                              MaxLOSLifeDistanceSq;                                     // 0x03A0(0x0004)
	TScriptInterface<class UGameCrowdSpawnerInterface> MySpawner;                                                // 0x03A4(0x0008)
	struct FVector                                     SpawnOffset;                                              // 0x03AC(0x000C)
	float                                              InitialLastRenderTime;                                    // 0x03B8(0x0004)
	float                                              ForceAmountToIgnorePathForces;                            // 0x03BC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgent");
		return ptr;
	}


	struct FString GetBehaviorString();
	struct FString GetDestString();
	void PostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	void NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	struct FVector GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath);
	void InitNavigationHandle();
	void OverlappedActorEvent(class AActor* A);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void FireDeathEvent();
	void PlayDeath(const struct FVector& KillMomentum);
	void UpdateIntermediatePoint(class AActor* DestinationActor);
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	bool IsIdle();
	void SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype);
	void StopBehavior();
	void ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject);
	void ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor);
	void ResetSeePlayer();
	void TryRandomBehavior();
	void NotifySeePlayer(class APlayerController* PC);
	void PlaySpawnBehavior();
	void HandlePotentialAgentEncounter();
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action);
	void InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility);
	void SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void Destroyed();
	void ResetPooledAgent();
	void KillAgent();
	void PostBeginPlay();
	void SetMaxSpeed();
	void SetCurrentDestination(class AGameCrowdDestination* NewDest);
	void WaitForGroupMembers();
	bool PickBehaviorFrom(TArray<struct FBehaviorEntry> BehaviorList, const struct FVector& BestCameraLoc);
	void SetPanic(class AActor* PanicActor, bool bNewPanic);
	bool IsPanicked();
	void FellOutOfWorld(class UClass* dmgType);
};


// Class GameFramework.GameCrowdAgentSkeletal
// 0x0080 (0x0440 - 0x03C0)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x03C0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UAnimNodeBlend*                              SpeedBlendNode;                                           // 0x03C4(0x0004)
	class UAnimNodeSlot*                               FullBodySlot;                                             // 0x03C8(0x0004)
	class UAnimNodeSequence*                           ActionSeqNode;                                            // 0x03CC(0x0004)
	class UAnimNodeSequence*                           WalkSeqNode;                                              // 0x03D0(0x0004)
	class UAnimNodeSequence*                           RunSeqNode;                                               // 0x03D4(0x0004)
	class UAnimTree*                                   AgentTree;                                                // 0x03D8(0x0004)
	TArray<struct FName>                               WalkAnimNames;                                            // 0x03DC(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               RunAnimNames;                                             // 0x03E8(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               IdleAnimNames;                                            // 0x03F4(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               DeathAnimNames;                                           // 0x0400(0x000C) (Edit, NeedCtorLink)
	float                                              SpeedBlendStart;                                          // 0x040C(0x0004) (Edit)
	float                                              SpeedBlendEnd;                                            // 0x0410(0x0004) (Edit)
	float                                              AnimVelRate;                                              // 0x0414(0x0004) (Edit)
	float                                              MaxSpeedBlendChangeSpeed;                                 // 0x0418(0x0004) (Edit)
	struct FName                                       MoveSyncGroupName;                                        // 0x041C(0x0008) (Edit)
	TArray<struct FGameCrowdAttachmentList>            Attachments;                                              // 0x0424(0x000C) (Edit, NeedCtorLink)
	float                                              MaxTargetAcquireTime;                                     // 0x0430(0x0004) (Edit)
	unsigned long                                      bUseRootMotionVelocity : 1;                               // 0x0434(0x0004) (Edit)
	unsigned long                                      bIsPlayingIdleAnimation : 1;                              // 0x0434(0x0004)
	unsigned long                                      bIsPlayingDeathAnimation : 1;                             // 0x0434(0x0004)
	unsigned long                                      bAnimateThisTick : 1;                                     // 0x0434(0x0004)
	float                                              MaxAnimationDistance;                                     // 0x0438(0x0004) (Edit)
	float                                              MaxAnimationDistanceSq;                                   // 0x043C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentSkeletal");
		return ptr;
	}


	void CreateAttachments();
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void ClearLatentAnimation();
	void OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action);
	void SetRootMotion(bool bRootMotionEnabled);
	void PlayDeath(const struct FVector& KillMomentum);
	void SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows);
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdAgentBehavior
// 0x0018 (0x0054 - 0x003C)
class UGameCrowdAgentBehavior : public UObject
{
public:
	unsigned long                                      bIdleBehavior : 1;                                        // 0x003C(0x0004) (Edit)
	unsigned long                                      bFaceActionTargetFirst : 1;                               // 0x003C(0x0004) (Edit)
	unsigned long                                      bIsViralBehavior : 1;                                     // 0x003C(0x0004) (Edit)
	unsigned long                                      bPassOnIsViralBehaviorFlag : 1;                           // 0x003C(0x0004) (Edit)
	unsigned long                                      bIsPanicked : 1;                                          // 0x003C(0x0004)
	class AActor*                                      ActionTarget;                                             // 0x0040(0x0004)
	float                                              MaxPlayerDistance;                                        // 0x0044(0x0004) (Edit)
	float                                              DurationOfViralBehaviorPropagation;                       // 0x0048(0x0004) (Edit)
	float                                              TimeToStopPropagatingViralBehavior;                       // 0x004C(0x0004) (Transient)
	class AGameCrowdAgent*                             MyAgent;                                                  // 0x0050(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentBehavior");
		return ptr;
	}


	bool AllowBehaviorAt(class AGameCrowdDestination* Destination);
	bool AllowThisDestination(class AGameCrowdDestination* Destination);
	void PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent);
	void ActivatedBy(class AActor* NewActionTarget);
	class AActor* GetDestinationActor();
	void ChangingDestination(class AGameCrowdDestination* NewDest);
	struct FString GetBehaviorString();
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void StopBehavior();
	void InitBehavior(class AGameCrowdAgent* Agent);
	bool HandleMovement();
	void FinishedTargetRotation();
	bool CanBeUsedBy(class AGameCrowdAgent* Agent, const struct FVector& CameraLoc);
	void Tick(float DeltaTime);
	bool ShouldEndIdle();
};


// Class GameFramework.GameCrowdBehavior_PlayAnimation
// 0x002C (0x0080 - 0x0054)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	TArray<struct FName>                               AnimationList;                                            // 0x0054(0x000C) (Edit, NeedCtorLink)
	float                                              BlendInTime;                                              // 0x0060(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0064(0x0004) (Edit)
	unsigned long                                      bUseRootMotion : 1;                                       // 0x0068(0x0004) (Edit)
	unsigned long                                      bLookAtPlayer : 1;                                        // 0x0068(0x0004) (Edit)
	unsigned long                                      bLooping : 1;                                             // 0x0068(0x0004) (Edit)
	unsigned long                                      bBlendBetweenAnims : 1;                                   // 0x0068(0x0004) (Edit)
	class AActor*                                      CustomActionTarget;                                       // 0x006C(0x0004)
	int                                                LoopIndex;                                                // 0x0070(0x0004) (Edit)
	float                                              LoopTime;                                                 // 0x0074(0x0004) (Edit)
	class USeqAct_PlayAgentAnimation*                  AnimSequence;                                             // 0x0078(0x0004)
	int                                                AnimationIndex;                                           // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_PlayAnimation");
		return ptr;
	}


	struct FString GetBehaviorString();
	void StopBehavior();
	void PlayAgentAnimationNow();
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void SetSequenceOutput();
	void FinishedTargetRotation();
	void InitBehavior(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdBehavior_RunFromPanic
// 0x000C (0x0060 - 0x0054)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	class AActor*                                      PanicFocus;                                               // 0x0054(0x0004) (Transient)
	float                                              DurationOfPanic;                                          // 0x0058(0x0004) (Edit)
	float                                              TimeToStopPanic;                                          // 0x005C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_RunFromPanic");
		return ptr;
	}


	void Tick(float DeltaTime);
	struct FString GetBehaviorString();
	bool AllowBehaviorAt(class AGameCrowdDestination* Destination);
	bool AllowThisDestination(class AGameCrowdDestination* Destination);
	void PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent);
	void StopBehavior();
	void InitBehavior(class AGameCrowdAgent* Agent);
	void ActivatedBy(class AActor* NewActionTarget);
};


// Class GameFramework.GameCrowdBehavior_WaitForGroup
// 0x0000 (0x0054 - 0x0054)
class UGameCrowdBehavior_WaitForGroup : public UGameCrowdAgentBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitForGroup");
		return ptr;
	}


	void StopBehavior();
	bool ShouldEndIdle();
	struct FString GetBehaviorString();
	void InitBehavior(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdBehavior_WaitInQueue
// 0x0008 (0x005C - 0x0054)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	unsigned long                                      bStoppingBehavior : 1;                                    // 0x0054(0x0004)
	class AGameCrowdDestinationQueuePoint*             QueuePosition;                                            // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitInQueue");
		return ptr;
	}


	void StopBehavior();
	bool ShouldEndIdle();
	struct FString GetBehaviorString();
	class AActor* GetDestinationActor();
	void ChangingDestination(class AGameCrowdDestination* NewDest);
	bool HandleMovement();
};


// Class GameFramework.GameCrowdGroup
// 0x000C (0x0048 - 0x003C)
class UGameCrowdGroup : public UObject
{
public:
	TArray<class AGameCrowdAgent*>                     Members;                                                  // 0x003C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdGroup");
		return ptr;
	}


	void UpdateDestinations(class AGameCrowdDestination* NewDestination);
	void RemoveMember(class AGameCrowdAgent* Agent);
	void AddMember(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdInteractionPoint
// 0x0008 (0x01DC - 0x01D4)
class AGameCrowdInteractionPoint : public AActor
{
public:
	unsigned long                                      bIsEnabled : 1;                                           // 0x01D4(0x0004) (Edit, Net)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x01D8(0x0004) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInteractionPoint");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class GameFramework.GameCrowdDestination
// 0x0084 (0x0260 - 0x01DC)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;                    // 0x01DC(0x0004) (Const, Native, NoExport)
	unsigned long                                      bKillWhenReached : 1;                                     // 0x01E0(0x0004) (Edit)
	unsigned long                                      bAllowAsPreviousDestination : 1;                          // 0x01E0(0x0004) (Edit)
	unsigned long                                      bLastAllowableResult : 1;                                 // 0x01E0(0x0004)
	unsigned long                                      bAvoidWhenPanicked : 1;                                   // 0x01E0(0x0004) (Edit)
	unsigned long                                      bSkipBehaviorIfPanicked : 1;                              // 0x01E0(0x0004) (Edit)
	unsigned long                                      bFleeDestination : 1;                                     // 0x01E0(0x0004) (Edit)
	unsigned long                                      bMustReachExactly : 1;                                    // 0x01E0(0x0004) (Edit)
	unsigned long                                      bHasRestrictions : 1;                                     // 0x01E0(0x0004)
	unsigned long                                      bAllowsSpawning : 1;                                      // 0x01E0(0x0004) (Edit)
	unsigned long                                      bLineSpawner : 1;                                         // 0x01E0(0x0004) (Edit)
	unsigned long                                      bSpawnAtEdge : 1;                                         // 0x01E0(0x0004) (Edit)
	unsigned long                                      bSoftPerimeter : 1;                                       // 0x01E0(0x0004) (Edit)
	unsigned long                                      bIsVisible : 1;                                           // 0x01E0(0x0004)
	unsigned long                                      bWillBeVisible : 1;                                       // 0x01E0(0x0004)
	unsigned long                                      bCanSpawnHereNow : 1;                                     // 0x01E0(0x0004)
	unsigned long                                      bIsBeyondSpawnDistance : 1;                               // 0x01E0(0x0004)
	unsigned long                                      bAdjacentToVisibleNode : 1;                               // 0x01E0(0x0004)
	unsigned long                                      bHasNavigationMesh : 1;                                   // 0x01E0(0x0004)
	TArray<class AGameCrowdDestination*>               NextDestinations;                                         // 0x01E4(0x000C) (Edit, DuplicateTransient, NeedCtorLink)
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                                // 0x01F0(0x0004) (Edit, DuplicateTransient)
	int                                                Capacity;                                                 // 0x01F4(0x0004) (Edit)
	float                                              Frequency;                                                // 0x01F8(0x0004) (Edit)
	int                                                CustomerCount;                                            // 0x01FC(0x0004)
	TArray<class UClass*>                              SupportedAgentClasses;                                    // 0x0200(0x000C) (Edit, NeedCtorLink)
	TArray<class UObject*>                             SupportedArchetypes;                                      // 0x020C(0x000C) (Edit, NeedCtorLink)
	TArray<class UClass*>                              RestrictedAgentClasses;                                   // 0x0218(0x000C) (Edit, NeedCtorLink)
	TArray<class UObject*>                             RestrictedArchetypes;                                     // 0x0224(0x000C) (Edit, NeedCtorLink)
	float                                              ExactReachTolerance;                                      // 0x0230(0x0004)
	struct FName                                       InteractionTag;                                           // 0x0234(0x0008) (Edit)
	float                                              InteractionDelay;                                         // 0x023C(0x0004) (Edit)
	float                                              SpawnRadius;                                              // 0x0240(0x0004) (Edit)
	TArray<struct FBehaviorEntry>                      ReachedBehaviors;                                         // 0x0244(0x000C) (Edit, NeedCtorLink)
	class AGameCrowdAgent*                             AgentEnRoute;                                             // 0x0250(0x0004)
	float                                              Priority;                                                 // 0x0254(0x0004)
	float                                              LastSpawnTime;                                            // 0x0258(0x0004)
	class AGameCrowdPopulationManager*                 MyPopMgr;                                                 // 0x025C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestination");
		return ptr;
	}


	void GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot);
	bool AllowableDestinationFor(class AGameCrowdAgent* Agent);
	bool AtCapacity();
	void IncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent);
	void DecrementCustomerCount(class AGameCrowdAgent* DepartingAgent);
	void PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions);
	void ReachedDestination(class AGameCrowdAgent* Agent);
	void Destroyed();
	void PostBeginPlay();
	bool ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly);
};


// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x001C (0x01F8 - 0x01DC)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                                        // 0x01DC(0x0004) (Edit)
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                                    // 0x01E0(0x0004)
	class AGameCrowdAgent*                             QueuedAgent;                                              // 0x01E4(0x0004)
	class AGameCrowdDestination*                       QueueDestination;                                         // 0x01E8(0x0004) (Transient)
	unsigned long                                      bClearingQueue : 1;                                       // 0x01EC(0x0004)
	unsigned long                                      bPendingAdvance : 1;                                      // 0x01EC(0x0004)
	float                                              AverageReactionTime;                                      // 0x01F0(0x0004) (Edit)
	class UClass*                                      QueueBehaviorClass;                                       // 0x01F4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestinationQueuePoint");
		return ptr;
	}


	bool HasCustomer();
	void ClearQueue(class AGameCrowdAgent* OldCustomer);
	void AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition);
	void ActuallyAdvance();
	void AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition);
	void ReachedDestination(class AGameCrowdAgent* Agent);
	bool HasSpace();
	bool QueueReachedBy(class AGameCrowdAgent* Agent, const struct FVector& TestPosition);
};


// Class GameFramework.GameCrowdForcePoint
// 0x0000 (0x01DC - 0x01DC)
class AGameCrowdForcePoint : public AGameCrowdInteractionPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdForcePoint");
		return ptr;
	}


	struct FVector AppliedForce(class AGameCrowdAgent* Agent);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class GameFramework.GameCrowdAttractor
// 0x0008 (0x01E4 - 0x01DC)
class AGameCrowdAttractor : public AGameCrowdForcePoint
{
public:
	float                                              Attraction;                                               // 0x01DC(0x0004) (Edit, Interp)
	unsigned long                                      bAttractionFalloff : 1;                                   // 0x01E0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAttractor");
		return ptr;
	}


	struct FVector AppliedForce(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdRepulsor
// 0x0008 (0x01E4 - 0x01DC)
class AGameCrowdRepulsor : public AGameCrowdForcePoint
{
public:
	float                                              Repulsion;                                                // 0x01DC(0x0004) (Edit, Interp)
	unsigned long                                      bAttractionFalloff : 1;                                   // 0x01E0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdRepulsor");
		return ptr;
	}


	struct FVector AppliedForce(class AGameCrowdAgent* Agent);
};


// Class GameFramework.SeqAct_GameCrowdSpawner
// 0x0058 (0x0150 - 0x00F8)
class USeqAct_GameCrowdSpawner : public USeqAct_Latent
{
public:
	unsigned long                                      bSpawningActive : 1;                                      // 0x00F8(0x0004)
	unsigned long                                      bCycleSpawnLocs : 1;                                      // 0x00F8(0x0004) (Edit)
	unsigned long                                      bRespawnDeadAgents : 1;                                   // 0x00F8(0x0004) (Edit)
	unsigned long                                      bHasReducedNumberDueToSplitScreen : 1;                    // 0x00F8(0x0004)
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                         // 0x00F8(0x0004) (Edit)
	unsigned long                                      bForceObstacleChecking : 1;                               // 0x00F8(0x0004) (Edit)
	unsigned long                                      bForceNavMeshPathing : 1;                                 // 0x00F8(0x0004) (Edit)
	unsigned long                                      bOnlySpawnHidden : 1;                                     // 0x00F8(0x0004) (Edit)
	unsigned long                                      bWarmupPosition : 1;                                      // 0x00F8(0x0004) (Edit)
	unsigned long                                      bCastShadows : 1;                                         // 0x00F8(0x0004) (Edit)
	int                                                NextDestinationIndex;                                     // 0x00FC(0x0004)
	TArray<class AActor*>                              SpawnLocs;                                                // 0x0100(0x000C) (Transient, NeedCtorLink)
	int                                                LastSpawnLocIndex;                                        // 0x010C(0x0004) (Transient)
	float                                              SpawnRate;                                                // 0x0110(0x0004) (Edit)
	int                                                SpawnNum;                                                 // 0x0114(0x0004) (Edit)
	float                                              SpawnRadius;                                              // 0x0118(0x0004) (Edit)
	float                                              SplitScreenNumReduction;                                  // 0x011C(0x0004) (Edit)
	float                                              Remainder;                                                // 0x0120(0x0004)
	float                                              AgentFrequencySum;                                        // 0x0124(0x0004)
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                           // 0x0128(0x0004) (Edit)
	TArray<struct FAgentArchetypeInfo>                 AgentArchetypes;                                          // 0x012C(0x000C) (Transient, NeedCtorLink)
	TArray<class AGameCrowdAgent*>                     SpawnedList;                                              // 0x0138(0x000C) (Transient, NeedCtorLink)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // 0x0144(0x0004) (Edit)
	class AGameCrowdReplicationActor*                  RepActor;                                                 // 0x0148(0x0004)
	float                                              AgentWarmupTime;                                          // 0x014C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdSpawner");
		return ptr;
	}


	int GetObjClassVersion();
	class AGameCrowdAgent* CreateNewAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup);
	class AGameCrowdAgent* SpawnAgent(class AActor* SpawnLoc);
	void UpdateSpawning(float DeltaSeconds);
	void KillAgents();
	void CacheSpawnerVars();
	void SpawnedAgent(class AGameCrowdAgent* NewAgent);
};


// Class GameFramework.GameCrowdPopulationManager
// 0x0098 (0x026C - 0x01D4)
class AGameCrowdPopulationManager : public ACrowdPopulationManagerBase
{
public:
	struct FPointer                                    VfTable_IInterface_NavigationHandle;                      // 0x01D4(0x0004) (Const, Native, NoExport)
	unsigned long                                      bSpawningActive : 1;                                      // 0x01D8(0x0004)
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                         // 0x01D8(0x0004)
	unsigned long                                      bCastShadows : 1;                                         // 0x01D8(0x0004)
	unsigned long                                      bForceObstacleChecking : 1;                               // 0x01D8(0x0004)
	unsigned long                                      bForceNavMeshPathing : 1;                                 // 0x01D8(0x0004)
	unsigned long                                      bHaveInitialPopulation : 1;                               // 0x01D8(0x0004)
	unsigned long                                      bWarmupPosition : 1;                                      // 0x01D8(0x0004) (Edit)
	float                                              SpawnRate;                                                // 0x01DC(0x0004)
	int                                                SpawnNum;                                                 // 0x01E0(0x0004)
	float                                              SplitScreenNumReduction;                                  // 0x01E4(0x0004)
	float                                              Remainder;                                                // 0x01E8(0x0004)
	float                                              AgentFrequencySum;                                        // 0x01EC(0x0004)
	TArray<struct FAgentArchetypeInfo>                 AgentArchetypes;                                          // 0x01F0(0x000C) (NeedCtorLink)
	TArray<class AGameCrowdAgent*>                     AgentPool;                                                // 0x01FC(0x000C) (NeedCtorLink)
	int                                                MaxAgentPoolSize;                                         // 0x0208(0x0004)
	int                                                AgentCount;                                               // 0x020C(0x0004)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // 0x0210(0x0004)
	float                                              AgentWarmupTime;                                          // 0x0214(0x0004)
	float                                              SpawnPrioritizationInterval;                              // 0x0218(0x0004)
	int                                                PrioritizationIndex;                                      // 0x021C(0x0004)
	int                                                PrioritizationUpdateIndex;                                // 0x0220(0x0004)
	TArray<class AGameCrowdDestination*>               PrioritizedSpawnPoints;                                   // 0x0224(0x000C) (NeedCtorLink)
	float                                              PlayerPositionPredictionTime;                             // 0x0230(0x0004)
	TArray<class AGameCrowdDestination*>               PotentialSpawnPoints;                                     // 0x0234(0x000C) (NeedCtorLink)
	float                                              MaxSpawnDist;                                             // 0x0240(0x0004)
	float                                              MaxSpawnDistSq;                                           // 0x0244(0x0004)
	float                                              MinBehindSpawnDistSq;                                     // 0x0248(0x0004)
	int                                                SpawnedCount;                                             // 0x024C(0x0004)
	int                                                PoolCount;                                                // 0x0250(0x0004)
	int                                                KilledCount;                                              // 0x0254(0x0004)
	float                                              HeadVisibilityOffset;                                     // 0x0258(0x0004)
	float                                              InitialPopulationPct;                                     // 0x025C(0x0004)
	class UClass*                                      NavigationHandleClass;                                    // 0x0260(0x0004)
	class UNavigationHandle*                           NavigationHandle;                                         // 0x0264(0x0004)
	class AGameCrowdAgent*                             QueryingAgent;                                            // 0x0268(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdPopulationManager");
		return ptr;
	}


	class AGameCrowdAgent* CreateNewAgent(class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup);
	class AGameCrowdAgent* SpawnAgent(class AGameCrowdDestination* SpawnLoc);
	bool ValidateSpawnAt(class AGameCrowdDestination* Candidate);
	void AddPrioritizedSpawnPoint(class AGameCrowdDestination* GCD, const struct FVector& ViewLocation);
	void AnalyzeSpawnPoints(int StartIndex, int StopIndex, const struct FVector& ViewLocation, const struct FVector& PredictionLocation);
	void PrioritizeSpawnPoints(float DeltaSeconds);
	class AGameCrowdDestination* PickSpawnPoint();
	void Tick(float DeltaSeconds);
	bool IsSpawningActive();
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	bool AddToAgentPool(class AGameCrowdAgent* Agent);
	void AgentDestroyed(class AGameCrowdAgent* Agent);
	void FlushAgents();
	void OnGameCrowdPopulationManagerToggle(class USeqAct_GameCrowdPopulationManagerToggle* inAction);
	void RemoveSpawnPoint(class AGameCrowdDestination* GCD);
	void AddSpawnPoint(class AGameCrowdDestination* GCD);
	float GetMaxSpawnDist();
	void NotifyPathChanged();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdReplicationActor
// 0x000C (0x01E0 - 0x01D4)
class AGameCrowdReplicationActor : public AActor
{
public:
	class USeqAct_GameCrowdSpawner*                    Spawner;                                                  // 0x01D4(0x0004) (Net, RepNotify)
	unsigned long                                      bSpawningActive : 1;                                      // 0x01D8(0x0004) (Net, RepNotify)
	int                                                DestroyAllCount;                                          // 0x01DC(0x0004) (Net, RepNotify)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdReplicationActor");
		return ptr;
	}


	void ReplicatedEvent(const struct FName& VarName);
};


// Class GameFramework.GameDestinationConnRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDestinationConnRenderingComponent");
		return ptr;
	}

};


// Class GameFramework.GameExplosion
// 0x00A8 (0x00E4 - 0x003C)
class UGameExplosion : public UObject
{
public:
	unsigned long                                      bDirectionalExplosion : 1;                                // 0x003C(0x0004) (Edit)
	unsigned long                                      bIgnoreInstigator : 1;                                    // 0x003C(0x0004) (Transient)
	unsigned long                                      bAllowTeammateCringes : 1;                                // 0x003C(0x0004) (Edit)
	unsigned long                                      bFullDamageToAttachee : 1;                                // 0x003C(0x0004) (Transient)
	unsigned long                                      bAttachExplosionEmitterToAttachee : 1;                    // 0x003C(0x0004) (Edit)
	unsigned long                                      bPerformRadialBlurRelevanceCheck : 1;                     // 0x003C(0x0004) (Edit)
	unsigned long                                      bCausesFracture : 1;                                      // 0x003C(0x0004) (Edit)
	unsigned long                                      bAllowPerMaterialFX : 1;                                  // 0x003C(0x0004) (Edit)
	unsigned long                                      bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;// 0x003C(0x0004) (Edit)
	unsigned long                                      bUseMapSpecificValues : 1;                                // 0x003C(0x0004) (Edit)
	unsigned long                                      bUseOverlapCheck : 1;                                     // 0x003C(0x0004) (Edit)
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;                   // 0x003C(0x0004) (Edit)
	unsigned long                                      bAutoControllerVibration : 1;                             // 0x003C(0x0004) (Edit)
	float                                              DirectionalExplosionAngleDeg;                             // 0x0040(0x0004) (Edit)
	float                                              DamageDelay;                                              // 0x0044(0x0004) (Edit)
	float                                              Damage;                                                   // 0x0048(0x0004) (Edit)
	float                                              DamageRadius;                                             // 0x004C(0x0004) (Edit)
	float                                              DamageFalloffExponent;                                    // 0x0050(0x0004) (Edit)
	class AActor*                                      ActorToIgnoreForDamage;                                   // 0x0054(0x0004) (Transient)
	class UClass*                                      ActorClassToIgnoreForDamage;                              // 0x0058(0x0004) (Edit)
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;                // 0x005C(0x0004) (Edit)
	class UClass*                                      MyDamageType;                                             // 0x0060(0x0004) (Edit)
	float                                              KnockDownRadius;                                          // 0x0064(0x0004) (Edit)
	float                                              KnockDownStrength;                                        // 0x0068(0x0004) (Edit)
	float                                              CringeRadius;                                             // 0x006C(0x0004) (Edit)
	struct FVector2D                                   CringeDuration;                                           // 0x0070(0x0008) (Edit)
	float                                              MomentumTransferScale;                                    // 0x0078(0x0004) (Edit)
	class UParticleSystem*                             ParticleEmitterTemplate;                                  // 0x007C(0x0004) (Edit)
	float                                              ExplosionEmitterScale;                                    // 0x0080(0x0004) (Edit)
	class AActor*                                      HitActor;                                                 // 0x0084(0x0004)
	struct FVector                                     HitLocation;                                              // 0x0088(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0094(0x000C)
	class USoundCue*                                   ExplosionSound;                                           // 0x00A0(0x0004) (Edit)
	class UPointLightComponent*                        ExploLight;                                               // 0x00A4(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              ExploLightFadeOutTime;                                    // 0x00A8(0x0004) (Edit)
	class URadialBlurComponent*                        ExploRadialBlur;                                          // 0x00AC(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              ExploRadialBlurFadeOutTime;                               // 0x00B0(0x0004) (Edit)
	float                                              ExploRadialBlurMaxBlur;                                   // 0x00B4(0x0004) (Edit)
	float                                              FractureMeshRadius;                                       // 0x00B8(0x0004) (Edit)
	float                                              FracturePartVel;                                          // 0x00BC(0x0004) (Edit)
	class UCameraShake*                                CamShake;                                                 // 0x00C0(0x0004) (Edit, EditInline)
	class UCameraShake*                                CamShake_Left;                                            // 0x00C4(0x0004) (Edit, EditInline)
	class UCameraShake*                                CamShake_Right;                                           // 0x00C8(0x0004) (Edit, EditInline)
	class UCameraShake*                                CamShake_Rear;                                            // 0x00CC(0x0004) (Edit, EditInline)
	float                                              CamShakeInnerRadius;                                      // 0x00D0(0x0004) (Edit)
	float                                              CamShakeOuterRadius;                                      // 0x00D4(0x0004) (Edit)
	float                                              CamShakeFalloff;                                          // 0x00D8(0x0004) (Edit)
	class UClass*                                      CameraLensEffect;                                         // 0x00DC(0x0004) (Edit)
	float                                              CameraLensEffectRadius;                                   // 0x00E0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosion");
		return ptr;
	}

};


// Class GameFramework.GameExplosionActor
// 0x0058 (0x022C - 0x01D4)
class AGameExplosionActor : public AActor
{
public:
	unsigned long                                      bHasExploded : 1;                                         // 0x01D4(0x0004) (Transient)
	unsigned long                                      bExplodeMoreThanOnce : 1;                                 // 0x01D4(0x0004) (Edit)
	unsigned long                                      bDrawDebug : 1;                                           // 0x01D4(0x0004)
	class UPointLightComponent*                        ExplosionLight;                                           // 0x01D8(0x0004) (ExportObject, Transient, Component, EditInline)
	float                                              LightFadeTime;                                            // 0x01DC(0x0004) (Transient)
	float                                              LightFadeTimeRemaining;                                   // 0x01E0(0x0004) (Transient)
	float                                              LightInitialBrightness;                                   // 0x01E4(0x0004) (Transient)
	class URadialBlurComponent*                        ExplosionRadialBlur;                                      // 0x01E8(0x0004) (ExportObject, Transient, Component, EditInline)
	float                                              RadialBlurFadeTime;                                       // 0x01EC(0x0004) (Transient)
	float                                              RadialBlurFadeTimeRemaining;                              // 0x01F0(0x0004) (Transient)
	float                                              RadialBlurMaxBlurAmount;                                  // 0x01F4(0x0004) (Transient)
	class UGameExplosion*                              ExplosionTemplate;                                        // 0x01F8(0x0004)
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                                   // 0x01FC(0x0004) (ExportObject, Component, EditInline)
	class AController*                                 InstigatorController;                                     // 0x0200(0x0004)
	class AActor*                                      HitActorFromPhysMaterialTrace;                            // 0x0204(0x0004)
	struct FVector                                     HitLocationFromPhysMaterialTrace;                         // 0x0208(0x000C)
	class AActor*                                      Attachee;                                                 // 0x0214(0x0004)
	class AController*                                 AttacheeController;                                       // 0x0218(0x0004)
	float                                              DirectionalExplosionMinDot;                               // 0x021C(0x0004) (Transient)
	struct FVector                                     ExplosionDirection;                                       // 0x0220(0x000C) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosionActor");
		return ptr;
	}


	class UCameraShake* ChooseCameraShake(const struct FVector& Epicenter, class APlayerController* PC);
	void SpawnCameraLensEffects();
	void DoExplosionCameraEffects();
	void Tick(float DeltaTime);
	void DrawDebug();
	void DelayedExplosionDamage();
	void Explode(class UGameExplosion* NewExplosionTemplate, const struct FVector& Direction);
	void SpawnExplosionFogVolume();
	void SpawnExplosionDecal();
	void SpawnExplosionParticleSystem(class UParticleSystem* Template);
	void UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial);
	void SpecialPawnEffectsFor(class AGamePawn* VictimPawn, float VictimDist);
	float GetEffectCheckRadius();
	void DoExplosionDamage(bool bCauseDamage, bool bCauseEffects);
	float BoxDistanceToPoint(const struct FVector& Start, const struct FBox& BBox);
	bool IsBehindExplosion(class AActor* A);
	bool DoFullDamageToActor(class AActor* Victim);
	class UPhysicalMaterial* GetPhysicalMaterial();
	void PreBeginPlay();
};


// Class GameFramework.GamePawn
// 0x0004 (0x0460 - 0x045C)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bLastHitWasHeadShot : 1;                                  // 0x045C(0x0004) (Net, Transient)
	unsigned long                                      bRespondToExplosions : 1;                                 // 0x045C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePawn");
		return ptr;
	}


	void ReattachMeshWithoutBeingSeen();
	void ReattachMesh();
	void UpdateShadowSettings(bool bInWantShadow);
};


// Class GameFramework.GamePlayerController
// 0x0010 (0x05BC - 0x05AC)
class AGamePlayerController : public APlayerController
{
public:
	unsigned long                                      bWarnCrowdMembers : 1;                                    // 0x05AC(0x0004)
	unsigned long                                      bDebugCrowdAwareness : 1;                                 // 0x05AC(0x0004) (Edit)
	unsigned long                                      bIsWarmupPaused : 1;                                      // 0x05AC(0x0004) (Transient)
	float                                              AgentAwareRadius;                                         // 0x05B0(0x0004)
	struct FName                                       CurrentSoundMode;                                         // 0x05B4(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerController");
		return ptr;
	}


	void ClientColorFade(const struct FColor& FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime);
	void CallMemLeakCheck();
	void StopMemLeakChecking();
	void DoMemLeakChecking(float InTimeBetweenMemLeakChecks);
	void WarmupPause(bool bDesiredPauseState);
	bool CanUnpauseWarmup();
	void GetCurrentMovie(struct FString* MovieName);
	void ClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie);
	void ClientPlayMovie(const struct FString& MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, bool bRestrictPausing, bool bPlayOnceFromStream, bool bOnlyBackButtonSkipsMovie);
	void KeepPlayingLoadingMovie();
	void ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays);
	void SetSoundMode(const struct FName& InSoundModeName);
	void DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale);
	void NotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent);
	void NotifyCrowdAgentRefresh();
	void CrowdDebug(bool bEnabled);
	void CrowdToggle();
	void CrowdFocus();
	int GetUIPlayerIndex();
};


// Class GameFramework.MobileInputZone
// 0x01B4 (0x01F0 - 0x003C)
class UMobileInputZone : public UObject
{
public:
	TEnumAsByte<EZoneType>                             Type;                                                     // 0x003C(0x0001) (Edit, Config)
	unsigned char                                      TouchpadIndex;                                            // 0x003D(0x0001) (Edit)
	TEnumAsByte<EZoneState>                            State;                                                    // 0x003E(0x0001)
	TEnumAsByte<EZoneSlideType>                        SlideType;                                                // 0x003F(0x0001) (Edit, Config)
	struct FString                                     Caption;                                                  // 0x0040(0x000C) (Edit, Config, NeedCtorLink)
	struct FName                                       InputKey;                                                 // 0x004C(0x0008) (Edit, Config)
	struct FName                                       HorizontalInputKey;                                       // 0x0054(0x0008) (Edit, Config)
	struct FName                                       TapInputKey;                                              // 0x005C(0x0008) (Edit, Config)
	struct FName                                       DoubleTapInputKey;                                        // 0x0064(0x0008) (Edit, Config)
	float                                              VertMultiplier;                                           // 0x006C(0x0004) (Edit, Config)
	float                                              HorizMultiplier;                                          // 0x0070(0x0004) (Edit, Config)
	float                                              Acceleration;                                             // 0x0074(0x0004) (Edit, Config)
	float                                              Smoothing;                                                // 0x0078(0x0004) (Edit, Config)
	float                                              EscapeVelocityStrength;                                   // 0x007C(0x0004) (Edit, Config)
	unsigned long                                      bScalePawnMovement : 1;                                   // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bRelativeX : 1;                                           // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bRelativeY : 1;                                           // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bRelativeSizeX : 1;                                       // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bRelativeSizeY : 1;                                       // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bActiveSizeYFromX : 1;                                    // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bSizeYFromSizeX : 1;                                      // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bCenterX : 1;                                             // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bCenterY : 1;                                             // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bIsInvisible : 1;                                         // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bQuickDoubleTap : 1;                                      // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bCenterOnEvent : 1;                                       // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bFloatingTiltZone : 1;                                    // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bUseGentleTransitions : 1;                                // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bAllowFirstDeltaForTrackballZone : 1;                     // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bRenderGuides : 1;                                        // 0x0080(0x0004) (Edit, Config)
	unsigned long                                      bIsDoubleTapAndHold : 1;                                  // 0x0080(0x0004)
	float                                              X;                                                        // 0x0084(0x0004) (Edit, Config)
	float                                              Y;                                                        // 0x0088(0x0004) (Edit, Config)
	float                                              SizeX;                                                    // 0x008C(0x0004) (Edit, Config)
	float                                              SizeY;                                                    // 0x0090(0x0004) (Edit, Config)
	float                                              ActiveSizeX;                                              // 0x0094(0x0004) (Edit, Config)
	float                                              ActiveSizeY;                                              // 0x0098(0x0004) (Edit, Config)
	float                                              AuthoredGlobalScale;                                      // 0x009C(0x0004) (Edit, Config)
	float                                              Border;                                                   // 0x00A0(0x0004) (Edit, Config)
	float                                              ResetCenterAfterInactivityTime;                           // 0x00A4(0x0004) (Edit, Config)
	float                                              TapDistanceConstraint;                                    // 0x00A8(0x0004) (Edit, Config)
	float                                              ActivateTime;                                             // 0x00AC(0x0004) (Edit, Config)
	float                                              DeactivateTime;                                           // 0x00B0(0x0004) (Edit, Config)
	struct FColor                                      RenderColor;                                              // 0x00B4(0x0004) (Edit, Config)
	float                                              InactiveAlpha;                                            // 0x00B8(0x0004) (Edit, Config)
	float                                              CaptionXAdjustment;                                       // 0x00BC(0x0004) (Edit, Config)
	float                                              CaptionYAdjustment;                                       // 0x00C0(0x0004) (Edit, Config)
	class UTexture2D*                                  OverrideTexture1;                                         // 0x00C4(0x0004) (Edit)
	struct FString                                     OverrideTexture1Name;                                     // 0x00C8(0x000C) (Config, NeedCtorLink)
	struct FTextureUVs                                 OverrideUVs1;                                             // 0x00D4(0x0010) (Edit, Config)
	class UTexture2D*                                  OverrideTexture2;                                         // 0x00E4(0x0004) (Edit)
	struct FString                                     OverrideTexture2Name;                                     // 0x00E8(0x000C) (Config, NeedCtorLink)
	struct FTextureUVs                                 OverrideUVs2;                                             // 0x00F4(0x0010) (Edit, Config)
	struct FVector2D                                   InitialLocation;                                          // 0x0104(0x0008)
	struct FVector2D                                   CurrentLocation;                                          // 0x010C(0x0008)
	struct FVector2D                                   CurrentCenter;                                            // 0x0114(0x0008)
	struct FVector2D                                   InitialCenter;                                            // 0x011C(0x0008)
	struct FVector2D                                   PreviousLocations[0x6];                                   // 0x0124(0x0008)
	float                                              PreviousMoveDeltaTimes[0x6];                              // 0x0154(0x0004)
	int                                                PreviousLocationCount;                                    // 0x016C(0x0004)
	float                                              LastTouchTime;                                            // 0x0170(0x0004)
	float                                              TimeSinceLastTapRepeat;                                   // 0x0174(0x0004)
	float                                              AnimatingFadeOpacity;                                     // 0x0178(0x0004)
	class UMobilePlayerInput*                          InputOwner;                                               // 0x017C(0x0004)
	float                                              TransitionTime;                                           // 0x0180(0x0004)
	struct FVector2D                                   EscapeVelocity;                                           // 0x0184(0x0008)
	TArray<class USeqEvent_MobileZoneBase*>            MobileSeqEventHandlers;                                   // 0x018C(0x000C) (NeedCtorLink)
	struct FVector2D                                   LastAxisValues;                                           // 0x0198(0x0008)
	float                                              TotalActiveTime;                                          // 0x01A0(0x0004)
	float                                              LastWentActiveTime;                                       // 0x01A4(0x0004)
	struct FScriptDelegate                             __OnProcessInputDelegate__Delegate;                       // 0x01A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnTapDelegate__Delegate;                                // 0x01B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDoubleTapDelegate__Delegate;                          // 0x01C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnProcessSlide__Delegate;                               // 0x01CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPreDrawZone__Delegate;                                // 0x01D8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPostDrawZone__Delegate;                               // 0x01E4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileInputZone");
		return ptr;
	}


	void AddKismetEventHandler(class USeqEvent_MobileZoneBase* NewHandler);
	void OnPostDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas);
	bool OnPreDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas);
	bool OnProcessSlide(class UMobileInputZone* Zone, TEnumAsByte<EZoneTouchEvent> EventType, int SlideValue, const struct FVector2D& ViewportSize);
	bool OnDoubleTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<EZoneTouchEvent> EventType, const struct FVector2D& TouchLocation);
	bool OnTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<EZoneTouchEvent> EventType, const struct FVector2D& TouchLocation);
	bool OnProcessInputDelegate(class UMobileInputZone* Zone, float DeltaTime, int Handle, TEnumAsByte<EZoneTouchEvent> EventType, const struct FVector2D& TouchLocation);
	void DeactivateZone();
	void ActivateZone();
};


// Class GameFramework.MobileHUD
// 0x00EC (0x0548 - 0x045C)
class AMobileHUD : public AHUD
{
public:
	unsigned long                                      bShowGameHud : 1;                                         // 0x045C(0x0004) (Config)
	unsigned long                                      bShowMobileHud : 1;                                       // 0x045C(0x0004) (Config)
	unsigned long                                      bForceMobileHUD : 1;                                      // 0x045C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowMobileTilt : 1;                                      // 0x045C(0x0004) (Config)
	unsigned long                                      bDebugTouches : 1;                                        // 0x045C(0x0004) (Config)
	unsigned long                                      bDebugZones : 1;                                          // 0x045C(0x0004) (Config)
	unsigned long                                      bDebugZonePresses : 1;                                    // 0x045C(0x0004) (Config)
	unsigned long                                      bShowMotionDebug : 1;                                     // 0x045C(0x0004) (Config)
	class UTexture2D*                                  JoystickBackground;                                       // 0x0460(0x0004)
	struct FTextureUVs                                 JoystickBackgroundUVs;                                    // 0x0464(0x0010)
	class UTexture2D*                                  JoystickHat;                                              // 0x0474(0x0004)
	struct FTextureUVs                                 JoystickHatUVs;                                           // 0x0478(0x0010)
	class UTexture2D*                                  ButtonImages[0x2];                                        // 0x0488(0x0004)
	struct FTextureUVs                                 ButtonUVs[0x2];                                           // 0x0490(0x0010)
	class UFont*                                       ButtonFont;                                               // 0x04B0(0x0004)
	struct FColor                                      ButtonCaptionColor;                                       // 0x04B4(0x0004)
	class UTexture2D*                                  TrackballBackground;                                      // 0x04B8(0x0004)
	struct FTextureUVs                                 TrackballBackgroundUVs;                                   // 0x04BC(0x0010)
	class UTexture2D*                                  TrackballTouchIndicator;                                  // 0x04CC(0x0004)
	struct FTextureUVs                                 TrackballTouchIndicatorUVs;                               // 0x04D0(0x0010)
	class UTexture2D*                                  SliderImages[0x4];                                        // 0x04E0(0x0004)
	struct FTextureUVs                                 SliderUVs[0x4];                                           // 0x04F0(0x0010)
	float                                              MobileTiltX;                                              // 0x0530(0x0004) (Config)
	float                                              MobileTiltY;                                              // 0x0534(0x0004) (Config)
	float                                              MobileTiltSize;                                           // 0x0538(0x0004) (Config)
	TArray<class USeqEvent_HudRender*>                 KismetRenderEvents;                                       // 0x053C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileHUD");
		return ptr;
	}


	void RenderKismetHud();
	void AddKismetRenderEvent(class USeqEvent_HudRender* NewEvent);
	void RefreshKismetLinks();
	void DrawMobileZone_Slider(class UMobileInputZone* Zone);
	void DrawMobileTilt(class UMobilePlayerInput* MobileInput);
	void DrawMobileZone_Trackball(class UMobileInputZone* Zone);
	void DrawMobileZone_Joystick(class UMobileInputZone* Zone);
	void DrawMobileZone_Button(class UMobileInputZone* Zone);
	void DrawInputZoneOverlays();
	void RenderMobileMenu();
	bool ShowMobileHud();
	void DrawMobileDebugString(float XPos, float YPos, const struct FString& Str);
	void PostRender();
	void PostBeginPlay();
};


// Class GameFramework.MobileMenuObject
// 0x0048 (0x0084 - 0x003C)
class UMobileMenuObject : public UObject
{
public:
	unsigned long                                      bHasBeenInitialized : 1;                                  // 0x003C(0x0004) (Transient)
	unsigned long                                      bRelativeLeft : 1;                                        // 0x003C(0x0004)
	unsigned long                                      bRelativeTop : 1;                                         // 0x003C(0x0004)
	unsigned long                                      bRelativeWidth : 1;                                       // 0x003C(0x0004)
	unsigned long                                      bRelativeHeight : 1;                                      // 0x003C(0x0004)
	unsigned long                                      bApplyGlobalScaleLeft : 1;                                // 0x003C(0x0004)
	unsigned long                                      bApplyGlobalScaleTop : 1;                                 // 0x003C(0x0004)
	unsigned long                                      bApplyGlobalScaleWidth : 1;                               // 0x003C(0x0004)
	unsigned long                                      bApplyGlobalScaleHeight : 1;                              // 0x003C(0x0004)
	unsigned long                                      bHeightRelativeToWidth : 1;                               // 0x003C(0x0004)
	unsigned long                                      bXOffsetIsActual : 1;                                     // 0x003C(0x0004)
	unsigned long                                      bYOffsetIsActual : 1;                                     // 0x003C(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x003C(0x0004)
	unsigned long                                      bIsHidden : 1;                                            // 0x003C(0x0004)
	unsigned long                                      bIsTouched : 1;                                           // 0x003C(0x0004)
	unsigned long                                      bIsHighlighted : 1;                                       // 0x003C(0x0004)
	float                                              Left;                                                     // 0x0040(0x0004)
	float                                              Top;                                                      // 0x0044(0x0004)
	float                                              Width;                                                    // 0x0048(0x0004)
	float                                              Height;                                                   // 0x004C(0x0004)
	float                                              AuthoredGlobalScale;                                      // 0x0050(0x0004) (Edit)
	float                                              TopLeeway;                                                // 0x0054(0x0004)
	float                                              BottomLeeway;                                             // 0x0058(0x0004)
	float                                              LeftLeeway;                                               // 0x005C(0x0004)
	float                                              RightLeeway;                                              // 0x0060(0x0004)
	float                                              XOffset;                                                  // 0x0064(0x0004)
	float                                              YOffset;                                                  // 0x0068(0x0004)
	struct FString                                     Tag;                                                      // 0x006C(0x000C) (NeedCtorLink)
	class UMobilePlayerInput*                          InputOwner;                                               // 0x0078(0x0004)
	float                                              Opacity;                                                  // 0x007C(0x0004)
	class UMobileMenuScene*                            OwnerScene;                                               // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuObject");
		return ptr;
	}


	void RenderObject(class UCanvas* Canvas);
	void InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight);
};


// Class GameFramework.MobileMenuImage
// 0x002C (0x00B0 - 0x0084)
class UMobileMenuImage : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Image;                                                    // 0x0084(0x0004)
	TEnumAsByte<EMenuImageDrawStyle>                   ImageDrawStyle;                                           // 0x0088(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FUVCoords                                   ImageUVs;                                                 // 0x008C(0x0014)
	struct FLinearColor                                ImageColor;                                               // 0x00A0(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuImage");
		return ptr;
	}


	void RenderObject(class UCanvas* Canvas);
};


// Class GameFramework.MobileMenuScene
// 0x0048 (0x0084 - 0x003C)
class UMobileMenuScene : public UObject
{
public:
	struct FString                                     MenuName;                                                 // 0x003C(0x000C) (Edit, NeedCtorLink)
	TArray<class UMobileMenuObject*>                   MenuObjects;                                              // 0x0048(0x000C) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UFont*                                       SceneCaptionFont;                                         // 0x0054(0x0004) (Edit)
	class UMobilePlayerInput*                          InputOwner;                                               // 0x0058(0x0004) (Edit)
	unsigned long                                      bSceneDoesNotRequireInput : 1;                            // 0x005C(0x0004) (Edit)
	unsigned long                                      bRelativeLeft : 1;                                        // 0x005C(0x0004) (Edit)
	unsigned long                                      bRelativeTop : 1;                                         // 0x005C(0x0004) (Edit)
	unsigned long                                      bRelativeWidth : 1;                                       // 0x005C(0x0004) (Edit)
	unsigned long                                      bRelativeHeight : 1;                                      // 0x005C(0x0004) (Edit)
	unsigned long                                      bApplyGlobalScaleLeft : 1;                                // 0x005C(0x0004) (Edit)
	unsigned long                                      bApplyGlobalScaleTop : 1;                                 // 0x005C(0x0004) (Edit)
	unsigned long                                      bApplyGlobalScaleWidth : 1;                               // 0x005C(0x0004) (Edit)
	unsigned long                                      bApplyGlobalScaleHeight : 1;                              // 0x005C(0x0004) (Edit)
	unsigned char                                      TouchpadIndex;                                            // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              Left;                                                     // 0x0064(0x0004) (Edit)
	float                                              Top;                                                      // 0x0068(0x0004) (Edit)
	float                                              Width;                                                    // 0x006C(0x0004) (Edit)
	float                                              Height;                                                   // 0x0070(0x0004) (Edit)
	float                                              AuthoredGlobalScale;                                      // 0x0074(0x0004) (Edit)
	float                                              Opacity;                                                  // 0x0078(0x0004) (Edit)
	class USoundCue*                                   UITouchSound;                                             // 0x007C(0x0004) (Edit)
	class USoundCue*                                   UIUnTouchSound;                                           // 0x0080(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuScene");
		return ptr;
	}


	bool MobileMenuCommand(const struct FString& Command);
	class UMobileMenuObject* FindMenuObject(const struct FString& Tag);
	void CleanUpScene();
	void Closed();
	bool Closing();
	void MadeTopMenu();
	void Opened(const struct FString& Mode);
	bool OnSceneTouch(TEnumAsByte<EZoneTouchEvent> EventType, float TouchX, float TouchY);
	void OnTouch(class UMobileMenuObject* Sender, float TouchX, float TouchY, bool bCancel);
	void RenderScene(class UCanvas* Canvas, float RenderDelta);
	void InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight);
	float GetGlobalScaleY();
	float GetGlobalScaleX();
};


// Class GameFramework.MobilePlayerInput
// 0x0274 (0x03E4 - 0x0170)
class UMobilePlayerInput : public UPlayerInput
{
public:
	struct FTouchData                                  Touches[0x5];                                             // 0x0170(0x0048) (Edit, NeedCtorLink)
	class UMobileMenuObject*                           InteractiveObject;                                        // 0x02D8(0x0004)
	TArray<struct FMobileInputGroup>                   MobileInputGroups;                                        // 0x02DC(0x000C) (Edit, NeedCtorLink, EditInline)
	int                                                CurrentMobileGroup;                                       // 0x02E8(0x0004) (Edit)
	TArray<class UMobileInputZone*>                    MobileInputZones;                                         // 0x02EC(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<struct FMobileInputZoneClassMap>            MobileInputZoneClasses;                                   // 0x02F8(0x000C) (NeedCtorLink)
	unsigned long                                      bSupportsAccelerometer : 1;                               // 0x0304(0x0004) (Edit, Const)
	unsigned long                                      bAllowTouchesInCinematic : 1;                             // 0x0304(0x0004) (Edit)
	unsigned long                                      bDisableTouchInput : 1;                                   // 0x0304(0x0004) (Edit)
	unsigned long                                      bFakeMobileTouches : 1;                                   // 0x0304(0x0004) (Edit)
	unsigned long                                      bDeviceHasGyroscope : 1;                                  // 0x0304(0x0004) (Edit)
	unsigned long                                      bDeviceHasAccelerometer : 1;                              // 0x0304(0x0004) (Edit)
	float                                              MobilePitch;                                              // 0x0308(0x0004) (Edit)
	float                                              MobilePitchCenter;                                        // 0x030C(0x0004) (Edit)
	float                                              MobilePitchMultiplier;                                    // 0x0310(0x0004) (Edit)
	float                                              MobileYaw;                                                // 0x0314(0x0004) (Edit)
	float                                              MobileYawCenter;                                          // 0x0318(0x0004) (Edit)
	float                                              MobileYawMultiplier;                                      // 0x031C(0x0004) (Edit)
	float                                              MobilePitchDeadzoneSize;                                  // 0x0320(0x0004) (Edit, Config)
	float                                              MobileYawDeadzoneSize;                                    // 0x0324(0x0004) (Edit, Config)
	float                                              MobileDoubleTapTime;                                      // 0x0328(0x0004) (Edit, Config)
	float                                              MobileMinHoldForTap;                                      // 0x032C(0x0004) (Edit, Config)
	float                                              MobileTapRepeatTime;                                      // 0x0330(0x0004) (Edit, Config)
	float                                              ZoneTimeout;                                              // 0x0334(0x0004) (Edit, Config)
	TArray<class UMobileMenuScene*>                    MobileMenuStack;                                          // 0x0338(0x000C) (Edit, NeedCtorLink)
	struct FString                                     NativeDebugString;                                        // 0x0344(0x000C) (Edit, NeedCtorLink)
	float                                              MobileInactiveTime;                                       // 0x0350(0x0004) (Edit)
	struct FVector                                     DeviceMotionAttitude;                                     // 0x0354(0x000C) (Edit)
	struct FVector                                     DeviceMotionRotationRate;                                 // 0x0360(0x000C) (Edit)
	struct FVector                                     DeviceMotionGravity;                                      // 0x036C(0x000C) (Edit)
	struct FVector                                     DeviceMotionAcceleration;                                 // 0x0378(0x000C) (Edit)
	TArray<class USeqEvent_MobileBase*>                MobileSeqEventHandlers;                                   // 0x0384(0x000C) (Edit, NeedCtorLink)
	TArray<class USeqEvent_MobileRawInput*>            MobileRawInputSeqEventHandlers;                           // 0x0390(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     DeviceGyroRawData;                                        // 0x039C(0x000C) (Edit)
	struct FVector                                     DeviceAccelerometerRawData;                               // 0x03A8(0x000C) (Edit)
	struct FScriptDelegate                             __OnMobileMotion__Delegate;                               // 0x03B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnTouchNotHandledInMenu__Delegate;                      // 0x03C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPreviewTouch__Delegate;                               // 0x03CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnInputTouch__Delegate;                                 // 0x03D8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobilePlayerInput");
		return ptr;
	}


	void OpenMobileMenuMode(const struct FString& MenuClassName, const struct FString& Mode);
	void OpenMobileMenu(const struct FString& MenuClassName);
	void MobileMenuCommand(const struct FString& MenuCommand);
	void PreClientTravel(const struct FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);
	void RenderMenus(class UCanvas* Canvas, float RenderDelta);
	void CloseAllMenus();
	void CloseMenuScene(class UMobileMenuScene* SceneToClose);
	class UMobileMenuScene* OpenMenuScene(class UClass* SceneClass, const struct FString& Mode);
	void SetMobileInputConfig(const struct FString& GroupName);
	void ActivateInputGroup(const struct FString& GroupName);
	TArray<class UMobileInputZone*> GetCurrentZones();
	bool HasZones();
	class UMobileInputZone* FindorAddZone(const struct FString& ZoneName);
	class UMobileInputZone* FindZone(const struct FString& ZoneName);
	void AddKismetRawInputEventHandler(class USeqEvent_MobileRawInput* NewHandler);
	void AddKismetEventHandler(class USeqEvent_MobileBase* NewHandler);
	void RefreshKismetLinks();
	void InitializeInputZones();
	void InitTouchSystem();
	void ClientInitInputSystem();
	void InitInputSystem();
	void SendInputAxis(const struct FName& Key, float Delta, float DeltaTime);
	void SendInputKey(const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed);
	void NativeInitializeInputZones();
	void NativeInitializeInputSystem();
	void OnInputTouch(int Handle, TEnumAsByte<EZoneTouchEvent> Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int TouchpadIndex);
	bool OnPreviewTouch(float X, float Y, int TouchpadIndex);
	void OnTouchNotHandledInMenu();
	void OnMobileMotion(class UPlayerInput* PlayerInput, const struct FVector& CurrentAttitude, const struct FVector& CurrentRotationRate, const struct FVector& CurrentGravity, const struct FVector& CurrentAcceleration);
};


// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0014 (0x0064 - 0x0050)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                                 // 0x0050(0x0004) (Native)
	struct FVector                                     OutOfViewLocation;                                        // 0x0054(0x000C)
	unsigned long                                      bShowDebug : 1;                                           // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.NavMeshGoal_OutOfViewFrom");
		return ptr;
	}


	void Recycle();
	bool MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation);
	void RecycleNative();
};


// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x0028 (0x0078 - 0x0050)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                                 // 0x0050(0x000C) (Transient)
	struct FVector                                     Rotation;                                                 // 0x005C(0x000C) (Transient)
	float                                              DistanceToCheck;                                          // 0x0068(0x0004) (Transient)
	TArray<struct FVector>                             LocationsToCheck;                                         // 0x006C(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations");
		return ptr;
	}


	void Recycle();
	bool BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck);
};


// Class GameFramework.SeqAct_ControlGameMovie
// 0x0014 (0x010C - 0x00F8)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	struct FString                                     MovieName;                                                // 0x00F8(0x000C) (Edit, NeedCtorLink)
	int                                                StartOfRenderingMovieFrame;                               // 0x0104(0x0004) (Edit)
	int                                                EndOfRenderingMovieFrame;                                 // 0x0108(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_ControlGameMovie");
		return ptr;
	}

};


// Class GameFramework.SeqAct_Deproject
// 0x0028 (0x0110 - 0x00E8)
class USeqAct_Deproject : public USequenceAction
{
public:
	float                                              ScreenX;                                                  // 0x00E8(0x0004) (Edit)
	float                                              ScreenY;                                                  // 0x00EC(0x0004) (Edit)
	float                                              TraceDistance;                                            // 0x00F0(0x0004) (Edit)
	class UObject*                                     HitObject;                                                // 0x00F4(0x0004)
	struct FVector                                     HitLocation;                                              // 0x00F8(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0104(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_Deproject");
		return ptr;
	}

};


// Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle
// 0x001C (0x0104 - 0x00E8)
class USeqAct_GameCrowdPopulationManagerToggle : public USequenceAction
{
public:
	float                                              WarmupPct;                                                // 0x00E8(0x0004) (Edit)
	unsigned long                                      bKillAgentsInstantly : 1;                                 // 0x00EC(0x0004) (Edit)
	unsigned long                                      bClearOldArchetypes : 1;                                  // 0x00EC(0x0004) (Edit)
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                         // 0x00EC(0x0004) (Edit)
	unsigned long                                      bCastShadows : 1;                                         // 0x00EC(0x0004) (Edit)
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                           // 0x00F0(0x0004) (Edit)
	int                                                MaxAgents;                                                // 0x00F4(0x0004) (Edit)
	float                                              SpawnRate;                                                // 0x00F8(0x0004) (Edit)
	float                                              MaxSimulationDistance;                                    // 0x00FC(0x0004) (Edit)
	class UClass*                                      PopulationManagerClass;                                   // 0x0100(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle");
		return ptr;
	}


	int GetObjClassVersion();
	void FindPopMgrTarget();
};


// Class GameFramework.SeqAct_MobileAddInputZones
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_MobileAddInputZones : public USequenceAction
{
public:
	struct FName                                       ZoneName;                                                 // 0x00E8(0x0008) (Edit)
	class UMobileInputZone*                            NewZone;                                                  // 0x00F0(0x0004) (Edit, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_MobileAddInputZones");
		return ptr;
	}

};


// Class GameFramework.SeqAct_MobileClearInputZones
// 0x0000 (0x00E8 - 0x00E8)
class USeqAct_MobileClearInputZones : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_MobileClearInputZones");
		return ptr;
	}

};


// Class GameFramework.SeqAct_MobileRemoveInputZone
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_MobileRemoveInputZone : public USequenceAction
{
public:
	struct FString                                     ZoneName;                                                 // 0x00E8(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_MobileRemoveInputZone");
		return ptr;
	}

};


// Class GameFramework.SeqAct_MobileSaveLoadValue
// 0x0000 (0x00E8 - 0x00E8)
class USeqAct_MobileSaveLoadValue : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_MobileSaveLoadValue");
		return ptr;
	}


	int GetObjClassVersion();
};


// Class GameFramework.SeqAct_ModifyProperty
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	TArray<struct FPropertyInfo>                       Properties;                                               // 0x00E8(0x000C) (Edit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_ModifyProperty");
		return ptr;
	}

};


// Class GameFramework.SeqAct_PlayAgentAnimation
// 0x0024 (0x011C - 0x00F8)
class USeqAct_PlayAgentAnimation : public USeqAct_Latent
{
public:
	TArray<struct FName>                               AnimationList;                                            // 0x00F8(0x000C) (Edit, NeedCtorLink)
	float                                              BlendInTime;                                              // 0x0104(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0108(0x0004) (Edit)
	unsigned long                                      bUseRootMotion : 1;                                       // 0x010C(0x0004) (Edit)
	unsigned long                                      bFaceActionTargetFirst : 1;                               // 0x010C(0x0004) (Edit)
	unsigned long                                      bLooping : 1;                                             // 0x010C(0x0004) (Edit)
	unsigned long                                      bBlendBetweenAnims : 1;                                   // 0x010C(0x0004) (Edit)
	int                                                LoopIndex;                                                // 0x0110(0x0004) (Edit)
	float                                              LoopTime;                                                 // 0x0114(0x0004) (Edit)
	class AActor*                                      ActionTarget;                                             // 0x0118(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_PlayAgentAnimation");
		return ptr;
	}


	void SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent);
	int GetObjClassVersion();
};


// Class GameFramework.SeqEvent_CrowdAgentReachedDestination
// 0x0000 (0x0100 - 0x0100)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_CrowdAgentReachedDestination");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_HudRender
// 0x0014 (0x0114 - 0x0100)
class USeqEvent_HudRender : public USequenceEvent
{
public:
	TArray<class UObject*>                             Targets;                                                  // 0x0100(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bIsActive : 1;                                            // 0x010C(0x0004) (Edit)
	float                                              AuthoredGlobalScale;                                      // 0x0110(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_HudRender");
		return ptr;
	}


	void Render(class UCanvas* TargetCanvas, class AHUD* TargetHud);
	void RegisterEvent();
};


// Class GameFramework.SeqEvent_MobileBase
// 0x0000 (0x0100 - 0x0100)
class USeqEvent_MobileBase : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileBase");
		return ptr;
	}


	void AddToMobileInput(class UMobilePlayerInput* MPI);
	void RegisterEvent();
};


// Class GameFramework.SeqEvent_MobileMotion
// 0x0018 (0x0118 - 0x0100)
class USeqEvent_MobileMotion : public USeqEvent_MobileBase
{
public:
	float                                              Roll;                                                     // 0x0100(0x0004)
	float                                              Pitch;                                                    // 0x0104(0x0004)
	float                                              Yaw;                                                      // 0x0108(0x0004)
	float                                              DeltaRoll;                                                // 0x010C(0x0004)
	float                                              DeltaPitch;                                               // 0x0110(0x0004)
	float                                              DeltaYaw;                                                 // 0x0114(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileMotion");
		return ptr;
	}


	int GetObjClassVersion();
};


// Class GameFramework.SeqEvent_MobileZoneBase
// 0x000C (0x010C - 0x0100)
class USeqEvent_MobileZoneBase : public USeqEvent_MobileBase
{
public:
	struct FString                                     TargetZoneName;                                           // 0x0100(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileZoneBase");
		return ptr;
	}


	void AddToMobileInput(class UMobilePlayerInput* MPI);
};


// Class GameFramework.SeqEvent_MobileButton
// 0x0004 (0x0110 - 0x010C)
class USeqEvent_MobileButton : public USeqEvent_MobileZoneBase
{
public:
	unsigned long                                      bWasActiveLastFrame : 1;                                  // 0x010C(0x0004)
	unsigned long                                      bSendPressedOnlyOnTouchDown : 1;                          // 0x010C(0x0004) (Edit)
	unsigned long                                      bSendPressedOnlyOnTouchUp : 1;                            // 0x010C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileButton");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_MobileInput
// 0x0018 (0x0124 - 0x010C)
class USeqEvent_MobileInput : public USeqEvent_MobileZoneBase
{
public:
	float                                              XAxisValue;                                               // 0x010C(0x0004)
	float                                              YAxisValue;                                               // 0x0110(0x0004)
	float                                              CenterX;                                                  // 0x0114(0x0004)
	float                                              CenterY;                                                  // 0x0118(0x0004)
	float                                              CurrentX;                                                 // 0x011C(0x0004)
	float                                              CurrentY;                                                 // 0x0120(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileInput");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_MobileLook
// 0x0014 (0x0120 - 0x010C)
class USeqEvent_MobileLook : public USeqEvent_MobileZoneBase
{
public:
	float                                              Yaw;                                                      // 0x010C(0x0004)
	float                                              StickStrength;                                            // 0x0110(0x0004)
	struct FVector                                     RotationVector;                                           // 0x0114(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileLook");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_MobileRawInput
// 0x0014 (0x0114 - 0x0100)
class USeqEvent_MobileRawInput : public USequenceEvent
{
public:
	int                                                TouchIndex;                                               // 0x0100(0x0004) (Edit)
	int                                                TouchpadIndex;                                            // 0x0104(0x0004) (Edit)
	float                                              TouchLocationX;                                           // 0x0108(0x0004)
	float                                              TouchLocationY;                                           // 0x010C(0x0004)
	float                                              TimeStamp;                                                // 0x0110(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileRawInput");
		return ptr;
	}


	void RegisterEvent();
};


// Class GameFramework.SeqEvent_MobileObjectPicker
// 0x0030 (0x0144 - 0x0114)
class USeqEvent_MobileObjectPicker : public USeqEvent_MobileRawInput
{
public:
	float                                              TraceDistance;                                            // 0x0114(0x0004) (Edit)
	unsigned long                                      bCheckonTouch : 1;                                        // 0x0118(0x0004) (Edit)
	struct FVector                                     FinalTouchLocation;                                       // 0x011C(0x000C)
	struct FVector                                     FinalTouchNormal;                                         // 0x0128(0x000C)
	class UObject*                                     FinalTouchObject;                                         // 0x0134(0x0004)
	TArray<class UObject*>                             Targets;                                                  // 0x0138(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileObjectPicker");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_MobileSwipe
// 0x0020 (0x0134 - 0x0114)
class USeqEvent_MobileSwipe : public USeqEvent_MobileRawInput
{
public:
	float                                              Tolerance;                                                // 0x0114(0x0004) (Edit)
	float                                              MinDistance;                                              // 0x0118(0x0004) (Edit)
	struct FVector2D                                   InitialTouch;                                             // 0x011C(0x0008)
	TArray<class AActor*>                              TouchedActors;                                            // 0x0124(0x000C) (Edit, NeedCtorLink)
	float                                              TraceDistance;                                            // 0x0130(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_MobileSwipe");
		return ptr;
	}

};


// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x0138 - 0x00BC)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                                     // 0x00BC(0x0004) (Edit)
	unsigned long                                      bPlayRecoil : 1;                                          // 0x00BC(0x0004) (Edit, Transient)
	unsigned long                                      bOldPlayRecoil : 1;                                       // 0x00BC(0x0004) (Transient)
	unsigned long                                      bApplyControl : 1;                                        // 0x00BC(0x0004) (Transient)
	struct FRecoilDef                                  Recoil;                                                   // 0x00C0(0x0070) (Edit)
	struct FVector2D                                   Aim;                                                      // 0x0130(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSkelCtrl_Recoil");
		return ptr;
	}

};


// Class GameFramework.GameCameraBase
// 0x0008 (0x0044 - 0x003C)
class UGameCameraBase : public UObject
{
public:
	class AGamePlayerCamera*                           PlayerCamera;                                             // 0x003C(0x0004) (Transient)
	unsigned long                                      bResetCameraInterpolation : 1;                            // 0x0040(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCameraBase");
		return ptr;
	}


	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void Init();
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	void UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
	void ResetInterpolation();
	void OnBecomeInActive(class UGameCameraBase* NewCamera);
	void OnBecomeActive(class UGameCameraBase* OldCamera);
};


// Class GameFramework.GameThirdPersonCamera
// 0x0148 (0x018C - 0x0044)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	float                                              WorstLocBlockedPct;                                       // 0x0044(0x0004)
	float                                              WorstLocPenetrationExtentScale;                           // 0x0048(0x0004) (Edit)
	float                                              PenetrationBlendOutTime;                                  // 0x004C(0x0004) (Edit)
	float                                              PenetrationBlendInTime;                                   // 0x0050(0x0004) (Edit)
	float                                              PenetrationBlockedPct;                                    // 0x0054(0x0004)
	float                                              PenetrationExtentScale;                                   // 0x0058(0x0004) (Edit)
	struct FVector                                     LastActualOriginOffset;                                   // 0x005C(0x000C) (Transient)
	struct FVector                                     LastActualCameraOrigin;                                   // 0x0068(0x000C) (Transient)
	struct FRotator                                    LastActualCameraOriginRot;                                // 0x0074(0x000C) (Transient)
	float                                              OriginOffsetInterpSpeed;                                  // 0x0080(0x0004) (Edit)
	struct FVector                                     LastViewOffset;                                           // 0x0084(0x000C) (Transient)
	float                                              LastCamFOV;                                               // 0x0090(0x0004) (Transient)
	struct FVector                                     LastIdealCameraOrigin;                                    // 0x0094(0x000C) (Transient)
	struct FRotator                                    LastIdealCameraOriginRot;                                 // 0x00A0(0x000C) (Transient)
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                                    // 0x00AC(0x0004) (Edit, EditInline)
	class UClass*                                      ThirdPersonCamDefaultClass;                               // 0x00B0(0x0004) (Edit)
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                           // 0x00B4(0x0004) (Edit, Transient, EditInline)
	float                                              LastHeightAdjustment;                                     // 0x00B8(0x0004) (Transient)
	float                                              LastPitchAdjustment;                                      // 0x00BC(0x0004) (Transient)
	float                                              LastYawAdjustment;                                        // 0x00C0(0x0004) (Transient)
	float                                              LeftoverPitchAdjustment;                                  // 0x00C4(0x0004) (Transient)
	float                                              Focus_BackOffStrength;                                    // 0x00C8(0x0004) (Edit)
	float                                              Focus_StepHeightAdjustment;                               // 0x00CC(0x0004) (Edit)
	int                                                Focus_MaxTries;                                           // 0x00D0(0x0004) (Edit)
	float                                              Focus_FastAdjustKickInTime;                               // 0x00D4(0x0004) (Edit)
	float                                              LastFocusChangeTime;                                      // 0x00D8(0x0004) (Transient)
	struct FVector                                     ActualFocusPointWorldLoc;                                 // 0x00DC(0x000C) (Transient)
	struct FVector                                     LastFocusPointLoc;                                        // 0x00E8(0x000C) (Transient)
	struct FCamFocusPointParams                        FocusPoint;                                               // 0x00F4(0x0034) (Edit)
	unsigned long                                      bFocusPointSet : 1;                                       // 0x0128(0x0004)
	unsigned long                                      bFocusPointSuccessful : 1;                                // 0x0128(0x0004) (Transient)
	unsigned long                                      bDoingACameraTurn : 1;                                    // 0x0128(0x0004)
	unsigned long                                      bTurnAlignTargetWhenFinished : 1;                         // 0x0128(0x0004)
	unsigned long                                      bDrawDebug : 1;                                           // 0x0128(0x0004) (Edit)
	unsigned long                                      bDoingDirectLook : 1;                                     // 0x0128(0x0004) (Transient)
	unsigned long                                      bDebugChangedCameraMode : 1;                              // 0x0128(0x0004) (Edit)
	unsigned long                                      bDoSeamlessPivotTransition : 1;                           // 0x0128(0x0004) (Transient)
	float                                              TurnCurTime;                                              // 0x012C(0x0004)
	int                                                TurnStartAngle;                                           // 0x0130(0x0004)
	int                                                TurnEndAngle;                                             // 0x0134(0x0004)
	float                                              TurnTotalTime;                                            // 0x0138(0x0004)
	float                                              TurnDelay;                                                // 0x013C(0x0004)
	int                                                LastPostCamTurnYaw;                                       // 0x0140(0x0004) (Transient)
	int                                                DirectLookYaw;                                            // 0x0144(0x0004) (Transient)
	float                                              DirectLookInterpSpeed;                                    // 0x0148(0x0004) (Edit)
	float                                              WorstLocInterpSpeed;                                      // 0x014C(0x0004) (Edit)
	struct FVector                                     LastWorstLocationLocal;                                   // 0x0150(0x000C) (Transient)
	struct FVector                                     LastPreModifierCameraLoc;                                 // 0x015C(0x000C) (Transient)
	struct FRotator                                    LastPreModifierCameraRot;                                 // 0x0168(0x000C) (Transient)
	TArray<struct FPenetrationAvoidanceFeeler>         PenetrationAvoidanceFeelers;                              // 0x0174(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     LastOffsetAdjustment;                                     // 0x0180(0x000C) (Transient, ProtectedWrite)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCamera");
		return ptr;
	}


	void ResetInterpolation();
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void OnBecomeActive(class UGameCameraBase* OldCamera);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	void UpdateCameraMode(class APawn* P);
	class UGameThirdPersonCameraMode* FindBestCameraMode(class APawn* P);
	void AdjustFocusPointInterpolation(const struct FRotator& Delta);
	struct FVector GetActualFocusLocation();
	void UpdateFocusPoint(class APawn* P);
	void ClearFocusPoint(bool bLeaveCameraRotation);
	class AActor* GetFocusActor();
	void SetFocusOnActor(class AActor* FocusActor, const struct FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg);
	void SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg);
	void AdjustTurn(int AngleOffset);
	void EndTurn();
	void BeginTurn(int StartAngle, int EndAngle, float TimeSec, float DelaySec, bool bAlignTargetWhenFinished);
	void PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
	void UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
	float GetDesiredFOV(class APawn* ViewedPawn);
	void Init();
	void Reset();
	class UGameThirdPersonCameraMode* CreateCameraMode(class UClass* ModeClass);
};


// Class GameFramework.GamePlayerCamera
// 0x0074 (0x04B0 - 0x043C)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                           // 0x043C(0x0004) (Edit, Transient, EditInline)
	class UClass*                                      ThirdPersonCameraClass;                                   // 0x0440(0x0004) (Edit, Const)
	class UGameCameraBase*                             FixedCam;                                                 // 0x0444(0x0004) (Edit, Transient, EditInline)
	class UClass*                                      FixedCameraClass;                                         // 0x0448(0x0004) (Edit, Const)
	class UGameCameraBase*                             CurrentCamera;                                            // 0x044C(0x0004) (Edit, Transient, EditInline)
	unsigned long                                      bUseForcedCamFOV : 1;                                     // 0x0450(0x0004) (Transient)
	unsigned long                                      bInterpolateCamChanges : 1;                               // 0x0450(0x0004) (Transient)
	unsigned long                                      bResetInterp : 1;                                         // 0x0450(0x0004) (Transient)
	float                                              ForcedCamFOV;                                             // 0x0454(0x0004) (Transient)
	class AActor*                                      LastViewTarget;                                           // 0x0458(0x0004) (Transient)
	float                                              SplitScreenShakeScale;                                    // 0x045C(0x0004) (Edit, Const)
	class AActor*                                      LastTargetBase;                                           // 0x0460(0x0004) (Transient)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0464(0x000C) MISSED OFFSET
	struct FMatrix                                     LastTargetBaseTM;                                         // 0x0470(0x0040) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerCamera");
		return ptr;
	}


	float AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn);
	void ProcessViewRotation(float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	void ResetInterpolation();
	void SetColorScale(const struct FVector& NewColorScale);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void UpdateCameraLensEffects(struct FTViewTarget* OutVT);
	void UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT);
	bool ShouldConstrainAspectRatio();
	class UGameCameraBase* FindBestCameraType(class AActor* CameraTarget);
	void Reset();
	void PostBeginPlay();
	void CacheLastTargetBaseInfo(class AActor* TargetBase);
	class UGameCameraBase* CreateCamera(class UClass* CameraClass);
};


// Class GameFramework.GameThirdPersonCameraMode
// 0x01F1 (0x022D - 0x003C)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                           // 0x003C(0x0004) (Transient)
	float                                              FOVAngle;                                                 // 0x0040(0x0004) (Edit, Const, Config)
	float                                              BlendTime;                                                // 0x0044(0x0004) (Edit)
	unsigned long                                      bLockedToViewTarget : 1;                                  // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bDirectLook : 1;                                          // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bFollowTarget : 1;                                        // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bInterpLocation : 1;                                      // 0x0048(0x0004) (Edit)
	unsigned long                                      bUsePerAxisOriginLocInterp : 1;                           // 0x0048(0x0004) (Edit)
	unsigned long                                      bInterpRotation : 1;                                      // 0x0048(0x0004) (Edit)
	unsigned long                                      bRotInterpSpeedConstant : 1;                              // 0x0048(0x0004) (Edit)
	unsigned long                                      bDoPredictiveAvoidance : 1;                               // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bValidateWorstLoc : 1;                                    // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bSkipCameraCollision : 1;                                 // 0x0048(0x0004) (Edit)
	unsigned long                                      bSmoothViewOffsetPitchChanges : 1;                        // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bApplyDeltaViewOffset : 1;                                // 0x0048(0x0004) (Edit)
	unsigned long                                      bAdjustDOF : 1;                                           // 0x0048(0x0004) (Edit, Const)
	unsigned long                                      bDOFUpdated : 1;                                          // 0x0048(0x0004) (Transient)
	unsigned long                                      bNoFOVPostProcess : 1;                                    // 0x0048(0x0004)
	unsigned long                                      bInterpViewOffsetOnlyForCamTransition : 1;                // 0x0048(0x0004) (Edit)
	float                                              FollowingInterpSpeed_Pitch;                               // 0x004C(0x0004) (Edit, Const)
	float                                              FollowingInterpSpeed_Yaw;                                 // 0x0050(0x0004) (Edit, Const)
	float                                              FollowingInterpSpeed_Roll;                                // 0x0054(0x0004) (Edit, Const)
	float                                              FollowingCameraVelThreshold;                              // 0x0058(0x0004) (Edit, Const)
	float                                              OriginLocInterpSpeed;                                     // 0x005C(0x0004) (Edit)
	struct FVector                                     PerAxisOriginLocInterpSpeed;                              // 0x0060(0x000C) (Edit)
	float                                              OriginRotInterpSpeed;                                     // 0x006C(0x0004) (Edit)
	struct FVector                                     StrafeLeftAdjustment;                                     // 0x0070(0x000C) (Edit, Const)
	struct FVector                                     StrafeRightAdjustment;                                    // 0x007C(0x000C) (Edit, Const)
	float                                              StrafeOffsetScalingThreshold;                             // 0x0088(0x0004) (Edit, Const)
	float                                              StrafeOffsetInterpSpeedIn;                                // 0x008C(0x0004) (Edit, Const)
	float                                              StrafeOffsetInterpSpeedOut;                               // 0x0090(0x0004) (Edit, Const)
	struct FVector                                     LastStrafeOffset;                                         // 0x0094(0x000C) (Transient)
	struct FVector                                     RunFwdAdjustment;                                         // 0x00A0(0x000C) (Edit, Const)
	struct FVector                                     RunBackAdjustment;                                        // 0x00AC(0x000C) (Edit, Const)
	float                                              RunOffsetScalingThreshold;                                // 0x00B8(0x0004) (Edit, Const)
	float                                              RunOffsetInterpSpeedIn;                                   // 0x00BC(0x0004) (Edit, Const)
	float                                              RunOffsetInterpSpeedOut;                                  // 0x00C0(0x0004) (Edit, Const)
	struct FVector                                     LastRunOffset;                                            // 0x00C4(0x000C) (Transient)
	struct FVector                                     WorstLocOffset;                                           // 0x00D0(0x000C) (Edit)
	struct FVector                                     TargetRelativeCameraOriginOffset;                         // 0x00DC(0x000C) (Edit, Const)
	struct FViewOffsetData                             ViewOffset;                                               // 0x00E8(0x0024) (Edit, Const)
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[0x6];                      // 0x010C(0x0024) (Edit, Const)
	float                                              DOF_FalloffExponent;                                      // 0x01E4(0x0004) (Edit, Const)
	float                                              DOF_BlurKernelSize;                                       // 0x01E8(0x0004) (Edit, Const)
	float                                              DOF_FocusInnerRadius;                                     // 0x01EC(0x0004) (Edit, Const)
	float                                              DOF_MaxNearBlurAmount;                                    // 0x01F0(0x0004) (Edit, Const)
	float                                              DOF_MaxFarBlurAmount;                                     // 0x01F4(0x0004) (Edit, Const)
	float                                              LastDOFRadius;                                            // 0x01F8(0x0004) (Transient)
	float                                              LastDOFDistance;                                          // 0x01FC(0x0004) (Transient)
	float                                              DOFDistanceInterpSpeed;                                   // 0x0200(0x0004) (Edit, Const)
	struct FVector                                     DOFTraceExtent;                                           // 0x0204(0x000C) (Edit, Const)
	float                                              DOF_RadiusFalloff;                                        // 0x0210(0x0004) (Edit, Const)
	struct FVector2D                                   DOF_RadiusRange;                                          // 0x0214(0x0008) (Edit, Const)
	struct FVector2D                                   DOF_RadiusDistRange;                                      // 0x021C(0x0008) (Edit, Const)
	float                                              ViewOffsetInterp;                                         // 0x0224(0x0004)
	float                                              OffsetAdjustmentInterpSpeed;                              // 0x0228(0x0004) (Edit)
	TEnumAsByte<ECameraViewportTypes>                  CurrentViewportType;                                      // 0x022C(0x0001) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode");
		return ptr;
	}


	void SetViewOffset(struct FViewOffsetData* NewViewOffset);
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void UpdatePostProcess(float DeltaTime, struct FTViewTarget* VT);
	struct FVector DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace);
	struct FVector GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	bool SetFocusPoint(class APawn* ViewedPawn);
	struct FVector GetCameraWorstCaseLoc(class APawn* TargetPawn, const struct FTViewTarget& CurrentViewTarget);
	float GetDesiredFOV(class APawn* ViewedPawn);
	struct FVector AdjustViewOffset(class APawn* P, const struct FVector& Offset);
	void OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode);
	void OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode);
	void Init();
};


// Class GameFramework.GameThirdPersonCameraMode_Default
// 0x000F (0x023C - 0x022D)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	float                                              WorstLocAimingZOffset;                                    // 0x0230(0x0004) (Edit, Const)
	unsigned long                                      bTemporaryOriginRotInterp : 1;                            // 0x0234(0x0004) (Transient)
	float                                              TemporaryOriginRotInterpSpeed;                            // 0x0238(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode_Default");
		return ptr;
	}

};


// Class GameFramework.GameSpecialMove
// 0x0040 (0x007C - 0x003C)
class UGameSpecialMove : public UObject
{
public:
	class AGamePawn*                                   PawnOwner;                                                // 0x003C(0x0004)
	struct FName                                       Handle;                                                   // 0x0040(0x0008)
	float                                              LastCanDoSpecialMoveTime;                                 // 0x0048(0x0004) (Transient)
	unsigned long                                      bLastCanDoSpecialMove : 1;                                // 0x004C(0x0004)
	unsigned long                                      bReachPreciseDestination : 1;                             // 0x004C(0x0004) (Const)
	unsigned long                                      bReachedPreciseDestination : 1;                           // 0x004C(0x0004) (Const)
	unsigned long                                      bReachPreciseRotation : 1;                                // 0x004C(0x0004) (Const)
	unsigned long                                      bReachedPreciseRotation : 1;                              // 0x004C(0x0004) (Const)
	unsigned long                                      bForcePrecisePosition : 1;                                // 0x004C(0x0004)
	struct FVector                                     PreciseDestination;                                       // 0x0050(0x000C) (Const)
	class AActor*                                      PreciseDestBase;                                          // 0x005C(0x0004) (Const)
	struct FVector                                     PreciseDestRelOffset;                                     // 0x0060(0x000C) (Const)
	float                                              PreciseRotationInterpolationTime;                         // 0x006C(0x0004) (Const)
	struct FRotator                                    PreciseRotation;                                          // 0x0070(0x000C) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSpecialMove");
		return ptr;
	}


	struct FVector RelativeToWorldOffset(const struct FRotator& InRotation, const struct FVector& RelativeSpaceOffset);
	struct FVector WorldToRelativeOffset(const struct FRotator& InRotation, const struct FVector& WorldSpaceOffset);
	void ForcePawnRotation(class APawn* P, const struct FRotator& NewRotation);
	bool MessageEvent(const struct FName& EventName, class UObject* Sender);
	void ResetFacePreciseRotation();
	void ReachedPrecisePosition();
	void SetFacePreciseRotation(const struct FRotator& RotationToFace, float InterpolationTime);
	void SetReachPreciseDestination(const struct FVector& DestinationToReach, bool bCancel);
	bool ShouldReplicate();
	void SpecialMoveFlagsUpdated();
	void Tick(float DeltaTime);
	void SpecialMoveEnded(const struct FName& PrevMove, const struct FName& NextMove);
	void SpecialMoveStarted(bool bForced, const struct FName& PrevMove);
	bool InternalCanDoSpecialMove();
	bool CanDoSpecialMove(bool bForceCheck);
	bool CanOverrideSpecialMove(const struct FName& InMove);
	bool CanOverrideMoveWith(const struct FName& NewMove);
	bool CanChainMove(const struct FName& NextMove);
	void ExtractSpecialMoveFlags(int Flags);
	void InitSpecialMoveFlags(int* out_Flags);
	void InitSpecialMove(class AGamePawn* inPawn, const struct FName& InHandle);
};


// Class GameFramework.GameStateObject
// 0x0028 (0x0080 - 0x0058)
class UGameStateObject : public UGameplayEventsHandler
{
public:
	struct FArray_Mirror                               TeamStates;                                               // 0x0058(0x000C) (Const, Native)
	struct FArray_Mirror                               PlayerStates;                                             // 0x0064(0x000C) (Const, Native)
	TEnumAsByte<EGameSessionType>                      SessionType;                                              // 0x0070(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	unsigned long                                      bIsMatchStarted : 1;                                      // 0x0074(0x0004)
	unsigned long                                      bIsRoundStarted : 1;                                      // 0x0074(0x0004)
	int                                                RoundNumber;                                              // 0x0078(0x0004)
	int                                                MaxRoundNumber;                                           // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameStateObject");
		return ptr;
	}


	void Reset();
	void PreProcessStream();
};


// Class GameFramework.GameStatsAggregator
// 0x01CC (0x0224 - 0x0058)
class UGameStatsAggregator : public UGameplayEventsHandler
{
public:
	class UGameStateObject*                            GameState;                                                // 0x0058(0x0004)
	TArray<struct FAggregateEventMapping>              AggregatesList;                                           // 0x005C(0x000C) (NeedCtorLink)
	struct FMap_Mirror                                 AggregateEventsMapping;                                   // 0x0068(0x003C) (Const, Native, Transient)
	TArray<struct FGameplayEventMetaData>              AggregateEvents;                                          // 0x00A4(0x000C) (NeedCtorLink)
	struct FGameEvents                                 AllGameEvents;                                            // 0x00B0(0x003C)
	TArray<struct FTeamEvents>                         AllTeamEvents;                                            // 0x00EC(0x000C) (NeedCtorLink)
	TArray<struct FPlayerEvents>                       AllPlayerEvents;                                          // 0x00F8(0x000C) (NeedCtorLink)
	struct FWeaponEvents                               AllWeaponEvents;                                          // 0x0104(0x0048) (NeedCtorLink)
	struct FProjectileEvents                           AllProjectileEvents;                                      // 0x014C(0x0048) (NeedCtorLink)
	struct FPawnEvents                                 AllPawnEvents;                                            // 0x0194(0x0048) (NeedCtorLink)
	struct FDamageEvents                               AllDamageEvents;                                          // 0x01DC(0x0048) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameStatsAggregator");
		return ptr;
	}


	bool GetAggregateMappingIDs(int EventID, int* AggregateID, int* TargetAggregateID);
	void PostProcessStream();
	void PreProcessStream();
};


// Class GameFramework.GameCrowdSpawnerInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdSpawnerInterface");
		return ptr;
	}


	float GetMaxSpawnDist();
	bool AddToAgentPool(class AGameCrowdAgent* Agent);
	void AgentDestroyed(class AGameCrowdAgent* Agent);
};


// Class GameFramework.GameCrowdSpawnInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdSpawnInterface");
		return ptr;
	}


	void GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot);
};


// Class GameFramework.DynamicGameCrowdDestination
// 0x0000 (0x0260 - 0x0260)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DynamicGameCrowdDestination");
		return ptr;
	}

};


// Class GameFramework.GameAICmd_Hover_MoveToGoal
// 0x0034 (0x008C - 0x0058)
class UGameAICmd_Hover_MoveToGoal : public UGameAICommand
{
public:
	class AActor*                                      Path;                                                     // 0x0058(0x0004) (Transient)
	class AActor*                                      Find;                                                     // 0x005C(0x0004) (Transient)
	class AActor*                                      Goal;                                                     // 0x0060(0x0004) (Transient)
	float                                              Radius;                                                   // 0x0064(0x0004)
	unsigned long                                      bWasFiring : 1;                                           // 0x0068(0x0004) (Transient)
	float                                              DesiredHoverHeight;                                       // 0x006C(0x0004)
	float                                              CurrentHoverHeight;                                       // 0x0070(0x0004) (Transient)
	float                                              SubGoalReachDist;                                         // 0x0074(0x0004)
	float                                              GoalDistance;                                             // 0x0078(0x0004)
	struct FVector                                     MoveVectDest;                                             // 0x007C(0x000C) (Transient)
	class UReachSpec*                                  CurrentSpec;                                              // 0x0088(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICmd_Hover_MoveToGoal");
		return ptr;
	}


	bool IsEnemyBasedOnInterpActor(class APawn* InEnemy);
	bool HandlePathObstruction(class AActor* BlockedBy);
	void Pushed();
	bool MoveToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight);
};


// Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh
// 0x008C (0x00E4 - 0x0058)
class UGameAICmd_Hover_MoveToGoal_Mesh : public UGameAICommand
{
public:
	class AActor*                                      Find;                                                     // 0x0058(0x0004) (Transient)
	float                                              Radius;                                                   // 0x005C(0x0004)
	unsigned long                                      bWasFiring : 1;                                           // 0x0060(0x0004) (Transient)
	unsigned long                                      bFinalApproach : 1;                                       // 0x0060(0x0004)
	float                                              DesiredHoverHeight;                                       // 0x0064(0x0004)
	float                                              CurrentHoverHeight;                                       // 0x0068(0x0004) (Transient)
	float                                              SubGoalReachDist;                                         // 0x006C(0x0004)
	float                                              GoalDistance;                                             // 0x0070(0x0004) (Transient)
	struct FVector                                     IntermediatePoint;                                        // 0x0074(0x000C) (Transient)
	struct FVector                                     LastMovePoint;                                            // 0x0080(0x000C) (Transient)
	int                                                NumMovePointFails;                                        // 0x008C(0x0004) (Transient)
	int                                                MaxMovePointFails;                                        // 0x0090(0x0004)
	struct FVector                                     FallbackDest;                                             // 0x0094(0x000C) (Transient)
	class AActor*                                      MoveToActor;                                              // 0x00A0(0x0004) (Transient)
	struct FBasedPosition                              LastMoveTargetPathLocation;                               // 0x00A4(0x0034)
	struct FVector                                     InitialFinalDestination;                                  // 0x00D8(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICmd_Hover_MoveToGoal_Mesh");
		return ptr;
	}


	void DrawDebug(class AHUD* H, const struct FName& Category);
	bool IsEnemyBasedOnInterpActor(class APawn* InEnemy);
	bool HasReachedGoal();
	void ReEvaluatePath();
	bool HandlePathObstruction(class AActor* BlockedBy);
	void Popped();
	void Pushed();
	bool HoverToPoint(class AGameAIController* AI, const struct FVector& InPoint, float InGoalDistance, float InHoverHeight);
	bool HoverToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight);
};


// Class GameFramework.GameCrowd_ListOfAgents
// 0x000C (0x0048 - 0x003C)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	TArray<struct FAgentArchetypeInfo>                 ListOfAgents;                                             // 0x003C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowd_ListOfAgents");
		return ptr;
	}

};


// Class GameFramework.GameCrowdInteractionDestination
// 0x0000 (0x0260 - 0x0260)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInteractionDestination");
		return ptr;
	}

};


// Class GameFramework.GameExplosionContent
// 0x0048 (0x0084 - 0x003C)
class UGameExplosionContent : public UObject
{
public:
	unsigned long                                      bAutoControllerVibration : 1;                             // 0x003C(0x0004) (Edit, Const)
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;                   // 0x003C(0x0004) (Edit, Const)
	class USoundCue*                                   ExplosionSound;                                           // 0x0040(0x0004) (Edit, Const)
	class UCameraShake*                                CamShake;                                                 // 0x0044(0x0004) (Edit, Const)
	class UCameraShake*                                CamShake_Left;                                            // 0x0048(0x0004) (Edit, Const)
	class UCameraShake*                                CamShake_Right;                                           // 0x004C(0x0004) (Edit, Const)
	class UCameraShake*                                CamShake_Rear;                                            // 0x0050(0x0004) (Edit, Const)
	float                                              CamShakeInnerRadius;                                      // 0x0054(0x0004) (Edit, Const)
	float                                              CamShakeOuterRadius;                                      // 0x0058(0x0004) (Edit, Const)
	float                                              CamShakeFalloff;                                          // 0x005C(0x0004) (Edit, Const)
	class UClass*                                      CameraLensEffect;                                         // 0x0060(0x0004) (Edit, Const)
	float                                              CameraLensEffectRadius;                                   // 0x0064(0x0004) (Edit, Const)
	class UPointLightComponent*                        ExploLight;                                               // 0x0068(0x0004) (Edit, Const, ExportObject, Component, EditInline)
	float                                              ExploLightFadeOutTime;                                    // 0x006C(0x0004) (Edit, Const)
	class URadialBlurComponent*                        ExploRadialBlur;                                          // 0x0070(0x0004) (Edit, Const, ExportObject, Component, EditInline)
	float                                              ExploRadialBlurFadeOutTime;                               // 0x0074(0x0004) (Edit, Const)
	float                                              ExploRadialBlurMaxBlur;                                   // 0x0078(0x0004) (Edit, Const)
	class UParticleSystem*                             ParticleEmitterTemplate;                                  // 0x007C(0x0004) (Edit, Const)
	class AFogVolumeSphericalDensityInfo*              FogVolumeArchetype;                                       // 0x0080(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosionContent");
		return ptr;
	}

};


// Class GameFramework.GameFixedCamera
// 0x0004 (0x0048 - 0x0044)
class UGameFixedCamera : public UGameCameraBase
{
public:
	float                                              DefaultFOV;                                               // 0x0044(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameFixedCamera");
		return ptr;
	}


	void OnBecomeActive(class UGameCameraBase* OldCamera);
	void UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT);
};


// Class GameFramework.GameKActorSpawnableEffect
// 0x0000 (0x02C8 - 0x02C8)
class AGameKActorSpawnableEffect : public AKActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameKActorSpawnableEffect");
		return ptr;
	}


	void StartScalingDown();
	void FellOutOfWorld(class UClass* dmgType);
	void PostBeginPlay();
};


// Class GameFramework.GameWaveForms
// 0x0010 (0x004C - 0x003C)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                                   // 0x003C(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                                    // 0x0040(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                                      // 0x0044(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                                       // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameWaveForms");
		return ptr;
	}

};


// Class GameFramework.MobileMenuButton
// 0x005C (0x00E0 - 0x0084)
class UMobileMenuButton : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Images[0x2];                                              // 0x0084(0x0004)
	struct FUVCoords                                   ImagesUVs[0x2];                                           // 0x008C(0x0014)
	struct FLinearColor                                ImageColor;                                               // 0x00B4(0x0010)
	struct FString                                     Caption;                                                  // 0x00C4(0x000C) (NeedCtorLink)
	struct FLinearColor                                CaptionColor;                                             // 0x00D0(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuButton");
		return ptr;
	}


	void RenderCaption(class UCanvas* Canvas);
	void RenderObject(class UCanvas* Canvas);
	void InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight);
};


// Class GameFramework.MobileMenuGame
// 0x0004 (0x0374 - 0x0370)
class AMobileMenuGame : public AGameInfo
{
public:
	class UClass*                                      InitialSceneToDisplayClass;                               // 0x0370(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuGame");
		return ptr;
	}


	void RestartPlayer(class AController* NewPlayer);
	void StartMatch();
	void PostLogin(class APlayerController* NewPlayer);
};


// Class GameFramework.MobileMenuPlayerController
// 0x0000 (0x05BC - 0x05BC)
class AMobileMenuPlayerController : public AGamePlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuPlayerController");
		return ptr;
	}

};


// Class GameFramework.MobileMenuLabel
// 0x0024 (0x00A8 - 0x0084)
class UMobileMenuLabel : public UMobileMenuObject
{
public:
	struct FString                                     Caption;                                                  // 0x0084(0x000C) (NeedCtorLink)
	class UFont*                                       TextFont;                                                 // 0x0090(0x0004)
	struct FColor                                      TextColor;                                                // 0x0094(0x0004)
	struct FColor                                      TouchedColor;                                             // 0x0098(0x0004)
	float                                              TextXScale;                                               // 0x009C(0x0004)
	float                                              TextYScale;                                               // 0x00A0(0x0004)
	unsigned long                                      bAutoSize : 1;                                            // 0x00A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileMenuLabel");
		return ptr;
	}


	void RenderObject(class UCanvas* Canvas);
};


// Class GameFramework.PlayerCollectorGame
// 0x0010 (0x0380 - 0x0370)
class APlayerCollectorGame : public AGameInfo
{
public:
	int                                                NumberOfClientsToWaitFor;                                 // 0x0370(0x0004)
	struct FString                                     URLToLoad;                                                // 0x0374(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.PlayerCollectorGame");
		return ptr;
	}


	void GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList);
	class APlayerController* Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage);
};


// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0004 (0x0040 - 0x003C)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                            // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.PMESTG_LeaveADecalBase");
		return ptr;
	}

};


// Class GameFramework.SeqEvent_HudRenderImage
// 0x0038 (0x014C - 0x0114)
class USeqEvent_HudRenderImage : public USeqEvent_HudRender
{
public:
	struct FLinearColor                                DisplayColor;                                             // 0x0114(0x0010) (Edit)
	struct FVector                                     DisplayLocation;                                          // 0x0124(0x000C) (Edit)
	class UTexture2D*                                  DisplayTexture;                                           // 0x0130(0x0004) (Edit)
	float                                              XL;                                                       // 0x0134(0x0004) (Edit)
	float                                              YL;                                                       // 0x0138(0x0004) (Edit)
	float                                              U;                                                        // 0x013C(0x0004) (Edit)
	float                                              V;                                                        // 0x0140(0x0004) (Edit)
	float                                              UL;                                                       // 0x0144(0x0004) (Edit)
	float                                              VL;                                                       // 0x0148(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_HudRenderImage");
		return ptr;
	}


	void Render(class UCanvas* TargetCanvas, class AHUD* TargetHud);
};


// Class GameFramework.SeqEvent_HudRenderText
// 0x0021 (0x0135 - 0x0114)
class USeqEvent_HudRenderText : public USeqEvent_HudRender
{
public:
	class UFont*                                       DisplayFont;                                              // 0x0114(0x0004) (Edit)
	struct FColor                                      DisplayColor;                                             // 0x0118(0x0004) (Edit)
	struct FVector                                     DisplayLocation;                                          // 0x011C(0x000C) (Edit)
	struct FString                                     DisplayText;                                              // 0x0128(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<ETextDrawMethod>                       TextDrawMethod;                                           // 0x0134(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_HudRenderText");
		return ptr;
	}


	int GetObjClassVersion();
	void Render(class UCanvas* TargetCanvas, class AHUD* TargetHud);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
