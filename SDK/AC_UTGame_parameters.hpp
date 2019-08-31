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

// Function UTGame.UTPlayerController.ReadLeaderboardStatsComplete
struct AUTPlayerController_ReadLeaderboardStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.UTPlayerController.ClientWriteLeaderboardStats
struct AUTPlayerController_ClientWriteLeaderboardStats_Params
{
	class UClass*                                      OnlineStatsWriteClass;                                    // (Parm)
	bool                                               bIsIncomplete;                                            // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.ClientUpdateSpiceOfLife
struct AUTPlayerController_ClientUpdateSpiceOfLife_Params
{
	int                                                MutatorBitMask;                                           // (Parm)
};

// Function UTGame.UTPlayerController.ClientUpdateAchievement
struct AUTPlayerController_ClientUpdateAchievement_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.InitAchievementHandler
struct AUTPlayerController_InitAchievementHandler_Params
{
};

// Function UTGame.UTPlayerController.Disconnect
struct AUTPlayerController_Disconnect_Params
{
};

// Function UTGame.UTPlayerController.ServerForceTextUnMute
struct AUTPlayerController_ServerForceTextUnMute_Params
{
	struct FString                                     TargetPlayer;                                             // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.AdminForceTextUnMute
struct AUTPlayerController_AdminForceTextUnMute_Params
{
	struct FString                                     TargetPlayer;                                             // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerForceTextMute
struct AUTPlayerController_ServerForceTextMute_Params
{
	struct FString                                     TargetPlayer;                                             // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.AdminForceTextMute
struct AUTPlayerController_AdminForceTextMute_Params
{
	struct FString                                     TargetPlayer;                                             // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerForceVoiceUnMute
struct AUTPlayerController_ServerForceVoiceUnMute_Params
{
	struct FString                                     TargetPlayer;                                             // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.AdminForceVoiceUnMute
struct AUTPlayerController_AdminForceVoiceUnMute_Params
{
	struct FString                                     TargetPlayer;                                             // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerForceVoiceMute
struct AUTPlayerController_ServerForceVoiceMute_Params
{
	struct FString                                     TargetPlayer;                                             // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.AdminForceVoiceMute
struct AUTPlayerController_AdminForceVoiceMute_Params
{
	struct FString                                     TargetPlayer;                                             // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerChangeMap
struct AUTPlayerController_ServerChangeMap_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.AdminChangeMap
struct AUTPlayerController_AdminChangeMap_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerRestartMap
struct AUTPlayerController_ServerRestartMap_Params
{
};

// Function UTGame.UTPlayerController.AdminRestartMap
struct AUTPlayerController_AdminRestartMap_Params
{
};

// Function UTGame.UTPlayerController.AdminPlayerList
struct AUTPlayerController_AdminPlayerList_Params
{
};

// Function UTGame.UTPlayerController.AdminKick
struct AUTPlayerController_AdminKick_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.AdminKickBan
struct AUTPlayerController_AdminKickBan_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerAdmin
struct AUTPlayerController_ServerAdmin_Params
{
	struct FString                                     CommandLine;                                              // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.Admin
struct AUTPlayerController_Admin_Params
{
	struct FString                                     CommandLine;                                              // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerAdminLogOut
struct AUTPlayerController_ServerAdminLogOut_Params
{
};

// Function UTGame.UTPlayerController.AdminLogout
struct AUTPlayerController_AdminLogout_Params
{
};

// Function UTGame.UTPlayerController.ServerAdminLogin
struct AUTPlayerController_ServerAdminLogin_Params
{
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.AdminLogin
struct AUTPlayerController_AdminLogin_Params
{
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.AdminCmdOk
struct AUTPlayerController_AdminCmdOk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.ServerTeamSay
struct AUTPlayerController_ServerTeamSay_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerSay
struct AUTPlayerController_ServerSay_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerKickBan
struct AUTPlayerController_ServerKickBan_Params
{
	struct FString                                     PlayerToKick;                                             // (Parm, NeedCtorLink)
	bool                                               bBan;                                                     // (Parm)
};

// Function UTGame.UTPlayerController.GetSeamlessTravelActorList
struct AUTPlayerController_GetSeamlessTravelActorList_Params
{
	bool                                               bToEntry;                                                 // (Parm)
	TArray<class AActor*>                              ActorList;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerChangeTeam
struct AUTPlayerController_ServerChangeTeam_Params
{
	int                                                N;                                                        // (Parm)
};

// Function UTGame.UTPlayerController.BullseyeMessage
struct AUTPlayerController_BullseyeMessage_Params
{
};

// Function UTGame.UTPlayerController.ServerSetNetSpeed
struct AUTPlayerController_ServerSetNetSpeed_Params
{
	int                                                NewSpeed;                                                 // (Parm)
};

// Function UTGame.UTPlayerController.ReceiveBotVoiceMessage
struct AUTPlayerController_ReceiveBotVoiceMessage_Params
{
	class AUTPlayerReplicationInfo*                    SenderPRI;                                                // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     LocationObject;                                           // (Parm)
};

// Function UTGame.UTPlayerController.SendMessage
struct AUTPlayerController_SendMessage_Params
{
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	float                                              Wait;                                                     // (Parm)
	class UClass*                                      DamageType;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.CanRestartPlayer
struct AUTPlayerController_CanRestartPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.CharacterProcessingComplete
struct AUTPlayerController_CharacterProcessingComplete_Params
{
};

// Function UTGame.UTPlayerController.GetPlayerLoc
struct AUTPlayerController_GetPlayerLoc_Params
{
};

// Function UTGame.UTPlayerController.UpdateRotation
struct AUTPlayerController_UpdateRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTPlayerController.ClientEndZoom
struct AUTPlayerController_ClientEndZoom_Params
{
};

// Function UTGame.UTPlayerController.EndZoomNonlinear
struct AUTPlayerController_EndZoomNonlinear_Params
{
	float                                              ZoomInterpSpeed;                                          // (Parm)
};

// Function UTGame.UTPlayerController.EndZoom
struct AUTPlayerController_EndZoom_Params
{
};

// Function UTGame.UTPlayerController.StopZoom
struct AUTPlayerController_StopZoom_Params
{
};

// Function UTGame.UTPlayerController.StartZoomNonlinear
struct AUTPlayerController_StartZoomNonlinear_Params
{
	float                                              NewDesiredFOV;                                            // (Parm)
	float                                              NewZoomInterpSpeed;                                       // (Parm)
};

// Function UTGame.UTPlayerController.StartZoom
struct AUTPlayerController_StartZoom_Params
{
	float                                              NewDesiredFOV;                                            // (Parm)
	float                                              NewZoomRate;                                              // (Parm)
};

// Function UTGame.UTPlayerController.AdjustFOV
struct AUTPlayerController_AdjustFOV_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTPlayerController.OnUpdatePropertyFOVAngle
struct AUTPlayerController_OnUpdatePropertyFOVAngle_Params
{
};

// Function UTGame.UTPlayerController.FlushDebug
struct AUTPlayerController_FlushDebug_Params
{
};

// Function UTGame.UTPlayerController.ClientBecameActivePlayer
struct AUTPlayerController_ClientBecameActivePlayer_Params
{
};

// Function UTGame.UTPlayerController.ServerBecomeActivePlayer
struct AUTPlayerController_ServerBecomeActivePlayer_Params
{
};

// Function UTGame.UTPlayerController.BecomeActive
struct AUTPlayerController_BecomeActive_Params
{
};

// Function UTGame.UTPlayerController.ServerShowPathToBase
struct AUTPlayerController_ServerShowPathToBase_Params
{
	unsigned char                                      TeamNum;                                                  // (Parm)
};

// Function UTGame.UTPlayerController.BasePath
struct AUTPlayerController_BasePath_Params
{
	unsigned char                                      Num;                                                      // (Parm)
};

// Function UTGame.UTPlayerController.ClientPawnDied
struct AUTPlayerController_ClientPawnDied_Params
{
};

// Function UTGame.UTPlayerController.PawnDied
struct AUTPlayerController_PawnDied_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPlayerController.CheckBulletWhip
struct AUTPlayerController_CheckBulletWhip_Params
{
	class USoundCue*                                   BulletWhip;                                               // (Parm)
	struct FVector                                     FireLocation;                                             // (Parm)
	struct FVector                                     FireDir;                                                  // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTPlayerController.ClientRoundEnded
struct AUTPlayerController_ClientRoundEnded_Params
{
	class AActor*                                      EndRoundFocus;                                            // (Parm)
};

// Function UTGame.UTPlayerController.RoundHasEnded
struct AUTPlayerController_RoundHasEnded_Params
{
	class AActor*                                      EndRoundFocus;                                            // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.ClientGameEnded
struct AUTPlayerController_ClientGameEnded_Params
{
	class AActor*                                      EndGameFocus;                                             // (OptionalParm, Parm)
	bool                                               bIsWinner;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.ShowMidGameMenu
struct AUTPlayerController_ShowMidGameMenu_Params
{
	struct FName                                       TabTag;                                                   // (OptionalParm, Parm)
	bool                                               bEnableInput;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.ShowMap
struct AUTPlayerController_ShowMap_Params
{
};

// Function UTGame.UTPlayerController.AdjustCameraScale
struct AUTPlayerController_AdjustCameraScale_Params
{
	bool                                               bIn;                                                      // (Parm)
};

// Function UTGame.UTPlayerController.NextWeapon
struct AUTPlayerController_NextWeapon_Params
{
};

// Function UTGame.UTPlayerController.PrevWeapon
struct AUTPlayerController_PrevWeapon_Params
{
};

// Function UTGame.UTPlayerController.ServerViewObjective
struct AUTPlayerController_ServerViewObjective_Params
{
};

// Function UTGame.UTPlayerController.ViewObjective
struct AUTPlayerController_ViewObjective_Params
{
};

// Function UTGame.UTPlayerController.ServerViewPlayerByName
struct AUTPlayerController_ServerViewPlayerByName_Params
{
	struct FString                                     PlayerName;                                               // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ViewPlayerByName
struct AUTPlayerController_ViewPlayerByName_Params
{
	struct FString                                     PlayerName;                                               // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ServerViewSelf
struct AUTPlayerController_ServerViewSelf_Params
{
	struct FViewTargetTransitionParams                 TransitionParams;                                         // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.SwitchWeapon
struct AUTPlayerController_SwitchWeapon_Params
{
	unsigned char                                      T;                                                        // (Parm)
};

// Function UTGame.UTPlayerController.ViewNextBot
struct AUTPlayerController_ViewNextBot_Params
{
};

// Function UTGame.UTPlayerController.LongClientAdjustPosition
struct AUTPlayerController_LongClientAdjustPosition_Params
{
	float                                              TimeStamp;                                                // (Parm)
	struct FName                                       NewState;                                                 // (Parm)
	TEnumAsByte<EPhysics>                              newPhysics;                                               // (Parm)
	float                                              NewLocX;                                                  // (Parm)
	float                                              NewLocY;                                                  // (Parm)
	float                                              NewLocZ;                                                  // (Parm)
	float                                              NewVelX;                                                  // (Parm)
	float                                              NewVelY;                                                  // (Parm)
	float                                              NewVelZ;                                                  // (Parm)
	class AActor*                                      NewBase;                                                  // (Parm)
	float                                              NewFloorX;                                                // (Parm)
	float                                              NewFloorY;                                                // (Parm)
	float                                              NewFloorZ;                                                // (Parm)
};

// Function UTGame.UTPlayerController.ShortServerMove
struct AUTPlayerController_ShortServerMove_Params
{
	float                                              TimeStamp;                                                // (Parm)
	struct FVector                                     ClientLoc;                                                // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm)
	unsigned char                                      ClientRoll;                                               // (Parm)
	int                                                View;                                                     // (Parm)
};

// Function UTGame.UTPlayerController.CallServerMove
struct AUTPlayerController_CallServerMove_Params
{
	class USavedMove*                                  NewMove;                                                  // (Parm)
	struct FVector                                     ClientLoc;                                                // (Parm)
	unsigned char                                      ClientRoll;                                               // (Parm)
	int                                                View;                                                     // (Parm)
	class USavedMove*                                  OldMove;                                                  // (Parm)
};

// Function UTGame.UTPlayerController.ToggleTranslocator
struct AUTPlayerController_ToggleTranslocator_Params
{
};

// Function UTGame.UTPlayerController.ToggleMelee
struct AUTPlayerController_ToggleMelee_Params
{
};

// Function UTGame.UTPlayerController.ViewShake
struct AUTPlayerController_ViewShake_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTPlayerController.OnStopCameraAnim
struct AUTPlayerController_OnStopCameraAnim_Params
{
	class UUTSeqAct_StopCameraAnim*                    inAction;                                                 // (Parm)
};

// Function UTGame.UTPlayerController.OnPlayCameraAnim
struct AUTPlayerController_OnPlayCameraAnim_Params
{
	class UUTSeqAct_PlayCameraAnim*                    inAction;                                                 // (Parm)
};

// Function UTGame.UTPlayerController.ClientStopCameraAnim
struct AUTPlayerController_ClientStopCameraAnim_Params
{
	class UCameraAnim*                                 AnimToStop;                                               // (Parm)
};

// Function UTGame.UTPlayerController.ClientPlayCameraAnim
struct AUTPlayerController_ClientPlayCameraAnim_Params
{
	class UCameraAnim*                                 AnimToPlay;                                               // (Parm)
	float                                              Scale;                                                    // (OptionalParm, Parm)
	float                                              Rate;                                                     // (OptionalParm, Parm)
	float                                              BlendInTime;                                              // (OptionalParm, Parm)
	float                                              BlendOutTime;                                             // (OptionalParm, Parm)
	bool                                               bLoop;                                                    // (OptionalParm, Parm)
	bool                                               bRandomStartTime;                                         // (OptionalParm, Parm)
	TEnumAsByte<ECameraAnimPlaySpace>                  Space;                                                    // (OptionalParm, Parm)
	struct FRotator                                    CustomPlaySpace;                                          // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.SetCameraAnimStrength
struct AUTPlayerController_SetCameraAnimStrength_Params
{
	float                                              NewStrength;                                              // (Parm)
};

// Function UTGame.UTPlayerController.StopCameraAnim
struct AUTPlayerController_StopCameraAnim_Params
{
	bool                                               bImmediate;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.PlayCameraAnim
struct AUTPlayerController_PlayCameraAnim_Params
{
	class UCameraAnim*                                 AnimToPlay;                                               // (Parm)
	float                                              Scale;                                                    // (OptionalParm, Parm)
	float                                              Rate;                                                     // (OptionalParm, Parm)
	float                                              BlendInTime;                                              // (OptionalParm, Parm)
	float                                              BlendOutTime;                                             // (OptionalParm, Parm)
	bool                                               bLoop;                                                    // (OptionalParm, Parm)
	bool                                               bIsDamageShake;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.StopViewShaking
struct AUTPlayerController_StopViewShaking_Params
{
};

// Function UTGame.UTPlayerController.DamageShake
struct AUTPlayerController_DamageShake_Params
{
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTPlayerController.PlayAnnouncement
struct AUTPlayerController_PlayAnnouncement_Params
{
	class UClass*                                      InMessageClass;                                           // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.ClientPlayAnnouncement
struct AUTPlayerController_ClientPlayAnnouncement_Params
{
	class UClass*                                      InMessageClass;                                           // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.Music
struct AUTPlayerController_Music_Params
{
	int                                                EventIndex;                                               // (Parm)
};

// Function UTGame.UTPlayerController.AlreadyInActionMusic
struct AUTPlayerController_AlreadyInActionMusic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.ClientMusicEvent
struct AUTPlayerController_ClientMusicEvent_Params
{
	int                                                EventIndex;                                               // (Parm)
};

// Function UTGame.UTPlayerController.GetPlayerViewPoint
struct AUTPlayerController_GetPlayerViewPoint_Params
{
	struct FVector                                     POVLocation;                                              // (Parm, OutParm)
	struct FRotator                                    POVRotation;                                              // (Parm, OutParm)
};

// Function UTGame.UTPlayerController.SpawnCamera
struct AUTPlayerController_SpawnCamera_Params
{
};

// Function UTGame.UTPlayerController.SetCameraMode
struct AUTPlayerController_SetCameraMode_Params
{
	struct FName                                       NewCamMode;                                               // (Parm)
};

// Function UTGame.UTPlayerController.ClientSetBehindView
struct AUTPlayerController_ClientSetBehindView_Params
{
	bool                                               bNewBehindView;                                           // (Parm)
};

// Function UTGame.UTPlayerController.SetBehindView
struct AUTPlayerController_SetBehindView_Params
{
	bool                                               bNewBehindView;                                           // (Parm)
};

// Function UTGame.UTPlayerController.BehindView
struct AUTPlayerController_BehindView_Params
{
};

// Function UTGame.UTPlayerController.ClientReset
struct AUTPlayerController_ClientReset_Params
{
};

// Function UTGame.UTPlayerController.Reset
struct AUTPlayerController_Reset_Params
{
};

// Function UTGame.UTPlayerController.DisplayDebug
struct AUTPlayerController_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function UTGame.UTPlayerController.ShowScoreboard
struct AUTPlayerController_ShowScoreboard_Params
{
};

// Function UTGame.UTPlayerController.ServerSpectate
struct AUTPlayerController_ServerSpectate_Params
{
};

// Function UTGame.UTPlayerController.ClearDoubleClick
struct AUTPlayerController_ClearDoubleClick_Params
{
};

// Function UTGame.UTPlayerController.PerformedUseAction
struct AUTPlayerController_PerformedUseAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.Use
struct AUTPlayerController_Use_Params
{
};

// Function UTGame.UTPlayerController.ServerUse
struct AUTPlayerController_ServerUse_Params
{
};

// Function UTGame.UTPlayerController.ClientPlayTakeHit
struct AUTPlayerController_ClientPlayTakeHit_Params
{
	struct FVector                                     HitLoc;                                                   // (Parm)
	unsigned char                                      Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTPlayerController.NotifyTakeHit
struct AUTPlayerController_NotifyTakeHit_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function UTGame.UTPlayerController.PlayStartupMessage
struct AUTPlayerController_PlayStartupMessage_Params
{
	unsigned char                                      StartupStage;                                             // (Parm)
};

// Function UTGame.UTPlayerController.ToggleScreenShotMode
struct AUTPlayerController_ToggleScreenShotMode_Params
{
};

// Function UTGame.UTPlayerController.SetAutoTaunt
struct AUTPlayerController_SetAutoTaunt_Params
{
	bool                                               Value;                                                    // (Parm)
};

// Function UTGame.UTPlayerController.ServerSetAutoTaunt
struct AUTPlayerController_ServerSetAutoTaunt_Params
{
	bool                                               Value;                                                    // (Parm)
};

// Function UTGame.UTPlayerController.UsingFirstPersonCamera
struct AUTPlayerController_UsingFirstPersonCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.ResetCameraMode
struct AUTPlayerController_ResetCameraMode_Params
{
};

// Function UTGame.UTPlayerController.SetHand
struct AUTPlayerController_SetHand_Params
{
	TEnumAsByte<EWeaponHand>                           NewWeaponHand;                                            // (Parm)
};

// Function UTGame.UTPlayerController.ServerSetHand
struct AUTPlayerController_ServerSetHand_Params
{
	TEnumAsByte<EWeaponHand>                           NewWeaponHand;                                            // (Parm)
};

// Function UTGame.UTPlayerController.ServerPlayerPreferences
struct AUTPlayerController_ServerPlayerPreferences_Params
{
	TEnumAsByte<EWeaponHand>                           NewWeaponHand;                                            // (Parm)
	bool                                               bNewAutoTaunt;                                            // (Parm)
	bool                                               bNewCenteredWeaponFire;                                   // (Parm)
	TEnumAsByte<EAutoObjectivePreference>              NewAutoObjectivePreference;                               // (Parm)
	TEnumAsByte<EUTVehicleControls>                    NewVehicleControls;                                       // (Parm)
};

// Function UTGame.UTPlayerController.ReceivedPlayer
struct AUTPlayerController_ReceivedPlayer_Params
{
};

// Function UTGame.UTPlayerController.AcknowledgePossession
struct AUTPlayerController_AcknowledgePossession_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPlayerController.Possess
struct AUTPlayerController_Possess_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTPlayerController.ClientSetAutoObjective
struct AUTPlayerController_ClientSetAutoObjective_Params
{
	class AActor*                                      NewAutoObjective;                                         // (Parm)
};

// Function UTGame.UTPlayerController.SetAutoObjective
struct AUTPlayerController_SetAutoObjective_Params
{
	class AActor*                                      ObjectiveActor;                                           // (Parm)
	bool                                               bOnlyNotifyDifferent;                                     // (Parm)
};

// Function UTGame.UTPlayerController.CheckAutoObjective
struct AUTPlayerController_CheckAutoObjective_Params
{
	bool                                               bOnlyNotifyDifferent;                                     // (Parm)
};

// Function UTGame.UTPlayerController.SetViewTarget
struct AUTPlayerController_SetViewTarget_Params
{
	class AActor*                                      NewViewTarget;                                            // (Parm)
	struct FViewTargetTransitionParams                 TransitionParams;                                         // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.ClientRestart
struct AUTPlayerController_ClientRestart_Params
{
	class APawn*                                       NewPawn;                                                  // (Parm)
};

// Function UTGame.UTPlayerController.Restart
struct AUTPlayerController_Restart_Params
{
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTPlayerController.FixFOV
struct AUTPlayerController_FixFOV_Params
{
};

// Function UTGame.UTPlayerController.FOV
struct AUTPlayerController_FOV_Params
{
	float                                              F;                                                        // (Parm)
};

// Function UTGame.UTPlayerController.CheckJumpOrDuck
struct AUTPlayerController_CheckJumpOrDuck_Params
{
};

// Function UTGame.UTPlayerController.KickWarning
struct AUTPlayerController_KickWarning_Params
{
};

// Function UTGame.UTPlayerController.DrawHUD
struct AUTPlayerController_DrawHUD_Params
{
	class AHUD*                                        H;                                                        // (Parm)
};

// Function UTGame.UTPlayerController.SoakPause
struct AUTPlayerController_SoakPause_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPlayerController.OnControllerChanged
struct AUTPlayerController_OnControllerChanged_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
};

// Function UTGame.UTPlayerController.Destroyed
struct AUTPlayerController_Destroyed_Params
{
};

// Function UTGame.UTPlayerController.Typing
struct AUTPlayerController_Typing_Params
{
	bool                                               bTyping;                                                  // (Parm)
};

// Function UTGame.UTPlayerController.Taunt
struct AUTPlayerController_Taunt_Params
{
	int                                                TauntIndex;                                               // (Parm)
};

// Function UTGame.UTPlayerController.ServerPlayVehicleHorn
struct AUTPlayerController_ServerPlayVehicleHorn_Params
{
};

// Function UTGame.UTPlayerController.PlayVehicleHorn
struct AUTPlayerController_PlayVehicleHorn_Params
{
};

// Function UTGame.UTPlayerController.TriggerInteracted
struct AUTPlayerController_TriggerInteracted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.PlayWinMessage
struct AUTPlayerController_PlayWinMessage_Params
{
	bool                                               bWinner;                                                  // (Parm)
};

// Function UTGame.UTPlayerController.ProjectileWarningTimer
struct AUTPlayerController_ProjectileWarningTimer_Params
{
};

// Function UTGame.UTPlayerController.ReceiveProjectileWarning
struct AUTPlayerController_ReceiveProjectileWarning_Params
{
	class AProjectile*                                 Proj;                                                     // (Parm)
};

// Function UTGame.UTPlayerController.ReceiveWarning
struct AUTPlayerController_ReceiveWarning_Params
{
	class APawn*                                       shooter;                                                  // (Parm)
	float                                              projSpeed;                                                // (Parm)
	struct FVector                                     FireDir;                                                  // (Parm)
};

// Function UTGame.UTPlayerController.PlayBeepSound
struct AUTPlayerController_PlayBeepSound_Params
{
};

// Function UTGame.UTPlayerController.LandingShake
struct AUTPlayerController_LandingShake_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.ServerDropFlag
struct AUTPlayerController_ServerDropFlag_Params
{
};

// Function UTGame.UTPlayerController.DropFlag
struct AUTPlayerController_DropFlag_Params
{
};

// Function UTGame.UTPlayerController.ToggleMinimap
struct AUTPlayerController_ToggleMinimap_Params
{
};

// Function UTGame.UTPlayerController.CheckVehicleToDrive
struct AUTPlayerController_CheckVehicleToDrive_Params
{
	bool                                               bEnterVehicle;                                            // (Parm)
	class AUTVehicle*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.ClientSetRequestedEntryWithFlag
struct AUTPlayerController_ClientSetRequestedEntryWithFlag_Params
{
	class AUTVehicle*                                  V;                                                        // (Parm)
	bool                                               bNewValue;                                                // (Parm)
	int                                                MessageIndex;                                             // (Parm)
};

// Function UTGame.UTPlayerController.CheckPickedVehicle
struct AUTPlayerController_CheckPickedVehicle_Params
{
	class AUTVehicle*                                  V;                                                        // (Parm)
	bool                                               bEnterVehicle;                                            // (Parm)
	class AUTVehicle*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.FindVehicleToDrive
struct AUTPlayerController_FindVehicleToDrive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.GetAdjustedAimFor
struct AUTPlayerController_GetAdjustedAimFor_Params
{
	class AWeapon*                                     W;                                                        // (Parm)
	struct FVector                                     StartFireLoc;                                             // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.AimHelpModifier
struct AUTPlayerController_AimHelpModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.AimingHelp
struct AUTPlayerController_AimingHelp_Params
{
	bool                                               bInstantHit;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.ClientHearSound
struct AUTPlayerController_ClientHearSound_Params
{
	class USoundCue*                                   ASound;                                                   // (Parm)
	class AActor*                                      SourceActor;                                              // (Parm)
	struct FVector                                     SourceLocation;                                           // (Parm)
	bool                                               bStopWhenOwnerDestroyed;                                  // (Parm)
	bool                                               bIsOccluded;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTPlayerController.ToggleSpeaking
struct AUTPlayerController_ToggleSpeaking_Params
{
	bool                                               bNowOn;                                                   // (Parm)
};

// Function UTGame.UTPlayerController.ServerProcessSpeechRecognition
struct AUTPlayerController_ServerProcessSpeechRecognition_Params
{
	struct FSpeechRecognizedWord                       ReplicatedWords;                                          // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.SpeechRecognitionComplete
struct AUTPlayerController_SpeechRecognitionComplete_Params
{
};

// Function UTGame.UTPlayerController.ClientSetSpeechRecognitionObject
struct AUTPlayerController_ClientSetSpeechRecognitionObject_Params
{
	class USpeechRecognition*                          NewRecognitionData;                                       // (Parm)
};

// Function UTGame.UTPlayerController.OnDestroyOnlineGameComplete
struct AUTPlayerController_OnDestroyOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.UTPlayerController.OnEndOnlineGameComplete
struct AUTPlayerController_OnEndOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.UTPlayerController.CleanupOnlineSubsystemSession
struct AUTPlayerController_CleanupOnlineSubsystemSession_Params
{
	bool                                               bWasFromMenu;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerController.FinishQuitToMainMenu
struct AUTPlayerController_FinishQuitToMainMenu_Params
{
};

// Function UTGame.UTPlayerController.QuitToMainMenu
struct AUTPlayerController_QuitToMainMenu_Params
{
};

// Function UTGame.UTPlayerController.SetFrontEndErrorMessage
struct AUTPlayerController_SetFrontEndErrorMessage_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.ClientWasKicked
struct AUTPlayerController_ClientWasKicked_Params
{
};

// Function UTGame.UTPlayerController.NotifyNotEnoughSpaceInInvite
struct AUTPlayerController_NotifyNotEnoughSpaceInInvite_Params
{
};

// Function UTGame.UTPlayerController.NotifyNotAllPlayersCanJoinInvite
struct AUTPlayerController_NotifyNotAllPlayersCanJoinInvite_Params
{
};

// Function UTGame.UTPlayerController.NotifyInviteFailed
struct AUTPlayerController_NotifyInviteFailed_Params
{
};

// Function UTGame.UTPlayerController.OnFriendMessageReceived
struct AUTPlayerController_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (Parm)
	struct FString                                     SendingNick;                                              // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.OnFriendInviteReceived
struct AUTPlayerController_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.OnGameInviteReceived
struct AUTPlayerController_OnGameInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
};

// Function UTGame.UTPlayerController.OnReadProfileSettingsComplete
struct AUTPlayerController_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.UTPlayerController.OnLinkStatusChanged
struct AUTPlayerController_OnLinkStatusChanged_Params
{
	bool                                               bConnected;                                               // (Parm)
};

// Function UTGame.UTPlayerController.OnConnectionStatusChange
struct AUTPlayerController_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
};

// Function UTGame.UTPlayerController.ClientSetOnlineStatus
struct AUTPlayerController_ClientSetOnlineStatus_Params
{
};

// Function UTGame.UTPlayerController.ClearOnlineDelegates
struct AUTPlayerController_ClearOnlineDelegates_Params
{
};

// Function UTGame.UTPlayerController.AddOnlineDelegates
struct AUTPlayerController_AddOnlineDelegates_Params
{
	bool                                               bRegisterVoice;                                           // (Parm)
};

// Function UTGame.UTPlayerController.UnregisterPlayerDataStores
struct AUTPlayerController_UnregisterPlayerDataStores_Params
{
};

// Function UTGame.UTPlayerController.RegisterCustomPlayerDataStores
struct AUTPlayerController_RegisterCustomPlayerDataStores_Params
{
};

// Function UTGame.UTPlayerController.ClearStringAliasBindingMapCache
struct AUTPlayerController_ClearStringAliasBindingMapCache_Params
{
};

// Function UTGame.UTPlayerController.ServerSetCharacterClass
struct AUTPlayerController_ServerSetCharacterClass_Params
{
	class UClass*                                      CharClass;                                                // (Parm)
};

// Function UTGame.UTPlayerController.PulseTeamColor
struct AUTPlayerController_PulseTeamColor_Params
{
};

// Function UTGame.UTPlayerController.InitInputSystem
struct AUTPlayerController_InitInputSystem_Params
{
};

// Function UTGame.UTPlayerController.SwitchHud
struct AUTPlayerController_SwitchHud_Params
{
};

// Function UTGame.UTPlayerController.ServerThrowWeapon
struct AUTPlayerController_ServerThrowWeapon_Params
{
};

// Function UTGame.UTPlayerController.Camera
struct AUTPlayerController_Camera_Params
{
	struct FName                                       NewMode;                                                  // (Parm)
};

// Function UTGame.UTHUDBase.DrawShadowedRotatedTile
struct AUTHUDBase_DrawShadowedRotatedTile_Params
{
	class UTexture2D*                                  Tex;                                                      // (Parm)
	struct FRotator                                    Rot;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
	float                                              U;                                                        // (Parm)
	float                                              V;                                                        // (Parm)
	float                                              UL;                                                       // (Parm)
	float                                              VL;                                                       // (Parm)
	struct FColor                                      TileColor;                                                // (Parm)
	bool                                               bScaleToRes;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTHUDBase.DrawShadowedStretchedTile
struct AUTHUDBase_DrawShadowedStretchedTile_Params
{
	class UTexture2D*                                  Tex;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
	float                                              U;                                                        // (Parm)
	float                                              V;                                                        // (Parm)
	float                                              UL;                                                       // (Parm)
	float                                              VL;                                                       // (Parm)
	struct FColor                                      TileColor;                                                // (Parm)
	bool                                               bScaleToRes;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTHUDBase.DrawShadowedTile
struct AUTHUDBase_DrawShadowedTile_Params
{
	class UTexture2D*                                  Tex;                                                      // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
	float                                              U;                                                        // (Parm)
	float                                              V;                                                        // (Parm)
	float                                              UL;                                                       // (Parm)
	float                                              VL;                                                       // (Parm)
	struct FColor                                      TileColor;                                                // (Parm)
	bool                                               bScaleToRes;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTHUDBase.CheckCrosshairOnFriendly
struct AUTHUDBase_CheckCrosshairOnFriendly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTHUDBase.DrawToolTip
struct AUTHUDBase_DrawToolTip_Params
{
	class UCanvas*                                     Cvs;                                                      // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              U;                                                        // (Parm)
	float                                              V;                                                        // (Parm)
	float                                              UL;                                                       // (Parm)
	float                                              VL;                                                       // (Parm)
	float                                              ResScale;                                                 // (Parm)
	class UTexture2D*                                  IconTexture;                                              // (OptionalParm, Parm)
	float                                              Alpha;                                                    // (OptionalParm, Parm)
};

// Function UTGame.UTHUDBase.SetShowLeaderboard
struct AUTHUDBase_SetShowLeaderboard_Params
{
	bool                                               bEnableLeaderboard;                                       // (Parm)
};

// Function UTGame.UTHUDBase.ToggleLeaderboard
struct AUTHUDBase_ToggleLeaderboard_Params
{
};

// Function UTGame.UTHUDBase.SetShowScores
struct AUTHUDBase_SetShowScores_Params
{
	bool                                               bEnableShowScores;                                        // (Parm)
};

// Function UTGame.UTHUDBase.GetLocalPlayerOwnerIndex
struct AUTHUDBase_GetLocalPlayerOwnerIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTHUDBase.ReleaseShowScores
struct AUTHUDBase_ReleaseShowScores_Params
{
};

// Function UTGame.UTHUDBase.CompletePauseMenuClose
struct AUTHUDBase_CompletePauseMenuClose_Params
{
};

// Function UTGame.UTHUDBase.TogglePauseMenu
struct AUTHUDBase_TogglePauseMenu_Params
{
};

// Function UTGame.UTHUDBase.CloseOtherMenus
struct AUTHUDBase_CloseOtherMenus_Params
{
};

// Function UTGame.UTHUDBase.SetVisible
struct AUTHUDBase_SetVisible_Params
{
	bool                                               bNewVisible;                                              // (Parm)
};

// Function UTGame.UTHUDBase.RemoveMovies
struct AUTHUDBase_RemoveMovies_Params
{
};

// Function UTGame.UTHUDBase.OnOpenAnimComplete
struct AUTHUDBase_OnOpenAnimComplete_Params
{
};

// Function UTGame.UTHUDBase.OnCloseAnimComplete
struct AUTHUDBase_OnCloseAnimComplete_Params
{
};

// Function UTGame.UTHUDBase.PostRender
struct AUTHUDBase_PostRender_Params
{
};

// Function UTGame.UTHUDBase.ResolutionChanged
struct AUTHUDBase_ResolutionChanged_Params
{
};

// Function UTGame.UTHUDBase.ShowMenu
struct AUTHUDBase_ShowMenu_Params
{
};

// Function UTGame.UTHUDBase.Timer
struct AUTHUDBase_Timer_Params
{
};

// Function UTGame.UTHUDBase.PostBeginPlay
struct AUTHUDBase_PostBeginPlay_Params
{
};

// Function UTGame.UTGFxHudWrapper.CompleteCloseTimer
struct AUTGFxHudWrapper_CompleteCloseTimer_Params
{
};

// Function UTGame.UTGFxHudWrapper.CompleteCloseInventory
struct AUTGFxHudWrapper_CompleteCloseInventory_Params
{
};

// Function UTGame.UTGFxHudWrapper.ToggleInventory
struct AUTGFxHudWrapper_ToggleInventory_Params
{
};

// Function UTGame.UTGFxHudWrapper.AddConsoleMessage
struct AUTGFxHudWrapper_AddConsoleMessage_Params
{
	struct FString                                     M;                                                        // (Parm, NeedCtorLink)
	class UClass*                                      InMessageClass;                                           // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
	float                                              Lifetime;                                                 // (OptionalParm, Parm)
};

// Function UTGame.UTGFxHudWrapper.LocalizedMessage
struct AUTGFxHudWrapper_LocalizedMessage_Params
{
	class UClass*                                      InMessageClass;                                           // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (Parm)
	struct FString                                     CriticalString;                                           // (Parm, NeedCtorLink)
	int                                                Switch;                                                   // (Parm)
	float                                              Position;                                                 // (Parm)
	float                                              Lifetime;                                                 // (Parm)
	int                                                FontSize;                                                 // (Parm)
	struct FColor                                      DrawColor;                                                // (Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTGFxHudWrapper.DrawHUD
struct AUTGFxHudWrapper_DrawHUD_Params
{
};

// Function UTGame.UTGFxHudWrapper.PostRender
struct AUTGFxHudWrapper_PostRender_Params
{
};

// Function UTGame.UTGFxHudWrapper.ResolutionChanged
struct AUTGFxHudWrapper_ResolutionChanged_Params
{
};

// Function UTGame.UTGFxHudWrapper.CloseOtherMenus
struct AUTGFxHudWrapper_CloseOtherMenus_Params
{
};

// Function UTGame.UTGFxHudWrapper.DisplayHit
struct AUTGFxHudWrapper_DisplayHit_Params
{
	struct FVector                                     HitDir;                                                   // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTGFxHudWrapper.SetVisible
struct AUTGFxHudWrapper_SetVisible_Params
{
	bool                                               bNewVisible;                                              // (Parm)
};

// Function UTGame.UTGFxHudWrapper.GetLocalPlayerOwnerIndex
struct AUTGFxHudWrapper_GetLocalPlayerOwnerIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGFxHudWrapper.CreateHUDMovie
struct AUTGFxHudWrapper_CreateHUDMovie_Params
{
};

// Function UTGame.UTGFxHudWrapper.PostBeginPlay
struct AUTGFxHudWrapper_PostBeginPlay_Params
{
};

// Function UTGame.UTGFxHudWrapper.RemoveMovies
struct AUTGFxHudWrapper_RemoveMovies_Params
{
};

// Function UTGame.UTGFxHudWrapper.Destroyed
struct AUTGFxHudWrapper_Destroyed_Params
{
};

// Function UTGame.UTGFxHudWrapper.MinimapZoomOut
struct AUTGFxHudWrapper_MinimapZoomOut_Params
{
};

// Function UTGame.UTGFxHudWrapper.MinimapZoomIn
struct AUTGFxHudWrapper_MinimapZoomIn_Params
{
};

// Function UTGame.UTGFxTeamHUDWrapper.Timer
struct AUTGFxTeamHUDWrapper_Timer_Params
{
};

// Function UTGame.UTPlayerReplicationInfo.UpdatePowerupAchievements
struct AUTPlayerReplicationInfo_UpdatePowerupAchievements_Params
{
	struct FName                                       StatName;                                                 // (Parm)
	int                                                Time;                                                     // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.UpdateEventStatAchievements
struct AUTPlayerReplicationInfo_UpdateEventStatAchievements_Params
{
	struct FName                                       StatName;                                                 // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.AttemptMidGameMenu
struct AUTPlayerReplicationInfo_AttemptMidGameMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.ShowMidGameMenu
struct AUTPlayerReplicationInfo_ShowMidGameMenu_Params
{
	bool                                               bInitial;                                                 // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.ReplicatedEvent
struct AUTPlayerReplicationInfo_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.ServerTeleportToActor
struct AUTPlayerReplicationInfo_ServerTeleportToActor_Params
{
	class AActor*                                      DestinationActor;                                         // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.AllowClientToTeleport
struct AUTPlayerReplicationInfo_AllowClientToTeleport_Params
{
	class AActor*                                      DestinationActor;                                         // (Parm)
	class AUTPawn*                                     OwnerPawn;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.SeamlessTravelTo
struct AUTPlayerReplicationInfo_SeamlessTravelTo_Params
{
	class APlayerReplicationInfo*                      NewPRI;                                                   // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.CopyProperties
struct AUTPlayerReplicationInfo_CopyProperties_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.OverrideWith
struct AUTPlayerReplicationInfo_OverrideWith_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.GetCallSign
struct AUTPlayerReplicationInfo_GetCallSign_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTPlayerReplicationInfo.Reset
struct AUTPlayerReplicationInfo_Reset_Params
{
};

// Function UTGame.UTPlayerReplicationInfo.IncrementKills
struct AUTPlayerReplicationInfo_IncrementKills_Params
{
	bool                                               bEnemyKill;                                               // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.GetFlag
struct AUTPlayerReplicationInfo_GetFlag_Params
{
	class AUTCarriedObject*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.SetFlag
struct AUTPlayerReplicationInfo_SetFlag_Params
{
	class AUTCarriedObject*                            NewFlag;                                                  // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.StopPowerupTimeStat
struct AUTPlayerReplicationInfo_StopPowerupTimeStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.StartPowerupTimeStat
struct AUTPlayerReplicationInfo_StartPowerupTimeStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.IncrementPickupStat
struct AUTPlayerReplicationInfo_IncrementPickupStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.IncrementVehicleKillStat
struct AUTPlayerReplicationInfo_IncrementVehicleKillStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.StopDrivingStat
struct AUTPlayerReplicationInfo_StopDrivingStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.StartDrivingStat
struct AUTPlayerReplicationInfo_StartDrivingStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
};

// Function UTGame.UTPlayerReplicationInfo.IncrementEventStat
struct AUTPlayerReplicationInfo_IncrementEventStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.IncrementSuicideStat
struct AUTPlayerReplicationInfo_IncrementSuicideStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.IncrementDeathStat
struct AUTPlayerReplicationInfo_IncrementDeathStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.IncrementKillStat
struct AUTPlayerReplicationInfo_IncrementKillStat_Params
{
	struct FName                                       NewStatName;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.ShouldBroadCastWelcomeMessage
struct AUTPlayerReplicationInfo_ShouldBroadCastWelcomeMessage_Params
{
	bool                                               bExiting;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPlayerReplicationInfo.IsLocalPlayerPRI
struct AUTPlayerReplicationInfo_IsLocalPlayerPRI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCharInfo.GetRandomCharClassName
struct UUTCharInfo_GetRandomCharClassName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTCharInfo.FindFamilyInfo
struct UUTCharInfo_FindFamilyInfo_Params
{
	struct FString                                     InFamilyID;                                               // (Parm, NeedCtorLink)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamInfo.Destroyed
struct AUTTeamInfo_Destroyed_Params
{
};

// Function UTGame.UTTeamInfo.GetBotInfo
struct AUTTeamInfo_GetBotInfo_Params
{
	struct FString                                     BotName;                                                  // (Parm, NeedCtorLink)
	struct FCharacterInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTTeamInfo.GetAvailableBotList
struct AUTTeamInfo_GetAvailableBotList_Params
{
	TArray<int>                                        AvailableBots;                                            // (Parm, OutParm, NeedCtorLink)
	struct FString                                     FactionFilter;                                            // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bMalesOnly;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTTeamInfo.BotNameTaken
struct AUTTeamInfo_BotNameTaken_Params
{
	struct FString                                     BotName;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamInfo.RemoveFromTeam
struct AUTTeamInfo_RemoveFromTeam_Params
{
	class AController*                                 Other;                                                    // (Parm)
};

// Function UTGame.UTTeamInfo.SetBotOrders
struct AUTTeamInfo_SetBotOrders_Params
{
	class AUTBot*                                      NewBot;                                                   // (Parm)
};

// Function UTGame.UTTeamInfo.NeedsBotMoreThan
struct AUTTeamInfo_NeedsBotMoreThan_Params
{
	class AUTTeamInfo*                                 T;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamInfo.Initialize
struct AUTTeamInfo_Initialize_Params
{
	int                                                NewTeamIndex;                                             // (Parm)
};

// Function UTGame.UTTeamInfo.AllBotsSpawned
struct AUTTeamInfo_AllBotsSpawned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamInfo.Reset
struct AUTTeamInfo_Reset_Params
{
};

// Function UTGame.UTTeamInfo.GetHUDColor
struct AUTTeamInfo_GetHUDColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamInfo.GetHumanReadableName
struct AUTTeamInfo_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTPawn.HandDamp
struct AUTPawn_HandDamp_Params
{
	float                                              LinDamp;                                                  // (Parm)
};

// Function UTGame.UTPawn.HandSpring
struct AUTPawn_HandSpring_Params
{
	float                                              LinSpring;                                                // (Parm)
};

// Function UTGame.UTPawn.BackDamp
struct AUTPawn_BackDamp_Params
{
	float                                              LinDamp;                                                  // (Parm)
};

// Function UTGame.UTPawn.BackSpring
struct AUTPawn_BackSpring_Params
{
	float                                              LinSpring;                                                // (Parm)
};

// Function UTGame.UTPawn.PostBigTeleport
struct AUTPawn_PostBigTeleport_Params
{
};

// Function UTGame.UTPawn.PostTeleport
struct AUTPawn_PostTeleport_Params
{
	class ATeleporter*                                 OutTeleporter;                                            // (Parm)
};

// Function UTGame.UTPawn.GetFamilyInfo
struct AUTPawn_GetFamilyInfo_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.NeedToTurn
struct AUTPawn_NeedToTurn_Params
{
	struct FVector                                     targ;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.PossessedBy
struct AUTPawn_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTPawn.OnInfiniteAmmo
struct AUTPawn_OnInfiniteAmmo_Params
{
	class UUTSeqAct_InfiniteAmmo*                      Action;                                                   // (Parm)
};

// Function UTGame.UTPawn.OnExitVehicle
struct AUTPawn_OnExitVehicle_Params
{
	class UUTSeqAct_ExitVehicle*                       Action;                                                   // (Parm)
};

// Function UTGame.UTPawn.StuckFalling
struct AUTPawn_StuckFalling_Params
{
};

// Function UTGame.UTPawn.OnRanOver
struct AUTPawn_OnRanOver_Params
{
	class ASVehicle*                                   Vehicle;                                                  // (Parm)
	class UPrimitiveComponent*                         RunOverComponent;                                         // (Parm, EditInline)
	int                                                WheelIndex;                                               // (Parm)
};

// Function UTGame.UTPawn.RigidBodyCollision
struct AUTPawn_RigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, EditInline)
	struct FCollisionImpactData                        RigidCollisionData;                                       // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ContactIndex;                                             // (Parm)
};

// Function UTGame.UTPawn.TakeFallingDamage
struct AUTPawn_TakeFallingDamage_Params
{
};

// Function UTGame.UTPawn.SetOverlayVisibility
struct AUTPawn_SetOverlayVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm)
};

// Function UTGame.UTPawn.TornOff
struct AUTPawn_TornOff_Params
{
};

// Function UTGame.UTPawn.GetViewRotation
struct AUTPawn_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.AdjustCameraScale
struct AUTPawn_AdjustCameraScale_Params
{
	bool                                               bMoveCameraIn;                                            // (Parm)
};

// Function UTGame.UTPawn.IsFirstPerson
struct AUTPawn_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.ModifyRotForDebugFreeCam
struct AUTPawn_ModifyRotForDebugFreeCam_Params
{
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
};

// Function UTGame.UTPawn.IsLocationOnHead
struct AUTPawn_IsLocationOnHead_Params
{
	struct FImpactInfo                                 Impact;                                                   // (Const, Parm, OutParm)
	float                                              AdditionalScale;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.TakeDrowningDamage
struct AUTPawn_TakeDrowningDamage_Params
{
};

// Function UTGame.UTPawn.SwitchWeapon
struct AUTPawn_SwitchWeapon_Params
{
	unsigned char                                      NewGroup;                                                 // (Parm)
};

// Function UTGame.UTPawn.OnUseHoverboard
struct AUTPawn_OnUseHoverboard_Params
{
	class UUTSeqAct_UseHoverboard*                     Action;                                                   // (Parm)
};

// Function UTGame.UTPawn.ServerHoverboard
struct AUTPawn_ServerHoverboard_Params
{
};

// Function UTGame.UTPawn.TakeHitBlendedOut
struct AUTPawn_TakeHitBlendedOut_Params
{
};

// Function UTGame.UTPawn.PlayTakeHitEffects
struct AUTPawn_PlayTakeHitEffects_Params
{
};

// Function UTGame.UTPawn.PlayHit
struct AUTPawn_PlayHit_Params
{
	float                                              Damage;                                                   // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Parm)
};

// Function UTGame.UTPawn.WeaponAttachmentChanged
struct AUTPawn_WeaponAttachmentChanged_Params
{
};

// Function UTGame.UTPawn.WeaponChanged
struct AUTPawn_WeaponChanged_Params
{
	class AUTWeapon*                                   NewWeapon;                                                // (Parm)
};

// Function UTGame.UTPawn.WeaponStoppedFiring
struct AUTPawn_WeaponStoppedFiring_Params
{
	class AWeapon*                                     InWeapon;                                                 // (Parm)
	bool                                               bViaReplication;                                          // (Parm)
};

// Function UTGame.UTPawn.WeaponFired
struct AUTPawn_WeaponFired_Params
{
	class AWeapon*                                     InWeapon;                                                 // (Parm)
	bool                                               bViaReplication;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTPawn.TakeDamage
struct AUTPawn_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTPawn.GetPuttingDownWeapon
struct AUTPawn_GetPuttingDownWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.SetPuttingDownWeapon
struct AUTPawn_SetPuttingDownWeapon_Params
{
	bool                                               bNowPuttingDownWeapon;                                    // (Parm)
};

// Function UTGame.UTPawn.SetHeadScale
struct AUTPawn_SetHeadScale_Params
{
	float                                              NewScale;                                                 // (Parm)
};

// Function UTGame.UTPawn.ReplicatedEvent
struct AUTPawn_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTPawn.FireRateChanged
struct AUTPawn_FireRateChanged_Params
{
};

// Function UTGame.UTPawn.SetBigHead
struct AUTPawn_SetBigHead_Params
{
};

// Function UTGame.UTPawn.FiringModeUpdated
struct AUTPawn_FiringModeUpdated_Params
{
	class AWeapon*                                     InWeapon;                                                 // (Parm)
	unsigned char                                      InFiringMode;                                             // (Parm)
	bool                                               bViaReplication;                                          // (Parm)
};

// Function UTGame.UTPawn.ForceRagdoll
struct AUTPawn_ForceRagdoll_Params
{
};

// Function UTGame.UTPawn.FeignDeath
struct AUTPawn_FeignDeath_Params
{
};

// Function UTGame.UTPawn.ServerFeignDeath
struct AUTPawn_ServerFeignDeath_Params
{
};

// Function UTGame.UTPawn.CheckValidLocation
struct AUTPawn_CheckValidLocation_Params
{
	struct FVector                                     FeignLocation;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.SetFeignEndLocation
struct AUTPawn_SetFeignEndLocation_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     FeignLocation;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.PlayFeignDeath
struct AUTPawn_PlayFeignDeath_Params
{
};

// Function UTGame.UTPawn.FeignDeathDelayTimer
struct AUTPawn_FeignDeathDelayTimer_Params
{
};

// Function UTGame.UTPawn.StartFeignDeathRecoveryAnim
struct AUTPawn_StartFeignDeathRecoveryAnim_Params
{
};

// Function UTGame.UTPawn.ApplyWeaponOverlayFlags
struct AUTPawn_ApplyWeaponOverlayFlags_Params
{
	unsigned char                                      NewFlags;                                                 // (Parm)
};

// Function UTGame.UTPawn.ClearWeaponOverlayFlag
struct AUTPawn_ClearWeaponOverlayFlag_Params
{
	unsigned char                                      FlagToClear;                                              // (Parm)
};

// Function UTGame.UTPawn.SetWeaponOverlayFlag
struct AUTPawn_SetWeaponOverlayFlag_Params
{
	unsigned char                                      FlagToSet;                                                // (Parm)
};

// Function UTGame.UTPawn.GetOverlayMaterial
struct AUTPawn_GetOverlayMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.GetShieldMaterialInstance
struct AUTPawn_GetShieldMaterialInstance_Params
{
	bool                                               bTeamGame;                                                // (Parm)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.SetOverlayMaterial
struct AUTPawn_SetOverlayMaterial_Params
{
	class UMaterialInterface*                          NewOverlay;                                               // (Parm)
};

// Function UTGame.UTPawn.GetWeaponAmbientSound
struct AUTPawn_GetWeaponAmbientSound_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.SetWeaponAmbientSound
struct AUTPawn_SetWeaponAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                          // (Parm)
};

// Function UTGame.UTPawn.GetPawnAmbientSound
struct AUTPawn_GetPawnAmbientSound_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.SetPawnAmbientSound
struct AUTPawn_SetPawnAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                          // (Parm)
};

// Function UTGame.UTPawn.DisplayDebug
struct AUTPawn_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function UTGame.UTPawn.PlayDyingSound
struct AUTPawn_PlayDyingSound_Params
{
};

// Function UTGame.UTPawn.CanMultiJump
struct AUTPawn_CanMultiJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.CanDoubleJump
struct AUTPawn_CanDoubleJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.JumpOutOfWater
struct AUTPawn_JumpOutOfWater_Params
{
	struct FVector                                     JumpDir;                                                  // (Parm)
};

// Function UTGame.UTPawn.Landed
struct AUTPawn_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
};

// Function UTGame.UTPawn.DoJump
struct AUTPawn_DoJump_Params
{
	bool                                               bUpdating;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.StopFlying
struct AUTPawn_StopFlying_Params
{
};

// Function UTGame.UTPawn.StartFlying
struct AUTPawn_StartFlying_Params
{
};

// Function UTGame.UTPawn.Gasp
struct AUTPawn_Gasp_Params
{
};

// Function UTGame.UTPawn.DoDoubleJump
struct AUTPawn_DoDoubleJump_Params
{
	bool                                               bUpdating;                                                // (Parm)
};

// Function UTGame.UTPawn.PerformDodge
struct AUTPawn_PerformDodge_Params
{
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	struct FVector                                     Dir;                                                      // (Parm)
	struct FVector                                     Cross;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.BotDodge
struct AUTPawn_BotDodge_Params
{
	struct FVector                                     Dir;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.Dodge
struct AUTPawn_Dodge_Params
{
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.GetWeaponStartTraceLocation
struct AUTPawn_GetWeaponStartTraceLocation_Params
{
	class AWeapon*                                     CurrentWeapon;                                            // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.CalcThirdPersonCam
struct AUTPawn_CalcThirdPersonCam_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.SetHeroCam
struct AUTPawn_SetHeroCam_Params
{
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
};

// Function UTGame.UTPawn.TryNewCamRot
struct AUTPawn_TryNewCamRot_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
	struct FRotator                                    ViewRotation;                                             // (Parm)
	float                                              CamDist;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.FindGoodEndView
struct AUTPawn_FindGoodEndView_Params
{
	class APlayerController*                           InPC;                                                     // (Parm)
	struct FRotator                                    GoodRotation;                                             // (Parm, OutParm)
};

// Function UTGame.UTPawn.SetThirdPersonCamera
struct AUTPawn_SetThirdPersonCamera_Params
{
	bool                                               bNewBehindView;                                           // (Parm)
};

// Function UTGame.UTPawn.CalcCamera
struct AUTPawn_CalcCamera_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.AddDefaultInventory
struct AUTPawn_AddDefaultInventory_Params
{
};

// Function UTGame.UTPawn.Destroyed
struct AUTPawn_Destroyed_Params
{
};

// Function UTGame.UTPawn.DoingDeathAnim
struct AUTPawn_DoingDeathAnim_Params
{
};

// Function UTGame.UTPawn.PlayDying
struct AUTPawn_PlayDying_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLoc;                                                   // (Parm)
};

// Function UTGame.UTPawn.TurnOffPawn
struct AUTPawn_TurnOffPawn_Params
{
};

// Function UTGame.UTPawn.SpawnGibs
struct AUTPawn_SpawnGibs_Params
{
	class UClass*                                      UTDamageType;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTPawn.SpawnGib
struct AUTPawn_SpawnGib_Params
{
	class UClass*                                      GibClass;                                                 // (Parm)
	struct FName                                       BoneName;                                                 // (Parm)
	class UClass*                                      UTDamageType;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               bSpinGib;                                                 // (Parm)
	class AUTGib*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.SpawnHeadGib
struct AUTPawn_SpawnHeadGib_Params
{
	class UClass*                                      UTDamageType;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTPawn.ShouldGib
struct AUTPawn_ShouldGib_Params
{
	class UClass*                                      UTDamageType;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.PlayJumpingSound
struct AUTPawn_PlayJumpingSound_Params
{
};

// Function UTGame.UTPawn.PlayLandingSound
struct AUTPawn_PlayLandingSound_Params
{
};

// Function UTGame.UTPawn.GetMaterialBelowFeet
struct AUTPawn_GetMaterialBelowFeet_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.ActuallyPlayFootstepSound
struct AUTPawn_ActuallyPlayFootstepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
};

// Function UTGame.UTPawn.PlayFootStepSound
struct AUTPawn_PlayFootStepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
};

// Function UTGame.UTPawn.GetDebugName
struct AUTPawn_GetDebugName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTPawn.GiveHealth
struct AUTPawn_GiveHealth_Params
{
	int                                                HealAmount;                                               // (Parm)
	int                                                HealMax;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.HoldGameObject
struct AUTPawn_HoldGameObject_Params
{
	class AUDKCarriedObject*                           GameObj;                                                  // (Parm)
};

// Function UTGame.UTPawn.EnableInventoryPickup
struct AUTPawn_EnableInventoryPickup_Params
{
};

// Function UTGame.UTPawn.DropFlag
struct AUTPawn_DropFlag_Params
{
};

// Function UTGame.UTPawn.AdjustDamage
struct AUTPawn_AdjustDamage_Params
{
	int                                                InDamage;                                                 // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function UTGame.UTPawn.ShieldAbsorb
struct AUTPawn_ShieldAbsorb_Params
{
	int                                                Damage;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.AbsorbDamage
struct AUTPawn_AbsorbDamage_Params
{
	int                                                Damage;                                                   // (Parm, OutParm)
	int                                                CurrentShieldStrength;                                    // (Parm)
	float                                              AbsorptionRate;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.GetShieldStrength
struct AUTPawn_GetShieldStrength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.ClientRestart
struct AUTPawn_ClientRestart_Params
{
};

// Function UTGame.UTPawn.StopDriving
struct AUTPawn_StopDriving_Params
{
	class AVehicle*                                    V;                                                        // (Parm)
};

// Function UTGame.UTPawn.StartDriving
struct AUTPawn_StartDriving_Params
{
	class AVehicle*                                    V;                                                        // (Parm)
};

// Function UTGame.UTPawn.SpawnTransEffect
struct AUTPawn_SpawnTransEffect_Params
{
	int                                                TeamNum;                                                  // (Parm)
};

// Function UTGame.UTPawn.PlayTeleportEffect
struct AUTPawn_PlayTeleportEffect_Params
{
	bool                                               bOut;                                                     // (Parm)
	bool                                               bSound;                                                   // (Parm)
};

// Function UTGame.UTPawn.DeactivateSpawnProtection
struct AUTPawn_DeactivateSpawnProtection_Params
{
};

// Function UTGame.UTPawn.FixedView
struct AUTPawn_FixedView_Params
{
	struct FString                                     VisibleMeshes;                                            // (Parm, NeedCtorLink)
};

// Function UTGame.UTPawn.SetMeshVisibility
struct AUTPawn_SetMeshVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm)
};

// Function UTGame.UTPawn.SetWeaponAttachmentVisibility
struct AUTPawn_SetWeaponAttachmentVisibility_Params
{
	bool                                               bAttachmentVisible;                                       // (Parm)
};

// Function UTGame.UTPawn.SetWeaponVisibility
struct AUTPawn_SetWeaponVisibility_Params
{
	bool                                               bWeaponVisible;                                           // (Parm)
};

// Function UTGame.UTPawn.EndViewTarget
struct AUTPawn_EndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function UTGame.UTPawn.BecomeViewTarget
struct AUTPawn_BecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function UTGame.UTPawn.GetPawnViewLocation
struct AUTPawn_GetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.UpdateEyeHeight
struct AUTPawn_UpdateEyeHeight_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTPawn.FaceRotation
struct AUTPawn_FaceRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTPawn.PostRenderFor
struct AUTPawn_PostRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     CameraPosition;                                           // (Parm)
	struct FVector                                     CameraDir;                                                // (Parm)
};

// Function UTGame.UTPawn.GetScreenName
struct AUTPawn_GetScreenName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTPawn.OnModifyHealth
struct AUTPawn_OnModifyHealth_Params
{
	class USeqAct_ModifyHealth*                        Action;                                                   // (Parm)
};

// Function UTGame.UTPawn.PlayVictoryAnimation
struct AUTPawn_PlayVictoryAnimation_Params
{
};

// Function UTGame.UTPawn.GetEyeHeight
struct AUTPawn_GetEyeHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.RangedAttackTime
struct AUTPawn_RangedAttackTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.RecommendLongRangedAttack
struct AUTPawn_RecommendLongRangedAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.ChooseFireMode
struct AUTPawn_ChooseFireMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.StopWeaponFiring
struct AUTPawn_StopWeaponFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.BotFire
struct AUTPawn_BotFire_Params
{
	bool                                               bFinished;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.StopFiring
struct AUTPawn_StopFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.StartFire
struct AUTPawn_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTPawn.Died
struct AUTPawn_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.AddVelocity
struct AUTPawn_AddVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
};

// Function UTGame.UTPawn.Falling
struct AUTPawn_Falling_Params
{
};

// Function UTGame.UTPawn.StuckOnPawn
struct AUTPawn_StuckOnPawn_Params
{
	class APawn*                                       OtherPawn;                                                // (Parm)
};

// Function UTGame.UTPawn.JumpOffPawn
struct AUTPawn_JumpOffPawn_Params
{
};

// Function UTGame.UTPawn.gibbedBy
struct AUTPawn_gibbedBy_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTPawn.EncroachedBy
struct AUTPawn_EncroachedBy_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTPawn.EncroachingOn
struct AUTPawn_EncroachingOn_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.TurnOff
struct AUTPawn_TurnOff_Params
{
};

// Function UTGame.UTPawn.WeaponBob
struct AUTPawn_WeaponBob_Params
{
	float                                              BobDamping;                                               // (Parm)
	float                                              JumpDamping;                                              // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.SpawnDefaultController
struct AUTPawn_SpawnDefaultController_Params
{
};

// Function UTGame.UTPawn.OnPlayAnim
struct AUTPawn_OnPlayAnim_Params
{
	class UUTSeqAct_PlayAnim*                          inAction;                                                 // (Parm)
};

// Function UTGame.UTPawn.PlayEmote
struct AUTPawn_PlayEmote_Params
{
	struct FName                                       InEmoteTag;                                               // (Parm)
	int                                                InPlayerID;                                               // (Parm)
};

// Function UTGame.UTPawn.ServerPlayEmote
struct AUTPawn_ServerPlayEmote_Params
{
	struct FName                                       InEmoteTag;                                               // (Parm)
	int                                                InPlayerID;                                               // (Parm)
};

// Function UTGame.UTPawn.DoPlayEmote
struct AUTPawn_DoPlayEmote_Params
{
	struct FName                                       InEmoteTag;                                               // (Parm)
	int                                                InPlayerID;                                               // (Parm)
};

// Function UTGame.UTPawn.PerformEmoteCommand
struct AUTPawn_PerformEmoteCommand_Params
{
	struct FEmoteInfo                                  EInfo;                                                    // (Parm, NeedCtorLink)
	int                                                PlayerID;                                                 // (Parm)
};

// Function UTGame.UTPawn.LeaveABloodSplatterDecal
struct AUTPawn_LeaveABloodSplatterDecal_Params
{
	struct FVector                                     HitLoc;                                                   // (Parm)
	struct FVector                                     HitNorm;                                                  // (Parm)
};

// Function UTGame.UTPawn.SetWeapAnimType
struct AUTPawn_SetWeapAnimType_Params
{
	TEnumAsByte<EWeapAnimType>                         AnimType;                                                 // (Parm)
};

// Function UTGame.UTPawn.SetAnimRateScale
struct AUTPawn_SetAnimRateScale_Params
{
	float                                              RateScale;                                                // (Parm)
};

// Function UTGame.UTPawn.SetHandIKEnabled
struct AUTPawn_SetHandIKEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm)
};

// Function UTGame.UTPawn.PostInitAnimTree
struct AUTPawn_PostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function UTGame.UTPawn.ReattachMesh
struct AUTPawn_ReattachMesh_Params
{
};

// Function UTGame.UTPawn.UpdateShadowSettings
struct AUTPawn_UpdateShadowSettings_Params
{
	bool                                               bWantShadow;                                              // (Parm)
};

// Function UTGame.UTPawn.PostBeginPlay
struct AUTPawn_PostBeginPlay_Params
{
};

// Function UTGame.UTPawn.SetTeamColor
struct AUTPawn_SetTeamColor_Params
{
};

// Function UTGame.UTPawn.SetFirstPersonArmsInfo
struct AUTPawn_SetFirstPersonArmsInfo_Params
{
	class USkeletalMesh*                               FirstPersonArmMesh;                                       // (Parm)
	class UMaterialInterface*                          ArmMaterial;                                              // (Parm)
};

// Function UTGame.UTPawn.NotifyTeamChanged
struct AUTPawn_NotifyTeamChanged_Params
{
};

// Function UTGame.UTPawn.ResetCharPhysState
struct AUTPawn_ResetCharPhysState_Params
{
};

// Function UTGame.UTPawn.SetPawnRBChannels
struct AUTPawn_SetPawnRBChannels_Params
{
	bool                                               bRagdollMode;                                             // (Parm)
};

// Function UTGame.UTPawn.SetCharacterMeshInfo
struct AUTPawn_SetCharacterMeshInfo_Params
{
	class USkeletalMesh*                               SkelMesh;                                                 // (Parm)
	class UMaterialInterface*                          HeadMaterial;                                             // (Parm)
	class UMaterialInterface*                          BodyMaterial;                                             // (Parm)
};

// Function UTGame.UTPawn.SetCharacterClassFromInfo
struct AUTPawn_SetCharacterClassFromInfo_Params
{
	class UClass*                                      Info;                                                     // (Parm)
};

// Function UTGame.UTPawn.VerifyBodyMaterialInstance
struct AUTPawn_VerifyBodyMaterialInstance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.SetArmsSkin
struct AUTPawn_SetArmsSkin_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm)
};

// Function UTGame.UTPawn.SetSkin
struct AUTPawn_SetSkin_Params
{
	class UMaterial*                                   NewMaterial;                                              // (Parm)
};

// Function UTGame.UTPawn.SetInvisible
struct AUTPawn_SetInvisible_Params
{
	bool                                               bNowInvisible;                                            // (Parm)
};

// Function UTGame.UTPawn.SetBodyMatColor
struct AUTPawn_SetBodyMatColor_Params
{
	struct FLinearColor                                NewBodyMatColor;                                          // (Parm)
	float                                              NewOverlayDuration;                                       // (Parm)
};

// Function UTGame.UTPawn.ClearBodyMatColor
struct AUTPawn_ClearBodyMatColor_Params
{
};

// Function UTGame.UTPawn.SetWalking
struct AUTPawn_SetWalking_Params
{
	bool                                               bNewIsWalking;                                            // (Parm)
};

// Function UTGame.UTPawn.RenderMapIcon
struct AUTPawn_RenderMapIcon_Params
{
	class UUTMapInfo*                                  MP;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
	struct FLinearColor                                FinalColor;                                               // (Parm)
};

// Function UTGame.UTPawn.InCombat
struct AUTPawn_InCombat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.PoweredUp
struct AUTPawn_PoweredUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.HeadVolumeChange
struct AUTPawn_HeadVolumeChange_Params
{
	class APhysicsVolume*                              newHeadVolume;                                            // (Parm)
};

// Function UTGame.UTPawn.FellOutOfWorld
struct AUTPawn_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (Parm)
};

// Function UTGame.UTPawn.GetUTPlayerReplicationInfo
struct AUTPawn_GetUTPlayerReplicationInfo_Params
{
	class AUTPlayerReplicationInfo*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.AdjustedStrength
struct AUTPawn_AdjustedStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawn.AdjustPPEffects
struct AUTPawn_AdjustPPEffects_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
	bool                                               bRemove;                                                  // (Parm)
};

// Function UTGame.UTFamilyInfo.GetEmoteIndex
struct UUTFamilyInfo_GetEmoteIndex_Params
{
	struct FName                                       EmoteTag;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTFamilyInfo.GetEmotes
struct UUTFamilyInfo_GetEmotes_Params
{
	struct FName                                       Category;                                                 // (Parm)
	TArray<struct FString>                             Captions;                                                 // (Parm, OutParm, NeedCtorLink)
	TArray<struct FName>                               EmoteTags;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTFamilyInfo.GetVoiceClass
struct UUTFamilyInfo_GetVoiceClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTFamilyInfo.GetEmoteGroupCnt
struct UUTFamilyInfo_GetEmoteGroupCnt_Params
{
	struct FName                                       Category;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTFamilyInfo.GetCharPortrait
struct UUTFamilyInfo_GetCharPortrait_Params
{
	int                                                TeamNum;                                                  // (Parm)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTFamilyInfo.GetTeamMaterials
struct UUTFamilyInfo_GetTeamMaterials_Params
{
	int                                                TeamNum;                                                  // (Parm)
	class UMaterialInterface*                          TeamMaterialHead;                                         // (Parm, OutParm)
	class UMaterialInterface*                          TeamMaterialBody;                                         // (Parm, OutParm)
};

// Function UTGame.UTFamilyInfo.GetFirstPersonArmsMaterial
struct UUTFamilyInfo_GetFirstPersonArmsMaterial_Params
{
	int                                                TeamNum;                                                  // (Parm)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTFamilyInfo.GetFirstPersonArms
struct UUTFamilyInfo_GetFirstPersonArms_Params
{
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.WriteOnlineStats
struct AUTGame_WriteOnlineStats_Params
{
};

// Function UTGame.UTGame.UpdateGameSettings
struct AUTGame_UpdateGameSettings_Params
{
};

// Function UTGame.UTGame.AllowCheats
struct AUTGame_AllowCheats_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.GetLocationFor
struct AUTGame_GetLocationFor_Params
{
	class APawn*                                       StatusPawn;                                               // (Parm)
	class AActor*                                      LocationObject;                                           // (Parm, OutParm)
	int                                                MessageIndex;                                             // (Parm, OutParm)
	int                                                LocationSpeechOffset;                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.GetEndOfMatchRules
struct AUTGame_GetEndOfMatchRules_Params
{
	int                                                InGoalScore;                                              // (Parm)
	int                                                InTimeLimit;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTGame.ContinueSeamlessTravel
struct AUTGame_ContinueSeamlessTravel_Params
{
};

// Function UTGame.UTGame.ProcessServerTravel
struct AUTGame_ProcessServerTravel_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               bAbsolute;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTGame.GetNextMap
struct AUTGame_GetNextMap_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTGame.GetCurrentMapCycleIndex
struct AUTGame_GetCurrentMapCycleIndex_Params
{
	TArray<struct FString>                             MapList;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.WriteOnlinePlayerScores
struct AUTGame_WriteOnlinePlayerScores_Params
{
};

// Function UTGame.UTGame.ProcessSpeechRecognition
struct AUTGame_ProcessSpeechRecognition_Params
{
	class AUTPlayerController*                         Speaker;                                                  // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (Const, Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTGame.GetBaseUTMutator
struct AUTGame_GetBaseUTMutator_Params
{
	class AUTMutator*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.GetAutoObjectiveFor
struct AUTGame_GetAutoObjectiveFor_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.HandleSeamlessTravelPlayer
struct AUTGame_HandleSeamlessTravelPlayer_Params
{
	class AController*                                 C;                                                        // (Parm, OutParm)
};

// Function UTGame.UTGame.PostSeamlessTravel
struct AUTGame_PostSeamlessTravel_Params
{
};

// Function UTGame.UTGame.GetSeamlessTravelActorList
struct AUTGame_GetSeamlessTravelActorList_Params
{
	bool                                               bToEntry;                                                 // (Parm)
	TArray<class AActor*>                              ActorList;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTGame.ShowPathTo
struct AUTGame_ShowPathTo_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                TeamNum;                                                  // (Parm)
};

// Function UTGame.UTGame.AllowClientToTeleport
struct AUTGame_AllowClientToTeleport_Params
{
	class AUTPlayerReplicationInfo*                    ClientPRI;                                                // (Parm)
	class AActor*                                      DestinationActor;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.AddMutator
struct AUTGame_AddMutator_Params
{
	struct FString                                     mutname;                                                  // (Parm, NeedCtorLink)
	bool                                               bUserAdded;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTGame.ViewObjective
struct AUTGame_ViewObjective_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function UTGame.UTGame.ActivateVehicleFactory
struct AUTGame_ActivateVehicleFactory_Params
{
	class AUTVehicleFactory*                           VF;                                                       // (Parm)
};

// Function UTGame.UTGame.RegisterVehicle
struct AUTGame_RegisterVehicle_Params
{
	class AUTVehicle*                                  V;                                                        // (Parm)
};

// Function UTGame.UTGame.CheckScore
struct AUTGame_CheckScore_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.CheckMaxLives
struct AUTGame_CheckMaxLives_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.RatePlayerStart
struct AUTGame_RatePlayerStart_Params
{
	class APlayerStart*                                P;                                                        // (Parm)
	unsigned char                                      Team;                                                     // (Parm)
	class AController*                                 Player;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.ChoosePlayerStart
struct AUTGame_ChoosePlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm)
	unsigned char                                      InTeam;                                                   // (OptionalParm, Parm)
	class APlayerStart*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.IsConsoleDedicatedServer
struct AUTGame_IsConsoleDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.CalculatedNetSpeed
struct AUTGame_CalculatedNetSpeed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.AddInitialBots
struct AUTGame_AddInitialBots_Params
{
};

// Function UTGame.UTGame.MatchIsInProgress
struct AUTGame_MatchIsInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.EndRound
struct AUTGame_EndRound_Params
{
	class AActor*                                      EndRoundFocus;                                            // (Parm)
};

// Function UTGame.UTGame.JustStarted
struct AUTGame_JustStarted_Params
{
	float                                              MaxElapsedTime;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.PlayStartupMessage
struct AUTGame_PlayStartupMessage_Params
{
};

// Function UTGame.UTGame.PlayRegularEndOfMatchMessage
struct AUTGame_PlayRegularEndOfMatchMessage_Params
{
};

// Function UTGame.UTGame.PlayEndOfMatchMessage
struct AUTGame_PlayEndOfMatchMessage_Params
{
};

// Function UTGame.UTGame.IsAWinner
struct AUTGame_IsAWinner_Params
{
	class APlayerController*                           C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.DominatingVictory
struct AUTGame_DominatingVictory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.FindPlayerStart
struct AUTGame_FindPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm)
	unsigned char                                      InTeam;                                                   // (OptionalParm, Parm)
	struct FString                                     IncomingName;                                             // (OptionalParm, Parm, NeedCtorLink)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.EndLogging
struct AUTGame_EndLogging_Params
{
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
};

// Function UTGame.UTGame.EndGame
struct AUTGame_EndGame_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
};

// Function UTGame.UTGame.StartMatch
struct AUTGame_StartMatch_Params
{
};

// Function UTGame.UTGame.ResetAllPlayerMuteListsToSpectatorChannel
struct AUTGame_ResetAllPlayerMuteListsToSpectatorChannel_Params
{
};

// Function UTGame.UTGame.RemovePlayerFromMuteLists
struct AUTGame_RemovePlayerFromMuteLists_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
};

// Function UTGame.UTGame.SetupPlayerMuteList
struct AUTGame_SetupPlayerMuteList_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
	bool                                               bForceSpectatorChannel;                                   // (Parm)
};

// Function UTGame.UTGame.UpdateGameplayMuteList
struct AUTGame_UpdateGameplayMuteList_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function UTGame.UTGame.EndSpree
struct AUTGame_EndSpree_Params
{
	class AUTPlayerReplicationInfo*                    Killer;                                                   // (Parm)
	class AUTPlayerReplicationInfo*                    Other;                                                    // (Parm)
};

// Function UTGame.UTGame.NotifySpree
struct AUTGame_NotifySpree_Params
{
	class AUTPlayerReplicationInfo*                    Other;                                                    // (Parm)
	int                                                Num;                                                      // (Parm)
};

// Function UTGame.UTGame.ReduceDamage
struct AUTGame_ReduceDamage_Params
{
	int                                                Damage;                                                   // (Parm, OutParm)
	class APawn*                                       injured;                                                  // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class UClass*                                      DamageType;                                               // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function UTGame.UTGame.GetEndGameConditionRule
struct AUTGame_GetEndGameConditionRule_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTGame.GetMapTypeRule
struct AUTGame_GetMapTypeRule_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTGame.InitGameReplicationInfo
struct AUTGame_InitGameReplicationInfo_Params
{
};

// Function UTGame.UTGame.GetBotTeam
struct AUTGame_GetBotTeam_Params
{
	int                                                TeamBots;                                                 // (OptionalParm, Parm)
	bool                                               bUseTeamIndex;                                            // (OptionalParm, Parm)
	int                                                TeamIndex;                                                // (OptionalParm, Parm)
	class AUTTeamInfo*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.InitializeBot
struct AUTGame_InitializeBot_Params
{
	class AUTBot*                                      NewBot;                                                   // (Parm)
	class AUTTeamInfo*                                 BotTeam;                                                  // (Parm)
	struct FCharacterInfo                              BotInfo;                                                  // (Const, Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTGame.SpawnBot
struct AUTGame_SpawnBot_Params
{
	struct FString                                     BotName;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bUseTeamIndex;                                            // (OptionalParm, Parm)
	int                                                TeamIndex;                                                // (OptionalParm, Parm)
	class AUTBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.AddBot
struct AUTGame_AddBot_Params
{
	struct FString                                     BotName;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bUseTeamIndex;                                            // (OptionalParm, Parm)
	int                                                TeamIndex;                                                // (OptionalParm, Parm)
	class AUTBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.AddNamedBot
struct AUTGame_AddNamedBot_Params
{
	struct FString                                     BotName;                                                  // (Parm, NeedCtorLink)
	bool                                               bUseTeamIndex;                                            // (OptionalParm, Parm)
	int                                                TeamIndex;                                                // (OptionalParm, Parm)
	class AUTBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.AddBots
struct AUTGame_AddBots_Params
{
	int                                                Num;                                                      // (Parm)
};

// Function UTGame.UTGame.NeedPlayers
struct AUTGame_NeedPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.KillBot
struct AUTGame_KillBot_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTGame.KillThis
struct AUTGame_KillThis_Params
{
};

// Function UTGame.UTGame.KillOthers
struct AUTGame_KillOthers_Params
{
};

// Function UTGame.UTGame.KillBots
struct AUTGame_KillBots_Params
{
};

// Function UTGame.UTGame.Logout
struct AUTGame_Logout_Params
{
	class AController*                                 Exiting;                                                  // (Parm)
};

// Function UTGame.UTGame.DiscardInventory
struct AUTGame_DiscardInventory_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	class AController*                                 Killer;                                                   // (OptionalParm, Parm)
};

// Function UTGame.UTGame.ChangeName
struct AUTGame_ChangeName_Params
{
	class AController*                                 Other;                                                    // (Parm)
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	bool                                               bNameChange;                                              // (Parm)
};

// Function UTGame.UTGame.CanSpectate
struct AUTGame_CanSpectate_Params
{
	class APlayerController*                           Viewer;                                                   // (Parm)
	class APlayerReplicationInfo*                      ViewTarget;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.AddDefaultInventory
struct AUTGame_AddDefaultInventory_Params
{
	class APawn*                                       PlayerPawn;                                               // (Parm)
};

// Function UTGame.UTGame.CampaignSkillAdjust
struct AUTGame_CampaignSkillAdjust_Params
{
	class AUTBot*                                      aBot;                                                     // (Parm)
};

// Function UTGame.UTGame.RestartPlayer
struct AUTGame_RestartPlayer_Params
{
	class AController*                                 aPlayer;                                                  // (Parm)
};

// Function UTGame.UTGame.GetHandicapNeed
struct AUTGame_GetHandicapNeed_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.AssignHoverboard
struct AUTGame_AssignHoverboard_Params
{
	class AUTPawn*                                     P;                                                        // (Parm)
};

// Function UTGame.UTGame.UpdateGameSettingsCounts
struct AUTGame_UpdateGameSettingsCounts_Params
{
};

// Function UTGame.UTGame.PostLogin
struct AUTGame_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                // (Parm)
};

// Function UTGame.UTGame.AtCapacity
struct AUTGame_AtCapacity_Params
{
	bool                                               bSpectator;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.SetEndGameFocus
struct AUTGame_SetEndGameFocus_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
};

// Function UTGame.UTGame.CheckEndGame
struct AUTGame_CheckEndGame_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.RestartGame
struct AUTGame_RestartGame_Params
{
};

// Function UTGame.UTGame.TooManyBots
struct AUTGame_TooManyBots_Params
{
	class AController*                                 botToRemove;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.SpawnWait
struct AUTGame_SpawnWait_Params
{
	class AAIController*                               B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.WantFastSpawnFor
struct AUTGame_WantFastSpawnFor_Params
{
	class AAIController*                               B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.ShouldRespawn
struct AUTGame_ShouldRespawn_Params
{
	class APickupFactory*                              Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.Login
struct AUTGame_Login_Params
{
	struct FString                                     Portal;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                                 // (Const, Parm)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.LevelRecommendedPlayers
struct AUTGame_LevelRecommendedPlayers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.SetPause
struct AUTGame_SetPause_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	struct FScriptDelegate                             CanUnpauseDelegate;                                       // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.GenericPlayerInitialization
struct AUTGame_GenericPlayerInitialization_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTGame.InitGame
struct AUTGame_InitGame_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTGame.ForceRespawn
struct AUTGame_ForceRespawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.Killed
struct AUTGame_Killed_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 KilledPlayer;                                             // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTGame.AdjustSkill
struct AUTGame_AdjustSkill_Params
{
	class AAIController*                               B;                                                        // (Parm)
	class APlayerController*                           P;                                                        // (Parm)
	bool                                               bWinner;                                                  // (Parm)
};

// Function UTGame.UTGame.ScoreKill
struct AUTGame_ScoreKill_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Other;                                                    // (Parm)
};

// Function UTGame.UTGame.BroadcastDeathMessage
struct AUTGame_BroadcastDeathMessage_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Other;                                                    // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTGame.SetGameSpeed
struct AUTGame_SetGameSpeed_Params
{
	float                                              T;                                                        // (Parm)
};

// Function UTGame.UTGame.SkipPlaySound
struct AUTGame_SkipPlaySound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.ParseKillMessage
struct AUTGame_ParseKillMessage_Params
{
	struct FString                                     KillerName;                                               // (Parm, NeedCtorLink)
	struct FString                                     VictimName;                                               // (Parm, NeedCtorLink)
	struct FString                                     DeathMessage;                                             // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTGame.NotifyNavigationChanged
struct AUTGame_NotifyNavigationChanged_Params
{
	class ANavigationPoint*                            N;                                                        // (Parm)
};

// Function UTGame.UTGame.FindNewObjectives
struct AUTGame_FindNewObjectives_Params
{
	class AUTGameObjective*                            DisabledObjective;                                        // (Parm)
};

// Function UTGame.UTGame.Reset
struct AUTGame_Reset_Params
{
};

// Function UTGame.UTGame.AllowBecomeActivePlayer
struct AUTGame_AllowBecomeActivePlayer_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.DriverLeftVehicle
struct AUTGame_DriverLeftVehicle_Params
{
	class AVehicle*                                    V;                                                        // (Parm)
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTGame.DriverEnteredVehicle
struct AUTGame_DriverEnteredVehicle_Params
{
	class AVehicle*                                    V;                                                        // (Parm)
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTGame.SetGameType
struct AUTGame_SetGameType_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Portal;                                                   // (Parm, NeedCtorLink)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.AllowMutator
struct AUTGame_AllowMutator_Params
{
	struct FString                                     MutatorClassName;                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.UseLowGore
struct AUTGame_UseLowGore_Params
{
	class AWorldInfo*                                  WI;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGame.PostBeginPlay
struct AUTGame_PostBeginPlay_Params
{
};

// Function UTGame.UTGameReplicationInfo.AddGameRule
struct AUTGameReplicationInfo_AddGameRule_Params
{
	struct FString                                     Rule;                                                     // (Parm, NeedCtorLink)
};

// Function UTGame.UTGameReplicationInfo.SetHudShowScores
struct AUTGameReplicationInfo_SetHudShowScores_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function UTGame.UTGameReplicationInfo.ShowMidGameMenu
struct AUTGameReplicationInfo_ShowMidGameMenu_Params
{
	class AUTPlayerController*                         InstigatorPC;                                             // (Parm)
	struct FName                                       TabTag;                                                   // (OptionalParm, Parm)
	bool                                               bEnableInput;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTGameReplicationInfo.Timer
struct AUTGameReplicationInfo_Timer_Params
{
};

// Function UTGame.UTGameReplicationInfo.FlagIsDown
struct AUTGameReplicationInfo_FlagIsDown_Params
{
	int                                                TeamIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameReplicationInfo.SetFlagDown
struct AUTGameReplicationInfo_SetFlagDown_Params
{
	int                                                TeamIndex;                                                // (Parm)
};

// Function UTGame.UTGameReplicationInfo.FlagIsHeldEnemy
struct AUTGameReplicationInfo_FlagIsHeldEnemy_Params
{
	int                                                TeamIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameReplicationInfo.SetFlagHeldEnemy
struct AUTGameReplicationInfo_SetFlagHeldEnemy_Params
{
	int                                                TeamIndex;                                                // (Parm)
};

// Function UTGame.UTGameReplicationInfo.FlagIsHeldFriendly
struct AUTGameReplicationInfo_FlagIsHeldFriendly_Params
{
	int                                                TeamIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameReplicationInfo.SetFlagHeldFriendly
struct AUTGameReplicationInfo_SetFlagHeldFriendly_Params
{
	int                                                TeamIndex;                                                // (Parm)
};

// Function UTGame.UTGameReplicationInfo.FlagsAreHome
struct AUTGameReplicationInfo_FlagsAreHome_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameReplicationInfo.FlagIsHome
struct AUTGameReplicationInfo_FlagIsHome_Params
{
	int                                                TeamIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameReplicationInfo.SetFlagHome
struct AUTGameReplicationInfo_SetFlagHome_Params
{
	int                                                TeamIndex;                                                // (Parm)
};

// Function UTGame.UTGameReplicationInfo.CharacterProcessingComplete
struct AUTGameReplicationInfo_CharacterProcessingComplete_Params
{
};

// Function UTGame.UTGameReplicationInfo.SortPRIArray
struct AUTGameReplicationInfo_SortPRIArray_Params
{
};

// Function UTGame.UTGameReplicationInfo.InOrder
struct AUTGameReplicationInfo_InOrder_Params
{
	class APlayerReplicationInfo*                      P1;                                                       // (Parm)
	class APlayerReplicationInfo*                      P2;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameReplicationInfo.PostBeginPlay
struct AUTGameReplicationInfo_PostBeginPlay_Params
{
};

// Function UTGame.UTVehicle.ShouldLeaveForCombat
struct AUTVehicle_ShouldLeaveForCombat_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.ApplyWeaponEffects
struct AUTVehicle_ApplyWeaponEffects_Params
{
	int                                                OverlayFlags;                                             // (Parm)
	int                                                SeatIndex;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle.GetSeatColor
struct AUTVehicle_GetSeatColor_Params
{
	int                                                SeatIndex;                                                // (Parm)
	bool                                               bIsPlayersSeat;                                           // (Parm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.DisplaySeats
struct AUTVehicle_DisplaySeats_Params
{
	class AUTHUD*                                      HUD;                                                      // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              PosX;                                                     // (Parm)
	float                                              PosY;                                                     // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	int                                                SIndex;                                                   // (Parm)
};

// Function UTGame.UTVehicle.DisplayExtraHud
struct AUTVehicle_DisplayExtraHud_Params
{
	class AUTHUD*                                      HUD;                                                      // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector2D                                   pos;                                                      // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	int                                                SIndex;                                                   // (Parm)
};

// Function UTGame.UTVehicle.DrawBarGraph
struct AUTVehicle_DrawBarGraph_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              MaxWidth;                                                 // (Parm)
	float                                              Height;                                                   // (Parm)
	class UCanvas*                                     DrawCanvas;                                               // (Parm)
};

// Function UTGame.UTVehicle.DisplayHud
struct AUTVehicle_DisplayHud_Params
{
	class AUTHUD*                                      HUD;                                                      // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector2D                                   HudPOS;                                                   // (Parm)
	int                                                SeatIndex;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle.GetVehicleKillStatName
struct AUTVehicle_GetVehicleKillStatName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.CanAttack
struct AUTVehicle_CanAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.DetachDriver
struct AUTVehicle_DetachDriver_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTVehicle.SetMovementEffect
struct AUTVehicle_SetMovementEffect_Params
{
	int                                                SeatIndex;                                                // (Parm)
	bool                                               bSetActive;                                               // (Parm)
	class AUTPawn*                                     UTP;                                                      // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle.SetSeatStoragePawn
struct AUTVehicle_SetSeatStoragePawn_Params
{
	int                                                SeatIndex;                                                // (Parm)
	class APawn*                                       PawnToSit;                                                // (Parm)
};

// Function UTGame.UTVehicle.SetShieldActive
struct AUTVehicle_SetShieldActive_Params
{
	int                                                SeatIndex;                                                // (Parm)
	bool                                               bActive;                                                  // (Parm)
};

// Function UTGame.UTVehicle.OnExitVehicle
struct AUTVehicle_OnExitVehicle_Params
{
	class UUTSeqAct_ExitVehicle*                       Action;                                                   // (Parm)
};

// Function UTGame.UTVehicle.GetSVehicleDebug
struct AUTVehicle_GetSVehicleDebug_Params
{
	TArray<struct FString>                             DebugInfo;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTVehicle.SpawnGibVehicle
struct AUTVehicle_SpawnGibVehicle_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (Parm)
	class UStaticMesh*                                 TheMesh;                                                  // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               bSpinGib;                                                 // (Parm)
	struct FVector                                     ImpulseDirection;                                         // (Parm)
	class UParticleSystem*                             PS_OnBreak;                                               // (Parm)
	class UParticleSystem*                             PS_Trail;                                                 // (Parm)
	class AUTGib*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.ApplyRandomMorphDamage
struct AUTVehicle_ApplyRandomMorphDamage_Params
{
	int                                                Amount;                                                   // (Parm)
};

// Function UTGame.UTVehicle.ApplyMorphHeal
struct AUTVehicle_ApplyMorphHeal_Params
{
	int                                                Amount;                                                   // (Parm)
};

// Function UTGame.UTVehicle.ReceivedHealthChange
struct AUTVehicle_ReceivedHealthChange_Params
{
};

// Function UTGame.UTVehicle.InitializeMorphs
struct AUTVehicle_InitializeMorphs_Params
{
};

// Function UTGame.UTVehicle.RigidBodyCollision
struct AUTVehicle_RigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, EditInline)
	struct FCollisionImpactData                        Collision;                                                // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ContactIndex;                                             // (Parm)
};

// Function UTGame.UTVehicle.GetCollisionDamageModifier
struct AUTVehicle_GetCollisionDamageModifier_Params
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // (Const, Parm, OutParm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetHealth
struct AUTVehicle_GetHealth_Params
{
	int                                                SeatIndex;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.OnPropertyChange
struct AUTVehicle_OnPropertyChange_Params
{
	struct FName                                       PropName;                                                 // (Parm)
};

// Function UTGame.UTVehicle.GetHumanReadableName
struct AUTVehicle_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTVehicle.OnDriverPhysicsAssetChanged
struct AUTVehicle_OnDriverPhysicsAssetChanged_Params
{
	class AUTPawn*                                     UTP;                                                      // (Parm)
};

// Function UTGame.UTVehicle.SitDriver
struct AUTVehicle_SitDriver_Params
{
	class AUTPawn*                                     UTP;                                                      // (Parm)
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle.AttachDriver
struct AUTVehicle_AttachDriver_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTVehicle.CheckDamageSmoke
struct AUTVehicle_CheckDamageSmoke_Params
{
};

// Function UTGame.UTVehicle.StopVehicleSounds
struct AUTVehicle_StopVehicleSounds_Params
{
};

// Function UTGame.UTVehicle.TurretExplosion
struct AUTVehicle_TurretExplosion_Params
{
};

// Function UTGame.UTVehicle.RBPenetrationDestroy
struct AUTVehicle_RBPenetrationDestroy_Params
{
};

// Function UTGame.UTVehicle.ShouldSpawnExplosionLight
struct AUTVehicle_ShouldSpawnExplosionLight_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.SetBurnOut
struct AUTVehicle_SetBurnOut_Params
{
};

// Function UTGame.UTVehicle.DisableCollision
struct AUTVehicle_DisableCollision_Params
{
};

// Function UTGame.UTVehicle.DisableDamageSmoke
struct AUTVehicle_DisableDamageSmoke_Params
{
};

// Function UTGame.UTVehicle.TurnOffShadows
struct AUTVehicle_TurnOffShadows_Params
{
};

// Function UTGame.UTVehicle.StartBurnOut
struct AUTVehicle_StartBurnOut_Params
{
};

// Function UTGame.UTVehicle.AdjustCameraScale
struct AUTVehicle_AdjustCameraScale_Params
{
	bool                                               bMoveCameraIn;                                            // (Parm)
};

// Function UTGame.UTVehicle.VehicleCalcCamera
struct AUTVehicle_VehicleCalcCamera_Params
{
	float                                              DeltaTime;                                                // (Parm)
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	struct FVector                                     CamStart;                                                 // (Parm, OutParm)
	bool                                               bPivotOnly;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle.LimitCameraZ
struct AUTVehicle_LimitCameraZ_Params
{
	float                                              CurrentCamZ;                                              // (Parm)
	float                                              OriginalCamZ;                                             // (Parm)
	int                                                SeatIndex;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetCameraStart
struct AUTVehicle_GetCameraStart_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetCameraFocus
struct AUTVehicle_GetCameraFocus_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.CalcCamera
struct AUTVehicle_CalcCamera_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.FindGoodEndView
struct AUTVehicle_FindGoodEndView_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	struct FRotator                                    GoodRotation;                                             // (Parm, OutParm)
};

// Function UTGame.UTVehicle.VehicleAdjustFlashLocation
struct AUTVehicle_VehicleAdjustFlashLocation_Params
{
	int                                                SeatIndex;                                                // (Parm)
	unsigned char                                      FireModeNum;                                              // (Parm)
	struct FVector                                     NewLocation;                                              // (Parm)
	bool                                               bClear;                                                   // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle.VehicleAdjustFlashCount
struct AUTVehicle_VehicleAdjustFlashCount_Params
{
	int                                                SeatIndex;                                                // (Parm)
	unsigned char                                      FireModeNum;                                              // (Parm)
	bool                                               bClear;                                                   // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle.SpawnImpactEmitter
struct AUTVehicle_SpawnImpactEmitter_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	struct FMaterialImpactEffect                       ImpactEffect;                                             // (Const, Parm, OutParm, NeedCtorLink)
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle.VehicleWeaponImpactEffects
struct AUTVehicle_VehicleWeaponImpactEffects_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle.FindWeaponHitNormal
struct AUTVehicle_FindWeaponHitNormal_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, OutParm)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm)
	struct FVector                                     End;                                                      // (Parm)
	struct FVector                                     Start;                                                    // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Parm, OutParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.VehicleWeaponFireEffects
struct AUTVehicle_VehicleWeaponFireEffects_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle.VehicleWeaponStoppedFiring
struct AUTVehicle_VehicleWeaponStoppedFiring_Params
{
	bool                                               bViaReplication;                                          // (Parm)
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle.WeaponStoppedFiring
struct AUTVehicle_WeaponStoppedFiring_Params
{
	class AWeapon*                                     InWeapon;                                                 // (Parm)
	bool                                               bViaReplication;                                          // (Parm)
};

// Function UTGame.UTVehicle.VehicleWeaponFired
struct AUTVehicle_VehicleWeaponFired_Params
{
	bool                                               bViaReplication;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle.WeaponFired
struct AUTVehicle_WeaponFired_Params
{
	class AWeapon*                                     InWeapon;                                                 // (Parm)
	bool                                               bViaReplication;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle.CauseMuzzleFlashLight
struct AUTVehicle_CauseMuzzleFlashLight_Params
{
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle.GetWeaponViewAxes
struct AUTVehicle_GetWeaponViewAxes_Params
{
	class AUTWeapon*                                   WhichWeapon;                                              // (Parm)
	struct FVector                                     XAxis;                                                    // (Parm, OutParm)
	struct FVector                                     YAxis;                                                    // (Parm, OutParm)
	struct FVector                                     ZAxis;                                                    // (Parm, OutParm)
};

// Function UTGame.UTVehicle.OverrideEndFire
struct AUTVehicle_OverrideEndFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.OverrideBeginFire
struct AUTVehicle_OverrideBeginFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetWeaponAim
struct AUTVehicle_GetWeaponAim_Params
{
	class AUTVehicleWeapon*                            VWeapon;                                                  // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetPhysicalFireStartLoc
struct AUTVehicle_GetPhysicalFireStartLoc_Params
{
	class AUTWeapon*                                   ForWeapon;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetEffectLocation
struct AUTVehicle_GetEffectLocation_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetBarrelLocationAndRotation
struct AUTVehicle_GetBarrelLocationAndRotation_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm)
	struct FRotator                                    SocketRotation;                                           // (OptionalParm, Parm, OutParm)
};

// Function UTGame.UTVehicle.ClearFlashLocation
struct AUTVehicle_ClearFlashLocation_Params
{
	class AWeapon*                                     Who;                                                      // (Parm)
};

// Function UTGame.UTVehicle.SetFlashLocation
struct AUTVehicle_SetFlashLocation_Params
{
	class AWeapon*                                     Who;                                                      // (Parm)
	unsigned char                                      FireModeNum;                                              // (Parm)
	struct FVector                                     NewLoc;                                                   // (Parm)
};

// Function UTGame.UTVehicle.IncrementFlashCount
struct AUTVehicle_IncrementFlashCount_Params
{
	class AWeapon*                                     Who;                                                      // (Parm)
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTVehicle.ClearFlashCount
struct AUTVehicle_ClearFlashCount_Params
{
	class AWeapon*                                     Who;                                                      // (Parm)
};

// Function UTGame.UTVehicle.SetFiringMode
struct AUTVehicle_SetFiringMode_Params
{
	class AWeapon*                                     Weap;                                                     // (Parm)
	unsigned char                                      FiringModeNum;                                            // (Parm)
};

// Function UTGame.UTVehicle.PossessedBy
struct AUTVehicle_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTVehicle.InitializeTurrets
struct AUTVehicle_InitializeTurrets_Params
{
};

// Function UTGame.UTVehicle.PreCacheSeatNames
struct AUTVehicle_PreCacheSeatNames_Params
{
};

// Function UTGame.UTVehicle.InitializeSeats
struct AUTVehicle_InitializeSeats_Params
{
};

// Function UTGame.UTVehicle.ImportantVehicle
struct AUTVehicle_ImportantVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetHomingTarget
struct AUTVehicle_GetHomingTarget_Params
{
	class AUTProjectile*                               Seeker;                                                   // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.TakeDamage
struct AUTVehicle_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle.NotifyTakeHit
struct AUTVehicle_NotifyTakeHit_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function UTGame.UTVehicle.PlayTakeHitEffects
struct AUTVehicle_PlayTakeHitEffects_Params
{
};

// Function UTGame.UTVehicle.PlayHit
struct AUTVehicle_PlayHit_Params
{
	float                                              Damage;                                                   // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Parm)
};

// Function UTGame.UTVehicle.StopLinkedEffect
struct AUTVehicle_StopLinkedEffect_Params
{
};

// Function UTGame.UTVehicle.StartLinkedEffect
struct AUTVehicle_StartLinkedEffect_Params
{
};

// Function UTGame.UTVehicle.DecrementLinkedToCount
struct AUTVehicle_DecrementLinkedToCount_Params
{
};

// Function UTGame.UTVehicle.IncrementLinkedToCount
struct AUTVehicle_IncrementLinkedToCount_Params
{
};

// Function UTGame.UTVehicle.HealDamage
struct AUTVehicle_HealDamage_Params
{
	int                                                Amount;                                                   // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.AllowLinkThroughOwnedActor
struct AUTVehicle_AllowLinkThroughOwnedActor_Params
{
	class AActor*                                      OwnedActor;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.TeamLink
struct AUTVehicle_TeamLink_Params
{
	int                                                TeamNum;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.SetReservation
struct AUTVehicle_SetReservation_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTVehicle.StopsProjectile
struct AUTVehicle_StopsProjectile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.SpokenFor
struct AUTVehicle_SpokenFor_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.ReservationCostMultiplier
struct AUTVehicle_ReservationCostMultiplier_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.BotDesireability
struct AUTVehicle_BotDesireability_Params
{
	class AUTSquadAI*                                  S;                                                        // (Parm)
	int                                                TeamIndex;                                                // (Parm)
	class AActor*                                      Objective;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.OpenPositionFor
struct AUTVehicle_OpenPositionFor_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.Occupied
struct AUTVehicle_Occupied_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.CheckReset
struct AUTVehicle_CheckReset_Params
{
};

// Function UTGame.UTVehicle.PassengerLeave
struct AUTVehicle_PassengerLeave_Params
{
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle.DriverLeave
struct AUTVehicle_DriverLeave_Params
{
	bool                                               bForceLeave;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.PassengerEnter
struct AUTVehicle_PassengerEnter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	int                                                SeatIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetFirstAvailableSeat
struct AUTVehicle_GetFirstAvailableSeat_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.DriverLeft
struct AUTVehicle_DriverLeft_Params
{
};

// Function UTGame.UTVehicle.AttachFlag
struct AUTVehicle_AttachFlag_Params
{
	class AUTCarriedObject*                            FlagActor;                                                // (Parm)
	class APawn*                                       NewDriver;                                                // (Parm)
};

// Function UTGame.UTVehicle.HoldGameObject
struct AUTVehicle_HoldGameObject_Params
{
	class AUDKCarriedObject*                           GameObj;                                                  // (Parm)
};

// Function UTGame.UTVehicle.DriverEnter
struct AUTVehicle_DriverEnter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.HandleEnteringFlag
struct AUTVehicle_HandleEnteringFlag_Params
{
	class AUTPlayerReplicationInfo*                    EnteringPRI;                                              // (Parm)
};

// Function UTGame.UTVehicle.GetMoveTargetFor
struct AUTVehicle_GetMoveTargetFor_Params
{
	class APawn*                                       P;                                                        // (Parm)
	class AUTVehicle*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.NumPassengers
struct AUTVehicle_NumPassengers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.UpdateControllerOnPossess
struct AUTVehicle_UpdateControllerOnPossess_Params
{
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTVehicle.PlayHorn
struct AUTVehicle_PlayHorn_Params
{
};

// Function UTGame.UTVehicle.CheckTurretPitchLimit
struct AUTVehicle_CheckTurretPitchLimit_Params
{
	int                                                NeededPitch;                                              // (Parm)
	int                                                SeatIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.TooCloseToAttack
struct AUTVehicle_TooCloseToAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.LockOnWarning
struct AUTVehicle_LockOnWarning_Params
{
	class AUDKProjectile*                              IncomingMissile;                                          // (Parm)
};

// Function UTGame.UTVehicle.SendLockOnMessage
struct AUTVehicle_SendLockOnMessage_Params
{
	int                                                Switch;                                                   // (Parm)
};

// Function UTGame.UTVehicle.ShootMissile
struct AUTVehicle_ShootMissile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
};

// Function UTGame.UTVehicle.IncomingMissile
struct AUTVehicle_IncomingMissile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
};

// Function UTGame.UTVehicle.Dodge
struct AUTVehicle_Dodge_Params
{
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.TeamChanged_VehicleEffects
struct AUTVehicle_TeamChanged_VehicleEffects_Params
{
};

// Function UTGame.UTVehicle.TeamChanged
struct AUTVehicle_TeamChanged_Params
{
};

// Function UTGame.UTVehicle.SetTeamNum
struct AUTVehicle_SetTeamNum_Params
{
	unsigned char                                      T;                                                        // (Parm)
};

// Function UTGame.UTVehicle.PostRenderPassengerBeacon
struct AUTVehicle_PostRenderPassengerBeacon_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FLinearColor                                TeamColor;                                                // (Parm)
	struct FColor                                      TextColor;                                                // (Parm)
	class AUTWeapon*                                   Weap;                                                     // (Parm)
	class APlayerReplicationInfo*                      InPassengerPRI;                                           // (Parm)
	struct FVector                                     InPassengerTeamBeaconOffset;                              // (Parm)
};

// Function UTGame.UTVehicle.RenderPassengerBeacons
struct AUTVehicle_RenderPassengerBeacons_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FLinearColor                                TeamColor;                                                // (Parm)
	struct FColor                                      TextColor;                                                // (Parm)
	class AUTWeapon*                                   Weap;                                                     // (Parm)
};

// Function UTGame.UTVehicle.GetDisplayedHealth
struct AUTVehicle_GetDisplayedHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.PostRenderFor
struct AUTVehicle_PostRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     CameraPosition;                                           // (Parm)
	struct FVector                                     CameraDir;                                                // (Parm)
};

// Function UTGame.UTVehicle.ShouldShowUseable
struct AUTVehicle_ShouldShowUseable_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	float                                              Dist;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.VehicleLocked
struct AUTVehicle_VehicleLocked_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTVehicle.KickOutBot
struct AUTVehicle_KickOutBot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.TryToDrive
struct AUTVehicle_TryToDrive_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.CanEnterVehicle
struct AUTVehicle_CanEnterVehicle_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetSeatPRI
struct AUTVehicle_GetSeatPRI_Params
{
	int                                                SeatNum;                                                  // (Parm)
	class APlayerReplicationInfo*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.InCustomEntryRadius
struct AUTVehicle_InCustomEntryRadius_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.BlowupVehicle
struct AUTVehicle_BlowupVehicle_Params
{
};

// Function UTGame.UTVehicle.Died
struct AUTVehicle_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetCollisionDamageInstigator
struct AUTVehicle_GetCollisionDamageInstigator_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.TornOff
struct AUTVehicle_TornOff_Params
{
};

// Function UTGame.UTVehicle.ChangeSeat
struct AUTVehicle_ChangeSeat_Params
{
	class AController*                                 ControllerToMove;                                         // (Parm)
	int                                                RequestedSeat;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.HasPriority
struct AUTVehicle_HasPriority_Params
{
	class AController*                                 first;                                                    // (Parm)
	class AController*                                 second;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.ServerChangeSeat
struct AUTVehicle_ServerChangeSeat_Params
{
	int                                                RequestedSeat;                                            // (Parm)
};

// Function UTGame.UTVehicle.ServerAdjacentSeat
struct AUTVehicle_ServerAdjacentSeat_Params
{
	int                                                Direction;                                                // (Parm)
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTVehicle.GetControllerForSeatIndex
struct AUTVehicle_GetControllerForSeatIndex_Params
{
	int                                                SeatIndex;                                                // (Parm)
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetSeatIndexForController
struct AUTVehicle_GetSeatIndexForController_Params
{
	class AController*                                 ControllerToMove;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.AnySeatAvailable
struct AUTVehicle_AnySeatAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.SeatAvailable
struct AUTVehicle_SeatAvailable_Params
{
	int                                                SeatIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.OnAnimEnd
struct AUTVehicle_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function UTGame.UTVehicle.DrivingStatusChanged
struct AUTVehicle_DrivingStatusChanged_Params
{
};

// Function UTGame.UTVehicle.SetKeyVehicle
struct AUTVehicle_SetKeyVehicle_Params
{
};

// Function UTGame.UTVehicle.ReplicatedEvent
struct AUTVehicle_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTVehicle.WeaponRotationChanged
struct AUTVehicle_WeaponRotationChanged_Params
{
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle.GetViewRotation
struct AUTVehicle_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.ShouldClamp
struct AUTVehicle_ShouldClamp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.GetClampedViewRotation
struct AUTVehicle_GetClampedViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.ProcessViewRotation
struct AUTVehicle_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FRotator                                    out_ViewRotation;                                         // (Parm, OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (Parm, OutParm)
};

// Function UTGame.UTVehicle.ServerSetConsoleTurning
struct AUTVehicle_ServerSetConsoleTurning_Params
{
	bool                                               bNewConsoleTurning;                                       // (Parm)
};

// Function UTGame.UTVehicle.GetSeatIndexFromPrefix
struct AUTVehicle_GetSeatIndexFromPrefix_Params
{
	struct FString                                     Prefix;                                                   // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.TakeFireDamage
struct AUTVehicle_TakeFireDamage_Params
{
};

// Function UTGame.UTVehicle.EnableVehicle
struct AUTVehicle_EnableVehicle_Params
{
};

// Function UTGame.UTVehicle.DisableVehicle
struct AUTVehicle_DisableVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.SetTexturesToBeResident
struct AUTVehicle_SetTexturesToBeResident_Params
{
	bool                                               bActive;                                                  // (Parm)
};

// Function UTGame.UTVehicle.Destroyed
struct AUTVehicle_Destroyed_Params
{
};

// Function UTGame.UTVehicle.DriverRadiusDamage
struct AUTVehicle_DriverRadiusDamage_Params
{
	float                                              DamageAmount;                                             // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              Momentum;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
	float                                              DamageFalloffExponent;                                    // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle.TakeWaterDamage
struct AUTVehicle_TakeWaterDamage_Params
{
};

// Function UTGame.UTVehicle.PancakeOther
struct AUTVehicle_PancakeOther_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function UTGame.UTVehicle.RanInto
struct AUTVehicle_RanInto_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTVehicle.FindAutoExit
struct AUTVehicle_FindAutoExit_Params
{
	class APawn*                                       ExitingDriver;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.ExitRotation
struct AUTVehicle_ExitRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.EntryAnnouncement
struct AUTVehicle_EntryAnnouncement_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTVehicle.VehicleEvent
struct AUTVehicle_VehicleEvent_Params
{
	struct FName                                       EventTag;                                                 // (Parm)
};

// Function UTGame.UTVehicle.PlayVehicleAnimation
struct AUTVehicle_PlayVehicleAnimation_Params
{
	struct FName                                       EventTag;                                                 // (Parm)
};

// Function UTGame.UTVehicle.PlayVehicleSound
struct AUTVehicle_PlayVehicleSound_Params
{
	struct FName                                       SoundTag;                                                 // (Parm)
};

// Function UTGame.UTVehicle.TriggerVehicleEffect
struct AUTVehicle_TriggerVehicleEffect_Params
{
	struct FName                                       EventTag;                                                 // (Parm)
};

// Function UTGame.UTVehicle.SetVehicleEffectParms
struct AUTVehicle_SetVehicleEffectParms_Params
{
	struct FName                                       TriggerName;                                              // (Parm)
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, EditInline)
};

// Function UTGame.UTVehicle.InitializeEffects
struct AUTVehicle_InitializeEffects_Params
{
};

// Function UTGame.UTVehicle.CreateVehicleEffect
struct AUTVehicle_CreateVehicleEffect_Params
{
	int                                                EffectIndex;                                              // (Parm)
};

// Function UTGame.UTVehicle.CriticalChargeAttack
struct AUTVehicle_CriticalChargeAttack_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.RecommendCharge
struct AUTVehicle_RecommendCharge_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class APawn*                                       Enemy;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.IsDriverSeat
struct AUTVehicle_IsDriverSeat_Params
{
	class AVehicle*                                    TestSeatPawn;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.ContinueOnFoot
struct AUTVehicle_ContinueOnFoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.AdjustedStrength
struct AUTVehicle_AdjustedStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.RenderMapIcon
struct AUTVehicle_RenderMapIcon_Params
{
	class UUTMapInfo*                                  MP;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
	struct FLinearColor                                FinalColor;                                               // (Parm)
};

// Function UTGame.UTVehicle.DrawKillIcon
struct AUTVehicle_DrawKillIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              ScreenX;                                                  // (Parm)
	float                                              ScreenY;                                                  // (Parm)
	float                                              HUDScaleX;                                                // (Parm)
	float                                              HUDScaleY;                                                // (Parm)
};

// Function UTGame.UTVehicle.DisplayWeaponBar
struct AUTVehicle_DisplayWeaponBar_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTHUD*                                      HUD;                                                      // (Parm)
};

// Function UTGame.UTVehicle.GetRanOverDamageType
struct AUTVehicle_GetRanOverDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.EjectSeat
struct AUTVehicle_EjectSeat_Params
{
	int                                                SeatIdx;                                                  // (Parm)
};

// Function UTGame.UTVehicle.StopSpawnEffect
struct AUTVehicle_StopSpawnEffect_Params
{
};

// Function UTGame.UTVehicle.PlaySpawnEffect
struct AUTVehicle_PlaySpawnEffect_Params
{
};

// Function UTGame.UTVehicle.GetChargePower
struct AUTVehicle_GetChargePower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle.FellOutOfWorld
struct AUTVehicle_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (Parm)
};

// Function UTGame.UTVehicle.SetInputs
struct AUTVehicle_SetInputs_Params
{
	float                                              InForward;                                                // (Parm)
	float                                              InStrafe;                                                 // (Parm)
	float                                              InUp;                                                     // (Parm)
};

// Function UTGame.UTVehicle.UpdateLookSteerStatus
struct AUTVehicle_UpdateLookSteerStatus_Params
{
};

// Function UTGame.UTVehicle.CreateDamageMaterialInstance
struct AUTVehicle_CreateDamageMaterialInstance_Params
{
};

// Function UTGame.UTVehicle.ReattachMesh
struct AUTVehicle_ReattachMesh_Params
{
};

// Function UTGame.UTVehicle.UpdateShadowSettings
struct AUTVehicle_UpdateShadowSettings_Params
{
	bool                                               bWantShadow;                                              // (Parm)
};

// Function UTGame.UTVehicle.PostBeginPlay
struct AUTVehicle_PostBeginPlay_Params
{
};

// Function UTGame.UTLocalMessage.KilledByVictoryMessage
struct UUTLocalMessage_KilledByVictoryMessage_Params
{
	int                                                AnnouncementIndex;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTLocalMessage.GetPos
struct UUTLocalMessage_GetPos_Params
{
	int                                                Switch;                                                   // (Parm)
	class AHUD*                                        myHUD;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTLocalMessage.AddAnnouncement
struct UUTLocalMessage_AddAnnouncement_Params
{
	class AUTAnnouncer*                                Announcer;                                                // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTLocalMessage.ShouldBeRemoved
struct UUTLocalMessage_ShouldBeRemoved_Params
{
	class AUTQueuedAnnouncement*                       MyAnnouncement;                                           // (Parm)
	class UClass*                                      NewAnnouncementClass;                                     // (Parm)
	int                                                NewMessageIndex;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTLocalMessage.AnnouncementSound
struct UUTLocalMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTLocalMessage.AnnouncementLevel
struct UUTLocalMessage_AnnouncementLevel_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleCantCarryFlagMessage.GetString
struct UUTVehicleCantCarryFlagMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTVehicleCantCarryFlagMessage.AnnouncementLevel
struct UUTVehicleCantCarryFlagMessage_AnnouncementLevel_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleCantCarryFlagMessage.AnnouncementSound
struct UUTVehicleCantCarryFlagMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleCantCarryFlagMessage.ClientReceive
struct UUTVehicleCantCarryFlagMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTGameObjective.ReachedParkingSpot
struct AUTGameObjective_ReachedParkingSpot_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.MarkShootSpotsFor
struct AUTGameObjective_MarkShootSpotsFor_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTGameObjective.TriggerFlagEvent
struct AUTGameObjective_TriggerFlagEvent_Params
{
	struct FName                                       EventType;                                                // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function UTGame.UTGameObjective.SetAlarm
struct AUTGameObjective_SetAlarm_Params
{
	bool                                               bNowOn;                                                   // (Parm)
};

// Function UTGame.UTGameObjective.GetFlag
struct AUTGameObjective_GetFlag_Params
{
	class AUTCarriedObject*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.ValidSpawnPointFor
struct AUTGameObjective_ValidSpawnPointFor_Params
{
	unsigned char                                      TeamIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.TeleportTo
struct AUTGameObjective_TeleportTo_Params
{
	class AUTPawn*                                     Traveler;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.FindGoodEndView
struct AUTGameObjective_FindGoodEndView_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	struct FRotator                                    GoodRotation;                                             // (Parm, OutParm)
};

// Function UTGame.UTGameObjective.SetTeam
struct AUTGameObjective_SetTeam_Params
{
	unsigned char                                      TeamIndex;                                                // (Parm)
};

// Function UTGame.UTGameObjective.ShareScore
struct AUTGameObjective_ShareScore_Params
{
	int                                                TotalScore;                                               // (Parm)
	struct FString                                     EventDesc;                                                // (Parm, NeedCtorLink)
};

// Function UTGame.UTGameObjective.AddScorer
struct AUTGameObjective_AddScorer_Params
{
	class AUTPlayerReplicationInfo*                    PRI;                                                      // (Parm)
	float                                              Pct;                                                      // (Parm)
};

// Function UTGame.UTGameObjective.ClientReset
struct AUTGameObjective_ClientReset_Params
{
};

// Function UTGame.UTGameObjective.Reset
struct AUTGameObjective_Reset_Params
{
};

// Function UTGame.UTGameObjective.BetterObjectiveThan
struct AUTGameObjective_BetterObjectiveThan_Params
{
	class AUTGameObjective*                            Best;                                                     // (Parm)
	unsigned char                                      DesiredTeamNum;                                           // (Parm)
	unsigned char                                      RequesterTeamNum;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.GetNumDefenders
struct AUTGameObjective_GetNumDefenders_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.TellBotHowToDisable
struct AUTGameObjective_TellBotHowToDisable_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.GetHumanReadableName
struct AUTGameObjective_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTGameObjective.NearObjective
struct AUTGameObjective_NearObjective_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.BotNearObjective
struct AUTGameObjective_BotNearObjective_Params
{
	class AAIController*                               C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.CanDoubleJump
struct AUTGameObjective_CanDoubleJump_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.NeedsHealing
struct AUTGameObjective_NeedsHealing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.TeamLink
struct AUTGameObjective_TeamLink_Params
{
	int                                                TeamNum;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.TellBotHowToHeal
struct AUTGameObjective_TellBotHowToHeal_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.Shootable
struct AUTGameObjective_Shootable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.IsActive
struct AUTGameObjective_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.IsNeutral
struct AUTGameObjective_IsNeutral_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.IsCritical
struct AUTGameObjective_IsCritical_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.DrawMapSelection
struct AUTGameObjective_DrawMapSelection_Params
{
	class UUTMapInfo*                                  MP;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
};

// Function UTGame.UTGameObjective.RenderExtraDetails
struct AUTGameObjective_RenderExtraDetails_Params
{
	class UUTMapInfo*                                  MP;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
	float                                              ColorPercent;                                             // (Parm)
	bool                                               bSelected;                                                // (Parm)
};

// Function UTGame.UTGameObjective.RenderMinimap
struct AUTGameObjective_RenderMinimap_Params
{
	class UUTMapInfo*                                  MP;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
	float                                              ColorPercent;                                             // (Parm)
};

// Function UTGame.UTGameObjective.HighlightOnMinimap
struct AUTGameObjective_HighlightOnMinimap_Params
{
	int                                                Switch;                                                   // (Parm)
};

// Function UTGame.UTGameObjective.CalcCamera
struct AUTGameObjective_CalcCamera_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.UsedBy
struct AUTGameObjective_UsedBy_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.FindNearestFriendlyNode
struct AUTGameObjective_FindNearestFriendlyNode_Params
{
	int                                                TeamIndex;                                                // (Parm)
	class AUTGameObjective*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.ReplicatedEvent
struct AUTGameObjective_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTGameObjective.UpdateTeamStaticMeshes
struct AUTGameObjective_UpdateTeamStaticMeshes_Params
{
};

// Function UTGame.UTGameObjective.AddTeamStaticMesh
struct AUTGameObjective_AddTeamStaticMesh_Params
{
	class AUTTeamStaticMesh*                           SMesh;                                                    // (Parm)
};

// Function UTGame.UTGameObjective.Destroyed
struct AUTGameObjective_Destroyed_Params
{
};

// Function UTGame.UTGameObjective.GetAutoObjectiveActor
struct AUTGameObjective_GetAutoObjectiveActor_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.GetLocationSpeechFor
struct AUTGameObjective_GetLocationSpeechFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	int                                                LocationSpeechOffset;                                     // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.GetLocationMessageIndex
struct AUTGameObjective_GetLocationMessageIndex_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class APawn*                                       StatusPawn;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.GetHUDOffset
struct AUTGameObjective_GetHUDOffset_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.IsStandalone
struct AUTGameObjective_IsStandalone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameObjective.PostBeginPlay
struct AUTGameObjective_PostBeginPlay_Params
{
};

// Function UTGame.UTWeapon.EnableFriendlyWarningCrosshair
struct AUTWeapon_EnableFriendlyWarningCrosshair_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.DrawKillIcon
struct AUTWeapon_DrawKillIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              ScreenX;                                                  // (Parm)
	float                                              ScreenY;                                                  // (Parm)
	float                                              HUDScaleX;                                                // (Parm)
	float                                              HUDScaleY;                                                // (Parm)
};

// Function UTGame.UTWeapon.CoversScreenSpace
struct AUTWeapon_CoversScreenSpace_Params
{
	struct FVector                                     ScreenLoc;                                                // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.HolderEnteredVehicle
struct AUTWeapon_HolderEnteredVehicle_Params
{
};

// Function UTGame.UTWeapon.CanViewAccelerationWhenFiring
struct AUTWeapon_CanViewAccelerationWhenFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.ClientWeaponThrown
struct AUTWeapon_ClientWeaponThrown_Params
{
};

// Function UTGame.UTWeapon.DropFrom
struct AUTWeapon_DropFrom_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     StartVelocity;                                            // (Parm)
};

// Function UTGame.UTWeapon.GetPowerPerc
struct AUTWeapon_GetPowerPerc_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.Activate
struct AUTWeapon_Activate_Params
{
};

// Function UTGame.UTWeapon.ThrottleLook
struct AUTWeapon_ThrottleLook_Params
{
	float                                              aTurn;                                                    // (Parm, OutParm)
	float                                              aLookUp;                                                  // (Parm, OutParm)
};

// Function UTGame.UTWeapon.RecommendLongRangedAttack
struct AUTWeapon_RecommendLongRangedAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.DetourWeight
struct AUTWeapon_DetourWeight_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              PathWeight;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.SetWeaponOverlayFlags
struct AUTWeapon_SetWeaponOverlayFlags_Params
{
	class AUTPawn*                                     OwnerPawn;                                                // (Parm)
};

// Function UTGame.UTWeapon.Destroyed
struct AUTWeapon_Destroyed_Params
{
};

// Function UTGame.UTWeapon.GetArmAnimNodeSeq
struct AUTWeapon_GetArmAnimNodeSeq_Params
{
	class UAnimNodeSequence*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.SetupArmsAnim
struct AUTWeapon_SetupArmsAnim_Params
{
};

// Function UTGame.UTWeapon.RefireCheckTimer
struct AUTWeapon_RefireCheckTimer_Params
{
};

// Function UTGame.UTWeapon.GetEffectLocation
struct AUTWeapon_GetEffectLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.GetPhysicalFireStartLoc
struct AUTWeapon_GetPhysicalFireStartLoc_Params
{
	struct FVector                                     AimDir;                                                   // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.FiringPutDownWeapon
struct AUTWeapon_FiringPutDownWeapon_Params
{
};

// Function UTGame.UTWeapon.TryPutDown
struct AUTWeapon_TryPutDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.AllowSwitchTo
struct AUTWeapon_AllowSwitchTo_Params
{
	class AWeapon*                                     NewWeapon;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.PreloadTextures
struct AUTWeapon_PreloadTextures_Params
{
	bool                                               bForcePreload;                                            // (Parm)
};

// Function UTGame.UTWeapon.FireAmmunition
struct AUTWeapon_FireAmmunition_Params
{
};

// Function UTGame.UTWeapon.ClientWeaponSet
struct AUTWeapon_ClientWeaponSet_Params
{
	bool                                               bOptionalSet;                                             // (Parm)
	bool                                               bDoNotActivate;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTWeapon.SendToFiringState
struct AUTWeapon_SendToFiringState_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeapon.EndFire
struct AUTWeapon_EndFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeapon.ClientEndFire
struct AUTWeapon_ClientEndFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeapon.EndZoom
struct AUTWeapon_EndZoom_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
};

// Function UTGame.UTWeapon.StartZoom
struct AUTWeapon_StartZoom_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
};

// Function UTGame.UTWeapon.CheckZoom
struct AUTWeapon_CheckZoom_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.GetZoomedState
struct AUTWeapon_GetZoomedState_Params
{
	TEnumAsByte<EZoomState>                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.ProcessInstantHit
struct AUTWeapon_ProcessInstantHit_Params
{
	unsigned char                                      FiringMode;                                               // (Parm)
	struct FImpactInfo                                 Impact;                                                   // (Parm)
	int                                                NumHits;                                                  // (OptionalParm, Parm)
};

// Function UTGame.UTWeapon.ProjectileFire
struct AUTWeapon_ProjectileFire_Params
{
	class AProjectile*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.InstantAimHelp
struct AUTWeapon_InstantAimHelp_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     EndTrace;                                                 // (Parm)
	struct FImpactInfo                                 RealImpact;                                               // (Parm)
	struct FImpactInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.InstantFire
struct AUTWeapon_InstantFire_Params
{
};

// Function UTGame.UTWeapon.InstantFireEndTrace
struct AUTWeapon_InstantFireEndTrace_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.InstantFireStartTrace
struct AUTWeapon_InstantFireStartTrace_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.bReadyToFire
struct AUTWeapon_bReadyToFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.WeaponEmpty
struct AUTWeapon_WeaponEmpty_Params
{
};

// Function UTGame.UTWeapon.DenyPickupQuery
struct AUTWeapon_DenyPickupQuery_Params
{
	class UClass*                                      ItemClass;                                                // (Parm)
	class AActor*                                      Pickup;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.Loaded
struct AUTWeapon_Loaded_Params
{
	bool                                               bUseWeaponMax;                                            // (OptionalParm, Parm)
};

// Function UTGame.UTWeapon.NeedAmmo
struct AUTWeapon_NeedAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.DesireAmmo
struct AUTWeapon_DesireAmmo_Params
{
	bool                                               bDetour;                                                  // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.HasAnyAmmo
struct AUTWeapon_HasAnyAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.HasAmmo
struct AUTWeapon_HasAmmo_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	int                                                Amount;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.AmmoMaxed
struct AUTWeapon_AmmoMaxed_Params
{
	int                                                Mode;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.AddAmmo
struct AUTWeapon_AddAmmo_Params
{
	int                                                Amount;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.ConsumeAmmo
struct AUTWeapon_ConsumeAmmo_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeapon.StillFiring
struct AUTWeapon_StillFiring_Params
{
	unsigned char                                      FireMode;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.ReadyToFire
struct AUTWeapon_ReadyToFire_Params
{
	bool                                               bFinished;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.IsFullyCharged
struct AUTWeapon_IsFullyCharged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.BestMode
struct AUTWeapon_BestMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.ShouldFireWithoutTarget
struct AUTWeapon_ShouldFireWithoutTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.SplashJump
struct AUTWeapon_SplashJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.RangedAttackTime
struct AUTWeapon_RangedAttackTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.SuggestDefenseStyle
struct AUTWeapon_SuggestDefenseStyle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.SuggestAttackStyle
struct AUTWeapon_SuggestAttackStyle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.RecommendRangedAttack
struct AUTWeapon_RecommendRangedAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.FocusOnLeader
struct AUTWeapon_FocusOnLeader_Params
{
	bool                                               bLeaderFiring;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.FireOnRelease
struct AUTWeapon_FireOnRelease_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.GetOptimalRangeFor
struct AUTWeapon_GetOptimalRangeFor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.CanHeal
struct AUTWeapon_CanHeal_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.GetDamageRadius
struct AUTWeapon_GetDamageRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.BotDesireability
struct AUTWeapon_BotDesireability_Params
{
	class AActor*                                      PickupHolder;                                             // (Parm)
	class APawn*                                       P;                                                        // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.CanAttack
struct AUTWeapon_CanAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.GetWeaponRating
struct AUTWeapon_GetWeaponRating_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.RelativeStrengthVersus
struct AUTWeapon_RelativeStrengthVersus_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              Dist;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.AdjustPlayerDamage
struct AUTWeapon_AdjustPlayerDamage_Params
{
	int                                                Damage;                                                   // (Parm, OutParm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTWeapon.LagRot
struct AUTWeapon_LagRot_Params
{
	int                                                NewValue;                                                 // (Parm)
	int                                                LastValue;                                                // (Parm)
	float                                              MaxDiff;                                                  // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.ShouldLagRot
struct AUTWeapon_ShouldLagRot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.SetPosition
struct AUTWeapon_SetPosition_Params
{
	class AUDKPawn*                                    Holder;                                                   // (Parm)
};

// Function UTGame.UTWeapon.GetHand
struct AUTWeapon_GetHand_Params
{
	TEnumAsByte<EWeaponHand>                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.CanThrow
struct AUTWeapon_CanThrow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.ServerReselectWeapon
struct AUTWeapon_ServerReselectWeapon_Params
{
};

// Function UTGame.UTWeapon.GetViewAxes
struct AUTWeapon_GetViewAxes_Params
{
	struct FVector                                     XAxis;                                                    // (Parm, OutParm)
	struct FVector                                     YAxis;                                                    // (Parm, OutParm)
	struct FVector                                     ZAxis;                                                    // (Parm, OutParm)
};

// Function UTGame.UTWeapon.PerformWeaponChange
struct AUTWeapon_PerformWeaponChange_Params
{
};

// Function UTGame.UTWeapon.ChangeVisibility
struct AUTWeapon_ChangeVisibility_Params
{
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTWeapon.DetachMuzzleFlash
struct AUTWeapon_DetachMuzzleFlash_Params
{
};

// Function UTGame.UTWeapon.DetachWeapon
struct AUTWeapon_DetachWeapon_Params
{
};

// Function UTGame.UTWeapon.AttachMuzzleFlash
struct AUTWeapon_AttachMuzzleFlash_Params
{
};

// Function UTGame.UTWeapon.SetMuzzleFlashParams
struct AUTWeapon_SetMuzzleFlashParams_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, EditInline)
};

// Function UTGame.UTWeapon.AttachWeaponTo
struct AUTWeapon_AttachWeaponTo_Params
{
	class USkeletalMeshComponent*                      MeshCpnt;                                                 // (Parm, EditInline)
	struct FName                                       SocketName;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTWeapon.PlayWeaponEquip
struct AUTWeapon_PlayWeaponEquip_Params
{
};

// Function UTGame.UTWeapon.GetEquipTime
struct AUTWeapon_GetEquipTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.TimeWeaponEquipping
struct AUTWeapon_TimeWeaponEquipping_Params
{
};

// Function UTGame.UTWeapon.PlayWeaponPutDown
struct AUTWeapon_PlayWeaponPutDown_Params
{
};

// Function UTGame.UTWeapon.TimeWeaponPutDown
struct AUTWeapon_TimeWeaponPutDown_Params
{
};

// Function UTGame.UTWeapon.StopMuzzleFlash
struct AUTWeapon_StopMuzzleFlash_Params
{
};

// Function UTGame.UTWeapon.CauseMuzzleFlash
struct AUTWeapon_CauseMuzzleFlash_Params
{
};

// Function UTGame.UTWeapon.CauseMuzzleFlashLight
struct AUTWeapon_CauseMuzzleFlashLight_Params
{
};

// Function UTGame.UTWeapon.MuzzleFlashTimer
struct AUTWeapon_MuzzleFlashTimer_Params
{
};

// Function UTGame.UTWeapon.PlayFiringSound
struct AUTWeapon_PlayFiringSound_Params
{
};

// Function UTGame.UTWeapon.WeaponPlaySound
struct AUTWeapon_WeaponPlaySound_Params
{
	class USoundCue*                                   Sound;                                                    // (Parm)
	float                                              NoiseLoudness;                                            // (OptionalParm, Parm)
};

// Function UTGame.UTWeapon.WeaponCalcCamera
struct AUTWeapon_WeaponCalcCamera_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
};

// Function UTGame.UTWeapon.ShakeView
struct AUTWeapon_ShakeView_Params
{
};

// Function UTGame.UTWeapon.StopFireEffects
struct AUTWeapon_StopFireEffects_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeapon.PlayFireEffects
struct AUTWeapon_PlayFireEffects_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	struct FVector                                     HitLocation;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTWeapon.PlayWeaponAnimation
struct AUTWeapon_PlayWeaponAnimation_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
	float                                              fDesiredDuration;                                         // (Parm)
	bool                                               bLoop;                                                    // (OptionalParm, Parm)
	class USkeletalMeshComponent*                      SkelMesh;                                                 // (OptionalParm, Parm, EditInline)
};

// Function UTGame.UTWeapon.PlayArmAnimation
struct AUTWeapon_PlayArmAnimation_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
	float                                              fDesiredDuration;                                         // (Parm)
	bool                                               OffHand;                                                  // (OptionalParm, Parm)
	bool                                               bLoop;                                                    // (OptionalParm, Parm)
	class USkeletalMeshComponent*                      SkelMesh;                                                 // (OptionalParm, Parm, EditInline)
};

// Function UTGame.UTWeapon.GetFireInterval
struct AUTWeapon_GetFireInterval_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.DisplayDebug
struct AUTWeapon_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function UTGame.UTWeapon.GetAmmoCount
struct AUTWeapon_GetAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.DrawLockedOn
struct AUTWeapon_DrawLockedOn_Params
{
	class AHUD*                                        H;                                                        // (Parm)
};

// Function UTGame.UTWeapon.DrawWeaponCrosshair
struct AUTWeapon_DrawWeaponCrosshair_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
};

// Function UTGame.UTWeapon.ActiveRenderOverlays
struct AUTWeapon_ActiveRenderOverlays_Params
{
	class AHUD*                                        H;                                                        // (Parm)
};

// Function UTGame.UTWeapon.SetSkin
struct AUTWeapon_SetSkin_Params
{
	class UMaterial*                                   NewMaterial;                                              // (Parm)
};

// Function UTGame.UTWeapon.ShouldSwitchTo
struct AUTWeapon_ShouldSwitchTo_Params
{
	class AUTWeapon*                                   InWeapon;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeapon.CalcInventoryWeight
struct AUTWeapon_CalcInventoryWeight_Params
{
};

// Function UTGame.UTWeapon.ReplicatedEvent
struct AUTWeapon_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTWeapon.CreateOverlayMesh
struct AUTWeapon_CreateOverlayMesh_Params
{
};

// Function UTGame.UTWeapon.AdjustWeaponTimingForConsole
struct AUTWeapon_AdjustWeaponTimingForConsole_Params
{
};

// Function UTGame.UTWeapon.PostBeginPlay
struct AUTWeapon_PostBeginPlay_Params
{
};

// Function UTGame.UTWeapon.ServerStartFire
struct AUTWeapon_ServerStartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTIdleKickWarningMessage.GetString
struct UUTIdleKickWarningMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTEmitter.SetLightEnvironment
struct AUTEmitter_SetLightEnvironment_Params
{
	class ULightEnvironmentComponent*                  Light;                                                    // (Parm, EditInline)
};

// Function UTGame.UTEmitter.SetTemplate
struct AUTEmitter_SetTemplate_Params
{
	class UParticleSystem*                             NewTemplate;                                              // (Parm)
	bool                                               bDestroyOnFinish;                                         // (OptionalParm, Parm)
};

// Function UTGame.UTEmitter.GetTemplateForDistance
struct AUTEmitter_GetTemplateForDistance_Params
{
	TArray<struct FDistanceBasedParticleTemplate>      TemplateList;                                             // (Const, Parm, OutParm, NeedCtorLink)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	class AWorldInfo*                                  WI;                                                       // (Parm)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTReplicatedEmitter.PostBeginPlay
struct AUTReplicatedEmitter_PostBeginPlay_Params
{
};

// Function UTGame.UTWillowWhisp.StartNextPath
struct AUTWillowWhisp_StartNextPath_Params
{
};

// Function UTGame.UTWillowWhisp.SetTemplate
struct AUTWillowWhisp_SetTemplate_Params
{
	class UParticleSystem*                             NewTemplate;                                              // (Parm)
	bool                                               bDestroyOnFinish;                                         // (OptionalParm, Parm)
};

// Function UTGame.UTWillowWhisp.ReplicatedEvent
struct AUTWillowWhisp_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTWillowWhisp.SetInitialState
struct AUTWillowWhisp_SetInitialState_Params
{
};

// Function UTGame.UTWillowWhisp.PostBeginPlay
struct AUTWillowWhisp_PostBeginPlay_Params
{
};

// Function UTGame.UTObjectiveSpecificMessage.SetHUDDisplay
struct UUTObjectiveSpecificMessage_SetHUDDisplay_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (Parm)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
};

// Function UTGame.UTObjectiveSpecificMessage.GetString
struct UUTObjectiveSpecificMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTObjectiveSpecificMessage.ClientReceive
struct UUTObjectiveSpecificMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTObjectiveSpecificMessage.AnnouncementSound
struct UUTObjectiveSpecificMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTObjectiveSpecificMessage.GetObjectiveAnnouncement
struct UUTObjectiveSpecificMessage_GetObjectiveAnnouncement_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	class UObject*                                     Objective;                                                // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	struct FObjectiveAnnouncementInfo                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTObjectiveAnnouncement.SetHUDDisplay
struct UUTObjectiveAnnouncement_SetHUDDisplay_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (Parm)
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
};

// Function UTGame.UTObjectiveAnnouncement.ShouldBeRemoved
struct UUTObjectiveAnnouncement_ShouldBeRemoved_Params
{
	class AUTQueuedAnnouncement*                       MyAnnouncement;                                           // (Parm)
	class UClass*                                      NewAnnouncementClass;                                     // (Parm)
	int                                                NewMessageIndex;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTObjectiveAnnouncement.GetObjectiveAnnouncement
struct UUTObjectiveAnnouncement_GetObjectiveAnnouncement_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	class UObject*                                     Objective;                                                // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	struct FObjectiveAnnouncementInfo                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTWeaponPawn.ApplyWeaponEffects
struct AUTWeaponPawn_ApplyWeaponEffects_Params
{
	int                                                OverlayFlags;                                             // (Parm)
	int                                                SeatIndex;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTWeaponPawn.DisplayHud
struct AUTWeaponPawn_DisplayHud_Params
{
	class AUTHUD*                                      HUD;                                                      // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector2D                                   HudPOS;                                                   // (Parm)
	int                                                SIndex;                                                   // (OptionalParm, Parm)
};

// Function UTGame.UTWeaponPawn.TooCloseToAttack
struct AUTWeaponPawn_TooCloseToAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPawn.Died
struct AUTWeaponPawn_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPawn.DriverLeave
struct AUTWeaponPawn_DriverLeave_Params
{
	bool                                               bForceLeave;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPawn.FaceRotation
struct AUTWeaponPawn_FaceRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTWeaponPawn.HoldGameObject
struct AUTWeaponPawn_HoldGameObject_Params
{
	class AUDKCarriedObject*                           GameObj;                                                  // (Parm)
};

// Function UTGame.UTWeaponPawn.AttachDriver
struct AUTWeaponPawn_AttachDriver_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTWeaponPawn.SetBaseEyeheight
struct AUTWeaponPawn_SetBaseEyeheight_Params
{
};

// Function UTGame.UTWeaponPawn.GetCollisionRadius
struct AUTWeaponPawn_GetCollisionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPawn.DoJump
struct AUTWeaponPawn_DoJump_Params
{
	bool                                               bUpdating;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPawn.SetMovementPhysics
struct AUTWeaponPawn_SetMovementPhysics_Params
{
};

// Function UTGame.UTWeaponPawn.BaseChange
struct AUTWeaponPawn_BaseChange_Params
{
};

// Function UTGame.UTWeaponPawn.JumpOffPawn
struct AUTWeaponPawn_JumpOffPawn_Params
{
};

// Function UTGame.UTWeaponPawn.AddVelocity
struct AUTWeaponPawn_AddVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
};

// Function UTGame.UTWeaponPawn.DropToGround
struct AUTWeaponPawn_DropToGround_Params
{
};

// Function UTGame.UTWeaponPawn.PlaceExitingDriver
struct AUTWeaponPawn_PlaceExitingDriver_Params
{
	class APawn*                                       ExitingDriver;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPawn.AdjustCameraScale
struct AUTWeaponPawn_AdjustCameraScale_Params
{
	bool                                               bIn;                                                      // (Parm)
};

// Function UTGame.UTWeaponPawn.ServerChangeSeat
struct AUTWeaponPawn_ServerChangeSeat_Params
{
	int                                                RequestedSeat;                                            // (Parm)
};

// Function UTGame.UTWeaponPawn.ServerAdjacentSeat
struct AUTWeaponPawn_ServerAdjacentSeat_Params
{
	int                                                Direction;                                                // (Parm)
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTWeaponPawn.DriverLeft
struct AUTWeaponPawn_DriverLeft_Params
{
};

// Function UTGame.UTWeaponPawn.PossessedBy
struct AUTWeaponPawn_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTWeaponPawn.ClearFlashLocation
struct AUTWeaponPawn_ClearFlashLocation_Params
{
	class AWeapon*                                     Who;                                                      // (Parm)
};

// Function UTGame.UTWeaponPawn.SetFlashLocation
struct AUTWeaponPawn_SetFlashLocation_Params
{
	class AWeapon*                                     Who;                                                      // (Parm)
	unsigned char                                      FireModeNum;                                              // (Parm)
	struct FVector                                     NewLoc;                                                   // (Parm)
};

// Function UTGame.UTWeaponPawn.ClearFlashCount
struct AUTWeaponPawn_ClearFlashCount_Params
{
	class AWeapon*                                     Who;                                                      // (Parm)
};

// Function UTGame.UTWeaponPawn.IncrementFlashCount
struct AUTWeaponPawn_IncrementFlashCount_Params
{
	class AWeapon*                                     Who;                                                      // (Parm)
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeaponPawn.SetFiringMode
struct AUTWeaponPawn_SetFiringMode_Params
{
	class AWeapon*                                     Weap;                                                     // (Parm)
	unsigned char                                      FiringModeNum;                                            // (Parm)
};

// Function UTGame.UTWeaponPawn.ProcessViewRotation
struct AUTWeaponPawn_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FRotator                                    out_ViewRotation;                                         // (Parm, OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (Parm, OutParm)
};

// Function UTGame.UTWeaponPawn.CalcCamera
struct AUTWeaponPawn_CalcCamera_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPawn.ReplicatedEvent
struct AUTWeaponPawn_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTWeaponPawn.DisplayDebug
struct AUTWeaponPawn_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function UTGame.UTWeaponPawn.GetVehicleDrivingStatName
struct AUTWeaponPawn_GetVehicleDrivingStatName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGameMessage.GetColor
struct UUTTeamGameMessage_GetColor_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGameMessage.GetPos
struct UUTTeamGameMessage_GetPos_Params
{
	int                                                Switch;                                                   // (Parm)
	class AHUD*                                        myHUD;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGameMessage.GetFontSize
struct UUTTeamGameMessage_GetFontSize_Params
{
	int                                                Switch;                                                   // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI1;                                              // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI2;                                              // (Parm)
	class APlayerReplicationInfo*                      LocalPlayer;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGameMessage.AnnouncementSound
struct UUTTeamGameMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGameMessage.GetString
struct UUTTeamGameMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTTeamGameMessage.ClientReceive
struct UUTTeamGameMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTTimerMessage.GetFontSize
struct UUTTimerMessage_GetFontSize_Params
{
	int                                                Switch;                                                   // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI1;                                              // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI2;                                              // (Parm)
	class APlayerReplicationInfo*                      LocalPlayer;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTimerMessage.AnnouncementSound
struct UUTTimerMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTimerMessage.GetString
struct UUTTimerMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTTimerMessage.ClientReceive
struct UUTTimerMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTStartupMessage.GetString
struct UUTStartupMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTStartupMessage.AnnouncementSound
struct UUTStartupMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTStartupMessage.ClientReceive
struct UUTStartupMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTHUD.DisplayConsoleMessages
struct AUTHUD_DisplayConsoleMessages_Params
{
};

// Function UTGame.UTHUD.DisplayLeaderBoard
struct AUTHUD_DisplayLeaderBoard_Params
{
	struct FVector2D                                   pos;                                                      // (Parm)
};

// Function UTGame.UTHUD.DrawNameplateBackground
struct AUTHUD_DrawNameplateBackground_Params
{
	struct FVector2D                                   pos;                                                      // (Parm)
	float                                              WordWidth;                                                // (Parm)
	struct FLinearColor                                NameplateColor;                                           // (Parm)
	float                                              WordHeight;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTHUD.DisplayFragCount
struct AUTHUD_DisplayFragCount_Params
{
	struct FVector2D                                   pos;                                                      // (Parm)
};

// Function UTGame.UTHUD.DisplayScoring
struct AUTHUD_DisplayScoring_Params
{
};

// Function UTGame.UTHUD.DisplayPowerups
struct AUTHUD_DisplayPowerups_Params
{
};

// Function UTGame.UTHUD.DisplayAmmo
struct AUTHUD_DisplayAmmo_Params
{
	class AUTWeapon*                                   Weapon;                                                   // (Parm)
};

// Function UTGame.UTHUD.DisplayPawnDoll
struct AUTHUD_DisplayPawnDoll_Params
{
};

// Function UTGame.UTHUD.DisplayClock
struct AUTHUD_DisplayClock_Params
{
};

// Function UTGame.UTHUD.DisplayHUDMessage
struct AUTHUD_DisplayHUDMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	float                                              XOffsetPct;                                               // (OptionalParm, Parm)
	float                                              YOffsetPct;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTHUD.DisplayPortrait
struct AUTHUD_DisplayPortrait_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTHUD.HidePortrait
struct AUTHUD_HidePortrait_Params
{
};

// Function UTGame.UTHUD.ShowPortrait
struct AUTHUD_ShowPortrait_Params
{
	class AUTPlayerReplicationInfo*                    ShowPRI;                                                  // (Parm)
	float                                              PortraitDuration;                                         // (OptionalParm, Parm)
	bool                                               bOverrideCurrentSpeaker;                                  // (OptionalParm, Parm)
};

// Function UTGame.UTHUD.GetFontSizeIndex
struct AUTHUD_GetFontSizeIndex_Params
{
	int                                                FontSize;                                                 // (Parm)
	class UFont*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTHUD.FormatTime
struct AUTHUD_FormatTime_Params
{
	int                                                Seconds;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTHUD.DrawBarGraph
struct AUTHUD_DrawBarGraph_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              MaxWidth;                                                 // (Parm)
	float                                              Height;                                                   // (Parm)
	class UCanvas*                                     DrawCanvas;                                               // (Parm)
	struct FColor                                      BarColor;                                                 // (Parm)
	struct FColor                                      BackColor;                                                // (Parm)
};

// Function UTGame.UTHUD.DrawHealth
struct AUTHUD_DrawHealth_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              MaxWidth;                                                 // (Parm)
	float                                              Height;                                                   // (Parm)
	class UCanvas*                                     DrawCanvas;                                               // (Parm)
	unsigned char                                      Alpha;                                                    // (OptionalParm, Parm)
};

// Function UTGame.UTHUD.DrawBeaconBackground
struct AUTHUD_DrawBeaconBackground_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	struct FLinearColor                                DrawColor;                                                // (Parm)
	class UCanvas*                                     DrawCanvas;                                               // (Parm)
};

// Function UTGame.UTHUD.DrawBackground
struct AUTHUD_DrawBackground_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	struct FLinearColor                                DrawColor;                                                // (Parm)
	class UCanvas*                                     DrawCanvas;                                               // (Parm)
};

// Function UTGame.UTHUD.DisplayDamage
struct AUTHUD_DisplayDamage_Params
{
};

// Function UTGame.UTHUD.UpdateDamage
struct AUTHUD_UpdateDamage_Params
{
};

// Function UTGame.UTHUD.FlashDamage
struct AUTHUD_FlashDamage_Params
{
	float                                              FlashPosition;                                            // (Parm)
};

// Function UTGame.UTHUD.DisplayHit
struct AUTHUD_DisplayHit_Params
{
	struct FVector                                     HitDir;                                                   // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTHUD.GetTeamColor
struct AUTHUD_GetTeamColor_Params
{
	int                                                TeamIndex;                                                // (Parm)
	struct FLinearColor                                ImageColor;                                               // (OptionalParm, Parm, OutParm)
	struct FColor                                      TextColor;                                                // (OptionalParm, Parm, OutParm)
};

// Function UTGame.UTHUD.StartMusic
struct AUTHUD_StartMusic_Params
{
};

// Function UTGame.UTHUD.GetUIController
struct AUTHUD_GetUIController_Params
{
	class ULocalPlayer*                                LP;                                                       // (OptionalParm, Parm, OutParm)
	class UUIInteraction*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTHUD.DrawAIOverlays
struct AUTHUD_DrawAIOverlays_Params
{
};

// Function UTGame.UTHUD.DisplayMap
struct AUTHUD_DisplayMap_Params
{
};

// Function UTGame.UTHUD.DisplayWeaponBar
struct AUTHUD_DisplayWeaponBar_Params
{
};

// Function UTGame.UTHUD.DrawPostGameHud
struct AUTHUD_DrawPostGameHud_Params
{
};

// Function UTGame.UTHUD.DrawLivingHud
struct AUTHUD_DrawLivingHud_Params
{
};

// Function UTGame.UTHUD.DisplayLocalMessages
struct AUTHUD_DisplayLocalMessages_Params
{
};

// Function UTGame.UTHUD.DrawMicIcon
struct AUTHUD_DrawMicIcon_Params
{
};

// Function UTGame.UTHUD.DrawGameHud
struct AUTHUD_DrawGameHud_Params
{
};

// Function UTGame.UTHUD.ShowSquadRoutes
struct AUTHUD_ShowSquadRoutes_Params
{
};

// Function UTGame.UTHUD.ShowAllAI
struct AUTHUD_ShowAllAI_Params
{
};

// Function UTGame.UTHUD.DrawHUD
struct AUTHUD_DrawHUD_Params
{
};

// Function UTGame.UTHUD.PostRender
struct AUTHUD_PostRender_Params
{
};

// Function UTGame.UTHUD.DrawMessageText
struct AUTHUD_DrawMessageText_Params
{
	struct FHudLocalizedMessage                        LocalMessage;                                             // (Parm, NeedCtorLink)
	float                                              ScreenX;                                                  // (Parm)
	float                                              ScreenY;                                                  // (Parm)
};

// Function UTGame.UTHUD.GetScreenCoords
struct AUTHUD_GetScreenCoords_Params
{
	float                                              PosY;                                                     // (Parm)
	float                                              ScreenX;                                                  // (Parm, OutParm)
	float                                              ScreenY;                                                  // (Parm, OutParm)
	struct FHudLocalizedMessage                        InMessage;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTHUD.ResolveHUDPosition
struct AUTHUD_ResolveHUDPosition_Params
{
	struct FVector2D                                   Position;                                                 // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTHUD.Message
struct AUTHUD_Message_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
	struct FString                                     msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       MsgType;                                                  // (Parm)
	float                                              Lifetime;                                                 // (OptionalParm, Parm)
};

// Function UTGame.UTHUD.PostBeginPlay
struct AUTHUD_PostBeginPlay_Params
{
};

// Function UTGame.UTHUD.ShrinkHUD
struct AUTHUD_ShrinkHUD_Params
{
};

// Function UTGame.UTHUD.GrowHUD
struct AUTHUD_GrowHUD_Params
{
};

// Function UTGame.UTHUD.SetDisplayedOrders
struct AUTHUD_SetDisplayedOrders_Params
{
	struct FString                                     OrderText;                                                // (Parm, NeedCtorLink)
};

// Function UTGame.UTHUD.DrawTileCentered
struct AUTHUD_DrawTileCentered_Params
{
	class UTexture2D*                                  Tex;                                                      // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              YL;                                                       // (Parm)
	float                                              U;                                                        // (Parm)
	float                                              V;                                                        // (Parm)
	float                                              UL;                                                       // (Parm)
	float                                              VL;                                                       // (Parm)
	struct FLinearColor                                C;                                                        // (Parm)
};

// Function UTGame.UTCarriedObject.CheckPain
struct AUTCarriedObject_CheckPain_Params
{
};

// Function UTGame.UTCarriedObject.CheckFit
struct AUTCarriedObject_CheckFit_Params
{
};

// Function UTGame.UTCarriedObject.AutoSendHome
struct AUTCarriedObject_AutoSendHome_Params
{
};

// Function UTGame.UTCarriedObject.CheckTouching
struct AUTCarriedObject_CheckTouching_Params
{
};

// Function UTGame.UTCarriedObject.LogDropped
struct AUTCarriedObject_LogDropped_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function UTGame.UTCarriedObject.LogReturned
struct AUTCarriedObject_LogReturned_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function UTGame.UTCarriedObject.LogTaken
struct AUTCarriedObject_LogTaken_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function UTGame.UTCarriedObject.GetKismetEventObjective
struct AUTCarriedObject_GetKismetEventObjective_Params
{
	class AUDKGameObjective*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObject.Landed
struct AUTCarriedObject_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
};

// Function UTGame.UTCarriedObject.NotReachableBy
struct AUTCarriedObject_NotReachableBy_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTCarriedObject.ClientReturnedHome
struct AUTCarriedObject_ClientReturnedHome_Params
{
};

// Function UTGame.UTCarriedObject.ReplicatedEvent
struct AUTCarriedObject_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTCarriedObject.FellOutOfWorld
struct AUTCarriedObject_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (Parm)
};

// Function UTGame.UTCarriedObject.Touch
struct AUTCarriedObject_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTCarriedObject.ValidHolder
struct AUTCarriedObject_ValidHolder_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObject.Position
struct AUTCarriedObject_Position_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObject.ClearHolder
struct AUTCarriedObject_ClearHolder_Params
{
};

// Function UTGame.UTCarriedObject.CalcSetHome
struct AUTCarriedObject_CalcSetHome_Params
{
};

// Function UTGame.UTCarriedObject.BroadcastTakenDroppedMessage
struct AUTCarriedObject_BroadcastTakenDroppedMessage_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function UTGame.UTCarriedObject.BroadcastTakenFromBaseMessage
struct AUTCarriedObject_BroadcastTakenFromBaseMessage_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function UTGame.UTCarriedObject.BroadcastDroppedMessage
struct AUTCarriedObject_BroadcastDroppedMessage_Params
{
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function UTGame.UTCarriedObject.BroadcastReturnedMessage
struct AUTCarriedObject_BroadcastReturnedMessage_Params
{
};

// Function UTGame.UTCarriedObject.KismetSendHome
struct AUTCarriedObject_KismetSendHome_Params
{
};

// Function UTGame.UTCarriedObject.SendHome
struct AUTCarriedObject_SendHome_Params
{
	class AController*                                 Returner;                                                 // (Parm)
};

// Function UTGame.UTCarriedObject.Drop
struct AUTCarriedObject_Drop_Params
{
	class AController*                                 Killer;                                                   // (OptionalParm, Parm)
};

// Function UTGame.UTCarriedObject.Score
struct AUTCarriedObject_Score_Params
{
};

// Function UTGame.UTCarriedObject.SendFlagMessage
struct AUTCarriedObject_SendFlagMessage_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTCarriedObject.SetHolder
struct AUTCarriedObject_SetHolder_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTCarriedObject.RenderEnemyMapIcon
struct AUTCarriedObject_RenderEnemyMapIcon_Params
{
	class UUTMapInfo*                                  MP;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
	class AUTGameObjective*                            NearbyObjective;                                          // (Parm)
};

// Function UTGame.UTCarriedObject.RenderMapIcon
struct AUTCarriedObject_RenderMapIcon_Params
{
	class UUTMapInfo*                                  MP;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
};

// Function UTGame.UTCarriedObject.DrawIcon
struct AUTCarriedObject_DrawIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     IconLocation;                                             // (Parm)
	float                                              IconWidth;                                                // (Parm)
	float                                              IconAlpha;                                                // (Parm)
};

// Function UTGame.UTCarriedObject.GetIconTexture
struct AUTCarriedObject_GetIconTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObject.HighlightOnMinimap
struct AUTCarriedObject_HighlightOnMinimap_Params
{
	int                                                Switch;                                                   // (Parm)
};

// Function UTGame.UTCarriedObject.ShouldMinimapRenderFor
struct AUTCarriedObject_ShouldMinimapRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObject.FlagUse
struct AUTCarriedObject_FlagUse_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObject.PostBeginPlay
struct AUTCarriedObject_PostBeginPlay_Params
{
};

// Function UTGame.UTPickupFactory.PickedUpBy
struct AUTPickupFactory_PickedUpBy_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPickupFactory.SetInitialState
struct AUTPickupFactory_SetInitialState_Params
{
};

// Function UTGame.UTPickupFactory.SetPickupHidden
struct AUTPickupFactory_SetPickupHidden_Params
{
};

// Function UTGame.UTPickupFactory.SetPickupVisible
struct AUTPickupFactory_SetPickupVisible_Params
{
};

// Function UTGame.UTPickupFactory.InitPickupMeshEffects
struct AUTPickupFactory_InitPickupMeshEffects_Params
{
};

// Function UTGame.UTPickupFactory.GetPickupStatName
struct AUTPickupFactory_GetPickupStatName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPickupFactory.SetPickupMesh
struct AUTPickupFactory_SetPickupMesh_Params
{
};

// Function UTGame.UTPickupFactory.StartPulse
struct AUTPickupFactory_StartPulse_Params
{
	struct FLinearColor                                TargetEmissive;                                           // (Parm)
};

// Function UTGame.UTPickupFactory.StopsProjectile
struct AUTPickupFactory_StopsProjectile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPickupFactory.RespawnEffect
struct AUTPickupFactory_RespawnEffect_Params
{
};

// Function UTGame.UTPickupFactory.UpdateHUD
struct AUTPickupFactory_UpdateHUD_Params
{
	class AUTHUD*                                      H;                                                        // (Parm)
};

// Function UTGame.UTPickupFactory.ShouldCamp
struct AUTPickupFactory_ShouldCamp_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              MaxWait;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPickupFactory.ReplicatedEvent
struct AUTPickupFactory_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTPickupFactory.ShutDown
struct AUTPickupFactory_ShutDown_Params
{
};

// Function UTGame.UTPickupFactory.DisablePickup
struct AUTPickupFactory_DisablePickup_Params
{
};

// Function UTGame.UTPickupFactory.SetResOut
struct AUTPickupFactory_SetResOut_Params
{
};

// Function UTGame.UTPickupFactory.PostBeginPlay
struct AUTPickupFactory_PostBeginPlay_Params
{
};

// Function UTGame.UTWeaponLocker.ShowHidden
struct AUTWeaponLocker_ShowHidden_Params
{
};

// Function UTGame.UTWeaponLocker.DestroyWeapons
struct AUTWeaponLocker_DestroyWeapons_Params
{
};

// Function UTGame.UTWeaponLocker.SetPlayerNearby
struct AUTWeaponLocker_SetPlayerNearby_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	bool                                               bNewPlayerNearby;                                         // (Parm)
	bool                                               bPlayEffects;                                             // (Parm)
};

// Function UTGame.UTWeaponLocker.NotifyLocalPlayerDead
struct AUTWeaponLocker_NotifyLocalPlayerDead_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function UTGame.UTWeaponLocker.ShowActive
struct AUTWeaponLocker_ShowActive_Params
{
};

// Function UTGame.UTWeaponLocker.InitializePickup
struct AUTWeaponLocker_InitializePickup_Params
{
};

// Function UTGame.UTWeaponLocker.DetourWeight
struct AUTWeaponLocker_DetourWeight_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              PathWeight;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponLocker.BotDesireability
struct AUTWeaponLocker_BotDesireability_Params
{
	class APawn*                                       Bot;                                                      // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponLocker.GetHumanReadableName
struct AUTWeaponLocker_GetHumanReadableName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTWeaponLocker.Reset
struct AUTWeaponLocker_Reset_Params
{
};

// Function UTGame.UTWeaponLocker.ReplaceWeapon
struct AUTWeaponLocker_ReplaceWeapon_Params
{
	int                                                Index;                                                    // (Parm)
	class UClass*                                      NewWeaponClass;                                           // (Parm)
};

// Function UTGame.UTWeaponLocker.ReplicatedEvent
struct AUTWeaponLocker_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTWeaponLocker.InitializeWeapons
struct AUTWeaponLocker_InitializeWeapons_Params
{
};

// Function UTGame.UTWeaponLocker.PostBeginPlay
struct AUTWeaponLocker_PostBeginPlay_Params
{
};

// Function UTGame.UTWeaponLocker.HasCustomer
struct AUTWeaponLocker_HasCustomer_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponLocker.AddCustomer
struct AUTWeaponLocker_AddCustomer_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponLocker.ShouldCamp
struct AUTWeaponLocker_ShouldCamp_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              MaxWait;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponLocker.SetInitialState
struct AUTWeaponLocker_SetInitialState_Params
{
};

// Function UTGame.UTWeaponPickupFactory.NotifyLocalPlayerDead
struct AUTWeaponPickupFactory_NotifyLocalPlayerDead_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function UTGame.UTWeaponPickupFactory.ShowHidden
struct AUTWeaponPickupFactory_ShowHidden_Params
{
};

// Function UTGame.UTWeaponPickupFactory.ShowActive
struct AUTWeaponPickupFactory_ShowActive_Params
{
};

// Function UTGame.UTWeaponPickupFactory.SpawnCopyFor
struct AUTWeaponPickupFactory_SpawnCopyFor_Params
{
	class APawn*                                       Recipient;                                                // (Parm)
};

// Function UTGame.UTWeaponPickupFactory.PickedUpBy
struct AUTWeaponPickupFactory_PickedUpBy_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTWeaponPickupFactory.AllowPickup
struct AUTWeaponPickupFactory_AllowPickup_Params
{
	class AUTBot*                                      Bot;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPickupFactory.HasCustomer
struct AUTWeaponPickupFactory_HasCustomer_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPickupFactory.AddCustomer
struct AUTWeaponPickupFactory_AddCustomer_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPickupFactory.StartSleeping
struct AUTWeaponPickupFactory_StartSleeping_Params
{
};

// Function UTGame.UTWeaponPickupFactory.SetWeaponStay
struct AUTWeaponPickupFactory_SetWeaponStay_Params
{
};

// Function UTGame.UTWeaponPickupFactory.CheckForErrors
struct AUTWeaponPickupFactory_CheckForErrors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponPickupFactory.ReplicatedEvent
struct AUTWeaponPickupFactory_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTWeaponPickupFactory.SetPickupMesh
struct AUTWeaponPickupFactory_SetPickupMesh_Params
{
};

// Function UTGame.UTWeaponPickupFactory.SetPickupHidden
struct AUTWeaponPickupFactory_SetPickupHidden_Params
{
};

// Function UTGame.UTWeaponPickupFactory.SetPickupVisible
struct AUTWeaponPickupFactory_SetPickupVisible_Params
{
};

// Function UTGame.UTWeaponPickupFactory.InitializePickup
struct AUTWeaponPickupFactory_InitializePickup_Params
{
};

// Function UTGame.UTMusicManager.ChangeTrack
struct AUTMusicManager_ChangeTrack_Params
{
	TEnumAsByte<EMusicState>                           NewState;                                                 // (Parm)
};

// Function UTGame.UTMusicManager.Tick
struct AUTMusicManager_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTMusicManager.ProcessMusicEvent
struct AUTMusicManager_ProcessMusicEvent_Params
{
};

// Function UTGame.UTMusicManager.AlreadyInActionMusic
struct AUTMusicManager_AlreadyInActionMusic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMusicManager.MusicEvent
struct AUTMusicManager_MusicEvent_Params
{
	int                                                NewEventIndex;                                            // (Parm)
};

// Function UTGame.UTMusicManager.CreateNewTrack
struct AUTMusicManager_CreateNewTrack_Params
{
	class USoundCue*                                   MusicCue;                                                 // (Parm)
	class UAudioComponent*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function UTGame.UTMusicManager.IntroFinished
struct AUTMusicManager_IntroFinished_Params
{
	class UAudioComponent*                             AC;                                                       // (Parm, EditInline)
};

// Function UTGame.UTMusicManager.StartMusic
struct AUTMusicManager_StartMusic_Params
{
};

// Function UTGame.UTMusicManager.PostBeginPlay
struct AUTMusicManager_PostBeginPlay_Params
{
};

// Function UTGame.UTDamageType.GetDeathCameraEffectVictim
struct UUTDamageType_GetDeathCameraEffectVictim_Params
{
	class AUTPawn*                                     UTP;                                                      // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDamageType.GetDeathCameraEffectInstigator
struct UUTDamageType_GetDeathCameraEffectInstigator_Params
{
	class AUTPawn*                                     UTP;                                                      // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDamageType.CalcDeathCamera
struct UUTDamageType_CalcDeathCamera_Params
{
	class AUTPawn*                                     P;                                                        // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
	float                                              CameraFOV;                                                // (Parm, OutParm)
};

// Function UTGame.UTDamageType.DrawKillIcon
struct UUTDamageType_DrawKillIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              ScreenX;                                                  // (Parm)
	float                                              ScreenY;                                                  // (Parm)
	float                                              HUDScaleX;                                                // (Parm)
	float                                              HUDScaleY;                                                // (Parm)
};

// Function UTGame.UTDamageType.SpawnExtraGibEffects
struct UUTDamageType_SpawnExtraGibEffects_Params
{
	class AUTGib*                                      TheGib;                                                   // (Parm)
};

// Function UTGame.UTDamageType.CreateDeathGoreChunks
struct UUTDamageType_CreateDeathGoreChunks_Params
{
	class AUTPawn*                                     ThePawn;                                                  // (Parm)
	class UClass*                                      TheDamageType;                                            // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Const, Parm, OutParm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTDamageType.BoneBreaker
struct UUTDamageType_BoneBreaker_Params
{
	class AUTPawn*                                     ThePawn;                                                  // (Parm)
	class USkeletalMeshComponent*                      TheMesh;                                                  // (Parm, EditInline)
	struct FVector                                     Impulse;                                                  // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FName                                       BoneName;                                                 // (Parm)
};

// Function UTGame.UTDamageType.CreateDeathSkeleton
struct UUTDamageType_CreateDeathSkeleton_Params
{
	class AUTPawn*                                     ThePawn;                                                  // (Parm)
	class UClass*                                      TheDamageType;                                            // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Const, Parm, OutParm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTDamageType.DoCustomDamageEffects
struct UUTDamageType_DoCustomDamageEffects_Params
{
	class AUTPawn*                                     ThePawn;                                                  // (Parm)
	class UClass*                                      TheDamageType;                                            // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Const, Parm, OutParm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTDamageType.ShouldGib
struct UUTDamageType_ShouldGib_Params
{
	class AUTPawn*                                     DeadPawn;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDamageType.SpawnGibEffects
struct UUTDamageType_SpawnGibEffects_Params
{
	class AUTGib*                                      Gib;                                                      // (Parm)
};

// Function UTGame.UTDamageType.PawnTornOff
struct UUTDamageType_PawnTornOff_Params
{
	class AUTPawn*                                     DeadPawn;                                                 // (Parm)
};

// Function UTGame.UTDamageType.ScoreKill
struct UUTDamageType_ScoreKill_Params
{
	class AUTPlayerReplicationInfo*                    KillerPRI;                                                // (Parm)
	class AUTPlayerReplicationInfo*                    KilledPRI;                                                // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
};

// Function UTGame.UTDamageType.GetStatsName
struct UUTDamageType_GetStatsName_Params
{
	struct FName                                       StatType;                                                 // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDamageType.IncrementSuicides
struct UUTDamageType_IncrementSuicides_Params
{
	class AUTPlayerReplicationInfo*                    KilledPRI;                                                // (Parm)
};

// Function UTGame.UTDamageType.IncrementDeaths
struct UUTDamageType_IncrementDeaths_Params
{
	class AUTPlayerReplicationInfo*                    KilledPRI;                                                // (Parm)
};

// Function UTGame.UTDamageType.IncrementKills
struct UUTDamageType_IncrementKills_Params
{
	class AUTPlayerReplicationInfo*                    KillerPRI;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDamageType.GetHitEffectDuration
struct UUTDamageType_GetHitEffectDuration_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              Damage;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDamageType.SpawnHitEffect
struct UUTDamageType_SpawnHitEffect_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              Damage;                                                   // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	struct FName                                       BoneName;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTDamageType.SuicideMessage
struct UUTDamageType_SuicideMessage_Params
{
	class APlayerReplicationInfo*                      Victim;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTDamageType.DeathMessage
struct UUTDamageType_DeathMessage_Params
{
	class APlayerReplicationInfo*                      Killer;                                                   // (Parm)
	class APlayerReplicationInfo*                      Victim;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTSeqAct_PlayCameraAnim.GetObjClassVersion
struct UUTSeqAct_PlayCameraAnim_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSeqAct_StopCameraAnim.GetObjClassVersion
struct UUTSeqAct_StopCameraAnim_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTInventoryManager.SwitchToBestWeapon
struct AUTInventoryManager_SwitchToBestWeapon_Params
{
	bool                                               bForceADifferentWeapon;                                   // (OptionalParm, Parm)
};

// Function UTGame.UTInventoryManager.DrawHUD
struct AUTInventoryManager_DrawHUD_Params
{
	class AHUD*                                        H;                                                        // (Parm)
};

// Function UTGame.UTInventoryManager.SwitchToPreviousWeapon
struct AUTInventoryManager_SwitchToPreviousWeapon_Params
{
};

// Function UTGame.UTInventoryManager.ChangedWeapon
struct AUTInventoryManager_ChangedWeapon_Params
{
};

// Function UTGame.UTInventoryManager.HasInventoryOfClass
struct AUTInventoryManager_HasInventoryOfClass_Params
{
	class UClass*                                      InvClass;                                                 // (Parm)
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTInventoryManager.AddAmmoToWeapon
struct AUTInventoryManager_AddAmmoToWeapon_Params
{
	int                                                AmountToAdd;                                              // (Parm)
	class UClass*                                      WeaponClassToAddTo;                                       // (Parm)
};

// Function UTGame.UTInventoryManager.NeedsAmmo
struct AUTInventoryManager_NeedsAmmo_Params
{
	class UClass*                                      TestWeapon;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTInventoryManager.RemoveFromInventory
struct AUTInventoryManager_RemoveFromInventory_Params
{
	class AInventory*                                  ItemToRemove;                                             // (Parm)
};

// Function UTGame.UTInventoryManager.DiscardInventory
struct AUTInventoryManager_DiscardInventory_Params
{
};

// Function UTGame.UTInventoryManager.AddInventory
struct AUTInventoryManager_AddInventory_Params
{
	class AInventory*                                  NewItem;                                                  // (Parm)
	bool                                               bDoNotActivate;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTInventoryManager.CheckSwitchTo
struct AUTInventoryManager_CheckSwitchTo_Params
{
	class AUTWeapon*                                   NewWeapon;                                                // (Parm)
};

// Function UTGame.UTInventoryManager.RetrySwitchTo
struct AUTInventoryManager_RetrySwitchTo_Params
{
	class AUTWeapon*                                   NewWeapon;                                                // (Parm)
};

// Function UTGame.UTInventoryManager.ProcessRetrySwitch
struct AUTInventoryManager_ProcessRetrySwitch_Params
{
};

// Function UTGame.UTInventoryManager.CreateInventory
struct AUTInventoryManager_CreateInventory_Params
{
	class UClass*                                      NewInventoryItemClass;                                    // (Parm)
	bool                                               bDoNotActivate;                                           // (OptionalParm, Parm)
	class AInventory*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTInventoryManager.ClientWeaponSet
struct AUTInventoryManager_ClientWeaponSet_Params
{
	class AWeapon*                                     NewWeapon;                                                // (Parm)
	bool                                               bOptionalSet;                                             // (Parm)
	bool                                               bDoNotActivate;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTInventoryManager.SetPendingWeapon
struct AUTInventoryManager_SetPendingWeapon_Params
{
	class AWeapon*                                     DesiredWeapon;                                            // (Parm)
};

// Function UTGame.UTInventoryManager.ServerSetCurrentWeapon
struct AUTInventoryManager_ServerSetCurrentWeapon_Params
{
	class AWeapon*                                     DesiredWeapon;                                            // (Parm)
};

// Function UTGame.UTInventoryManager.ClientSetCurrentWeapon
struct AUTInventoryManager_ClientSetCurrentWeapon_Params
{
	class AWeapon*                                     DesiredWeapon;                                            // (Parm)
};

// Function UTGame.UTInventoryManager.SetCurrentWeapon
struct AUTInventoryManager_SetCurrentWeapon_Params
{
	class AWeapon*                                     DesiredWeapon;                                            // (Parm)
};

// Function UTGame.UTInventoryManager.AllAmmo
struct AUTInventoryManager_AllAmmo_Params
{
	bool                                               bAmmoForSuperWeapons;                                     // (OptionalParm, Parm)
};

// Function UTGame.UTInventoryManager.NextWeapon
struct AUTInventoryManager_NextWeapon_Params
{
};

// Function UTGame.UTInventoryManager.PrevWeapon
struct AUTInventoryManager_PrevWeapon_Params
{
};

// Function UTGame.UTInventoryManager.AdjustWeapon
struct AUTInventoryManager_AdjustWeapon_Params
{
	int                                                NewOffset;                                                // (Parm)
};

// Function UTGame.UTInventoryManager.SwitchWeapon
struct AUTInventoryManager_SwitchWeapon_Params
{
	unsigned char                                      NewGroup;                                                 // (Parm)
};

// Function UTGame.UTInventoryManager.GetWeaponList
struct AUTInventoryManager_GetWeaponList_Params
{
	TArray<class AUTWeapon*>                           WeaponList;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               bFilter;                                                  // (OptionalParm, Parm)
	int                                                GroupFilter;                                              // (OptionalParm, Parm)
	bool                                               bNoEmpty;                                                 // (OptionalParm, Parm)
};

// Function UTGame.UTInventoryManager.OwnerEvent
struct AUTInventoryManager_OwnerEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
};

// Function UTGame.UTInventoryManager.ClientSyncWeapon
struct AUTInventoryManager_ClientSyncWeapon_Params
{
	class AWeapon*                                     NewWeapon;                                                // (Parm)
};

// Function UTGame.UTTeamHUD.DisplayDirectionIndicator
struct AUTTeamHUD_DisplayDirectionIndicator_Params
{
	unsigned char                                      TeamIndex;                                                // (Parm)
	struct FVector2D                                   pos;                                                      // (Parm)
	class AActor*                                      destActor;                                                // (Parm)
	float                                              DestScale;                                                // (Parm)
};

// Function UTGame.UTTeamHUD.DisplayTeamLogos
struct AUTTeamHUD_DisplayTeamLogos_Params
{
	unsigned char                                      TeamIndex;                                                // (Parm)
	struct FVector2D                                   pos;                                                      // (Parm)
	float                                              DestScale;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTTeamHUD.GetDirectionalDest
struct AUTTeamHUD_GetDirectionalDest_Params
{
	unsigned char                                      TeamIndex;                                                // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamHUD.GetTeamScore
struct AUTTeamHUD_GetTeamScore_Params
{
	unsigned char                                      TeamIndex;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamHUD.DisplayTeamScore
struct AUTTeamHUD_DisplayTeamScore_Params
{
};

// Function UTGame.UTTeamHUD.DisplayScoring
struct AUTTeamHUD_DisplayScoring_Params
{
};

// Function UTGame.UTCTFHUD.GetDirectionalDest
struct AUTCTFHUD_GetDirectionalDest_Params
{
	unsigned char                                      TeamIndex;                                                // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFHUD.DisplayTeamLogos
struct AUTCTFHUD_DisplayTeamLogos_Params
{
	unsigned char                                      TeamIndex;                                                // (Parm)
	struct FVector2D                                   pos;                                                      // (Parm)
	float                                              DestScale;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTCTFHUD.Timer
struct AUTCTFHUD_Timer_Params
{
};

// Function UTGame.UTCTFHUD.PostBeginPlay
struct AUTCTFHUD_PostBeginPlay_Params
{
};

// Function UTGame.UTWeaponKillRewardMessage.AnnouncementSound
struct UUTWeaponKillRewardMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponKillRewardMessage.ClientReceive
struct UUTWeaponKillRewardMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTWeaponKillRewardMessage.GetString
struct UUTWeaponKillRewardMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTAchievementsBase.FlushAchievementStatsComplete
struct UUTAchievementsBase_FlushAchievementStatsComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.UTAchievementsBase.WriteAchievementStats
struct UUTAchievementsBase_WriteAchievementStats_Params
{
};

// Function UTGame.UTAchievementsBase.ReadAchievementStatsComplete
struct UUTAchievementsBase_ReadAchievementStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.UTAchievementsBase.ReadAchievementStats
struct UUTAchievementsBase_ReadAchievementStats_Params
{
};

// Function UTGame.UTAchievementsBase.GetAchievementUnlockType
struct UUTAchievementsBase_GetAchievementUnlockType_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                UnlockType;                                               // (Parm, OutParm)
	unsigned char                                      bUnlockEnabled;                                           // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAchievementsBase.GetAchievementProgressCriteria
struct UUTAchievementsBase_GetAchievementProgressCriteria_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                ProgressCriteria;                                         // (Parm, OutParm)
	unsigned char                                      bProgressEnabled;                                         // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAchievementsBase.GetAchievementUnlockCriteria
struct UUTAchievementsBase_GetAchievementUnlockCriteria_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                UnlockCriteria;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAchievementsBase.SetAchievementValue
struct UUTAchievementsBase_SetAchievementValue_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                Value;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAchievementsBase.GetAchievementValue
struct UUTAchievementsBase_GetAchievementValue_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                Value;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAchievementsBase.UpdateAchievementByteCount
struct UUTAchievementsBase_UpdateAchievementByteCount_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                Counter;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAchievementsBase.UpdateAchievementCount
struct UUTAchievementsBase_UpdateAchievementCount_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                Progress;                                                 // (OptionalParm, Parm, OutParm)
	int                                                MaxProgress;                                              // (OptionalParm, Parm, OutParm)
	unsigned char                                      bProgressEnabled;                                         // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAchievementsBase.UpdateAchievementBitMask
struct UUTAchievementsBase_UpdateAchievementBitMask_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                BitMask;                                                  // (Parm)
	int                                                Progress;                                                 // (OptionalParm, Parm, OutParm)
	int                                                MaxProgress;                                              // (OptionalParm, Parm, OutParm)
	unsigned char                                      bProgressEnabled;                                         // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAchievementsBase.DisplayAchievementProgress
struct UUTAchievementsBase_DisplayAchievementProgress_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                Progress;                                                 // (Parm)
	int                                                MaxProgress;                                              // (Parm)
};

// Function UTGame.UTAchievementsBase.AchievementDone
struct UUTAchievementsBase_AchievementDone_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.UTAchievementsBase.UnlockAchievement
struct UUTAchievementsBase_UnlockAchievement_Params
{
	int                                                AchievementId;                                            // (Parm)
};

// Function UTGame.UTAchievementsBase.UpdateAchievement
struct UUTAchievementsBase_UpdateAchievement_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                Value;                                                    // (OptionalParm, Parm)
	bool                                               bSkipCommit;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTAchievementsBase.Cleanup
struct UUTAchievementsBase_Cleanup_Params
{
};

// Function UTGame.UTAchievementsBase.Initialize
struct UUTAchievementsBase_Initialize_Params
{
};

// Function UTGame.UTAchievements.UpdateSpiceOfLife
struct UUTAchievements_UpdateSpiceOfLife_Params
{
	int                                                MutatorBitMask;                                           // (Parm)
};

// Function UTGame.UTLeaderboardRead.GetScore
struct UUTLeaderboardRead_GetScore_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAnnouncer.PlayAnnouncement
struct AUTAnnouncer_PlayAnnouncement_Params
{
	class UClass*                                      InMessageClass;                                           // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTAnnouncer.AnnouncementFinished
struct AUTAnnouncer_AnnouncementFinished_Params
{
	class UAudioComponent*                             AC;                                                       // (Parm, EditInline)
};

// Function UTGame.UTAnnouncer.PlayAnnouncementNow
struct AUTAnnouncer_PlayAnnouncementNow_Params
{
	class UClass*                                      InMessageClass;                                           // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTAnnouncer.PlayNextAnnouncement
struct AUTAnnouncer_PlayNextAnnouncement_Params
{
};

// Function UTGame.UTAnnouncer.PostBeginPlay
struct AUTAnnouncer_PostBeginPlay_Params
{
};

// Function UTGame.UTAnnouncer.Destroyed
struct AUTAnnouncer_Destroyed_Params
{
};

// Function UTGame.UTCheatManager.KillAllPawns
struct UUTCheatManager_KillAllPawns_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
};

// Function UTGame.UTCheatManager.KillAll
struct UUTCheatManager_KillAll_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
};

// Function UTGame.UTCheatManager.SetStickBind
struct UUTCheatManager_SetStickBind_Params
{
	float                                              val;                                                      // (Parm)
};

// Function UTGame.UTCheatManager.ShowStickBindings
struct UUTCheatManager_ShowStickBindings_Params
{
};

// Function UTGame.UTCheatManager.TiltIt
struct UUTCheatManager_TiltIt_Params
{
	bool                                               bActive;                                                  // (Parm)
};

// Function UTGame.UTCheatManager.LeaveADecal
struct UUTCheatManager_LeaveADecal_Params
{
	struct FVector                                     HitLoc;                                                   // (Parm)
	struct FVector                                     HitNorm;                                                  // (Parm)
};

// Function UTGame.UTCheatManager.SpawnABloodDecal
struct UUTCheatManager_SpawnABloodDecal_Params
{
};

// Function UTGame.UTCheatManager.KillOtherBots
struct UUTCheatManager_KillOtherBots_Params
{
};

// Function UTGame.UTCheatManager.EditWeapon
struct UUTCheatManager_EditWeapon_Params
{
	struct FString                                     WhichWeapon;                                              // (Parm, NeedCtorLink)
};

// Function UTGame.UTCheatManager.SuicideBy
struct UUTCheatManager_SuicideBy_Params
{
	struct FString                                     Type;                                                     // (Parm, NeedCtorLink)
	int                                                DeathHealth;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTCheatManager.RBGrav
struct UUTCheatManager_RBGrav_Params
{
	float                                              NewGravityScaling;                                        // (Parm)
};

// Function UTGame.UTCheatManager.KillBadGuys
struct UUTCheatManager_KillBadGuys_Params
{
};

// Function UTGame.UTCheatManager.ViewBot
struct UUTCheatManager_ViewBot_Params
{
};

// Function UTGame.UTCheatManager.FreeCamera
struct UUTCheatManager_FreeCamera_Params
{
};

// Function UTGame.UTCheatManager.Invisible
struct UUTCheatManager_Invisible_Params
{
	bool                                               B;                                                        // (Parm)
};

// Function UTGame.UTCheatManager.AllAmmo
struct UUTCheatManager_AllAmmo_Params
{
};

// Function UTGame.UTCheatManager.PhysicsGun
struct UUTCheatManager_PhysicsGun_Params
{
};

// Function UTGame.UTCheatManager.DoubleUp
struct UUTCheatManager_DoubleUp_Params
{
};

// Function UTGame.UTCheatManager.AllWeapons
struct UUTCheatManager_AllWeapons_Params
{
};

// Function UTGame.UTCheatManager.SummonV
struct UUTCheatManager_SummonV_Params
{
	struct FString                                     ClassName;                                                // (Parm, NeedCtorLink)
};

// Function UTGame.UTCheatManager.LMS
struct UUTCheatManager_LMS_Params
{
	int                                                Switch;                                                   // (Parm)
};

// Function UTGame.UTCheatManager.LM
struct UUTCheatManager_LM_Params
{
	struct FString                                     MessageClassName;                                         // (Parm, NeedCtorLink)
};

// Function UTGame.UTCheatManager.Glow
struct UUTCheatManager_Glow_Params
{
	float                                              F;                                                        // (Parm)
};

// Function UTGame.UTCheatManager.ViewFlag
struct UUTCheatManager_ViewFlag_Params
{
};

// Function UTGame.UTPlayerInput.Jump
struct UUTPlayerInput_Jump_Params
{
};

// Function UTGame.UTPlayerInput.UnDuck
struct UUTPlayerInput_UnDuck_Params
{
};

// Function UTGame.UTPlayerInput.Duck
struct UUTPlayerInput_Duck_Params
{
};

// Function UTGame.DemoRecSpectator.UpdateRotation
struct ADemoRecSpectator_UpdateRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.DemoRecSpectator.GetPlayerViewPoint
struct ADemoRecSpectator_GetPlayerViewPoint_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm)
};

// Function UTGame.DemoRecSpectator.Pause
struct ADemoRecSpectator_Pause_Params
{
};

// Function UTGame.DemoRecSpectator.SetPause
struct ADemoRecSpectator_SetPause_Params
{
	bool                                               bPause;                                                   // (Parm)
	struct FScriptDelegate                             CanUnpauseDelegate;                                       // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.DemoRecSpectator.ClientSetRealViewTarget
struct ADemoRecSpectator_ClientSetRealViewTarget_Params
{
	class APlayerReplicationInfo*                      NewTarget;                                                // (Parm)
};

// Function UTGame.DemoRecSpectator.ServerViewSelf
struct ADemoRecSpectator_ServerViewSelf_Params
{
	struct FViewTargetTransitionParams                 TransitionParams;                                         // (OptionalParm, Parm)
};

// Function UTGame.DemoRecSpectator.SetViewTarget
struct ADemoRecSpectator_SetViewTarget_Params
{
	class AActor*                                      NewViewTarget;                                            // (Parm)
	struct FViewTargetTransitionParams                 TransitionParams;                                         // (OptionalParm, Parm)
};

// Function UTGame.DemoRecSpectator.DemoViewNextPlayer
struct ADemoRecSpectator_DemoViewNextPlayer_Params
{
};

// Function UTGame.DemoRecSpectator.ViewClass
struct ADemoRecSpectator_ViewClass_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
	bool                                               bQuiet;                                                   // (OptionalParm, Parm)
	bool                                               bCheat;                                                   // (OptionalParm, Parm)
};

// Function UTGame.DemoRecSpectator.Slomo
struct ADemoRecSpectator_Slomo_Params
{
	float                                              NewTimeDilation;                                          // (Parm)
};

// Function UTGame.DemoRecSpectator.InitPlayerReplicationInfo
struct ADemoRecSpectator_InitPlayerReplicationInfo_Params
{
};

// Function UTGame.DemoRecSpectator.ReceivedPlayer
struct ADemoRecSpectator_ReceivedPlayer_Params
{
};

// Function UTGame.DemoRecSpectator.PostBeginPlay
struct ADemoRecSpectator_PostBeginPlay_Params
{
};

// Function UTGame.GFxMinimap.Update
struct UGFxMinimap_Update_Params
{
	float                                              Scale;                                                    // (Parm)
};

// Function UTGame.GFxMinimap.UpdateIcons
struct UGFxMinimap_UpdateIcons_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, NeedCtorLink)
	TArray<class UGFxObject*>                          ActorIcons;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               bIsRedIconType;                                           // (Parm)
};

// Function UTGame.GFxMinimap.GenFlagIcons
struct UGFxMinimap_GenFlagIcons_Params
{
	int                                                N;                                                        // (Parm)
	TArray<class UGFxObject*>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxMinimap.GenEnemyIcons
struct UGFxMinimap_GenEnemyIcons_Params
{
	int                                                N;                                                        // (Parm)
	TArray<class UGFxObject*>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxMinimap.GenFriendIcons
struct UGFxMinimap_GenFriendIcons_Params
{
	int                                                N;                                                        // (Parm)
	TArray<class UGFxObject*>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxMinimap.UpdateData
struct UGFxMinimap_UpdateData_Params
{
};

// Function UTGame.GFxMinimap.Init
struct UGFxMinimap_Init_Params
{
	class UGFxMinimapHud*                              H;                                                        // (Parm)
};

// Function UTGame.UTMapInfo.GetActorHudLocation
struct UUTMapInfo_GetActorHudLocation_Params
{
	class AActor*                                      CActor;                                                   // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMapInfo.DrawMapImage
struct UUTMapInfo_DrawMapImage_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              W;                                                        // (Parm)
	float                                              H;                                                        // (Parm)
	float                                              PlayerYaw;                                                // (Parm)
	float                                              BkgImgScaling;                                            // (Parm)
};

// Function UTGame.UTMapInfo.ChangeMapRotation
struct UUTMapInfo_ChangeMapRotation_Params
{
	struct FRotator                                    NewMapRotation;                                           // (Parm)
};

// Function UTGame.UTMapInfo.UpdateHUDLocation
struct UUTMapInfo_UpdateHUDLocation_Params
{
	struct FVector                                     InLocation;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMapInfo.DrawRotatedMaterialTile
struct UUTMapInfo_DrawRotatedMaterialTile_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class UMaterialInstanceConstant*                   M;                                                        // (Parm)
	struct FVector                                     MapLocation;                                              // (Parm)
	int                                                InYaw;                                                    // (Parm)
	float                                              XWidth;                                                   // (Parm)
	float                                              YWidth;                                                   // (Parm)
	float                                              XStart;                                                   // (Parm)
	float                                              YStart;                                                   // (Parm)
	float                                              XLength;                                                  // (Parm)
	float                                              YLength;                                                  // (Parm)
};

// Function UTGame.UTMapInfo.DrawRotatedTile
struct UUTMapInfo_DrawRotatedTile_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class UTexture2D*                                  T;                                                        // (Parm)
	struct FVector                                     MapLocation;                                              // (Parm)
	int                                                InYaw;                                                    // (Parm)
	float                                              IconScale;                                                // (Parm)
	struct FTextureCoordinates                         TexCoords;                                                // (Parm)
	struct FLinearColor                                DrawColor;                                                // (Parm)
};

// Function UTGame.UTMapInfo.AddKeyVehicle
struct UUTMapInfo_AddKeyVehicle_Params
{
	class AUTVehicle*                                  V;                                                        // (Parm)
};

// Function UTGame.UTMapInfo.DrawMap
struct UUTMapInfo_DrawMap_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
	float                                              XPos;                                                     // (Parm)
	float                                              YPos;                                                     // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	bool                                               bFullDetail;                                              // (Parm)
	float                                              AspectRatio;                                              // (Parm)
};

// Function UTGame.UTMapInfo.UpdateNodes
struct UUTMapInfo_UpdateNodes_Params
{
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
};

// Function UTGame.UTMapInfo.RenderAdditionalInformation
struct UUTMapInfo_RenderAdditionalInformation_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
};

// Function UTGame.UTMapInfo.RenderLinks
struct UUTMapInfo_RenderLinks_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
};

// Function UTGame.UTMapInfo.FindObjectives
struct UUTMapInfo_FindObjectives_Params
{
};

// Function UTGame.UTMapInfo.VerifyMapExtent
struct UUTMapInfo_VerifyMapExtent_Params
{
};

// Function UTGame.GFxMinimapHud.AddDeathMessage
struct UGFxMinimapHud_AddDeathMessage_Params
{
	class APlayerReplicationInfo*                      Killer;                                                   // (Parm)
	class APlayerReplicationInfo*                      Killed;                                                   // (Parm)
	class UClass*                                      Dmg;                                                      // (Parm)
};

// Function UTGame.GFxMinimapHud.GetRank
struct UGFxMinimapHud_GetRank_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxMinimapHud.SetCenterText
struct UGFxMinimapHud_SetCenterText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function UTGame.GFxMinimapHud.ShowMultiKill
struct UGFxMinimapHud_ShowMultiKill_Params
{
	int                                                N;                                                        // (Parm)
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function UTGame.GFxMinimapHud.DisplayHit
struct UGFxMinimapHud_DisplayHit_Params
{
	struct FVector                                     HitDir;                                                   // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.GFxMinimapHud.MinimapZoomIn
struct UGFxMinimapHud_MinimapZoomIn_Params
{
};

// Function UTGame.GFxMinimapHud.MinimapZoomOut
struct UGFxMinimapHud_MinimapZoomOut_Params
{
};

// Function UTGame.GFxMinimapHud.ToggleCrosshair
struct UGFxMinimapHud_ToggleCrosshair_Params
{
	bool                                               bToggle;                                                  // (Parm)
};

// Function UTGame.GFxMinimapHud.TickHud
struct UGFxMinimapHud_TickHud_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.GFxMinimapHud.UpdateGameHUD
struct UGFxMinimapHud_UpdateGameHUD_Params
{
	class AUTPlayerReplicationInfo*                    PRI;                                                      // (Parm)
};

// Function UTGame.GFxMinimapHud.AddMessage
struct UGFxMinimapHud_AddMessage_Params
{
	struct FString                                     Type;                                                     // (Parm, NeedCtorLink)
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function UTGame.GFxMinimapHud.RemoveMessage
struct UGFxMinimapHud_RemoveMessage_Params
{
};

// Function UTGame.GFxMinimapHud.ClearStats
struct UGFxMinimapHud_ClearStats_Params
{
	bool                                               clearScores;                                              // (OptionalParm, Parm)
};

// Function UTGame.GFxMinimapHud.FormatTime
struct UGFxMinimapHud_FormatTime_Params
{
	int                                                Seconds;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxMinimapHud.Init
struct UGFxMinimapHud_Init_Params
{
	class ULocalPlayer*                                Player;                                                   // (OptionalParm, Parm)
};

// Function UTGame.GFxMinimapHud.InitMessageRow
struct UGFxMinimapHud_InitMessageRow_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxMinimapHud.CreateMessageRow
struct UGFxMinimapHud_CreateMessageRow_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxMinimapHud.registerMiniMapView
struct UGFxMinimapHud_registerMiniMapView_Params
{
	class UGFxMinimap*                                 MC;                                                       // (Parm)
	float                                              R;                                                        // (Parm)
};

// Function UTGame.UTGFxTeamHUD.GetRank
struct UUTGFxTeamHUD_GetRank_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTGFxTeamHUD.UpdateGameHUD
struct UUTGFxTeamHUD_UpdateGameHUD_Params
{
	class AUTPlayerReplicationInfo*                    PRI;                                                      // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.ContinueOnFoot
struct AUTVehicle_Hoverboard_ContinueOnFoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.BelowSpeedThreshold
struct AUTVehicle_Hoverboard_BelowSpeedThreshold_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.TooCloseToAttack
struct AUTVehicle_Hoverboard_TooCloseToAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.SpawnRoosterEffect
struct AUTVehicle_Hoverboard_SpawnRoosterEffect_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.OnTouchForcedDirVolume
struct AUTVehicle_Hoverboard_OnTouchForcedDirVolume_Params
{
	class AUDKForcedDirectionVolume*                   Vol;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.HoverboardLanded
struct AUTVehicle_Hoverboard_HoverboardLanded_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.HideBoard
struct AUTVehicle_Hoverboard_HideBoard_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.ToggleAnimBoard
struct AUTVehicle_Hoverboard_ToggleAnimBoard_Params
{
	bool                                               bAnimBoard;                                               // (Parm)
	float                                              Delay;                                                    // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.StopVehicleSounds
struct AUTVehicle_Hoverboard_StopVehicleSounds_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.RBPenetrationDestroy
struct AUTVehicle_Hoverboard_RBPenetrationDestroy_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.RigidBodyCollision
struct AUTVehicle_Hoverboard_RigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, EditInline)
	struct FCollisionImpactData                        RigidCollisionData;                                       // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ContactIndex;                                             // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.RanInto
struct AUTVehicle_Hoverboard_RanInto_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.EncroachingOn
struct AUTVehicle_Hoverboard_EncroachingOn_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.RagdollDriver
struct AUTVehicle_Hoverboard_RagdollDriver_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.DisableVehicle
struct AUTVehicle_Hoverboard_DisableVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.ReplicatedEvent
struct AUTVehicle_Hoverboard_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.SetOnlyControllableByTilt
struct AUTVehicle_Hoverboard_SetOnlyControllableByTilt_Params
{
	bool                                               bActive;                                                  // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.DrivingStatusChanged
struct AUTVehicle_Hoverboard_DrivingStatusChanged_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.DriverLeft
struct AUTVehicle_Hoverboard_DriverLeft_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.DriverLeave
struct AUTVehicle_Hoverboard_DriverLeave_Params
{
	bool                                               bForceLeave;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.IncomingMissile
struct AUTVehicle_Hoverboard_IncomingMissile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.Dodge
struct AUTVehicle_Hoverboard_Dodge_Params
{
	TEnumAsByte<EDoubleClickDir>                       InDoubleClickMove;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.ChooseFireMode
struct AUTVehicle_Hoverboard_ChooseFireMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.GetChargePower
struct AUTVehicle_Hoverboard_GetChargePower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.NotifyDriverTakeHit
struct AUTVehicle_Hoverboard_NotifyDriverTakeHit_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.DriverRadiusDamage
struct AUTVehicle_Hoverboard_DriverRadiusDamage_Params
{
	float                                              DamageAmount;                                             // (Parm)
	float                                              DamageRadius;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	float                                              Momentum;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
	float                                              DamageFalloffExp;                                         // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle_Hoverboard.Died
struct AUTVehicle_Hoverboard_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.TakeDamage
struct AUTVehicle_Hoverboard_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle_Hoverboard.OnHoverboardSpinJump
struct AUTVehicle_Hoverboard_OnHoverboardSpinJump_Params
{
	class UUTSeqAct_HoverboardSpinJump*                Action;                                                   // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.ClientForceSpinWarmup
struct AUTVehicle_Hoverboard_ClientForceSpinWarmup_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.ServerSpin
struct AUTVehicle_Hoverboard_ServerSpin_Params
{
	float                                              Direction;                                                // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.ForceSpinJump
struct AUTVehicle_Hoverboard_ForceSpinJump_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.SetInputs
struct AUTVehicle_Hoverboard_SetInputs_Params
{
	float                                              InForward;                                                // (Parm)
	float                                              InStrafe;                                                 // (Parm)
	float                                              InUp;                                                     // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.BoardJumpEffect
struct AUTVehicle_Hoverboard_BoardJumpEffect_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.ServerChangeSeat
struct AUTVehicle_Hoverboard_ServerChangeSeat_Params
{
	int                                                RequestedSeat;                                            // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.PossessedBy
struct AUTVehicle_Hoverboard_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.DetachDriver
struct AUTVehicle_Hoverboard_DetachDriver_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.InitPhysicsAnimPawn
struct AUTVehicle_Hoverboard_InitPhysicsAnimPawn_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.OnDriverPhysicsAssetChanged
struct AUTVehicle_Hoverboard_OnDriverPhysicsAssetChanged_Params
{
	class AUTPawn*                                     UTP;                                                      // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.IsHumanDriver
struct AUTVehicle_Hoverboard_IsHumanDriver_Params
{
	class AUTVehicle_Hoverboard*                       HB;                                                       // (Parm)
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.TestResetPhys
struct AUTVehicle_Hoverboard_TestResetPhys_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.HandDamp
struct AUTVehicle_Hoverboard_HandDamp_Params
{
	float                                              LinDamp;                                                  // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.HandSpring
struct AUTVehicle_Hoverboard_HandSpring_Params
{
	float                                              LinSpring;                                                // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.BackDamp
struct AUTVehicle_Hoverboard_BackDamp_Params
{
	float                                              LinDamp;                                                  // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.BackSpring
struct AUTVehicle_Hoverboard_BackSpring_Params
{
	float                                              LinSpring;                                                // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.SetHoverboardRiderPhysics
struct AUTVehicle_Hoverboard_SetHoverboardRiderPhysics_Params
{
	class AUTPawn*                                     UTP;                                                      // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.DisplayDebug
struct AUTVehicle_Hoverboard_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function UTGame.UTVehicle_Hoverboard.SetFlagAttachToBody
struct AUTVehicle_Hoverboard_SetFlagAttachToBody_Params
{
	class AUTPawn*                                     UTP;                                                      // (Parm)
	bool                                               bAttached;                                                // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.SitDriver
struct AUTVehicle_Hoverboard_SitDriver_Params
{
	class AUTPawn*                                     UTP;                                                      // (Parm)
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.AttachDriver
struct AUTVehicle_Hoverboard_AttachDriver_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.VehicleCalcCamera
struct AUTVehicle_Hoverboard_VehicleCalcCamera_Params
{
	float                                              DeltaTime;                                                // (Parm)
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	struct FVector                                     CamStart;                                                 // (Parm, OutParm)
	bool                                               bPivotOnly;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle_Hoverboard.GetCameraStart
struct AUTVehicle_Hoverboard_GetCameraStart_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.DriverEnter
struct AUTVehicle_Hoverboard_DriverEnter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.AttachHoverboardEffects
struct AUTVehicle_Hoverboard_AttachHoverboardEffects_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.InitializeEffects
struct AUTVehicle_Hoverboard_InitializeEffects_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.DriverDied
struct AUTVehicle_Hoverboard_DriverDied_Params
{
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.WeaponRotationChanged
struct AUTVehicle_Hoverboard_WeaponRotationChanged_Params
{
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.Tick
struct AUTVehicle_Hoverboard_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.UpdateHoverboardDustEffect
struct AUTVehicle_Hoverboard_UpdateHoverboardDustEffect_Params
{
	float                                              DustHeight;                                               // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.ServerRequestDodge
struct AUTVehicle_Hoverboard_ServerRequestDodge_Params
{
	bool                                               bDodgeLeft;                                               // (Parm)
};

// Function UTGame.UTVehicle_Hoverboard.RequestDodge
struct AUTVehicle_Hoverboard_RequestDodge_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.KickOutBot
struct AUTVehicle_Hoverboard_KickOutBot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.ShouldShowUseable
struct AUTVehicle_Hoverboard_ShouldShowUseable_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	float                                              Dist;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.AnySeatAvailable
struct AUTVehicle_Hoverboard_AnySeatAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.GetCameraFocus
struct AUTVehicle_Hoverboard_GetCameraFocus_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.DisplayHud
struct AUTVehicle_Hoverboard_DisplayHud_Params
{
	class AUTHUD*                                      HUD;                                                      // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector2D                                   HudPOS;                                                   // (Parm)
	int                                                SeatIndex;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle_Hoverboard.GetDisplayedHealth
struct AUTVehicle_Hoverboard_GetDisplayedHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.PlayHorn
struct AUTVehicle_Hoverboard_PlayHorn_Params
{
};

// Function UTGame.UTVehicle_Hoverboard.CoversScreenSpace
struct AUTVehicle_Hoverboard_CoversScreenSpace_Params
{
	struct FVector                                     ScreenLoc;                                                // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Hoverboard.FindGoodEndView
struct AUTVehicle_Hoverboard_FindGoodEndView_Params
{
	class APlayerController*                           InPC;                                                     // (Parm)
	struct FRotator                                    GoodRotation;                                             // (Parm, OutParm)
};

// Function UTGame.UTVehicle_Hoverboard.PostInitRigidBody
struct AUTVehicle_Hoverboard_PostInitRigidBody_Params
{
	class UPrimitiveComponent*                         PrimComp;                                                 // (Parm, EditInline)
};

// Function UTGame.UTBeamWeapon.DisplayDebug
struct AUTBeamWeapon_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function UTGame.UTBeamWeapon.UpdateBeam
struct AUTBeamWeapon_UpdateBeam_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTBeamWeapon.ProcessBeamHit
struct AUTBeamWeapon_ProcessBeamHit_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     AimDir;                                                   // (Parm)
	struct FImpactInfo                                 TestImpact;                                               // (Parm, OutParm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTBeamWeapon.UpdateBeamEmitter
struct AUTBeamWeapon_UpdateBeamEmitter_Params
{
	struct FVector                                     FlashLocation;                                            // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      HitActor;                                                 // (Parm)
};

// Function UTGame.UTBeamWeapon.SetBeamEmitterHidden
struct AUTBeamWeapon_SetBeamEmitterHidden_Params
{
	bool                                               bHide;                                                    // (Parm)
};

// Function UTGame.UTBeamWeapon.KillBeamEmitter
struct AUTBeamWeapon_KillBeamEmitter_Params
{
};

// Function UTGame.UTBeamWeapon.AddBeamEmitter
struct AUTBeamWeapon_AddBeamEmitter_Params
{
};

// Function UTGame.UTWeap_LinkGun.BoostPower
struct AUTWeap_LinkGun_BoostPower_Params
{
};

// Function UTGame.UTWeap_LinkGun.DenyPickupQuery
struct AUTWeap_LinkGun_DenyPickupQuery_Params
{
	class UClass*                                      ItemClass;                                                // (Parm)
	class AActor*                                      Pickup;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.SuggestDefenseStyle
struct AUTWeap_LinkGun_SuggestDefenseStyle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.SuggestAttackStyle
struct AUTWeap_LinkGun_SuggestAttackStyle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.GetOptimalRangeFor
struct AUTWeap_LinkGun_GetOptimalRangeFor_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.CanHeal
struct AUTWeap_LinkGun_CanHeal_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.BestMode
struct AUTWeap_LinkGun_BestMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.FocusOnLeader
struct AUTWeap_LinkGun_FocusOnLeader_Params
{
	bool                                               bLeaderFiring;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.GetAIRating
struct AUTWeap_LinkGun_GetAIRating_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.ReplicatedEvent
struct AUTWeap_LinkGun_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTWeap_LinkGun.ChangeVisibility
struct AUTWeap_LinkGun_ChangeVisibility_Params
{
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTWeap_LinkGun.CalcLinkStrength
struct AUTWeap_LinkGun_CalcLinkStrength_Params
{
};

// Function UTGame.UTWeap_LinkGun.GetLinkedWeapons
struct AUTWeap_LinkGun_GetLinkedWeapons_Params
{
	TArray<class AUTWeap_LinkGun*>                     LinkedWeapons;                                            // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTWeap_LinkGun.FindLinkedWeapons
struct AUTWeap_LinkGun_FindLinkedWeapons_Params
{
};

// Function UTGame.UTWeap_LinkGun.UnLink
struct AUTWeap_LinkGun_UnLink_Params
{
	bool                                               bDelayed;                                                 // (OptionalParm, Parm)
};

// Function UTGame.UTWeap_LinkGun.AttemptLinkTo
struct AUTWeap_LinkGun_AttemptLinkTo_Params
{
	class AActor*                                      Who;                                                      // (Parm)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, EditInline)
};

// Function UTGame.UTWeap_LinkGun.GetLinkedToLocation
struct AUTWeap_LinkGun_GetLinkedToLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.ProcessBeamHit
struct AUTWeap_LinkGun_ProcessBeamHit_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     AimDir;                                                   // (Parm)
	struct FImpactInfo                                 TestImpact;                                               // (Parm, OutParm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTWeap_LinkGun.RechargeAmmo
struct AUTWeap_LinkGun_RechargeAmmo_Params
{
};

// Function UTGame.UTWeap_LinkGun.ConsumeBeamAmmo
struct AUTWeap_LinkGun_ConsumeBeamAmmo_Params
{
	float                                              Amount;                                                   // (Parm)
};

// Function UTGame.UTWeap_LinkGun.ConsumeAmmo
struct AUTWeap_LinkGun_ConsumeAmmo_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeap_LinkGun.KillEndpointEffect
struct AUTWeap_LinkGun_KillEndpointEffect_Params
{
};

// Function UTGame.UTWeap_LinkGun.KillBeamEmitter
struct AUTWeap_LinkGun_KillBeamEmitter_Params
{
};

// Function UTGame.UTWeap_LinkGun.SetBeamEmitterHidden
struct AUTWeap_LinkGun_SetBeamEmitterHidden_Params
{
	bool                                               bHide;                                                    // (Parm)
};

// Function UTGame.UTWeap_LinkGun.Destroyed
struct AUTWeap_LinkGun_Destroyed_Params
{
};

// Function UTGame.UTWeap_LinkGun.GetProjectileClass
struct AUTWeap_LinkGun_GetProjectileClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.UpdateBeamEmitter
struct AUTWeap_LinkGun_UpdateBeamEmitter_Params
{
	struct FVector                                     FlashLocation;                                            // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      HitActor;                                                 // (Parm)
};

// Function UTGame.UTWeap_LinkGun.AttachWeaponTo
struct AUTWeap_LinkGun_AttachWeaponTo_Params
{
	class USkeletalMeshComponent*                      MeshCpnt;                                                 // (Parm, EditInline)
	struct FName                                       SocketName;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTWeap_LinkGun.SetSkin
struct AUTWeap_LinkGun_SetSkin_Params
{
	class UMaterial*                                   NewMaterial;                                              // (Parm)
};

// Function UTGame.UTWeap_LinkGun.DrawWeaponCrosshair
struct AUTWeap_LinkGun_DrawWeaponCrosshair_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
};

// Function UTGame.UTWeap_LinkGun.GetTeamMuzzleFlashTemplate
struct AUTWeap_LinkGun_GetTeamMuzzleFlashTemplate_Params
{
	unsigned char                                      TeamNum;                                                  // (Parm)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_LinkGun.PostBeginPlay
struct AUTWeap_LinkGun_PostBeginPlay_Params
{
};

// Function UTGame.UTGFxTweenableMoviePlayer.TweenComplete
struct UUTGFxTweenableMoviePlayer_TweenComplete_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function UTGame.UTGFxTweenableMoviePlayer.PrintTweensToLog
struct UUTGFxTweenableMoviePlayer_PrintTweensToLog_Params
{
};

// Function UTGame.UTGFxTweenableMoviePlayer.ClearsTweensOnMovieClip
struct UUTGFxTweenableMoviePlayer_ClearsTweensOnMovieClip_Params
{
	class UGFxObject*                                  MC;                                                       // (Parm)
	bool                                               bReset;                                                   // (OptionalParm, Parm)
};

// Function UTGame.UTGFxTweenableMoviePlayer.Tick
struct UUTGFxTweenableMoviePlayer_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTGFxTweenableMoviePlayer.ProcessTweenCallback
struct UUTGFxTweenableMoviePlayer_ProcessTweenCallback_Params
{
	struct FString                                     Callback;                                                 // (Parm, NeedCtorLink)
	class UGFxObject*                                  TargetMC;                                                 // (Parm)
};

// Function UTGame.UTGFxTweenableMoviePlayer.TweenTo
struct UUTGFxTweenableMoviePlayer_TweenTo_Params
{
	class UGFxObject*                                  MC;                                                       // (Parm)
	float                                              Duration;                                                 // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	float                                              Target;                                                   // (Parm)
	TEnumAsByte<ETweenType>                            NewTweenType;                                             // (Parm)
	struct FString                                     Callback;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function UTGame.GFxProjectedUI.CreateItemData
struct UGFxProjectedUI_CreateItemData_Params
{
};

// Function UTGame.GFxProjectedUI.UpdatePos
struct UGFxProjectedUI_UpdatePos_Params
{
};

// Function UTGame.GFxProjectedUI.FloatSelectionDown
struct UGFxProjectedUI_FloatSelectionDown_Params
{
	class UGFxObject*                                  ButtonIconMC;                                             // (Parm)
};

// Function UTGame.GFxProjectedUI.FloatSelectionUp
struct UGFxProjectedUI_FloatSelectionUp_Params
{
	class UGFxObject*                                  ButtonIconMC;                                             // (Parm)
};

// Function UTGame.GFxProjectedUI.TweenTurbines
struct UGFxProjectedUI_TweenTurbines_Params
{
	bool                                               Toggle;                                                   // (Parm)
};

// Function UTGame.GFxProjectedUI.ProcessTweenCallback
struct UGFxProjectedUI_ProcessTweenCallback_Params
{
	struct FString                                     Callback;                                                 // (Parm, NeedCtorLink)
	class UGFxObject*                                  TargetMC;                                                 // (Parm)
};

// Function UTGame.GFxProjectedUI.UpdateEquippedWeapon
struct UGFxProjectedUI_UpdateEquippedWeapon_Params
{
};

// Function UTGame.GFxProjectedUI.FakeUpdateEquippedWeapon
struct UGFxProjectedUI_FakeUpdateEquippedWeapon_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function UTGame.GFxProjectedUI.PopulateArsenal
struct UGFxProjectedUI_PopulateArsenal_Params
{
};

// Function UTGame.GFxProjectedUI.SetInfo
struct UGFxProjectedUI_SetInfo_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function UTGame.GFxProjectedUI.OnClickFakeItem
struct UGFxProjectedUI_OnClickFakeItem_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxProjectedUI.OnFocusBackpackTab
struct UGFxProjectedUI_OnFocusBackpackTab_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxProjectedUI.OnFocusArsenalTab
struct UGFxProjectedUI_OnFocusArsenalTab_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxProjectedUI.OnFocusUpdateInfo
struct UGFxProjectedUI_OnFocusUpdateInfo_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxProjectedUI.OnClickWeaponButton
struct UGFxProjectedUI_OnClickWeaponButton_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxProjectedUI.OnFocusOutSelection
struct UGFxProjectedUI_OnFocusOutSelection_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxProjectedUI.OnFocusInSelection
struct UGFxProjectedUI_OnFocusInSelection_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxProjectedUI.SwitchWeapon
struct UGFxProjectedUI_SwitchWeapon_Params
{
	unsigned char                                      Index;                                                    // (Parm)
};

// Function UTGame.GFxProjectedUI.SetupBackpackButtons
struct UGFxProjectedUI_SetupBackpackButtons_Params
{
};

// Function UTGame.GFxProjectedUI.SetupArsenalButtons
struct UGFxProjectedUI_SetupArsenalButtons_Params
{
};

// Function UTGame.GFxProjectedUI.PopulateBackpackFake
struct UGFxProjectedUI_PopulateBackpackFake_Params
{
};

// Function UTGame.GFxProjectedUI.SetupInfo
struct UGFxProjectedUI_SetupInfo_Params
{
};

// Function UTGame.GFxProjectedUI.SetupBackpack
struct UGFxProjectedUI_SetupBackpack_Params
{
};

// Function UTGame.GFxProjectedUI.SetupArsenal
struct UGFxProjectedUI_SetupArsenal_Params
{
};

// Function UTGame.GFxProjectedUI.SetupBorder
struct UGFxProjectedUI_SetupBorder_Params
{
};

// Function UTGame.GFxProjectedUI.SetupBG
struct UGFxProjectedUI_SetupBG_Params
{
};

// Function UTGame.GFxProjectedUI.OnCloseAnimComplete
struct UGFxProjectedUI_OnCloseAnimComplete_Params
{
};

// Function UTGame.GFxProjectedUI.StartCloseAnimation
struct UGFxProjectedUI_StartCloseAnimation_Params
{
};

// Function UTGame.GFxProjectedUI.AddCaptureKeys
struct UGFxProjectedUI_AddCaptureKeys_Params
{
};

// Function UTGame.GFxProjectedUI.ConfigureInventory
struct UGFxProjectedUI_ConfigureInventory_Params
{
};

// Function UTGame.GFxProjectedUI.Start
struct UGFxProjectedUI_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUI_InventoryButton.SetIconMC
struct UGFxUI_InventoryButton_SetIconMC_Params
{
	class UGFxObject*                                  iconClip;                                                 // (Parm)
};

// Function UTGame.GFxUI_InventoryButton.SetContent
struct UGFxUI_InventoryButton_SetContent_Params
{
	struct FString                                     newContent;                                               // (Parm, NeedCtorLink)
};

// Function UTGame.UTItemPickupFactory.BotDesireability
struct AUTItemPickupFactory_BotDesireability_Params
{
	class APawn*                                       P;                                                        // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTItemPickupFactory.GetRespawnTime
struct AUTItemPickupFactory_GetRespawnTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTItemPickupFactory.SetRespawn
struct AUTItemPickupFactory_SetRespawn_Params
{
};

// Function UTGame.UTItemPickupFactory.SpawnCopyFor
struct AUTItemPickupFactory_SpawnCopyFor_Params
{
	class APawn*                                       Recipient;                                                // (Parm)
};

// Function UTGame.UTItemPickupFactory.GetLocalString
struct AUTItemPickupFactory_GetLocalString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTItemPickupFactory.InitializePickup
struct AUTItemPickupFactory_InitializePickup_Params
{
};

// Function UTGame.UTHealthPickupFactory.BotDesireability
struct AUTHealthPickupFactory_BotDesireability_Params
{
	class APawn*                                       P;                                                        // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTHealthPickupFactory.HealAmount
struct AUTHealthPickupFactory_HealAmount_Params
{
	class APawn*                                       Recipient;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTHealthPickupFactory.SpawnCopyFor
struct AUTHealthPickupFactory_SpawnCopyFor_Params
{
	class APawn*                                       Recipient;                                                // (Parm)
};

// Function UTGame.UTHealthPickupFactory.UpdateHUD
struct AUTHealthPickupFactory_UpdateHUD_Params
{
	class AUTHUD*                                      H;                                                        // (Parm)
};

// Function UTGame.UTArmorPickupFactory.BotDesireability
struct AUTArmorPickupFactory_BotDesireability_Params
{
	class APawn*                                       Bot;                                                      // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTArmorPickupFactory.AddShieldStrength
struct AUTArmorPickupFactory_AddShieldStrength_Params
{
	class AUTPawn*                                     P;                                                        // (Parm)
};

// Function UTGame.UTArmorPickupFactory.CanUseShield
struct AUTArmorPickupFactory_CanUseShield_Params
{
	class AUTPawn*                                     P;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTArmorPickupFactory.SpawnCopyFor
struct AUTArmorPickupFactory_SpawnCopyFor_Params
{
	class APawn*                                       Recipient;                                                // (Parm)
};

// Function UTGame.UTArmorPickupFactory.PostBeginPlay
struct AUTArmorPickupFactory_PostBeginPlay_Params
{
};

// Function UTGame.UTArmorPickupFactory.UpdateHUD
struct AUTArmorPickupFactory_UpdateHUD_Params
{
	class AUTHUD*                                      H;                                                        // (Parm)
};

// Function UTGame.UTWeap_RocketLauncher.ReplicatedEvent
struct AUTWeap_RocketLauncher_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTWeap_RocketLauncher.AddAmmo
struct AUTWeap_RocketLauncher_AddAmmo_Params
{
	int                                                Amount;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_RocketLauncher.UpdateAmmoVisibility
struct AUTWeap_RocketLauncher_UpdateAmmoVisibility_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.HideRocket
struct AUTWeap_RocketLauncher_HideRocket_Params
{
	struct FName                                       RocketName;                                               // (Parm)
	bool                                               ShouldHide;                                               // (Parm)
};

// Function UTGame.UTWeap_RocketLauncher.HideRocketAmmo
struct AUTWeap_RocketLauncher_HideRocketAmmo_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.PlayFiringSound
struct AUTWeap_RocketLauncher_PlayFiringSound_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.GetProjectileClass
struct AUTWeap_RocketLauncher_GetProjectileClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_RocketLauncher.ProjectileFire
struct AUTWeap_RocketLauncher_ProjectileFire_Params
{
	class AProjectile*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_RocketLauncher.FireLoad
struct AUTWeap_RocketLauncher_FireLoad_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.WeaponFireLoad
struct AUTWeap_RocketLauncher_WeaponFireLoad_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.GetSpreadDist
struct AUTWeap_RocketLauncher_GetSpreadDist_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_RocketLauncher.BestMode
struct AUTWeap_RocketLauncher_BestMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_RocketLauncher.GetAIRating
struct AUTWeap_RocketLauncher_GetAIRating_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_RocketLauncher.SuggestAttackStyle
struct AUTWeap_RocketLauncher_SuggestAttackStyle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_RocketLauncher.DrawLFMData
struct AUTWeap_RocketLauncher_DrawLFMData_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
};

// Function UTGame.UTWeap_RocketLauncher.CauseMuzzleFlash
struct AUTWeap_RocketLauncher_CauseMuzzleFlash_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.DetachMuzzleFlash
struct AUTWeap_RocketLauncher_DetachMuzzleFlash_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.AttachMuzzleFlash
struct AUTWeap_RocketLauncher_AttachMuzzleFlash_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.CauseMuzzleFlashLight
struct AUTWeap_RocketLauncher_CauseMuzzleFlashLight_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.StopMuzzleFlash
struct AUTWeap_RocketLauncher_StopMuzzleFlash_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.MuzzleFlashTimer
struct AUTWeap_RocketLauncher_MuzzleFlashTimer_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.ActiveRenderOverlays
struct AUTWeap_RocketLauncher_ActiveRenderOverlays_Params
{
	class AHUD*                                        H;                                                        // (Parm)
};

// Function UTGame.UTWeap_RocketLauncher.Destroyed
struct AUTWeap_RocketLauncher_Destroyed_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.CheckTargetLock
struct AUTWeap_RocketLauncher_CheckTargetLock_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.Tick
struct AUTWeap_RocketLauncher_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTWeap_RocketLauncher.CanLockOnTo
struct AUTWeap_RocketLauncher_CanLockOnTo_Params
{
	class AActor*                                      TA;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_RocketLauncher.AdjustLockTarget
struct AUTWeap_RocketLauncher_AdjustLockTarget_Params
{
	class AActor*                                      NewLockTarget;                                            // (Parm)
};

// Function UTGame.UTWeap_RocketLauncher.FireAmmunition
struct AUTWeap_RocketLauncher_FireAmmunition_Params
{
};

// Function UTGame.UTWeap_RocketLauncher.GetWeaponDebug
struct AUTWeap_RocketLauncher_GetWeaponDebug_Params
{
	TArray<struct FString>                             DebugInfo;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTWeap_RocketLauncher.GetFireInterval
struct AUTWeap_RocketLauncher_GetFireInterval_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_RocketLauncher.AdjustWeaponTimingForConsole
struct AUTWeap_RocketLauncher_AdjustWeaponTimingForConsole_Params
{
};

// Function UTGame.GFxUDKFrontEnd.DestroyDependantViews
struct UGFxUDKFrontEnd_DestroyDependantViews_Params
{
	struct FName                                       InViewName;                                               // (Parm)
};

// Function UTGame.GFxUDKFrontEnd.LoadDependantViews
struct UGFxUDKFrontEnd_LoadDependantViews_Params
{
	struct FName                                       InViewName;                                               // (Parm)
};

// Function UTGame.GFxUDKFrontEnd.WidgetInitialized
struct UGFxUDKFrontEnd_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd.CheckLinkConnectionAndError
struct UGFxUDKFrontEnd_CheckLinkConnectionAndError_Params
{
	struct FString                                     AlternateTitle;                                           // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     AlternateMessage;                                         // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd.PostWidgetInit
struct UGFxUDKFrontEnd_PostWidgetInit_Params
{
};

// Function UTGame.GFxUDKFrontEnd.ASShowCursor
struct UGFxUDKFrontEnd_ASShowCursor_Params
{
	bool                                               bShowCursor;                                              // (Parm)
};

// Function UTGame.GFxUDKFrontEnd.ConfigureView
struct UGFxUDKFrontEnd_ConfigureView_Params
{
	class UGFxUDKFrontEnd_View*                        InView;                                                   // (Parm)
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
};

// Function UTGame.GFxUDKFrontEnd.UpdateViewLayout
struct UGFxUDKFrontEnd_UpdateViewLayout_Params
{
};

// Function UTGame.GFxUDKFrontEnd.PopViewStub
struct UGFxUDKFrontEnd_PopViewStub_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd.PopView
struct UGFxUDKFrontEnd_PopView_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd.ASSetSelectionFocus
struct UGFxUDKFrontEnd_ASSetSelectionFocus_Params
{
	class UGFxObject*                                  MovieClip;                                                // (Parm)
};

// Function UTGame.GFxUDKFrontEnd.SetSelectionFocus
struct UGFxUDKFrontEnd_SetSelectionFocus_Params
{
	class UGFxObject*                                  MovieClip;                                                // (Parm, CoerceParm)
};

// Function UTGame.GFxUDKFrontEnd.PushDialogView
struct UGFxUDKFrontEnd_PushDialogView_Params
{
	class UGFxUDKFrontEnd_View*                        dialogView;                                               // (Parm, CoerceParm)
};

// Function UTGame.GFxUDKFrontEnd.PushView
struct UGFxUDKFrontEnd_PushView_Params
{
	class UGFxUDKFrontEnd_View*                        TargetView;                                               // (Parm, CoerceParm)
};

// Function UTGame.GFxUDKFrontEnd.IsViewAllowed
struct UGFxUDKFrontEnd_IsViewAllowed_Params
{
	class UGFxUDKFrontEnd_View*                        TargetView;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd.ConfigureTargetView
struct UGFxUDKFrontEnd_ConfigureTargetView_Params
{
	class UGFxUDKFrontEnd_View*                        TargetView;                                               // (Parm)
};

// Function UTGame.GFxUDKFrontEnd.ConfigureTargetDialog
struct UGFxUDKFrontEnd_ConfigureTargetDialog_Params
{
	class UGFxUDKFrontEnd_View*                        TargetDialog;                                             // (Parm, CoerceParm)
};

// Function UTGame.GFxUDKFrontEnd.SpawnDialog
struct UGFxUDKFrontEnd_SpawnDialog_Params
{
	struct FName                                       TargetDialogName;                                         // (Parm)
	class UGFxUDKFrontEnd_Screen*                      ParentView;                                               // (OptionalParm, Parm)
	class UGFxUDKFrontEnd_Dialog*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd.PushViewByName
struct UGFxUDKFrontEnd_PushViewByName_Params
{
	struct FName                                       TargetViewName;                                           // (Parm)
	class UGFxUDKFrontEnd_Screen*                      ParentView;                                               // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd.SetEscapeDelegate
struct UGFxUDKFrontEnd_SetEscapeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd.IsViewLoaded
struct UGFxUDKFrontEnd_IsViewLoaded_Params
{
	struct FName                                       InViewName;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd.LoadViewByName
struct UGFxUDKFrontEnd_LoadViewByName_Params
{
	struct FName                                       InViewName;                                               // (Parm)
};

// Function UTGame.GFxUDKFrontEnd.LoadView
struct UGFxUDKFrontEnd_LoadView_Params
{
	struct FViewInfo                                   InViewInfo;                                               // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd.LoadViews
struct UGFxUDKFrontEnd_LoadViews_Params
{
};

// Function UTGame.GFxUDKFrontEnd.ConfigFrontEnd
struct UGFxUDKFrontEnd_ConfigFrontEnd_Params
{
};

// Function UTGame.GFxUDKFrontEnd.Start
struct UGFxUDKFrontEnd_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd.EscapeDelegate
struct UGFxUDKFrontEnd_EscapeDelegate_Params
{
};

// Function UTGame.GFxUIView.ConsoleCommand
struct UGFxUIView_ConsoleCommand_Params
{
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	bool                                               bWriteToLog;                                              // (OptionalParm, Parm)
};

// Function UTGame.GFxUIView.GetPlayerControllerId
struct UGFxUIView_GetPlayerControllerId_Params
{
	int                                                PlayerIndex;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUIView.GetPlayerIndex
struct UGFxUIView_GetPlayerIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUIView.GetCommonOptionsURL
struct UGFxUIView_GetCommonOptionsURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUIView.IsLoggedIn
struct UGFxUIView_IsLoggedIn_Params
{
	int                                                ControllerId;                                             // (OptionalParm, Parm)
	bool                                               bRequireOnlineLogin;                                      // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUIView.GetPlayerName
struct UGFxUIView_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUIView.HasLinkConnection
struct UGFxUIView_HasLinkConnection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUIView.GetUDKPlayerOwner
struct UGFxUIView_GetUDKPlayerOwner_Params
{
	int                                                PlayerIndex;                                              // (OptionalParm, Parm)
	class AUDKPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUIView.GetPlayerOwner
struct UGFxUIView_GetPlayerOwner_Params
{
	int                                                PlayerIndex;                                              // (OptionalParm, Parm)
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_View.WidgetInitialized
struct UGFxUDKFrontEnd_View_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_View.OnEscapeKeyPress
struct UGFxUDKFrontEnd_View_OnEscapeKeyPress_Params
{
};

// Function UTGame.GFxUDKFrontEnd_View.MoveBackImpl
struct UGFxUDKFrontEnd_View_MoveBackImpl_Params
{
};

// Function UTGame.GFxUDKFrontEnd_View.Select_Back
struct UGFxUDKFrontEnd_View_Select_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_View.PlayCloseAnimation
struct UGFxUDKFrontEnd_View_PlayCloseAnimation_Params
{
};

// Function UTGame.GFxUDKFrontEnd_View.PlayOpenAnimation
struct UGFxUDKFrontEnd_View_PlayOpenAnimation_Params
{
};

// Function UTGame.GFxUDKFrontEnd_View.DisableSubComponents
struct UGFxUDKFrontEnd_View_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_View.OnViewClosed
struct UGFxUDKFrontEnd_View_OnViewClosed_Params
{
};

// Function UTGame.GFxUDKFrontEnd_View.OnViewActivated
struct UGFxUDKFrontEnd_View_OnViewActivated_Params
{
};

// Function UTGame.GFxUDKFrontEnd_View.OnTopMostView
struct UGFxUDKFrontEnd_View_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_View.OnViewLoaded
struct UGFxUDKFrontEnd_View_OnViewLoaded_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Dialog.WidgetInitialized
struct UGFxUDKFrontEnd_Dialog_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_Dialog.Select_Back
struct UGFxUDKFrontEnd_Dialog_Select_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_Dialog.SetBackButton_OnPress
struct UGFxUDKFrontEnd_Dialog_SetBackButton_OnPress_Params
{
	struct FScriptDelegate                             EventListener;                                            // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_Dialog.SetBackButton
struct UGFxUDKFrontEnd_Dialog_SetBackButton_Params
{
	class UGFxObject*                                  InBackButton;                                             // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_Dialog.PlayCloseAnimation
struct UGFxUDKFrontEnd_Dialog_PlayCloseAnimation_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Dialog.PlayOpenAnimation
struct UGFxUDKFrontEnd_Dialog_PlayOpenAnimation_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Dialog.OnTopMostView
struct UGFxUDKFrontEnd_Dialog_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_Dialog.DisableSubComponents
struct UGFxUDKFrontEnd_Dialog_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_Dialog.OnViewClosed
struct UGFxUDKFrontEnd_Dialog_OnViewClosed_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Dialog.AcceptDelegate
struct UGFxUDKFrontEnd_Dialog_AcceptDelegate_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_PasswordDialog.WidgetInitialized
struct UGFxUDKFrontEnd_PasswordDialog_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_PasswordDialog.ClearPasswordRenderer
struct UGFxUDKFrontEnd_PasswordDialog_ClearPasswordRenderer_Params
{
};

// Function UTGame.GFxUDKFrontEnd_PasswordDialog.GetPassword
struct UGFxUDKFrontEnd_PasswordDialog_GetPassword_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_PasswordDialog.SetOKButtonListener
struct UGFxUDKFrontEnd_PasswordDialog_SetOKButtonListener_Params
{
	struct FScriptDelegate                             DelegateListener;                                         // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_PasswordDialog.SetBackButtonListener
struct UGFxUDKFrontEnd_PasswordDialog_SetBackButtonListener_Params
{
	struct FScriptDelegate                             DelegateListener;                                         // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_PasswordDialog.DisableSubComponents
struct UGFxUDKFrontEnd_PasswordDialog_DisableSubComponents_Params
{
	bool                                               bEnableComponents;                                        // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_PasswordDialog.OnViewClosed
struct UGFxUDKFrontEnd_PasswordDialog_OnViewClosed_Params
{
};

// Function UTGame.GFxUDKFrontEnd_PasswordDialog.OnTopMostView
struct UGFxUDKFrontEnd_PasswordDialog_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_ErrorDialog.DisableSubComponents
struct UGFxUDKFrontEnd_ErrorDialog_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_ErrorDialog.OnViewClosed
struct UGFxUDKFrontEnd_ErrorDialog_OnViewClosed_Params
{
};

// Function UTGame.GFxUDKFrontEnd_ErrorDialog.SetButtonLabel
struct UGFxUDKFrontEnd_ErrorDialog_SetButtonLabel_Params
{
	struct FString                                     ButtonLabel;                                              // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_ErrorDialog.SetInfo
struct UGFxUDKFrontEnd_ErrorDialog_SetInfo_Params
{
	struct FString                                     Info;                                                     // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_ErrorDialog.SetTitle
struct UGFxUDKFrontEnd_ErrorDialog_SetTitle_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_ErrorDialog.OnTopMostView
struct UGFxUDKFrontEnd_ErrorDialog_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinDialog.WidgetInitialized
struct UGFxUDKFrontEnd_JoinDialog_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_JoinDialog.SetSpectateButtonPress
struct UGFxUDKFrontEnd_JoinDialog_SetSpectateButtonPress_Params
{
	struct FScriptDelegate                             SpectateButtonListener;                                   // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinDialog.SetJoinButtonPress
struct UGFxUDKFrontEnd_JoinDialog_SetJoinButtonPress_Params
{
	struct FScriptDelegate                             JoinButtonListener;                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinDialog.PopulateServerInfo
struct UGFxUDKFrontEnd_JoinDialog_PopulateServerInfo_Params
{
	class UOnlineGameSettings*                         GameSettings;                                             // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinDialog.DisableSubComponents
struct UGFxUDKFrontEnd_JoinDialog_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinDialog.OnTopMostView
struct UGFxUDKFrontEnd_JoinDialog_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.WidgetInitialized
struct UGFxUDKFrontEnd_FilterDialog_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.PushFilterListUpdate
struct UGFxUDKFrontEnd_FilterDialog_PushFilterListUpdate_Params
{
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.SetupListDataProvider
struct UGFxUDKFrontEnd_FilterDialog_SetupListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.OnFilterList_OptionChanged
struct UGFxUDKFrontEnd_FilterDialog_OnFilterList_OptionChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.GetGameClassByFriendlyName
struct UGFxUDKFrontEnd_FilterDialog_GetGameClassByFriendlyName_Params
{
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.ForceLANOption
struct UGFxUDKFrontEnd_FilterDialog_ForceLANOption_Params
{
	int                                                PlayerIndex;                                              // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.ValidateServerType
struct UGFxUDKFrontEnd_FilterDialog_ValidateServerType_Params
{
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.SetBackButtonListener
struct UGFxUDKFrontEnd_FilterDialog_SetBackButtonListener_Params
{
	struct FScriptDelegate                             DelegateListener;                                         // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.DisableSubComponents
struct UGFxUDKFrontEnd_FilterDialog_DisableSubComponents_Params
{
	bool                                               bEnableComponents;                                        // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.OnViewClosed
struct UGFxUDKFrontEnd_FilterDialog_OnViewClosed_Params
{
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.OnTopMostView
struct UGFxUDKFrontEnd_FilterDialog_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.OnViewLoaded
struct UGFxUDKFrontEnd_FilterDialog_OnViewLoaded_Params
{
};

// Function UTGame.GFxUDKFrontEnd_FilterDialog.OnSwitchedGameType
struct UGFxUDKFrontEnd_FilterDialog_OnSwitchedGameType_Params
{
};

// Function UTGame.GFxUDKFrontEnd_InfoDialog.SetAcceptButton_OnPress
struct UGFxUDKFrontEnd_InfoDialog_SetAcceptButton_OnPress_Params
{
	struct FScriptDelegate                             EventListener;                                            // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_InfoDialog.SetBackButtonLabel
struct UGFxUDKFrontEnd_InfoDialog_SetBackButtonLabel_Params
{
	struct FString                                     Label;                                                    // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_InfoDialog.SetAcceptButtonLabel
struct UGFxUDKFrontEnd_InfoDialog_SetAcceptButtonLabel_Params
{
	struct FString                                     Label;                                                    // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_InfoDialog.SetInfo
struct UGFxUDKFrontEnd_InfoDialog_SetInfo_Params
{
	struct FString                                     Info;                                                     // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_InfoDialog.SetTitle
struct UGFxUDKFrontEnd_InfoDialog_SetTitle_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_InfoDialog.DisableSubComponents
struct UGFxUDKFrontEnd_InfoDialog_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_InfoDialog.OnTopMostView
struct UGFxUDKFrontEnd_InfoDialog_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_InfoDialog.OnViewClosed
struct UGFxUDKFrontEnd_InfoDialog_OnViewClosed_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Screen.WidgetInitialized
struct UGFxUDKFrontEnd_Screen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_Screen.UpdateHelpButtonImages
struct UGFxUDKFrontEnd_Screen_UpdateHelpButtonImages_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Screen.FocusIn_BackButton
struct UGFxUDKFrontEnd_Screen_FocusIn_BackButton_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.WidgetInitialized
struct UGFxUDKFrontEnd_JoinGame_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.NotifyGameTypeChanged
struct UGFxUDKFrontEnd_JoinGame_NotifyGameTypeChanged_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnCancelSearchComplete
struct UGFxUDKFrontEnd_JoinGame_OnCancelSearchComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.SetRefreshing
struct UGFxUDKFrontEnd_JoinGame_SetRefreshing_Params
{
	bool                                               IsRefreshing;                                             // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.CancelQuery
struct UGFxUDKFrontEnd_JoinGame_CancelQuery_Params
{
	TEnumAsByte<EQueryCompletionAction>                DesiredCancelAction;                                      // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.AllowJoinServer
struct UGFxUDKFrontEnd_JoinGame_AllowJoinServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnJoinGameComplete
struct UGFxUDKFrontEnd_JoinGame_OnJoinGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bSuccessful;                                              // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.ProcessJoin
struct UGFxUDKFrontEnd_JoinGame_ProcessJoin_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.JoinServer
struct UGFxUDKFrontEnd_JoinGame_JoinServer_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.JoinServerClikListener
struct UGFxUDKFrontEnd_JoinGame_JoinServerClikListener_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.SpectateServer
struct UGFxUDKFrontEnd_JoinGame_SpectateServer_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnServerListItemPress
struct UGFxUDKFrontEnd_JoinGame_OnServerListItemPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnPingHeaderPress
struct UGFxUDKFrontEnd_JoinGame_OnPingHeaderPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnPlayersHeaderPress
struct UGFxUDKFrontEnd_JoinGame_OnPlayersHeaderPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnMapHeaderPress
struct UGFxUDKFrontEnd_JoinGame_OnMapHeaderPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnServerHeaderPress
struct UGFxUDKFrontEnd_JoinGame_OnServerHeaderPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.UpdateListDataProvider
struct UGFxUDKFrontEnd_JoinGame_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.ServerFilterChangedGameType
struct UGFxUDKFrontEnd_JoinGame_ServerFilterChangedGameType_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnFilterButtonPress
struct UGFxUDKFrontEnd_JoinGame_OnFilterButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnRefreshButtonPress
struct UGFxUDKFrontEnd_JoinGame_OnRefreshButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.GetDesiredMatchType
struct UGFxUDKFrontEnd_JoinGame_GetDesiredMatchType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnFindOnlineGamesComplete
struct UGFxUDKFrontEnd_JoinGame_OnFindOnlineGamesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnFindOnlineGamesCompleteDelegate
struct UGFxUDKFrontEnd_JoinGame_OnFindOnlineGamesCompleteDelegate_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.SubmitServerListQuery
struct UGFxUDKFrontEnd_JoinGame_SubmitServerListQuery_Params
{
	int                                                PlayerIndex;                                              // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.RefreshServerList
struct UGFxUDKFrontEnd_JoinGame_RefreshServerList_Params
{
	int                                                InPlayerIndex;                                            // (Parm)
	int                                                MaxResults;                                               // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.BuildJoinURL
struct UGFxUDKFrontEnd_JoinGame_BuildJoinURL_Params
{
	struct FString                                     ResolvedConnectionURL;                                    // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.UpdateServerCount
struct UGFxUDKFrontEnd_JoinGame_UpdateServerCount_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnPasswordDialog_OK
struct UGFxUDKFrontEnd_JoinGame_OnPasswordDialog_OK_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.StripInvalidPasswordCharacters
struct UGFxUDKFrontEnd_JoinGame_StripInvalidPasswordCharacters_Params
{
	struct FString                                     PasswordString;                                           // (Parm, NeedCtorLink)
	struct FString                                     InvalidChars;                                             // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.PromptForServerPassword
struct UGFxUDKFrontEnd_JoinGame_PromptForServerPassword_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.UpdateButtonStates
struct UGFxUDKFrontEnd_JoinGame_UpdateButtonStates_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.UseLANMode
struct UGFxUDKFrontEnd_JoinGame_UseLANMode_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.ConditionalRefreshServerList
struct UGFxUDKFrontEnd_JoinGame_ConditionalRefreshServerList_Params
{
	int                                                PlayerIndex;                                              // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnGameTypeChanged
struct UGFxUDKFrontEnd_JoinGame_OnGameTypeChanged_Params
{
	int                                                PlayerIndex;                                              // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.GetGameTypeSearchProviderIndex
struct UGFxUDKFrontEnd_JoinGame_GetGameTypeSearchProviderIndex_Params
{
	struct FString                                     GameClassName;                                            // (OptionalParm, Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.UpdateFilterButton
struct UGFxUDKFrontEnd_JoinGame_UpdateFilterButton_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.Cleanup
struct UGFxUDKFrontEnd_JoinGame_Cleanup_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.ForceLANOption
struct UGFxUDKFrontEnd_JoinGame_ForceLANOption_Params
{
	int                                                PlayerIndex;                                              // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.ValidateServerType
struct UGFxUDKFrontEnd_JoinGame_ValidateServerType_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.DisableSubComponents
struct UGFxUDKFrontEnd_JoinGame_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnViewClosed
struct UGFxUDKFrontEnd_JoinGame_OnViewClosed_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnTopMostView
struct UGFxUDKFrontEnd_JoinGame_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnViewActivated
struct UGFxUDKFrontEnd_JoinGame_OnViewActivated_Params
{
};

// Function UTGame.GFxUDKFrontEnd_JoinGame.OnViewLoaded
struct UGFxUDKFrontEnd_JoinGame_OnViewLoaded_Params
{
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.WidgetInitialized
struct UGFxUDKFrontEnd_SettingsBase_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.FindPropertyIndexByName
struct UGFxUDKFrontEnd_SettingsBase_FindPropertyIndexByName_Params
{
	struct FString                                     InPropertyName;                                           // (Parm, CoerceParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.Select_BackImpl
struct UGFxUDKFrontEnd_SettingsBase_Select_BackImpl_Params
{
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.OnEscapeKeyPress
struct UGFxUDKFrontEnd_SettingsBase_OnEscapeKeyPress_Params
{
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.FindLocalizedSettingIndexByName
struct UGFxUDKFrontEnd_SettingsBase_FindLocalizedSettingIndexByName_Params
{
	struct FString                                     InSettingName;                                            // (Parm, CoerceParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.UpdateListDataProvider
struct UGFxUDKFrontEnd_SettingsBase_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.UpdateDescription
struct UGFxUDKFrontEnd_SettingsBase_UpdateDescription_Params
{
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.OnOptionChanged
struct UGFxUDKFrontEnd_SettingsBase_OnOptionChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.OnListChange
struct UGFxUDKFrontEnd_SettingsBase_OnListChange_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.SetList
struct UGFxUDKFrontEnd_SettingsBase_SetList_Params
{
	class UGFxObject*                                  List;                                                     // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.SaveState
struct UGFxUDKFrontEnd_SettingsBase_SaveState_Params
{
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.Select_Back
struct UGFxUDKFrontEnd_SettingsBase_Select_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.LoadDataFromStore
struct UGFxUDKFrontEnd_SettingsBase_LoadDataFromStore_Params
{
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.SetSelectedOptionSet
struct UGFxUDKFrontEnd_SettingsBase_SetSelectedOptionSet_Params
{
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.DisableSubComponents
struct UGFxUDKFrontEnd_SettingsBase_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.OnTopMostView
struct UGFxUDKFrontEnd_SettingsBase_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.OnViewActivated
struct UGFxUDKFrontEnd_SettingsBase_OnViewActivated_Params
{
};

// Function UTGame.GFxUDKFrontEnd_SettingsBase.OnViewLoaded
struct UGFxUDKFrontEnd_SettingsBase_OnViewLoaded_Params
{
};

// Function UTGame.GFxUDKFrontEnd_ServerSettings.FindControlByUTClassName
struct UGFxUDKFrontEnd_ServerSettings_FindControlByUTClassName_Params
{
	unsigned char                                      UTUIControlClass;                                         // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_ServerSettings.PopulateOptionDataProviderForIndex
struct UGFxUDKFrontEnd_ServerSettings_PopulateOptionDataProviderForIndex_Params
{
	int                                                Index;                                                    // (Const, Parm)
	class UGFxObject*                                  OutDataProvider;                                          // (Parm, OutParm)
	struct FString                                     OutDefaultValue;                                          // (Parm, OutParm, NeedCtorLink)
	int                                                OutDefaultIndex;                                          // (Parm, OutParm)
};

// Function UTGame.GFxUDKFrontEnd_ServerSettings.UpdateListDataProvider
struct UGFxUDKFrontEnd_ServerSettings_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_ServerSettings.SaveState
struct UGFxUDKFrontEnd_ServerSettings_SaveState_Params
{
};

// Function UTGame.GFxUDKFrontEnd_ServerSettings.OnOptionChanged
struct UGFxUDKFrontEnd_ServerSettings_OnOptionChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_ServerSettings.SetSelectedOptionSet
struct UGFxUDKFrontEnd_ServerSettings_SetSelectedOptionSet_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Settings.PopulateOptionDataProviderForIndex
struct UGFxUDKFrontEnd_Settings_PopulateOptionDataProviderForIndex_Params
{
	int                                                Index;                                                    // (Const, Parm)
	class UGFxObject*                                  OutDataProvider;                                          // (Parm, OutParm)
	struct FString                                     OutDefaultValue;                                          // (Parm, OutParm, NeedCtorLink)
	int                                                OutDefaultIndex;                                          // (Parm, OutParm)
};

// Function UTGame.GFxUDKFrontEnd_Settings.UpdateListDataProvider
struct UGFxUDKFrontEnd_Settings_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Settings.SetSelectedOptionSet
struct UGFxUDKFrontEnd_Settings_SetSelectedOptionSet_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Mutators.WidgetInitialized
struct UGFxUDKFrontEnd_Mutators_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.SetConfigList
struct UGFxUDKFrontEnd_Mutators_SetConfigList_Params
{
	class UGFxObject*                                  ConfigList;                                               // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.SetList
struct UGFxUDKFrontEnd_Mutators_SetList_Params
{
	class UGFxObject*                                  List;                                                     // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.IsCurrentMutatorConfigurable
struct UGFxUDKFrontEnd_Mutators_IsCurrentMutatorConfigurable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.ApplyGameModeFilter
struct UGFxUDKFrontEnd_Mutators_ApplyGameModeFilter_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Mutators.GetNumEnabledMutators
struct UGFxUDKFrontEnd_Mutators_GetNumEnabledMutators_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.GetEnabledMutators
struct UGFxUDKFrontEnd_Mutators_GetEnabledMutators_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.AddMutatorAndFilterList
struct UGFxUDKFrontEnd_Mutators_AddMutatorAndFilterList_Params
{
	int                                                NewMutator;                                               // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.SetMutatorEnabled
struct UGFxUDKFrontEnd_Mutators_SetMutatorEnabled_Params
{
	int                                                MutatorId;                                                // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.UpdateConfigListDataProvider
struct UGFxUDKFrontEnd_Mutators_UpdateConfigListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Mutators.UpdateListDataProvider
struct UGFxUDKFrontEnd_Mutators_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Mutators.UpdateDescription
struct UGFxUDKFrontEnd_Mutators_UpdateDescription_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Mutators.OnListChange
struct UGFxUDKFrontEnd_Mutators_OnListChange_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.FindMutatorIndexByClass
struct UGFxUDKFrontEnd_Mutators_FindMutatorIndexByClass_Params
{
	struct FString                                     MutatorClass;                                             // (Parm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.OnListItemPress
struct UGFxUDKFrontEnd_Mutators_OnListItemPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.PlayOpenAnimation
struct UGFxUDKFrontEnd_Mutators_PlayOpenAnimation_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Mutators.DisableSubComponents
struct UGFxUDKFrontEnd_Mutators_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.OnTopMostView
struct UGFxUDKFrontEnd_Mutators_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_Mutators.SortAllMutatorsBasedOnOfficialArray
struct UGFxUDKFrontEnd_Mutators_SortAllMutatorsBasedOnOfficialArray_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Mutators.OnViewActivated
struct UGFxUDKFrontEnd_Mutators_OnViewActivated_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Mutators.OnViewLoaded
struct UGFxUDKFrontEnd_Mutators_OnViewLoaded_Params
{
};

// Function UTGame.GFxUDKFrontEnd_GameMode.WidgetInitialized
struct UGFxUDKFrontEnd_GameMode_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_GameMode.ASSetList
struct UGFxUDKFrontEnd_GameMode_ASSetList_Params
{
	class UGFxObject*                                  List;                                                     // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_GameMode.SetImgScroller
struct UGFxUDKFrontEnd_GameMode_SetImgScroller_Params
{
	class UGFxClikWidget*                              InImgScroller;                                            // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_GameMode.UpdateListDataProvider
struct UGFxUDKFrontEnd_GameMode_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_GameMode.UpdateDescription
struct UGFxUDKFrontEnd_GameMode_UpdateDescription_Params
{
};

// Function UTGame.GFxUDKFrontEnd_GameMode.OnListChange
struct UGFxUDKFrontEnd_GameMode_OnListChange_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_GameMode.OnListItemPress
struct UGFxUDKFrontEnd_GameMode_OnListItemPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_GameMode.OnGameModeChange
struct UGFxUDKFrontEnd_GameMode_OnGameModeChange_Params
{
	int                                                SelectedIndex;                                            // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_GameMode.OnGameModeSelected
struct UGFxUDKFrontEnd_GameMode_OnGameModeSelected_Params
{
	struct FString                                     InGameMode;                                               // (Parm, NeedCtorLink)
	struct FString                                     InDefaultMap;                                             // (Parm, NeedCtorLink)
	struct FString                                     InGameSettingsClass;                                      // (OptionalParm, Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_GameMode.DisableSubComponents
struct UGFxUDKFrontEnd_GameMode_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_GameMode.OnTopMostView
struct UGFxUDKFrontEnd_GameMode_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_GameMode.OnViewLoaded
struct UGFxUDKFrontEnd_GameMode_OnViewLoaded_Params
{
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.WidgetInitialized
struct UGFxUDKFrontEnd_MapSelect_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.GetMapFriendlyName
struct UGFxUDKFrontEnd_MapSelect_GetMapFriendlyName_Params
{
	struct FString                                     Map;                                                      // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.GetSelectedMap
struct UGFxUDKFrontEnd_MapSelect_GetSelectedMap_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.SetupMapCycle
struct UGFxUDKFrontEnd_MapSelect_SetupMapCycle_Params
{
	struct FString                                     SelectedMap;                                              // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.GetCurrentGameMode
struct UGFxUDKFrontEnd_MapSelect_GetCurrentGameMode_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.GetImageMarkupByMapName
struct UGFxUDKFrontEnd_MapSelect_GetImageMarkupByMapName_Params
{
	struct FString                                     InMapName;                                                // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.SetImgScroller
struct UGFxUDKFrontEnd_MapSelect_SetImgScroller_Params
{
	class UGFxClikWidget*                              InImgScroller;                                            // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.UpdateListDataProvider
struct UGFxUDKFrontEnd_MapSelect_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.OnListItemPress
struct UGFxUDKFrontEnd_MapSelect_OnListItemPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.SetList
struct UGFxUDKFrontEnd_MapSelect_SetList_Params
{
	class UGFxObject*                                  List;                                                     // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.OnMapList_ValueChanged
struct UGFxUDKFrontEnd_MapSelect_OnMapList_ValueChanged_Params
{
	struct FString                                     InMapSelected;                                            // (Parm, NeedCtorLink)
	struct FString                                     InMapImageSelected;                                       // (OptionalParm, Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.DisableSubComponents
struct UGFxUDKFrontEnd_MapSelect_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.OnTopMostView
struct UGFxUDKFrontEnd_MapSelect_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_MapSelect.OnViewLoaded
struct UGFxUDKFrontEnd_MapSelect_OnViewLoaded_Params
{
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.GetStringFromMarkup
struct UGFxUDKFrontEnd_LaunchGame_GetStringFromMarkup_Params
{
	struct FString                                     MarkupString;                                             // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.WidgetInitialized
struct UGFxUDKFrontEnd_LaunchGame_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.GetGameModeFriendlyString
struct UGFxUDKFrontEnd_LaunchGame_GetGameModeFriendlyString_Params
{
	struct FString                                     InGameMode;                                               // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.UpdateListDataProvider
struct UGFxUDKFrontEnd_LaunchGame_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.UpdateDescription
struct UGFxUDKFrontEnd_LaunchGame_UpdateDescription_Params
{
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.OnListChange
struct UGFxUDKFrontEnd_LaunchGame_OnListChange_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.OnListItemPress
struct UGFxUDKFrontEnd_LaunchGame_OnListItemPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.UpdateGameSettingsPanel
struct UGFxUDKFrontEnd_LaunchGame_UpdateGameSettingsPanel_Params
{
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.OnStartGame_Confirm
struct UGFxUDKFrontEnd_LaunchGame_OnStartGame_Confirm_Params
{
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.PlayCloseAnimation
struct UGFxUDKFrontEnd_LaunchGame_PlayCloseAnimation_Params
{
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.PlayOpenAnimation
struct UGFxUDKFrontEnd_LaunchGame_PlayOpenAnimation_Params
{
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.OnTopMostView
struct UGFxUDKFrontEnd_LaunchGame_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.DisableSubComponents
struct UGFxUDKFrontEnd_LaunchGame_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.OnViewActivated
struct UGFxUDKFrontEnd_LaunchGame_OnViewActivated_Params
{
};

// Function UTGame.GFxUDKFrontEnd_LaunchGame.OnViewLoaded
struct UGFxUDKFrontEnd_LaunchGame_OnViewLoaded_Params
{
};

// Function UTGame.GFxUDKFrontEnd_HostGame.OnStartGame_Confirm
struct UGFxUDKFrontEnd_HostGame_OnStartGame_Confirm_Params
{
};

// Function UTGame.GFxUDKFrontEnd_HostGame.FinishStartDedicated
struct UGFxUDKFrontEnd_HostGame_FinishStartDedicated_Params
{
};

// Function UTGame.GFxUDKFrontEnd_HostGame.OnGameCreated
struct UGFxUDKFrontEnd_HostGame_OnGameCreated_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_HostGame.CreateOnlineGame
struct UGFxUDKFrontEnd_HostGame_CreateOnlineGame_Params
{
	int                                                PlayerIndex;                                              // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_HostGame.SetupGameSettings
struct UGFxUDKFrontEnd_HostGame_SetupGameSettings_Params
{
};

// Function UTGame.GFxUDKFrontEnd_HostGame.GenerateMutatorURLString
struct UGFxUDKFrontEnd_HostGame_GenerateMutatorURLString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_HostGame.ValidateServerType
struct UGFxUDKFrontEnd_HostGame_ValidateServerType_Params
{
};

// Function UTGame.GFxUDKFrontEnd_HostGame.StripInvalidPasswordCharacters
struct UGFxUDKFrontEnd_HostGame_StripInvalidPasswordCharacters_Params
{
	struct FString                                     PasswordString;                                           // (Parm, NeedCtorLink)
	struct FString                                     InvalidChars;                                             // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_HostGame.OnTopMostView
struct UGFxUDKFrontEnd_HostGame_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_HostGame.OnViewActivated
struct UGFxUDKFrontEnd_HostGame_OnViewActivated_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.WidgetInitialized
struct UGFxUDKFrontEnd_Multiplayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.SetList
struct UGFxUDKFrontEnd_Multiplayer_SetList_Params
{
	class UGFxObject*                                  InList;                                                   // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.UpdateListDataProvider
struct UGFxUDKFrontEnd_Multiplayer_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.UpdateDescription
struct UGFxUDKFrontEnd_Multiplayer_UpdateDescription_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.OnListChange
struct UGFxUDKFrontEnd_Multiplayer_OnListChange_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.OnListItemPress
struct UGFxUDKFrontEnd_Multiplayer_OnListItemPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.Select_HostGame
struct UGFxUDKFrontEnd_Multiplayer_Select_HostGame_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.Select_JoinGame
struct UGFxUDKFrontEnd_Multiplayer_Select_JoinGame_Params
{
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.DisableSubComponents
struct UGFxUDKFrontEnd_Multiplayer_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.OnTopMostView
struct UGFxUDKFrontEnd_Multiplayer_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_Multiplayer.OnViewLoaded
struct UGFxUDKFrontEnd_Multiplayer_OnViewLoaded_Params
{
};

// Function UTGame.GFxUDKFrontEnd_InstantAction.OnStartGame_Confirm
struct UGFxUDKFrontEnd_InstantAction_OnStartGame_Confirm_Params
{
};

// Function UTGame.GFxUDKFrontEnd_InstantAction.OnViewActivated
struct UGFxUDKFrontEnd_InstantAction_OnViewActivated_Params
{
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.WidgetInitialized
struct UGFxUDKFrontEnd_MainMenu_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.OnEscapeKeyPress
struct UGFxUDKFrontEnd_MainMenu_OnEscapeKeyPress_Params
{
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.SetList
struct UGFxUDKFrontEnd_MainMenu_SetList_Params
{
	class UGFxObject*                                  InList;                                                   // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.UpdateListDataProvider
struct UGFxUDKFrontEnd_MainMenu_UpdateListDataProvider_Params
{
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.UpdateDescription
struct UGFxUDKFrontEnd_MainMenu_UpdateDescription_Params
{
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.OnListChange
struct UGFxUDKFrontEnd_MainMenu_OnListChange_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.OnListItemPress
struct UGFxUDKFrontEnd_MainMenu_OnListItemPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.ExitDialog_SelectBack
struct UGFxUDKFrontEnd_MainMenu_ExitDialog_SelectBack_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.ExitDialog_SelectOK
struct UGFxUDKFrontEnd_MainMenu_ExitDialog_SelectOK_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.Select_ExitGame
struct UGFxUDKFrontEnd_MainMenu_Select_ExitGame_Params
{
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.Select_Multiplayer
struct UGFxUDKFrontEnd_MainMenu_Select_Multiplayer_Params
{
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.Select_InstantAction
struct UGFxUDKFrontEnd_MainMenu_Select_InstantAction_Params
{
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.DisableSubComponents
struct UGFxUDKFrontEnd_MainMenu_DisableSubComponents_Params
{
	bool                                               bDisableComponents;                                       // (Parm)
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.OnTopMostView
struct UGFxUDKFrontEnd_MainMenu_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function UTGame.GFxUDKFrontEnd_MainMenu.OnViewLoaded
struct UGFxUDKFrontEnd_MainMenu_OnViewLoaded_Params
{
};

// Function UTGame.UTDataStore_GameSearchDM.SaveGameSearchParameters
struct UUTDataStore_GameSearchDM_SaveGameSearchParameters_Params
{
};

// Function UTGame.UTDataStore_GameSearchDM.LoadGameSearchParameters
struct UUTDataStore_GameSearchDM_LoadGameSearchParameters_Params
{
};

// Function UTGame.UTDataStore_GameSearchDM.FindStoredSettingValueIndex
struct UUTDataStore_GameSearchDM_FindStoredSettingValueIndex_Params
{
	int                                                StoredGameSearchIndex;                                    // (Parm)
	int                                                LocalizedSettingId;                                       // (Parm)
	bool                                               bAddIfNecessary;                                          // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchDM.FindStoredSearchIndex
struct UUTDataStore_GameSearchDM_FindStoredSearchIndex_Params
{
	struct FName                                       GameSearchName;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchDM.HasOutstandingQueries
struct UUTDataStore_GameSearchDM_HasOutstandingQueries_Params
{
	bool                                               bRestrictCheckToSelf;                                     // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchDM.SubmitGameSearch
struct UUTDataStore_GameSearchDM_SubmitGameSearch_Params
{
	unsigned char                                      ControllerIndex;                                          // (Parm)
	bool                                               bInvalidateExistingSearchResults;                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchDM.Registered
struct UUTDataStore_GameSearchDM_Registered_Params
{
	class ULocalPlayer*                                PlayerOwner;                                              // (Parm)
};

// Function UTGame.UTUIDataProvider_MapInfo.SupportedByCurrentGameMode
struct UUTUIDataProvider_MapInfo_SupportedByCurrentGameMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTUIDataProvider_MapInfo.ShouldBeFiltered
struct UUTUIDataProvider_MapInfo_ShouldBeFiltered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameSettingsCommon.SetCustomMutators
struct UUTGameSettingsCommon_SetCustomMutators_Params
{
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                            // (Parm)
	TArray<struct FString>                             MutatorClassNames;                                        // (Const, Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTGameSettingsCommon.GenerateMutatorBitmaskFromURL
struct UUTGameSettingsCommon_GenerateMutatorBitmaskFromURL_Params
{
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                            // (Parm)
	TArray<struct FString>                             MutatorClassNames;                                        // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameSettingsCommon.SetMutators
struct UUTGameSettingsCommon_SetMutators_Params
{
	struct FString                                     URL;                                                      // (Const, Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTGameSettingsCommon.UpdateFromURL
struct UUTGameSettingsCommon_UpdateFromURL_Params
{
	struct FString                                     URL;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	class AGameInfo*                                   Game;                                                     // (Parm)
};

// Function UTGame.UTGameSettingsCommon.BuildURL
struct UUTGameSettingsCommon_BuildURL_Params
{
	struct FString                                     OutURL;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTGameSettingsCommon.SetOfficialMutatorBitmask
struct UUTGameSettingsCommon_SetOfficialMutatorBitmask_Params
{
	int                                                MutatorBitMask;                                           // (Parm)
};

// Function UTGame.UTGameSettingsCommon.SetCustomMapName
struct UUTGameSettingsCommon_SetCustomMapName_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
};

// Function UTGame.UTBot.HandlePathObstruction
struct AUTBot_HandlePathObstruction_Params
{
	class AActor*                                      BlockedBy;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.UnderLift
struct AUTBot_UnderLift_Params
{
	class ALiftCenter*                                 M;                                                        // (Parm)
};

// Function UTGame.UTBot.PerformCustomAction
struct AUTBot_PerformCustomAction_Params
{
	struct FScriptDelegate                             ActionFunc;                                               // (Parm, NeedCtorLink)
};

// Function UTGame.UTBot.CustomActionFunc
struct AUTBot_CustomActionFunc_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.StopMovement
struct AUTBot_StopMovement_Params
{
};

// Function UTGame.UTBot.FocusOnLeader
struct AUTBot_FocusOnLeader_Params
{
	bool                                               bLeaderFiring;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.IsShootingObjective
struct AUTBot_IsShootingObjective_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.Stopped
struct AUTBot_Stopped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.FindViewSpot
struct AUTBot_FindViewSpot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.IsHunting
struct AUTBot_IsHunting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.EngageDirection
struct AUTBot_EngageDirection_Params
{
	struct FVector                                     StrafeDir;                                                // (Parm)
	bool                                               bForced;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.IsStrafing
struct AUTBot_IsStrafing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.DefendMelee
struct AUTBot_DefendMelee_Params
{
	float                                              Dist;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.DoRetreat
struct AUTBot_DoRetreat_Params
{
};

// Function UTGame.UTBot.DoTacticalMove
struct AUTBot_DoTacticalMove_Params
{
};

// Function UTGame.UTBot.DoCharge
struct AUTBot_DoCharge_Params
{
};

// Function UTGame.UTBot.DoStakeOut
struct AUTBot_DoStakeOut_Params
{
};

// Function UTGame.UTBot.LoseEnemy
struct AUTBot_LoseEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.LostContact
struct AUTBot_LostContact_Params
{
	float                                              MaxTime;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.GetDesiredOffset
struct AUTBot_GetDesiredOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.ForceGiveWeapon
struct AUTBot_ForceGiveWeapon_Params
{
};

// Function UTGame.UTBot.Celebrate
struct AUTBot_Celebrate_Params
{
};

// Function UTGame.UTBot.EnableBumps
struct AUTBot_EnableBumps_Params
{
};

// Function UTGame.UTBot.WanderOrCamp
struct AUTBot_WanderOrCamp_Params
{
};

// Function UTGame.UTBot.MoveAwayFrom
struct AUTBot_MoveAwayFrom_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTBot.MoveToDefensePoint
struct AUTBot_MoveToDefensePoint_Params
{
};

// Function UTGame.UTBot.ShouldDefendPosition
struct AUTBot_ShouldDefendPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.IsDefending
struct AUTBot_IsDefending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.OnAIFreeze
struct AUTBot_OnAIFreeze_Params
{
	class UUTSeqAct_AIFreeze*                          FreezeAction;                                             // (Parm)
};

// Function UTGame.UTBot.IsRetreating
struct AUTBot_IsRetreating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.DamageAttitudeTo
struct AUTBot_DamageAttitudeTo_Params
{
	class AController*                                 Other;                                                    // (Parm)
	float                                              Damage;                                                   // (Parm)
};

// Function UTGame.UTBot.SuperPickupNotSpokenFor
struct AUTBot_SuperPickupNotSpokenFor_Params
{
	class AUTPickupFactory*                            P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.SuperDesireability
struct AUTBot_SuperDesireability_Params
{
	class APickupFactory*                              P;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.RatePickup
struct AUTBot_RatePickup_Params
{
	class AActor*                                      PickupHolder;                                             // (Parm)
	class UClass*                                      InvClass;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.NeedWeapon
struct AUTBot_NeedWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.FaceActor
struct AUTBot_FaceActor_Params
{
	float                                              StrafingModifier;                                         // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.ShouldStrafeTo
struct AUTBot_ShouldStrafeTo_Params
{
	class AActor*                                      WayPoint;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.FaceMoveTarget
struct AUTBot_FaceMoveTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.NotifyKilled
struct AUTBot_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTBot.TryToDuck
struct AUTBot_TryToDuck_Params
{
	struct FVector                                     duckDir;                                                  // (Parm)
	bool                                               bReversed;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.ChangeStrafe
struct AUTBot_ChangeStrafe_Params
{
};

// Function UTGame.UTBot.TryWallDodge
struct AUTBot_TryWallDodge_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      HitActor;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.MissedDodge
struct AUTBot_MissedDodge_Params
{
};

// Function UTGame.UTBot.NotifyFallingHitWall
struct AUTBot_NotifyFallingHitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      HitActor;                                                 // (Parm)
};

// Function UTGame.UTBot.ReceiveRunOverWarning
struct AUTBot_ReceiveRunOverWarning_Params
{
	class AUDKVehicle*                                 V;                                                        // (Parm)
	float                                              projSpeed;                                                // (Parm)
	struct FVector                                     VehicleDir;                                               // (Parm)
};

// Function UTGame.UTBot.ReceiveWarning
struct AUTBot_ReceiveWarning_Params
{
	class APawn*                                       shooter;                                                  // (Parm)
	float                                              projSpeed;                                                // (Parm)
	struct FVector                                     FireDir;                                                  // (Parm)
};

// Function UTGame.UTBot.DelayedInstantWarning
struct AUTBot_DelayedInstantWarning_Params
{
};

// Function UTGame.UTBot.NotifyTakeHit
struct AUTBot_NotifyTakeHit_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function UTGame.UTBot.ReceiveProjectileWarning
struct AUTBot_ReceiveProjectileWarning_Params
{
	class AProjectile*                                 Proj;                                                     // (Parm)
};

// Function UTGame.UTBot.DelayedWarning
struct AUTBot_DelayedWarning_Params
{
};

// Function UTGame.UTBot.TryDuckTowardsMoveTarget
struct AUTBot_TryDuckTowardsMoveTarget_Params
{
	struct FVector                                     Dir;                                                      // (Parm)
	struct FVector                                     Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.GetAdjustedAimFor
struct AUTBot_GetAdjustedAimFor_Params
{
	class AWeapon*                                     InWeapon;                                                 // (Parm)
	struct FVector                                     projStart;                                                // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.AdjustAimError
struct AUTBot_AdjustAimError_Params
{
	float                                              TargetDist;                                               // (Parm)
	bool                                               bInstantProj;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.CheckFutureSight
struct AUTBot_CheckFutureSight_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.GetDirectionHint
struct AUTBot_GetDirectionHint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.FindBestPathToward
struct AUTBot_FindBestPathToward_Params
{
	class AActor*                                      A;                                                        // (Parm)
	bool                                               bCheckedReach;                                            // (Parm)
	bool                                               bAllowDetour;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.AllowDetourTo
struct AUTBot_AllowDetourTo_Params
{
	class ANavigationPoint*                            N;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.SetRouteToGoal
struct AUTBot_SetRouteToGoal_Params
{
	class AActor*                                      A;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.StartMoveToward
struct AUTBot_StartMoveToward_Params
{
	class AActor*                                      O;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.TimedDodgeToMoveTarget
struct AUTBot_TimedDodgeToMoveTarget_Params
{
};

// Function UTGame.UTBot.NotifyPostLanded
struct AUTBot_NotifyPostLanded_Params
{
};

// Function UTGame.UTBot.NotifyLanded
struct AUTBot_NotifyLanded_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.SetFall
struct AUTBot_SetFall_Params
{
};

// Function UTGame.UTBot.PriorityObjective
struct AUTBot_PriorityObjective_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.NotifyBump
struct AUTBot_NotifyBump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.AdjustAround
struct AUTBot_AdjustAround_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.ClearPathFor
struct AUTBot_ClearPathFor_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTBot.CheckPathToGoalAround
struct AUTBot_CheckPathToGoalAround_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.Restart
struct AUTBot_Restart_Params
{
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTBot.FindRoamDest
struct AUTBot_FindRoamDest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.SoakStop
struct AUTBot_SoakStop_Params
{
	struct FString                                     problem;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function UTGame.UTBot.PickRetreatDestination
struct AUTBot_PickRetreatDestination_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.TossFlagToPlayer
struct AUTBot_TossFlagToPlayer_Params
{
	class AController*                                 OrderGiver;                                               // (Parm)
};

// Function UTGame.UTBot.FindInventoryGoal
struct AUTBot_FindInventoryGoal_Params
{
	float                                              BestWeight;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.FindSuperPickup
struct AUTBot_FindSuperPickup_Params
{
	float                                              MaxDist;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.ChooseAttackMode
struct AUTBot_ChooseAttackMode_Params
{
};

// Function UTGame.UTBot.DoRangedAttackOn
struct AUTBot_DoRangedAttackOn_Params
{
	class AActor*                                      A;                                                        // (Parm)
};

// Function UTGame.UTBot.FightEnemy
struct AUTBot_FightEnemy_Params
{
	bool                                               bCanCharge;                                               // (Parm)
	float                                              EnemyStrength;                                            // (Parm)
};

// Function UTGame.UTBot.VehicleFightEnemy
struct AUTBot_VehicleFightEnemy_Params
{
	bool                                               bCanCharge;                                               // (Parm)
	float                                              EnemyStrength;                                            // (Parm)
};

// Function UTGame.UTBot.DoWaitForLanding
struct AUTBot_DoWaitForLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.DelayedLeaveVehicle
struct AUTBot_DelayedLeaveVehicle_Params
{
};

// Function UTGame.UTBot.LeaveVehicle
struct AUTBot_LeaveVehicle_Params
{
	bool                                               bBlocking;                                                // (Parm)
};

// Function UTGame.UTBot.EnterVehicle
struct AUTBot_EnterVehicle_Params
{
	class AVehicle*                                    V;                                                        // (Parm)
};

// Function UTGame.UTBot.ExecuteWhatToDoNext
struct AUTBot_ExecuteWhatToDoNext_Params
{
};

// Function UTGame.UTBot.WhatToDoNext
struct AUTBot_WhatToDoNext_Params
{
};

// Function UTGame.UTBot.SetAlertness
struct AUTBot_SetAlertness_Params
{
	float                                              NewAlertness;                                             // (Parm)
};

// Function UTGame.UTBot.SetPeripheralVision
struct AUTBot_SetPeripheralVision_Params
{
};

// Function UTGame.UTBot.SetMaxDesiredSpeed
struct AUTBot_SetMaxDesiredSpeed_Params
{
};

// Function UTGame.UTBot.ResetSkill
struct AUTBot_ResetSkill_Params
{
};

// Function UTGame.UTBot.Initialize
struct AUTBot_Initialize_Params
{
	float                                              InSkill;                                                  // (Parm)
	struct FCharacterInfo                              BotInfo;                                                  // (Const, Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTBot.Possess
struct AUTBot_Possess_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTBot.Reset
struct AUTBot_Reset_Params
{
};

// Function UTGame.UTBot.NotifyMissedJump
struct AUTBot_NotifyMissedJump_Params
{
};

// Function UTGame.UTBot.NotifyJumpApex
struct AUTBot_NotifyJumpApex_Params
{
};

// Function UTGame.UTBot.MayDodgeToMoveTarget
struct AUTBot_MayDodgeToMoveTarget_Params
{
};

// Function UTGame.UTBot.NotifyPhysicsVolumeChange
struct AUTBot_NotifyPhysicsVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
};

// Function UTGame.UTBot.StrafeFromDamage
struct AUTBot_StrafeFromDamage_Params
{
	float                                              Damage;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	bool                                               bFindDest;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.EnemyChanged
struct AUTBot_EnemyChanged_Params
{
	bool                                               bNewEnemyVisible;                                         // (Parm)
};

// Function UTGame.UTBot.SetEnemyInfo
struct AUTBot_SetEnemyInfo_Params
{
	bool                                               bNewEnemyVisible;                                         // (Parm)
};

// Function UTGame.UTBot.RelativeStrength
struct AUTBot_RelativeStrength_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.AssignSquadResponsibility
struct AUTBot_AssignSquadResponsibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.FreePoint
struct AUTBot_FreePoint_Params
{
};

// Function UTGame.UTBot.IsSniping
struct AUTBot_IsSniping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.CheckIfShouldCrouch
struct AUTBot_CheckIfShouldCrouch_Params
{
	struct FVector                                     StartPosition;                                            // (Parm)
	struct FVector                                     TargetPosition;                                           // (Parm)
	float                                              probability;                                              // (Parm)
};

// Function UTGame.UTBot.CanStakeOut
struct AUTBot_CanStakeOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.ClearShot
struct AUTBot_ClearShot_Params
{
	struct FVector                                     TargetLoc;                                                // (Parm)
	bool                                               bImmediateFire;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.SetAttractionState
struct AUTBot_SetAttractionState_Params
{
};

// Function UTGame.UTBot.SeePlayer
struct AUTBot_SeePlayer_Params
{
	class APawn*                                       SeenPlayer;                                               // (Parm)
};

// Function UTGame.UTBot.HearNoise
struct AUTBot_HearNoise_Params
{
	float                                              Loudness;                                                 // (Parm)
	class AActor*                                      NoiseMaker;                                               // (Parm)
	struct FName                                       NoiseType;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTBot.ClearTemporaryOrders
struct AUTBot_ClearTemporaryOrders_Params
{
};

// Function UTGame.UTBot.SetTemporaryOrders
struct AUTBot_SetTemporaryOrders_Params
{
	struct FName                                       NewOrders;                                                // (Parm)
	class AController*                                 OrderGiver;                                               // (Parm)
};

// Function UTGame.UTBot.SetBotOrders
struct AUTBot_SetBotOrders_Params
{
	struct FName                                       NewOrders;                                                // (Parm)
	class AController*                                 OrderGiver;                                               // (Parm)
	bool                                               bShouldAck;                                               // (Parm)
};

// Function UTGame.UTBot.SendMessage
struct AUTBot_SendMessage_Params
{
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	float                                              Wait;                                                     // (Parm)
	class UClass*                                      DamageType;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTBot.YellAt
struct AUTBot_YellAt_Params
{
	class APlayerReplicationInfo*                      Moron;                                                    // (Parm)
};

// Function UTGame.UTBot.GetOrders
struct AUTBot_GetOrders_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.DisplayDebug
struct AUTBot_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function UTGame.UTBot.CanCombo
struct AUTBot_CanCombo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.CanComboMoving
struct AUTBot_CanComboMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.ProficientWithWeapon
struct AUTBot_ProficientWithWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.WeaponPreference
struct AUTBot_WeaponPreference_Params
{
	class AWeapon*                                     W;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.RateWeapon
struct AUTBot_RateWeapon_Params
{
	class AWeapon*                                     W;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.OnAIStopFire
struct AUTBot_OnAIStopFire_Params
{
	class UUTSeqAct_AIStopFire*                        FireAction;                                               // (Parm)
};

// Function UTGame.UTBot.StopFiring
struct AUTBot_StopFiring_Params
{
};

// Function UTGame.UTBot.TimedFireWeaponAtScriptedTarget
struct AUTBot_TimedFireWeaponAtScriptedTarget_Params
{
};

// Function UTGame.UTBot.OnAIStartFireAt
struct AUTBot_OnAIStartFireAt_Params
{
	class UUTSeqAct_AIStartFireAt*                     FireAction;                                               // (Parm)
};

// Function UTGame.UTBot.CanAttack
struct AUTBot_CanAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.FireWeaponAt
struct AUTBot_FireWeaponAt_Params
{
	class AActor*                                      A;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.TimedFireWeaponAtEnemy
struct AUTBot_TimedFireWeaponAtEnemy_Params
{
};

// Function UTGame.UTBot.ShouldFireAgain
struct AUTBot_ShouldFireAgain_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.WeaponFireAgain
struct AUTBot_WeaponFireAgain_Params
{
	bool                                               bFinishedFire;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.ReadyForLift
struct AUTBot_ReadyForLift_Params
{
};

// Function UTGame.UTBot.WaitForMover
struct AUTBot_WaitForMover_Params
{
	class AInterpActor*                                M;                                                        // (Parm)
};

// Function UTGame.UTBot.ResetDoubleJump
struct AUTBot_ResetDoubleJump_Params
{
};

// Function UTGame.UTBot.TimeDJReset
struct AUTBot_TimeDJReset_Params
{
};

// Function UTGame.UTBot.CanImpactJump
struct AUTBot_CanImpactJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.SetCombatTimer
struct AUTBot_SetCombatTimer_Params
{
};

// Function UTGame.UTBot.Startle
struct AUTBot_Startle_Params
{
	class AActor*                                      Feared;                                                   // (Parm)
};

// Function UTGame.UTBot.FearThisSpot
struct AUTBot_FearThisSpot_Params
{
	class AUTAvoidMarker*                              aSpot;                                                    // (Parm)
};

// Function UTGame.UTBot.NotifyHitWall
struct AUTBot_NotifyHitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.SetupSpecialPathAbilities
struct AUTBot_SetupSpecialPathAbilities_Params
{
};

// Function UTGame.UTBot.NotifyAddInventory
struct AUTBot_NotifyAddInventory_Params
{
	class AInventory*                                  NewItem;                                                  // (Parm)
};

// Function UTGame.UTBot.HasTimedPowerup
struct AUTBot_HasTimedPowerup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.LandingShake
struct AUTBot_LandingShake_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTBot.SpawnedByKismet
struct AUTBot_SpawnedByKismet_Params
{
};

// Function UTGame.UTBot.PostBeginPlay
struct AUTBot_PostBeginPlay_Params
{
};

// Function UTGame.UTBot.Destroyed
struct AUTBot_Destroyed_Params
{
};

// Function UTGame.UTBot.PawnDied
struct AUTBot_PawnDied_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTBot.StartMonitoring
struct AUTBot_StartMonitoring_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              MaxDist;                                                  // (Parm)
};

// Function UTGame.UTBot.WasKilledBy
struct AUTBot_WasKilledBy_Params
{
	class AController*                                 Other;                                                    // (Parm)
};

// Function UTGame.UTBot.EnemyJustTeleported
struct AUTBot_EnemyJustTeleported_Params
{
};

// Function UTGame.UTVictoryMessage.AddAnnouncement
struct UUTVictoryMessage_AddAnnouncement_Params
{
	class AUTAnnouncer*                                Announcer;                                                // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVictoryMessage.ClientReceive
struct UUTVictoryMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTVictoryMessage.AnnouncementSound
struct UUTVictoryMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVictoryMessage.AnnouncementLevel
struct UUTVictoryMessage_AnnouncementLevel_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTUIDataProvider_Mutator.SupportsCurrentGameMode
struct UUTUIDataProvider_Mutator_SupportsCurrentGameMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTUIDataProvider_Mutator.ShouldBeFiltered
struct UUTUIDataProvider_Mutator_ShouldBeFiltered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUI_PauseMenu.UT_ConsoleCommand
struct UGFxUI_PauseMenu_UT_ConsoleCommand_Params
{
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	bool                                               bWriteToLog;                                              // (OptionalParm, Parm)
};

// Function UTGame.GFxUI_PauseMenu.OnCloseAnimationComplete
struct UGFxUI_PauseMenu_OnCloseAnimationComplete_Params
{
};

// Function UTGame.GFxUI_PauseMenu.OnPlayAnimationComplete
struct UGFxUI_PauseMenu_OnPlayAnimationComplete_Params
{
};

// Function UTGame.GFxUI_PauseMenu.PlayCloseAnimation
struct UGFxUI_PauseMenu_PlayCloseAnimation_Params
{
};

// Function UTGame.GFxUI_PauseMenu.PlayOpenAnimation
struct UGFxUI_PauseMenu_PlayOpenAnimation_Params
{
};

// Function UTGame.GFxUI_PauseMenu.OnPressExitButton
struct UGFxUI_PauseMenu_OnPressExitButton_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUI_PauseMenu.OnPressResumeButton
struct UGFxUI_PauseMenu_OnPressResumeButton_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUI_PauseMenu.Start
struct UGFxUI_PauseMenu_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUIFrontEnd_TitleScreen.UT_ConsoleCommand
struct UGFxUIFrontEnd_TitleScreen_UT_ConsoleCommand_Params
{
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
	bool                                               bWriteToLog;                                              // (OptionalParm, Parm)
};

// Function UTGame.GFxUIFrontEnd_TitleScreen.OnCloseAnimationComplete
struct UGFxUIFrontEnd_TitleScreen_OnCloseAnimationComplete_Params
{
};

// Function UTGame.GFxUIFrontEnd_TitleScreen.PlayCloseAnimation
struct UGFxUIFrontEnd_TitleScreen_PlayCloseAnimation_Params
{
};

// Function UTGame.GFxUIFrontEnd_TitleScreen.OnMenuButtonPress
struct UGFxUIFrontEnd_TitleScreen_OnMenuButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUIFrontEnd_TitleScreen.FilterButtonInput
struct UGFxUIFrontEnd_TitleScreen_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUIFrontEnd_TitleScreen.Start
struct UGFxUIFrontEnd_TitleScreen_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUILeaderboard.ReadOnlineStatsComplete
struct UGFxUILeaderboard_ReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UTGame.GFxUILeaderboard.OnlineCleanup
struct UGFxUILeaderboard_OnlineCleanup_Params
{
};

// Function UTGame.GFxUILeaderboard.Tick
struct UGFxUILeaderboard_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.GFxUILeaderboard.DoInitialLeaderboardRead
struct UGFxUILeaderboard_DoInitialLeaderboardRead_Params
{
};

// Function UTGame.GFxUILeaderboard.OnlineInit
struct UGFxUILeaderboard_OnlineInit_Params
{
};

// Function UTGame.GFxUILeaderboard.OnOpenAnimComplete
struct UGFxUILeaderboard_OnOpenAnimComplete_Params
{
};

// Function UTGame.GFxUILeaderboard.OnCloseAnimComplete
struct UGFxUILeaderboard_OnCloseAnimComplete_Params
{
};

// Function UTGame.GFxUILeaderboard.ProcessTweenCallback
struct UGFxUILeaderboard_ProcessTweenCallback_Params
{
	struct FString                                     Callback;                                                 // (Parm, NeedCtorLink)
	class UGFxObject*                                  TargetMC;                                                 // (Parm)
};

// Function UTGame.GFxUILeaderboard.TweenPlayerRow
struct UGFxUILeaderboard_TweenPlayerRow_Params
{
	class UGFxObject*                                  RowMC;                                                    // (Parm)
};

// Function UTGame.GFxUILeaderboard.FloatLeaderboardAnimationY
struct UGFxUILeaderboard_FloatLeaderboardAnimationY_Params
{
	bool                                               Direction;                                                // (Parm)
};

// Function UTGame.GFxUILeaderboard.FloatLeaderboardAnimationX
struct UGFxUILeaderboard_FloatLeaderboardAnimationX_Params
{
	bool                                               Direction;                                                // (Parm)
};

// Function UTGame.GFxUILeaderboard.UpdateFooter
struct UGFxUILeaderboard_UpdateFooter_Params
{
	struct FUILeaderboardEntry                         FooterData;                                               // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUILeaderboard.UpdateHeaders
struct UGFxUILeaderboard_UpdateHeaders_Params
{
};

// Function UTGame.GFxUILeaderboard.SetPlayerRow
struct UGFxUILeaderboard_SetPlayerRow_Params
{
	class UGFxObject*                                  UpdatedPlayerRow;                                         // (Parm)
};

// Function UTGame.GFxUILeaderboard.UpdateRow
struct UGFxUILeaderboard_UpdateRow_Params
{
	struct FListRow                                    CurRow;                                                   // (Parm)
	struct FUILeaderboardEntry                         CurData;                                                  // (Parm, NeedCtorLink)
};

// Function UTGame.GFxUILeaderboard.UpdateLeaderboardLists
struct UGFxUILeaderboard_UpdateLeaderboardLists_Params
{
};

// Function UTGame.GFxUILeaderboard.Draw
struct UGFxUILeaderboard_Draw_Params
{
};

// Function UTGame.GFxUILeaderboard.SetupList
struct UGFxUILeaderboard_SetupList_Params
{
};

// Function UTGame.GFxUILeaderboard.ConfigLeaderboard
struct UGFxUILeaderboard_ConfigLeaderboard_Params
{
};

// Function UTGame.GFxUILeaderboard.PlayCloseAnimation
struct UGFxUILeaderboard_PlayCloseAnimation_Params
{
};

// Function UTGame.GFxUILeaderboard.PlayOpenAnimation
struct UGFxUILeaderboard_PlayOpenAnimation_Params
{
};

// Function UTGame.GFxUILeaderboard.Start
struct UGFxUILeaderboard_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUIScoreboard.GetTimeOnline
struct UGFxUIScoreboard_GetTimeOnline_Params
{
	class AUTPlayerReplicationInfo*                    PRI;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUIScoreboard.IsValidScoreboardPlayer
struct UGFxUIScoreboard_IsValidScoreboardPlayer_Params
{
	class AUTPlayerReplicationInfo*                    PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.GFxUIScoreboard.ProcessTweenCallback
struct UGFxUIScoreboard_ProcessTweenCallback_Params
{
	struct FString                                     Callback;                                                 // (Parm, NeedCtorLink)
	class UGFxObject*                                  TargetMC;                                                 // (Parm)
};

// Function UTGame.GFxUIScoreboard.TweenPlayerRow
struct UGFxUIScoreboard_TweenPlayerRow_Params
{
	class UGFxObject*                                  RowMC;                                                    // (Parm)
};

// Function UTGame.GFxUIScoreboard.FloatScoreboardAnimationY
struct UGFxUIScoreboard_FloatScoreboardAnimationY_Params
{
	bool                                               Direction;                                                // (Parm)
};

// Function UTGame.GFxUIScoreboard.FloatScoreboardAnimationX
struct UGFxUIScoreboard_FloatScoreboardAnimationX_Params
{
	bool                                               Direction;                                                // (Parm)
};

// Function UTGame.GFxUIScoreboard.UpdateFooter
struct UGFxUIScoreboard_UpdateFooter_Params
{
	class AUTGameReplicationInfo*                      GRI;                                                      // (Parm)
	class AUTPlayerReplicationInfo*                    LocalPlayerPRI;                                           // (Parm)
	unsigned char                                      PRIIndex;                                                 // (OptionalParm, Parm)
};

// Function UTGame.GFxUIScoreboard.UpdateHeaders
struct UGFxUIScoreboard_UpdateHeaders_Params
{
	class AUTGameReplicationInfo*                      GRI;                                                      // (Parm)
};

// Function UTGame.GFxUIScoreboard.FormatTime
struct UGFxUIScoreboard_FormatTime_Params
{
	int                                                Seconds;                                                  // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.GFxUIScoreboard.UpdatePreviousState
struct UGFxUIScoreboard_UpdatePreviousState_Params
{
	class AUTGameReplicationInfo*                      GRI;                                                      // (Parm)
};

// Function UTGame.GFxUIScoreboard.SetPlayerRow
struct UGFxUIScoreboard_SetPlayerRow_Params
{
	class UGFxObject*                                  UpdatedPlayerRow;                                         // (Parm)
};

// Function UTGame.GFxUIScoreboard.Tick
struct UGFxUIScoreboard_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.GFxUIScoreboard.UpdateRow
struct UGFxUIScoreboard_UpdateRow_Params
{
	struct FScoreRow                                   ThisRow;                                                  // (Parm)
	struct FScoreEntry                                 ThisEntry;                                                // (Parm, OutParm, NeedCtorLink)
	class AUTPlayerReplicationInfo*                    ThisPRI;                                                  // (Parm)
};

// Function UTGame.GFxUIScoreboard.ClearRow
struct UGFxUIScoreboard_ClearRow_Params
{
	struct FScoreRow                                   ThisRow;                                                  // (Parm)
};

// Function UTGame.GFxUIScoreboard.UpdatePRILists
struct UGFxUIScoreboard_UpdatePRILists_Params
{
	class AUTGameReplicationInfo*                      GRI;                                                      // (Parm)
};

// Function UTGame.GFxUIScoreboard.Draw
struct UGFxUIScoreboard_Draw_Params
{
};

// Function UTGame.GFxUIScoreboard.SetupRedTeam
struct UGFxUIScoreboard_SetupRedTeam_Params
{
};

// Function UTGame.GFxUIScoreboard.SetupBlueTeam
struct UGFxUIScoreboard_SetupBlueTeam_Params
{
};

// Function UTGame.GFxUIScoreboard.ConfigScoreboard
struct UGFxUIScoreboard_ConfigScoreboard_Params
{
};

// Function UTGame.GFxUIScoreboard.PlayCloseAnimation
struct UGFxUIScoreboard_PlayCloseAnimation_Params
{
};

// Function UTGame.GFxUIScoreboard.PlayOpenAnimation
struct UGFxUIScoreboard_PlayOpenAnimation_Params
{
};

// Function UTGame.GFxUIScoreboard.Start
struct UGFxUIScoreboard_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.MorphTestActor.Tick
struct AMorphTestActor_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function UTGame.PhysAnimTestActor.OnAnimEnd
struct APhysAnimTestActor_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           InSeqNode;                                                // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function UTGame.PhysAnimTestActor.Tick
struct APhysAnimTestActor_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function UTGame.PhysAnimTestActor.RecoverFromRagdoll
struct APhysAnimTestActor_RecoverFromRagdoll_Params
{
};

// Function UTGame.PhysAnimTestActor.SetBoneSprings
struct APhysAnimTestActor_SetBoneSprings_Params
{
	bool                                               bEnabled;                                                 // (Parm)
};

// Function UTGame.PhysAnimTestActor.IsAngularBoneSpringName
struct APhysAnimTestActor_IsAngularBoneSpringName_Params
{
	struct FName                                       InName;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.PhysAnimTestActor.IsLinearBoneSpringName
struct APhysAnimTestActor_IsLinearBoneSpringName_Params
{
	struct FName                                       InName;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.PhysAnimTestActor.SetLowerFixed
struct APhysAnimTestActor_SetLowerFixed_Params
{
};

// Function UTGame.PhysAnimTestActor.DetachAttachments
struct APhysAnimTestActor_DetachAttachments_Params
{
};

// Function UTGame.PhysAnimTestActor.IsLowerBodyName
struct APhysAnimTestActor_IsLowerBodyName_Params
{
	struct FName                                       InName;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.PhysAnimTestActor.SetBodiesFixed
struct APhysAnimTestActor_SetBodiesFixed_Params
{
	bool                                               InFixed;                                                  // (Parm)
};

// Function UTGame.PhysAnimTestActor.EnableMotors
struct APhysAnimTestActor_EnableMotors_Params
{
	bool                                               InEnabled;                                                // (Parm)
};

// Function UTGame.PhysAnimTestActor.OnSetPATAState
struct APhysAnimTestActor_OnSetPATAState_Params
{
	class USeqAct_SetPATAState*                        Action;                                                   // (Parm)
};

// Function UTGame.PhysAnimTestActor.SetPATAState
struct APhysAnimTestActor_SetPATAState_Params
{
	TEnumAsByte<EPATAState>                            NewState;                                                 // (Parm)
};

// Function UTGame.PhysAnimTestActor.EndGrab
struct APhysAnimTestActor_EndGrab_Params
{
};

// Function UTGame.PhysAnimTestActor.PreGrab
struct APhysAnimTestActor_PreGrab_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.PhysAnimTestActor.PrePokeActor
struct APhysAnimTestActor_PrePokeActor_Params
{
	struct FVector                                     PokeDir;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.PhysAnimTestActor.PostBeginPlay
struct APhysAnimTestActor_PostBeginPlay_Params
{
};

// Function UTGame.UTActorFactoryAI.PostCreateActor
struct UUTActorFactoryAI_PostCreateActor_Params
{
	class AActor*                                      NewActor;                                                 // (Parm)
};

// Function UTGame.UTSquadAI.HasOtherVisibleEnemy
struct AUTSquadAI_HasOtherVisibleEnemy_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.ModifyAggression
struct AUTSquadAI_ModifyAggression_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              Aggression;                                               // (Parm, OutParm)
};

// Function UTGame.UTSquadAI.MarkHuntingSpots
struct AUTSquadAI_MarkHuntingSpots_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.HandlePathObstruction
struct AUTSquadAI_HandlePathObstruction_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AActor*                                      BlockedBy;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.AcceptableDefensivePosition
struct AUTSquadAI_AcceptableDefensivePosition_Params
{
	class ANavigationPoint*                            N;                                                        // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.RateDefensivePosition
struct AUTSquadAI_RateDefensivePosition_Params
{
	class ANavigationPoint*                            N;                                                        // (Parm)
	class AUTBot*                                      CurrentBot;                                               // (Parm)
	class AActor*                                      Center;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.FindDefensivePositionFor
struct AUTSquadAI_FindDefensivePositionFor_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.GetMaxDefenseDistanceFrom
struct AUTSquadAI_GetMaxDefenseDistanceFrom_Params
{
	class AActor*                                      Center;                                                   // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.FriendlyToward
struct AUTSquadAI_FriendlyToward_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.IsDefending
struct AUTSquadAI_IsDefending_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.ClearPathFor
struct AUTSquadAI_ClearPathFor_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.PickRetreatDestination
struct AUTSquadAI_PickRetreatDestination_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.BeDevious
struct AUTSquadAI_BeDevious_Params
{
	class APawn*                                       Enemy;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.DisplayDebug
struct AUTSquadAI_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function UTGame.UTSquadAI.PickBotToReassign
struct AUTSquadAI_PickBotToReassign_Params
{
	class AUTBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.BotSuitability
struct AUTSquadAI_BotSuitability_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.CheckSquadObjectives
struct AUTSquadAI_CheckSquadObjectives_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.CheckSuperItem
struct AUTSquadAI_CheckSuperItem_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              SuperDist;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.ShouldCheckSuperVehicle
struct AUTSquadAI_ShouldCheckSuperVehicle_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.OverrideFollowPlayer
struct AUTSquadAI_OverrideFollowPlayer_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.VehicleDesireability
struct AUTSquadAI_VehicleDesireability_Params
{
	class AUTVehicle*                                  V;                                                        // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.ShouldUseHoverboard
struct AUTSquadAI_ShouldUseHoverboard_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.CheckHoverboard
struct AUTSquadAI_CheckHoverboard_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.CheckVehicle
struct AUTSquadAI_CheckVehicle_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.GotoVehicle
struct AUTSquadAI_GotoVehicle_Params
{
	class AUTVehicle*                                  SquadVehicle;                                             // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.EnterAndExitVehicle
struct AUTSquadAI_EnterAndExitVehicle_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.GetOnHoverboard
struct AUTSquadAI_GetOnHoverboard_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.IsOnPathToSquadObjective
struct AUTSquadAI_IsOnPathToSquadObjective_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.BotEnteredVehicle
struct AUTSquadAI_BotEnteredVehicle_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.NeverBail
struct AUTSquadAI_NeverBail_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.AllowContinueOnFoot
struct AUTSquadAI_AllowContinueOnFoot_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AUTVehicle*                                  V;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.MaxVehicleDist
struct AUTSquadAI_MaxVehicleDist_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.AssignSquadResponsibility
struct AUTSquadAI_AssignSquadResponsibility_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.AddTransientCosts
struct AUTSquadAI_AddTransientCosts_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              F;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.AllowTaunt
struct AUTSquadAI_AllowTaunt_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.TellBotToFollow
struct AUTSquadAI_TellBotToFollow_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.PickNewLeader
struct AUTSquadAI_PickNewLeader_Params
{
};

// Function UTGame.UTSquadAI.GetSize
struct AUTSquadAI_GetSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.GetShortOrderStringFor
struct AUTSquadAI_GetShortOrderStringFor_Params
{
	class AUTPlayerReplicationInfo*                    PRI;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTSquadAI.GetOrderStringFor
struct AUTSquadAI_GetOrderStringFor_Params
{
	class AUTPlayerReplicationInfo*                    PRI;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTSquadAI.GetOrders
struct AUTSquadAI_GetOrders_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.Retask
struct AUTSquadAI_Retask_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.SetObjective
struct AUTSquadAI_SetObjective_Params
{
	class AUTGameObjective*                            O;                                                        // (Parm)
	bool                                               bForceUpdate;                                             // (Parm)
};

// Function UTGame.UTSquadAI.SetDefenseScriptFor
struct AUTSquadAI_SetDefenseScriptFor_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.AddBot
struct AUTSquadAI_AddBot_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.RemoveBot
struct AUTSquadAI_RemoveBot_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.RemovePlayer
struct AUTSquadAI_RemovePlayer_Params
{
	class APlayerController*                           P;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.SetLeader
struct AUTSquadAI_SetLeader_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.FindPathToObjective
struct AUTSquadAI_FindPathToObjective_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AActor*                                      O;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.LeaveVehicleAtParkingSpot
struct AUTSquadAI_LeaveVehicleAtParkingSpot_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AActor*                                      O;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.MustCompleteOnFoot
struct AUTSquadAI_MustCompleteOnFoot_Params
{
	class AActor*                                      O;                                                        // (Parm)
	class APawn*                                       P;                                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.LeaveVehicleToReachObjective
struct AUTSquadAI_LeaveVehicleToReachObjective_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AActor*                                      O;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.CloseEnoughToObjective
struct AUTSquadAI_CloseEnoughToObjective_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AActor*                                      O;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.TryToIntercept
struct AUTSquadAI_TryToIntercept_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class APawn*                                       P;                                                        // (Parm)
	class AActor*                                      RouteGoal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.SetAlternatePathTo
struct AUTSquadAI_SetAlternatePathTo_Params
{
	class ANavigationPoint*                            NewRouteObjective;                                        // (Parm)
	class AUTBot*                                      RouteMaker;                                               // (Parm)
};

// Function UTGame.UTSquadAI.ShouldUseAlternatePaths
struct AUTSquadAI_ShouldUseAlternatePaths_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.Initialize
struct AUTSquadAI_Initialize_Params
{
	class AUTTeamInfo*                                 T;                                                        // (Parm)
	class AUTGameObjective*                            O;                                                        // (Parm)
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.MergeWith
struct AUTSquadAI_MergeWith_Params
{
	class AUTSquadAI*                                  S;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.CloseToLeader
struct AUTSquadAI_CloseToLeader_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.NearFormationCenter
struct AUTSquadAI_NearFormationCenter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.WanderNearLeader
struct AUTSquadAI_WanderNearLeader_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.WaitAtThisPosition
struct AUTSquadAI_WaitAtThisPosition_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.ShouldDeferTo
struct AUTSquadAI_ShouldDeferTo_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.AssessThreat
struct AUTSquadAI_AssessThreat_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class APawn*                                       NewThreat;                                                // (Parm)
	bool                                               bThreatVisible;                                           // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.UnderFire
struct AUTSquadAI_UnderFire_Params
{
	class APawn*                                       NewThreat;                                                // (Parm)
	class AUTBot*                                      Ignored;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.ModifyThreat
struct AUTSquadAI_ModifyThreat_Params
{
	float                                              Current;                                                  // (Parm)
	class APawn*                                       NewThreat;                                                // (Parm)
	bool                                               bThreatVisible;                                           // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.FindNewEnemyFor
struct AUTSquadAI_FindNewEnemyFor_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               bSeeEnemy;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.NotifyKilled
struct AUTSquadAI_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTSquadAI.RemoveEnemy
struct AUTSquadAI_RemoveEnemy_Params
{
	class APawn*                                       E;                                                        // (Parm)
};

// Function UTGame.UTSquadAI.IsOnSquad
struct AUTSquadAI_IsOnSquad_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.PriorityObjective
struct AUTSquadAI_PriorityObjective_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.SetEnemy
struct AUTSquadAI_SetEnemy_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class APawn*                                       NewEnemy;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.ValidEnemy
struct AUTSquadAI_ValidEnemy_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.AddEnemy
struct AUTSquadAI_AddEnemy_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.MustKeepEnemy
struct AUTSquadAI_MustKeepEnemy_Params
{
	class APawn*                                       E;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.LostEnemy
struct AUTSquadAI_LostEnemy_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.FormationCenter
struct AUTSquadAI_FormationCenter_Params
{
	class AController*                                 C;                                                        // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.GetFacingRotation
struct AUTSquadAI_GetFacingRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.GetLinkVehicle
struct AUTSquadAI_GetLinkVehicle_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AUTVehicle*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.SetFacingActor
struct AUTSquadAI_SetFacingActor_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.AllowImpactJumpBy
struct AUTSquadAI_AllowImpactJumpBy_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.Destroyed
struct AUTSquadAI_Destroyed_Params
{
};

// Function UTGame.UTSquadAI.AllowDetourTo
struct AUTSquadAI_AllowDetourTo_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class ANavigationPoint*                            N;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.ShouldSuppressEnemy
struct AUTSquadAI_ShouldSuppressEnemy_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSquadAI.CriticalObjectiveWarning
struct AUTSquadAI_CriticalObjectiveWarning_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm)
};

// Function UTGame.UTSquadAI.Reset
struct AUTSquadAI_Reset_Params
{
};

// Function UTGame.UTActorFactoryPickup.PostCreateActor
struct UUTActorFactoryPickup_PostCreateActor_Params
{
	class AActor*                                      NewActor;                                                 // (Parm)
};

// Function UTGame.UTDroppedPickup.Landed
struct AUTDroppedPickup_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
};

// Function UTGame.UTDroppedPickup.SetPickupParticles
struct AUTDroppedPickup_SetPickupParticles_Params
{
	class UParticleSystemComponent*                    NewPickupParticles;                                       // (Parm, EditInline)
};

// Function UTGame.UTDroppedPickup.SetPickupMesh
struct AUTDroppedPickup_SetPickupMesh_Params
{
	class UPrimitiveComponent*                         NewPickupMesh;                                            // (Parm, EditInline)
};

// Function UTGame.UTDroppedPickup.PreBeginPlay
struct AUTDroppedPickup_PreBeginPlay_Params
{
};

// Function UTGame.UTTeamStaticMesh.SetTeamNum
struct AUTTeamStaticMesh_SetTeamNum_Params
{
	unsigned char                                      NewTeam;                                                  // (Parm)
};

// Function UTGame.UTTeamStaticMesh.PreBeginPlay
struct AUTTeamStaticMesh_PreBeginPlay_Params
{
};

// Function UTGame.UTActorFactoryVehicle.PostCreateActor
struct UUTActorFactoryVehicle_PostCreateActor_Params
{
	class AActor*                                      NewActor;                                                 // (Parm)
};

// Function UTGame.UTGib.HitWall
struct AUTGib_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
	class UPrimitiveComponent*                         WallComp;                                                 // (Parm, EditInline)
};

// Function UTGame.UTGib.Landed
struct AUTGib_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
};

// Function UTGame.UTGib.TurnOnCollision
struct AUTGib_TurnOnCollision_Params
{
};

// Function UTGame.UTGib.LeaveADecal
struct AUTGib_LeaveADecal_Params
{
	struct FVector                                     HitLoc;                                                   // (Parm)
	struct FVector                                     HitNorm;                                                  // (Parm)
};

// Function UTGame.UTGib.RigidBodyCollision
struct AUTGib_RigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, EditInline)
	struct FCollisionImpactData                        RigidCollisionData;                                       // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ContactIndex;                                             // (Parm)
};

// Function UTGame.UTGib.CalcCamera
struct AUTGib_CalcCamera_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGib.BecomeViewTarget
struct AUTGib_BecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function UTGame.UTGib.Timer
struct AUTGib_Timer_Params
{
};

// Function UTGame.UTGib.DoCustomGibEffects
struct AUTGib_DoCustomGibEffects_Params
{
};

// Function UTGame.UTGib.ChooseGib
struct AUTGib_ChooseGib_Params
{
};

// Function UTGame.UTGib.SetGibStaticMesh
struct AUTGib_SetGibStaticMesh_Params
{
	class UStaticMesh*                                 NewStaticMesh;                                            // (Parm)
};

// Function UTGame.UTGib.DisplayDebug
struct AUTGib_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function UTGame.UTGib.SetTexturesToBeResident
struct AUTGib_SetTexturesToBeResident_Params
{
	float                                              TimeToBeResident;                                         // (Parm)
};

// Function UTGame.UTGib.PreBeginPlay
struct AUTGib_PreBeginPlay_Params
{
};

// Function UTGame.UTGib_Vehicle.ActivateGibExplosionEffect
struct AUTGib_Vehicle_ActivateGibExplosionEffect_Params
{
};

// Function UTGame.UTGib_Vehicle.PostBeginPlay
struct AUTGib_Vehicle_PostBeginPlay_Params
{
};

// Function UTGame.UTVehicleDeathPiece.PreBeginPlay
struct AUTVehicleDeathPiece_PreBeginPlay_Params
{
};

// Function UTGame.UTVehicleFactory.GetSpawnRotation
struct AUTVehicleFactory_GetSpawnRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleFactory.OnToggle
struct AUTVehicleFactory_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function UTGame.UTVehicleFactory.TriggerSpawnedEvent
struct AUTVehicleFactory_TriggerSpawnedEvent_Params
{
};

// Function UTGame.UTVehicleFactory.VehicleDestroyed
struct AUTVehicleFactory_VehicleDestroyed_Params
{
	class AUTVehicle*                                  V;                                                        // (Parm)
};

// Function UTGame.UTVehicleFactory.VehicleTaken
struct AUTVehicleFactory_VehicleTaken_Params
{
};

// Function UTGame.UTVehicleFactory.Deactivate
struct AUTVehicleFactory_Deactivate_Params
{
};

// Function UTGame.UTVehicleFactory.Activate
struct AUTVehicleFactory_Activate_Params
{
	unsigned char                                      T;                                                        // (Parm)
};

// Function UTGame.UTVehicleFactory.RenderMapIcon
struct AUTVehicleFactory_RenderMapIcon_Params
{
	class UUTMapInfo*                                  MP;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTPlayerController*                         PlayerOwner;                                              // (Parm)
	struct FLinearColor                                FinalColor;                                               // (Parm)
};

// Function UTGame.UTVehicleFactory.SetInitialState
struct AUTVehicleFactory_SetInitialState_Params
{
};

// Function UTGame.UTVehicleFactory.AddToClosestObjective
struct AUTVehicleFactory_AddToClosestObjective_Params
{
};

// Function UTGame.UTVehicleFactory.PostBeginPlay
struct AUTVehicleFactory_PostBeginPlay_Params
{
};

// Function UTGame.UTConsolePlayerController.ResetPlayerMovementInput
struct AUTConsolePlayerController_ResetPlayerMovementInput_Params
{
};

// Function UTGame.UTConsolePlayerController.NextWeapon
struct AUTConsolePlayerController_NextWeapon_Params
{
};

// Function UTGame.UTConsolePlayerController.PrevWeapon
struct AUTConsolePlayerController_PrevWeapon_Params
{
};

// Function UTGame.UTConsolePlayerController.ClientRestart
struct AUTConsolePlayerController_ClientRestart_Params
{
	class APawn*                                       NewPawn;                                                  // (Parm)
};

// Function UTGame.UTConsolePlayerController.ClientSmartUse
struct AUTConsolePlayerController_ClientSmartUse_Params
{
};

// Function UTGame.UTConsolePlayerController.PerformedUseAction
struct AUTConsolePlayerController_PerformedUseAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTConsolePlayerController.AimHelpModifier
struct AUTConsolePlayerController_AimHelpModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTConsolePlayerController.AimingHelp
struct AUTConsolePlayerController_AimingHelp_Params
{
	bool                                               bInstantHit;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTConsolePlayerController.UpdateRotation
struct AUTConsolePlayerController_UpdateRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTVehicleMessage.AnnouncementSound
struct UUTVehicleMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleMessage.GetColor
struct UUTVehicleMessage_GetColor_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleMessage.GetString
struct UUTVehicleMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTVehicleMessage.AnnouncementLevel
struct UUTVehicleMessage_AnnouncementLevel_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleMessage.ClientReceive
struct UUTVehicleMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTVehicleWeapon.EndZoom
struct AUTVehicleWeapon_EndZoom_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
};

// Function UTGame.UTVehicleWeapon.StartZoom
struct AUTVehicleWeapon_StartZoom_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
};

// Function UTGame.UTVehicleWeapon.ServerSetZoom
struct AUTVehicleWeapon_ServerSetZoom_Params
{
	bool                                               bNowZoomed;                                               // (Parm)
};

// Function UTGame.UTVehicleWeapon.GetZoomedState
struct AUTVehicleWeapon_GetZoomedState_Params
{
	TEnumAsByte<EZoomState>                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.WeaponPlaySound
struct AUTVehicleWeapon_WeaponPlaySound_Params
{
	class USoundCue*                                   Sound;                                                    // (Parm)
	float                                              NoiseLoudness;                                            // (OptionalParm, Parm)
};

// Function UTGame.UTVehicleWeapon.NotifyVehicleUndeployed
struct AUTVehicleWeapon_NotifyVehicleUndeployed_Params
{
};

// Function UTGame.UTVehicleWeapon.NotifyVehicleDeployed
struct AUTVehicleWeapon_NotifyVehicleDeployed_Params
{
};

// Function UTGame.UTVehicleWeapon.GetMaxFinalAimAdjustment
struct AUTVehicleWeapon_GetMaxFinalAimAdjustment_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.GetTraceOwner
struct AUTVehicleWeapon_GetTraceOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.InstantFireEndTrace
struct AUTVehicleWeapon_InstantFireEndTrace_Params
{
	struct FVector                                     StartTrace;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.InstantFireStartTrace
struct AUTVehicleWeapon_InstantFireStartTrace_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.ProjectileFire
struct AUTVehicleWeapon_ProjectileFire_Params
{
	class AProjectile*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.GetAdjustedAim
struct AUTVehicleWeapon_GetAdjustedAim_Params
{
	struct FVector                                     StartFireLoc;                                             // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.EndFire
struct AUTVehicleWeapon_EndFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTVehicleWeapon.BeginFire
struct AUTVehicleWeapon_BeginFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTVehicleWeapon.GetPhysicalFireStartLoc
struct AUTVehicleWeapon_GetPhysicalFireStartLoc_Params
{
	struct FVector                                     AimDir;                                                   // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.PutDownWeapon
struct AUTVehicleWeapon_PutDownWeapon_Params
{
};

// Function UTGame.UTVehicleWeapon.Activate
struct AUTVehicleWeapon_Activate_Params
{
};

// Function UTGame.UTVehicleWeapon.DetachWeapon
struct AUTVehicleWeapon_DetachWeapon_Params
{
};

// Function UTGame.UTVehicleWeapon.AttachWeaponTo
struct AUTVehicleWeapon_AttachWeaponTo_Params
{
	class USkeletalMeshComponent*                      MeshCpnt;                                                 // (Parm, EditInline)
	struct FName                                       SocketName;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTVehicleWeapon.GetImpactEffect
struct AUTVehicleWeapon_GetImpactEffect_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	class UPhysicalMaterial*                           HitMaterial;                                              // (Parm)
	unsigned char                                      FireModeNum;                                              // (Parm)
	struct FMaterialImpactEffect                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTVehicleWeapon.GetFireInterval
struct AUTVehicleWeapon_GetFireInterval_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.GetFireTriggerTag
struct AUTVehicleWeapon_GetFireTriggerTag_Params
{
	int                                                BarrelIndex;                                              // (Parm)
	int                                                FireMode;                                                 // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.IsAimCorrect
struct AUTVehicleWeapon_IsAimCorrect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.GetFireStartLocationAndRotation
struct AUTVehicleWeapon_GetFireStartLocationAndRotation_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, OutParm)
	struct FRotator                                    StartRotation;                                            // (Parm, OutParm)
};

// Function UTGame.UTVehicleWeapon.GetDesiredAimPoint
struct AUTVehicleWeapon_GetDesiredAimPoint_Params
{
	class AActor*                                      TargetActor;                                              // (OptionalParm, Parm, OutParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleWeapon.DrawWeaponCrosshair
struct AUTVehicleWeapon_DrawWeaponCrosshair_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
};

// Function UTGame.UTVehicleWeapon.GetCrosshairScaling
struct AUTVehicleWeapon_GetCrosshairScaling_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
};

// Function UTGame.UTVehicleWeapon.DrawKillIcon
struct AUTVehicleWeapon_DrawKillIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              ScreenX;                                                  // (Parm)
	float                                              ScreenY;                                                  // (Parm)
	float                                              HUDScaleX;                                                // (Parm)
	float                                              HUDScaleY;                                                // (Parm)
};

// Function UTGame.UTVehicleWeapon.CanHitDesiredTarget
struct AUTVehicleWeapon_CanHitDesiredTarget_Params
{
	struct FVector                                     SocketLocation;                                           // (Parm)
	struct FRotator                                    SocketRotation;                                           // (Parm)
	struct FVector                                     DesiredAimPoint;                                          // (Parm)
	class AActor*                                      TargetActor;                                              // (Parm)
	struct FVector                                     RealAimPoint;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTLockWarningMessage.GetColor
struct UUTLockWarningMessage_GetColor_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTLockWarningMessage.GetString
struct UUTLockWarningMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTLockWarningMessage.AnnouncementLevel
struct UUTLockWarningMessage_AnnouncementLevel_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSeqEvent_VehicleFactory.Activated
struct UUTSeqEvent_VehicleFactory_Activated_Params
{
};

// Function UTGame.UTDmgType_Burning.GetHitEffectDuration
struct UUTDmgType_Burning_GetHitEffectDuration_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              Damage;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDmgType_Burning.SpawnHitEffect
struct UUTDmgType_Burning_SpawnHitEffect_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              Damage;                                                   // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	struct FName                                       BoneName;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTDmgType_ScorpionSelfDestruct.IncrementKills
struct UUTDmgType_ScorpionSelfDestruct_IncrementKills_Params
{
	class AUTPlayerReplicationInfo*                    KillerPRI;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.GetRange
struct AUTProjectile_GetRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.GetTimeToLocation
struct AUTProjectile_GetTimeToLocation_Params
{
	struct FVector                                     TargetLoc;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.StaticGetTimeToLocation
struct AUTProjectile_StaticGetTimeToLocation_Params
{
	struct FVector                                     TargetLoc;                                                // (Parm)
	struct FVector                                     StartLoc;                                                 // (Parm)
	class AController*                                 RequestedBy;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.CalculateTravelTime
struct AUTProjectile_CalculateTravelTime_Params
{
	float                                              Dist;                                                     // (Parm)
	float                                              MoveSpeed;                                                // (Parm)
	float                                              MaxMoveSpeed;                                             // (Parm)
	float                                              AccelMag;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.GetPawnOwner
struct AUTProjectile_GetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.GetHomingTarget
struct AUTProjectile_GetHomingTarget_Params
{
	class AUTProjectile*                               Seeker;                                                   // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.CalcCamera
struct AUTProjectile_CalcCamera_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.MyOnParticleSystemFinished
struct AUTProjectile_MyOnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, EditInline)
};

// Function UTGame.UTProjectile.Destroyed
struct AUTProjectile_Destroyed_Params
{
};

// Function UTGame.UTProjectile.HideProjectile
struct AUTProjectile_HideProjectile_Params
{
};

// Function UTGame.UTProjectile.TornOff
struct AUTProjectile_TornOff_Params
{
};

// Function UTGame.UTProjectile.ShutDown
struct AUTProjectile_ShutDown_Params
{
};

// Function UTGame.UTProjectile.ShouldSpawnExplosionLight
struct AUTProjectile_ShouldSpawnExplosionLight_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.SpawnExplosionEffects
struct AUTProjectile_SpawnExplosionEffects_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTProjectile.SetExplosionEffectParameters
struct AUTProjectile_SetExplosionEffectParameters_Params
{
	class UParticleSystemComponent*                    ProjExplosion;                                            // (Parm, EditInline)
};

// Function UTGame.UTProjectile.SpawnFlightEffects
struct AUTProjectile_SpawnFlightEffects_Params
{
};

// Function UTGame.UTProjectile.Explode
struct AUTProjectile_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTProjectile.ProcessTouch
struct AUTProjectile_ProcessTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTProjectile.Init
struct AUTProjectile_Init_Params
{
	struct FVector                                     Direction;                                                // (Parm)
};

// Function UTGame.UTProjectile.SetInitialState
struct AUTProjectile_SetInitialState_Params
{
};

// Function UTGame.UTProjectile.PostBeginPlay
struct AUTProjectile_PostBeginPlay_Params
{
};

// Function UTGame.UTProjectile.PreBeginPlay
struct AUTProjectile_PreBeginPlay_Params
{
};

// Function UTGame.UTProjectile.CanSplash
struct AUTProjectile_CanSplash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTProjectile.Landed
struct AUTProjectile_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
};

// Function UTGame.UTProjectile.CreateProjectileLight
struct AUTProjectile_CreateProjectileLight_Params
{
};

// Function UTGame.UTSkelControl_Damage.BreakApartOnDeath
struct UUTSkelControl_Damage_BreakApartOnDeath_Params
{
	struct FVector                                     PartLocation;                                             // (Parm)
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTSkelControl_Damage.BreakApart
struct UUTSkelControl_Damage_BreakApart_Params
{
	struct FVector                                     PartLocation;                                             // (Parm)
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTDmgType_RanOver.SpawnHitEffect
struct UUTDmgType_RanOver_SpawnHitEffect_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              Damage;                                                   // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	struct FName                                       BoneName;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTDmgType_RanOver.SmallReward
struct UUTDmgType_RanOver_SmallReward_Params
{
	class AUTPlayerController*                         Killer;                                                   // (Parm)
	int                                                KillCount;                                                // (Parm)
};

// Function UTGame.UTDmgType_RanOver.IncrementKills
struct UUTDmgType_RanOver_IncrementKills_Params
{
	class AUTPlayerReplicationInfo*                    KillerPRI;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGib_VehiclePiece.PreBeginPlay
struct AUTGib_VehiclePiece_PreBeginPlay_Params
{
};

// Function UTGame.UTDmgType_Pancake.SmallReward
struct UUTDmgType_Pancake_SmallReward_Params
{
	class AUTPlayerController*                         Killer;                                                   // (Parm)
	int                                                KillCount;                                                // (Parm)
};

// Function UTGame.UTAirVehicle.Dodge
struct AUTAirVehicle_Dodge_Params
{
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAirVehicle.RecommendLongRangedAttack
struct AUTAirVehicle_RecommendLongRangedAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAirVehicle.SetDriving
struct AUTAirVehicle_SetDriving_Params
{
	bool                                               bNewDriving;                                              // (Parm)
};

// Function UTGame.UTAirVehicle.LockOnWarning
struct AUTAirVehicle_LockOnWarning_Params
{
	class AUDKProjectile*                              IncomingMissile;                                          // (Parm)
};

// Function UTGame.UTAmbientSoundComponent.OcclusionChanged
struct UUTAmbientSoundComponent_OcclusionChanged_Params
{
	bool                                               bNowOccluded;                                             // (Parm)
};

// Function UTGame.UTInventory.OwnerEvent
struct AUTInventory_OwnerEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
};

// Function UTGame.UTInventory.DropFrom
struct AUTInventory_DropFrom_Params
{
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     StartVelocity;                                            // (Parm)
};

// Function UTGame.UTInventory.Destroyed
struct AUTInventory_Destroyed_Params
{
};

// Function UTGame.UTInventory.ClientLostItem
struct AUTInventory_ClientLostItem_Params
{
};

// Function UTGame.UTInventory.AddWeaponOverlay
struct AUTInventory_AddWeaponOverlay_Params
{
	class AUTGameReplicationInfo*                      GRI;                                                      // (Parm)
};

// Function UTGame.UTPickupInventory.BotDesireability
struct AUTPickupInventory_BotDesireability_Params
{
	class AActor*                                      PickupHolder;                                             // (Parm)
	class APawn*                                       P;                                                        // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPickupMessage.ClientReceive
struct UUTPickupMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTAmmoPickupFactory.BotDesireability
struct AUTAmmoPickupFactory_BotDesireability_Params
{
	class APawn*                                       P;                                                        // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAmmoPickupFactory.UpdateHUD
struct AUTAmmoPickupFactory_UpdateHUD_Params
{
	class AUTHUD*                                      H;                                                        // (Parm)
};

// Function UTGame.UTAmmoPickupFactory.SpawnCopyFor
struct AUTAmmoPickupFactory_SpawnCopyFor_Params
{
	class APawn*                                       Recipient;                                                // (Parm)
};

// Function UTGame.UTVoice.AddAnnouncement
struct UUTVoice_AddAnnouncement_Params
{
	class AUTAnnouncer*                                Announcer;                                                // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.ShouldBeRemoved
struct UUTVoice_ShouldBeRemoved_Params
{
	class AUTQueuedAnnouncement*                       MyAnnouncement;                                           // (Parm)
	class UClass*                                      NewAnnouncementClass;                                     // (Parm)
	int                                                NewMessageIndex;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.SendInPositionMessage
struct UUTVoice_SendInPositionMessage_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
};

// Function UTGame.UTVoice.SendLocationUpdate
struct UUTVoice_SendLocationUpdate_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	class AUTGame*                                     G;                                                        // (Parm)
	class APawn*                                       StatusPawn;                                               // (Parm)
	bool                                               bDontSendMidfield;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.KilledVehicleSound
struct UUTVoice_KilledVehicleSound_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.SendKilledVehicleMessage
struct UUTVoice_SendKilledVehicleMessage_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
};

// Function UTGame.UTVoice.SendEnemyStatusUpdate
struct UUTVoice_SendEnemyStatusUpdate_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
};

// Function UTGame.UTVoice.InitSniperUpdate
struct UUTVoice_InitSniperUpdate_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
};

// Function UTGame.UTVoice.SendEnemyFlagCarrierHereUpdate
struct UUTVoice_SendEnemyFlagCarrierHereUpdate_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
};

// Function UTGame.UTVoice.SendLocalizedMessage
struct UUTVoice_SendLocalizedMessage_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     LocationObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTVoice.SetHoldingFlagUpdate
struct UUTVoice_SetHoldingFlagUpdate_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
};

// Function UTGame.UTVoice.InitCombatUpdate
struct UUTVoice_InitCombatUpdate_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
};

// Function UTGame.UTVoice.InitStatusUpdate
struct UUTVoice_InitStatusUpdate_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
};

// Function UTGame.UTVoice.GetMessageIndex
struct UUTVoice_GetMessageIndex_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.SendVoiceMessage
struct UUTVoice_SendVoiceMessage_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTVoice.AllowVoiceMessage
struct UUTVoice_AllowVoiceMessage_Params
{
	struct FName                                       MessageType;                                              // (Parm)
	class AUTPlayerController*                         PC;                                                       // (Parm)
	class APlayerController*                           Recipient;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.GetString
struct UUTVoice_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTVoice.EnemySound
struct UUTVoice_EnemySound_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.AnnouncementSound
struct UUTVoice_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.ClientReceive
struct UUTVoice_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTVoice.GetNeedOurFlagMessageIndex
struct UUTVoice_GetNeedOurFlagMessageIndex_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.GetGotYourBackMessageIndex
struct UUTVoice_GetGotYourBackMessageIndex_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.GetFriendlyFireMessageIndex
struct UUTVoice_GetFriendlyFireMessageIndex_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVoice.GetAckMessageIndex
struct UUTVoice_GetAckMessageIndex_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTScriptedVoiceMessage.AnnouncementLevel
struct UUTScriptedVoiceMessage_AnnouncementLevel_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTScriptedVoiceMessage.GetString
struct UUTScriptedVoiceMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTScriptedVoiceMessage.ClientReceive
struct UUTScriptedVoiceMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTScriptedVoiceMessage.AnnouncementSound
struct UUTScriptedVoiceMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawnSoundGroup.PlayDrownSound
struct UUTPawnSoundGroup_PlayDrownSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayGaspSound
struct UUTPawnSoundGroup_PlayGaspSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayGibSound
struct UUTPawnSoundGroup_PlayGibSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayTakeHitSound
struct UUTPawnSoundGroup_PlayTakeHitSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
	int                                                Damage;                                                   // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayDyingSound
struct UUTPawnSoundGroup_PlayDyingSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.GetLandSound
struct UUTPawnSoundGroup_GetLandSound_Params
{
	struct FName                                       MaterialType;                                             // (Parm)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawnSoundGroup.GetJumpSound
struct UUTPawnSoundGroup_GetJumpSound_Params
{
	struct FName                                       MaterialType;                                             // (Parm)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawnSoundGroup.GetFootstepSound
struct UUTPawnSoundGroup_GetFootstepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
	struct FName                                       MaterialType;                                             // (Parm)
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPawnSoundGroup.PlayFallingDamageLandSound
struct UUTPawnSoundGroup_PlayFallingDamageLandSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayLandSound
struct UUTPawnSoundGroup_PlayLandSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayJumpSound
struct UUTPawnSoundGroup_PlayJumpSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayDoubleJumpSound
struct UUTPawnSoundGroup_PlayDoubleJumpSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayDodgeSound
struct UUTPawnSoundGroup_PlayDodgeSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayBodyExplosion
struct UUTPawnSoundGroup_PlayBodyExplosion_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayCrushedSound
struct UUTPawnSoundGroup_PlayCrushedSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayBulletImpact
struct UUTPawnSoundGroup_PlayBulletImpact_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTPawnSoundGroup.PlayInstagibSound
struct UUTPawnSoundGroup_PlayInstagibSound_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTClientSideWeaponPawn.Tick
struct AUTClientSideWeaponPawn_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTClientSideWeaponPawn.DetachDriver
struct AUTClientSideWeaponPawn_DetachDriver_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTClientSideWeaponPawn.AttachDriver
struct AUTClientSideWeaponPawn_AttachDriver_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTClientSideWeaponPawn.PreBeginPlay
struct AUTClientSideWeaponPawn_PreBeginPlay_Params
{
};

// Function UTGame.UTWeaponAttachment.GetEffectLocation
struct AUTWeaponAttachment_GetEffectLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponAttachment.FireModeUpdated
struct AUTWeaponAttachment_FireModeUpdated_Params
{
	unsigned char                                      FiringMode;                                               // (Parm)
	bool                                               bViaReplication;                                          // (Parm)
};

// Function UTGame.UTWeaponAttachment.ChangeVisibility
struct AUTWeaponAttachment_ChangeVisibility_Params
{
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTWeaponAttachment.SetWeaponOverlayFlags
struct AUTWeaponAttachment_SetWeaponOverlayFlags_Params
{
	class AUTPawn*                                     OwnerPawn;                                                // (Parm)
};

// Function UTGame.UTWeaponAttachment.CheckBulletWhip
struct AUTWeaponAttachment_CheckBulletWhip_Params
{
	struct FVector                                     FireDir;                                                  // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTWeaponAttachment.PlayImpactEffects
struct AUTWeaponAttachment_PlayImpactEffects_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTWeaponAttachment.SetImpactedActor
struct AUTWeaponAttachment_SetImpactedActor_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Parm)
};

// Function UTGame.UTWeaponAttachment.AllowImpactEffects
struct AUTWeaponAttachment_AllowImpactEffects_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponAttachment.GetImpactEffect
struct AUTWeaponAttachment_GetImpactEffect_Params
{
	class UPhysicalMaterial*                           HitMaterial;                                              // (Parm)
	struct FMaterialImpactEffect                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTWeaponAttachment.StopThirdPersonFireEffects
struct AUTWeaponAttachment_StopThirdPersonFireEffects_Params
{
};

// Function UTGame.UTWeaponAttachment.ThirdPersonFireEffects
struct AUTWeaponAttachment_ThirdPersonFireEffects_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTWeaponAttachment.StopFirstPersonFireEffects
struct AUTWeaponAttachment_StopFirstPersonFireEffects_Params
{
	class AWeapon*                                     PawnWeapon;                                               // (Parm)
};

// Function UTGame.UTWeaponAttachment.FirstPersonFireEffects
struct AUTWeaponAttachment_FirstPersonFireEffects_Params
{
	class AWeapon*                                     PawnWeapon;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTWeaponAttachment.StopMuzzleFlash
struct AUTWeaponAttachment_StopMuzzleFlash_Params
{
};

// Function UTGame.UTWeaponAttachment.CauseMuzzleFlash
struct AUTWeaponAttachment_CauseMuzzleFlash_Params
{
};

// Function UTGame.UTWeaponAttachment.MuzzleFlashTimer
struct AUTWeaponAttachment_MuzzleFlashTimer_Params
{
};

// Function UTGame.UTWeaponAttachment.DetachFrom
struct AUTWeaponAttachment_DetachFrom_Params
{
	class USkeletalMeshComponent*                      MeshCpnt;                                                 // (Parm, EditInline)
};

// Function UTGame.UTWeaponAttachment.SetPuttingDownWeapon
struct AUTWeaponAttachment_SetPuttingDownWeapon_Params
{
	bool                                               bNowPuttingDown;                                          // (Parm)
};

// Function UTGame.UTWeaponAttachment.AttachTo
struct AUTWeaponAttachment_AttachTo_Params
{
	class AUTPawn*                                     OwnerPawn;                                                // (Parm)
};

// Function UTGame.UTWeaponAttachment.SetMuzzleFlashParams
struct AUTWeaponAttachment_SetMuzzleFlashParams_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, EditInline)
};

// Function UTGame.UTWeaponAttachment.SetSkin
struct AUTWeaponAttachment_SetSkin_Params
{
	class UMaterial*                                   NewMaterial;                                              // (Parm)
};

// Function UTGame.UTWeaponAttachment.CreateOverlayMesh
struct AUTWeaponAttachment_CreateOverlayMesh_Params
{
};

// Function UTGame.UTWeaponAttachment.CheckToForceRefPose
struct AUTWeaponAttachment_CheckToForceRefPose_Params
{
};

// Function UTGame.UTWeaponAttachment.PostBeginPlay
struct AUTWeaponAttachment_PostBeginPlay_Params
{
};

// Function UTGame.UTEmit_HitEffect.PawnBaseDied
struct AUTEmit_HitEffect_PawnBaseDied_Params
{
};

// Function UTGame.UTEmit_HitEffect.AttachTo
struct AUTEmit_HitEffect_AttachTo_Params
{
	class APawn*                                       P;                                                        // (Parm)
	struct FName                                       NewBoneName;                                              // (Parm)
};

// Function UTGame.UTSeqAct_UseHoverboard.GetObjClassVersion
struct UUTSeqAct_UseHoverboard_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTEmit_TransLocateOut.Timer
struct AUTEmit_TransLocateOut_Timer_Params
{
};

// Function UTGame.UTEmit_TransLocateOut.PostBeginPlay
struct AUTEmit_TransLocateOut_PostBeginPlay_Params
{
};

// Function UTGame.UTEmit_TransLocateOut.TakeDamage
struct AUTEmit_TransLocateOut_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTWaterVolume.PlayEntrySplash
struct AUTWaterVolume_PlayEntrySplash_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTWaterVolume.Touch
struct AUTWaterVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTBeamWeaponAttachment.UpdateBeam
struct AUTBeamWeaponAttachment_UpdateBeam_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTBeamWeaponAttachment.HideEmitter
struct AUTBeamWeaponAttachment_HideEmitter_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bHide;                                                    // (Parm)
};

// Function UTGame.UTBeamWeaponAttachment.AddBeamEmitter
struct AUTBeamWeaponAttachment_AddBeamEmitter_Params
{
};

// Function UTGame.UTAttachment_LinkGun.ChangeVisibility
struct AUTAttachment_LinkGun_ChangeVisibility_Params
{
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTAttachment_LinkGun.CheckPoweredUp
struct AUTAttachment_LinkGun_CheckPoweredUp_Params
{
};

// Function UTGame.UTAttachment_LinkGun.HideEmitter
struct AUTAttachment_LinkGun_HideEmitter_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               bHide;                                                    // (Parm)
};

// Function UTGame.UTAttachment_LinkGun.KillEndpointEffect
struct AUTAttachment_LinkGun_KillEndpointEffect_Params
{
};

// Function UTGame.UTAttachment_LinkGun.UpdateBeam
struct AUTAttachment_LinkGun_UpdateBeam_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTAttachment_LinkGun.Destroyed
struct AUTAttachment_LinkGun_Destroyed_Params
{
};

// Function UTGame.UTAttachment_LinkGun.StopThirdPersonFireEffects
struct AUTAttachment_LinkGun_StopThirdPersonFireEffects_Params
{
};

// Function UTGame.UTAttachment_LinkGun.StopMuzzleFlash
struct AUTAttachment_LinkGun_StopMuzzleFlash_Params
{
};

// Function UTGame.UTAttachment_LinkGun.SetImpactedActor
struct AUTAttachment_LinkGun_SetImpactedActor_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Parm)
};

// Function UTGame.UTAttachment_LinkGun.SetSkin
struct AUTAttachment_LinkGun_SetSkin_Params
{
	class UMaterial*                                   NewMaterial;                                              // (Parm)
};

// Function UTGame.UTAttachment_LinkGun.PostBeginPlay
struct AUTAttachment_LinkGun_PostBeginPlay_Params
{
};

// Function UTGame.UTAttachment_LinkGun.GetTeamMuzzleFlashTemplate
struct AUTAttachment_LinkGun_GetTeamMuzzleFlashTemplate_Params
{
	unsigned char                                      TeamNum;                                                  // (Parm)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTAttachment_LinkGun.GetTeamBeamInfo
struct AUTAttachment_LinkGun_GetTeamBeamInfo_Params
{
	unsigned char                                      TeamNum;                                                  // (Parm)
	struct FColor                                      BeamColor;                                                // (OptionalParm, Parm, OutParm)
	class UParticleSystem*                             BeamSystem;                                               // (OptionalParm, Parm, OutParm)
	class UParticleSystem*                             BeamEndpointTemplate;                                     // (OptionalParm, Parm, OutParm)
};

// Function UTGame.UTLinkGunMuzzleFlashLight.SetTeam
struct UUTLinkGunMuzzleFlashLight_SetTeam_Params
{
	unsigned char                                      NewTeam;                                                  // (Parm)
};

// Function UTGame.UTAutoCrouchVolume.CrouchTimer
struct AUTAutoCrouchVolume_CrouchTimer_Params
{
};

// Function UTGame.UTAutoCrouchVolume.UnTouch
struct AUTAutoCrouchVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTAutoCrouchVolume.SetCrouch
struct AUTAutoCrouchVolume_SetCrouch_Params
{
	class APawn*                                       P;                                                        // (Parm)
	unsigned char                                      bCrouch;                                                  // (Parm)
};

// Function UTGame.UTAutoCrouchVolume.Touch
struct AUTAutoCrouchVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTAvoidMarker.Touch
struct AUTAvoidMarker_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTDefensePoint.GetMoveTarget
struct AUTDefensePoint_GetMoveTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDefensePoint.HigherPriorityThan
struct AUTDefensePoint_HigherPriorityThan_Params
{
	class AUTDefensePoint*                             S;                                                        // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               bAutoPointsInUse;                                         // (Parm)
	bool                                               bPrioritizeSameGroup;                                     // (Parm)
	int                                                NumChecked;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDefensePoint.PreBeginPlay
struct AUTDefensePoint_PreBeginPlay_Params
{
};

// Function UTGame.UTDefensePoint.CheckForErrors
struct AUTDefensePoint_CheckForErrors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDefensePoint.FreePoint
struct AUTDefensePoint_FreePoint_Params
{
};

// Function UTGame.UTDefensePoint.Reset
struct AUTDefensePoint_Reset_Params
{
};

// Function UTGame.UTTimedPowerup.GetPowerupStatName
struct AUTTimedPowerup_GetPowerupStatName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTimedPowerup.DetourWeight
struct AUTTimedPowerup_DetourWeight_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	float                                              PathWeight;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTimedPowerup.BotDesireability
struct AUTTimedPowerup_BotDesireability_Params
{
	class AActor*                                      PickupHolder;                                             // (Parm)
	class APawn*                                       P;                                                        // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTimedPowerup.TimeExpired
struct AUTTimedPowerup_TimeExpired_Params
{
};

// Function UTGame.UTTimedPowerup.DenyPickupQuery
struct AUTTimedPowerup_DenyPickupQuery_Params
{
	class UClass*                                      ItemClass;                                                // (Parm)
	class AActor*                                      Pickup;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTimedPowerup.DisplayPowerup
struct AUTTimedPowerup_DisplayPowerup_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AUTHUD*                                      HUD;                                                      // (Parm)
	float                                              ResolutionScale;                                          // (Parm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function UTGame.UTTimedPowerup.TimeRemaingUpdated
struct AUTTimedPowerup_TimeRemaingUpdated_Params
{
};

// Function UTGame.UTTimedPowerup.ClientSetTimeRemaining
struct AUTTimedPowerup_ClientSetTimeRemaining_Params
{
	float                                              NewTimeRemaining;                                         // (Parm)
};

// Function UTGame.UTTimedPowerup.ClientLostItem
struct AUTTimedPowerup_ClientLostItem_Params
{
};

// Function UTGame.UTTimedPowerup.AdjustPPEffects
struct AUTTimedPowerup_AdjustPPEffects_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               bRemove;                                                  // (Parm)
};

// Function UTGame.UTTimedPowerup.ClientGivenTo
struct AUTTimedPowerup_ClientGivenTo_Params
{
	class APawn*                                       NewOwner;                                                 // (Parm)
	bool                                               bDoNotActivate;                                           // (Parm)
};

// Function UTGame.UTTimedPowerup.GivenTo
struct AUTTimedPowerup_GivenTo_Params
{
	class APawn*                                       NewOwner;                                                 // (Parm)
	bool                                               bDoNotActivate;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTTimedPowerup.Tick
struct AUTTimedPowerup_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTHoldSpot.NotifyAnchorFindingResult
struct AUTHoldSpot_NotifyAnchorFindingResult_Params
{
	class ANavigationPoint*                            EndAnchor;                                                // (Parm)
	class APawn*                                       RouteFinder;                                              // (Parm)
};

// Function UTGame.UTHoldSpot.SpecifyEndAnchor
struct AUTHoldSpot_SpecifyEndAnchor_Params
{
	class APawn*                                       RouteFinder;                                              // (Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTHoldSpot.FreePoint
struct AUTHoldSpot_FreePoint_Params
{
};

// Function UTGame.UTHoldSpot.GetMoveTarget
struct AUTHoldSpot_GetMoveTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTHoldSpot.PreBeginPlay
struct AUTHoldSpot_PreBeginPlay_Params
{
};

// Function UTGame.UTDeathmatch.CheckSpiceOfLifeAchievement
struct AUTDeathmatch_CheckSpiceOfLifeAchievement_Params
{
};

// Function UTGame.UTDeathmatch.CheckAchievements
struct AUTDeathmatch_CheckAchievements_Params
{
};

// Function UTGame.UTDeathmatch.WriteOnlineStats
struct AUTDeathmatch_WriteOnlineStats_Params
{
};

// Function UTGame.UTDeathmatch.GetHandicapNeed
struct AUTDeathmatch_GetHandicapNeed_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDeathmatch.WantsPickups
struct AUTDeathmatch_WantsPickups_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTLastSecondMessage.AnnouncementSound
struct UUTLastSecondMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTLastSecondMessage.ClientReceive
struct UUTLastSecondMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTLastSecondMessage.GetString
struct UUTLastSecondMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTCarriedObjectMessage.PartiallyDuplicates
struct UUTCarriedObjectMessage_PartiallyDuplicates_Params
{
	int                                                Switch1;                                                  // (Parm)
	int                                                Switch2;                                                  // (Parm)
	class UObject*                                     OptionalObject1;                                          // (Parm)
	class UObject*                                     OptionalObject2;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObjectMessage.AddAnnouncement
struct UUTCarriedObjectMessage_AddAnnouncement_Params
{
	class AUTAnnouncer*                                Announcer;                                                // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObjectMessage.ShouldRemoveFlagAnnouncement
struct UUTCarriedObjectMessage_ShouldRemoveFlagAnnouncement_Params
{
	int                                                MyMessageIndex;                                           // (Parm)
	class UClass*                                      NewAnnouncementClass;                                     // (Parm)
	int                                                NewMessageIndex;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObjectMessage.ShouldBeRemoved
struct UUTCarriedObjectMessage_ShouldBeRemoved_Params
{
	class AUTQueuedAnnouncement*                       MyAnnouncement;                                           // (Parm)
	class UClass*                                      NewAnnouncementClass;                                     // (Parm)
	int                                                NewMessageIndex;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObjectMessage.GetString
struct UUTCarriedObjectMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTCarriedObjectMessage.AnnouncementLevel
struct UUTCarriedObjectMessage_AnnouncementLevel_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObjectMessage.AnnouncementSound
struct UUTCarriedObjectMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCarriedObjectMessage.ClientReceive
struct UUTCarriedObjectMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTDmgType_Rocket.SpawnHitEffect
struct UUTDmgType_Rocket_SpawnHitEffect_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              Damage;                                                   // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	struct FName                                       BoneName;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTConsole.OutputTextLine
struct UUTConsole_OutputTextLine_Params
{
	struct FString                                     Text;                                                     // (Parm, CoerceParm, NeedCtorLink)
};

// Function UTGame.UTConsole.InputKey
struct UUTConsole_InputKey_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	float                                              AmountDepressed;                                          // (OptionalParm, Parm)
	bool                                               bGamepad;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTConsolePlayerInput.CheckForDoubleClickMove
struct UUTConsolePlayerInput_CheckForDoubleClickMove_Params
{
	float                                              DeltaTime;                                                // (Parm)
	TEnumAsByte<EDoubleClickDir>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTConsolePlayerInput.Jump
struct UUTConsolePlayerInput_Jump_Params
{
};

// Function UTGame.UTConsolePlayerInput.SmartJump
struct UUTConsolePlayerInput_SmartJump_Params
{
};

// Function UTGame.UTConsolePlayerInput.DebugTargetFriction
struct UUTConsolePlayerInput_DebugTargetFriction_Params
{
};

// Function UTGame.UTConsolePlayerInput.DebugTargetAdhesion
struct UUTConsolePlayerInput_DebugTargetAdhesion_Params
{
};

// Function UTGame.UTConsolePlayerInput.DebugViewAcceleration
struct UUTConsolePlayerInput_DebugViewAcceleration_Params
{
};

// Function UTGame.UTConsolePlayerInput.ApplyTargetFriction
struct UUTConsolePlayerInput_ApplyTargetFriction_Params
{
	float                                              DeltaTime;                                                // (Parm)
	class AUTWeapon*                                   W;                                                        // (Parm)
};

// Function UTGame.UTConsolePlayerInput.AdjustMouseSensitivity
struct UUTConsolePlayerInput_AdjustMouseSensitivity_Params
{
	float                                              FOVScale;                                                 // (Parm)
};

// Function UTGame.UTConsolePlayerInput.ApplyTargetAdhesion
struct UUTConsolePlayerInput_ApplyTargetAdhesion_Params
{
	float                                              DeltaTime;                                                // (Parm)
	class AUTWeapon*                                   W;                                                        // (Parm)
	int                                                out_YawRot;                                               // (Parm, OutParm)
	int                                                out_PitchRot;                                             // (Parm, OutParm)
};

// Function UTGame.UTConsolePlayerInput.ApplyViewAcceleration
struct UUTConsolePlayerInput_ApplyViewAcceleration_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTConsolePlayerInput.ApplyViewAutoVehiclePitchCentering
struct UUTConsolePlayerInput_ApplyViewAutoVehiclePitchCentering_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTConsolePlayerInput.ApplyViewAutoPitchCentering
struct UUTConsolePlayerInput_ApplyViewAutoPitchCentering_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTConsolePlayerInput.PreProcessInput
struct UUTConsolePlayerInput_PreProcessInput_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTConsolePlayerInput.PostBeginPlay
struct UUTConsolePlayerInput_PostBeginPlay_Params
{
};

// Function UTGame.UTSeqEvent_FlagEvent.GetObjClassVersion
struct UUTSeqEvent_FlagEvent_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSeqEvent_FlagEvent.Trigger
struct UUTSeqEvent_FlagEvent_Trigger_Params
{
	struct FName                                       EventType;                                                // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function UTGame.UTCTFBase.IsActive
struct AUTCTFBase_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFBase.ReplicatedEvent
struct AUTCTFBase_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTCTFBase.SetAlarm
struct AUTCTFBase_SetAlarm_Params
{
	bool                                               bNowOn;                                                   // (Parm)
};

// Function UTGame.UTCTFBase.GetFlag
struct AUTCTFBase_GetFlag_Params
{
	class AUTCarriedObject*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFBase.ObjectiveChanged
struct AUTCTFBase_ObjectiveChanged_Params
{
};

// Function UTGame.UTCTFBase.GetLocationSpeechFor
struct AUTCTFBase_GetLocationSpeechFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	int                                                LocationSpeechOffset;                                     // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFBase.GetLocationMessageIndex
struct AUTCTFBase_GetLocationMessageIndex_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class APawn*                                       StatusPawn;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFBase.GetBestViewTarget
struct AUTCTFBase_GetBestViewTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFBase.PostBeginPlay
struct AUTCTFBase_PostBeginPlay_Params
{
};

// Function UTGame.UTCTFFlag.SetFlagDynamicLightToNotBeDynamic
struct AUTCTFFlag_SetFlagDynamicLightToNotBeDynamic_Params
{
};

// Function UTGame.UTCTFFlag.SetFlagPropertiesToStationaryFlagState
struct AUTCTFFlag_SetFlagPropertiesToStationaryFlagState_Params
{
};

// Function UTGame.UTCTFFlag.Drop
struct AUTCTFFlag_Drop_Params
{
	class AController*                                 Killer;                                                   // (OptionalParm, Parm)
};

// Function UTGame.UTCTFFlag.CustomFadeOutEffects
struct AUTCTFFlag_CustomFadeOutEffects_Params
{
};

// Function UTGame.UTCTFFlag.bringUpBrightOff
struct AUTCTFFlag_bringUpBrightOff_Params
{
};

// Function UTGame.UTCTFFlag.CustomRespawnEffects
struct AUTCTFFlag_CustomRespawnEffects_Params
{
};

// Function UTGame.UTCTFFlag.SameTeamTouch
struct AUTCTFFlag_SameTeamTouch_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTCTFFlag.ValidHolder
struct AUTCTFFlag_ValidHolder_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFFlag.SetHolder
struct AUTCTFFlag_SetHolder_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTCTFFlag.ClientReturnedHome
struct AUTCTFFlag_ClientReturnedHome_Params
{
};

// Function UTGame.UTCTFFlag.ShouldMinimapRenderFor
struct AUTCTFFlag_ShouldMinimapRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFFlag.OnBaseChainChanged
struct AUTCTFFlag_OnBaseChainChanged_Params
{
};

// Function UTGame.UTCTFFlag.Tick
struct AUTCTFFlag_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTCTFFlag.PostBeginPlay
struct AUTCTFFlag_PostBeginPlay_Params
{
};

// Function UTGame.UTCTFFlag.ReplicatedEvent
struct AUTCTFFlag_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTTeamGame.ProcessSpeechRecognition
struct AUTTeamGame_ProcessSpeechRecognition_Params
{
	class AUTPlayerController*                         Speaker;                                                  // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (Const, Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTTeamGame.ProcessSpeechOrders
struct AUTTeamGame_ProcessSpeechOrders_Params
{
	class AUTPlayerController*                         Speaker;                                                  // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (Const, Parm, OutParm, NeedCtorLink)
	TArray<class AUTBot*>                              Recipients;                                               // (Const, Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTTeamGame.ParseSpeechRecipients
struct AUTTeamGame_ParseSpeechRecipients_Params
{
	class AUTPlayerController*                         Speaker;                                                  // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (Const, Parm, OutParm, NeedCtorLink)
	TArray<class AUTBot*>                              Recipients;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTTeamGame.HandleSeamlessTravelPlayer
struct AUTTeamGame_HandleSeamlessTravelPlayer_Params
{
	class AController*                                 C;                                                        // (Parm, OutParm)
};

// Function UTGame.UTTeamGame.Logout
struct AUTTeamGame_Logout_Params
{
	class AController*                                 Exiting;                                                  // (Parm)
};

// Function UTGame.UTTeamGame.GetSeamlessTravelActorList
struct AUTTeamGame_GetSeamlessTravelActorList_Params
{
	bool                                               bToEntry;                                                 // (Parm)
	TArray<class AActor*>                              ActorList;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTTeamGame.ShowPathTo
struct AUTTeamGame_ShowPathTo_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                TeamNum;                                                  // (Parm)
};

// Function UTGame.UTTeamGame.AllowClientToTeleport
struct AUTTeamGame_AllowClientToTeleport_Params
{
	class AUTPlayerReplicationInfo*                    ClientPRI;                                                // (Parm)
	class AActor*                                      DestinationActor;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.OverridePRI
struct AUTTeamGame_OverridePRI_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class APlayerReplicationInfo*                      OldPRI;                                                   // (Parm)
};

// Function UTGame.UTTeamGame.AnnounceScore
struct AUTTeamGame_AnnounceScore_Params
{
	int                                                ScoringTeam;                                              // (Parm)
};

// Function UTGame.UTTeamGame.PlayRegularEndOfMatchMessage
struct AUTTeamGame_PlayRegularEndOfMatchMessage_Params
{
};

// Function UTGame.UTTeamGame.IsWinningTeam
struct AUTTeamGame_IsWinningTeam_Params
{
	class ATeamInfo*                                   T;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.IsAWinner
struct AUTTeamGame_IsAWinner_Params
{
	class APlayerController*                           C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.DominatingVictory
struct AUTTeamGame_DominatingVictory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.ReduceDamage
struct AUTTeamGame_ReduceDamage_Params
{
	int                                                Damage;                                                   // (Parm, OutParm)
	class APawn*                                       injured;                                                  // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class UClass*                                      DamageType;                                               // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
};

// Function UTGame.UTTeamGame.SendFlagKillMessage
struct AUTTeamGame_SendFlagKillMessage_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AUTPlayerReplicationInfo*                    KillerPRI;                                                // (Parm)
};

// Function UTGame.UTTeamGame.AdjustSkill
struct AUTTeamGame_AdjustSkill_Params
{
	class AAIController*                               B;                                                        // (Parm)
	class APlayerController*                           P;                                                        // (Parm)
	bool                                               bWinner;                                                  // (Parm)
};

// Function UTGame.UTTeamGame.CampaignSkillAdjust
struct AUTTeamGame_CampaignSkillAdjust_Params
{
	class AUTBot*                                      aBot;                                                     // (Parm)
};

// Function UTGame.UTTeamGame.ScoreKill
struct AUTTeamGame_ScoreKill_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Other;                                                    // (Parm)
};

// Function UTGame.UTTeamGame.NearGoal
struct AUTTeamGame_NearGoal_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.FindVictimsTarget
struct AUTTeamGame_FindVictimsTarget_Params
{
	class AController*                                 Other;                                                    // (Parm)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.CheckScore
struct AUTTeamGame_CheckScore_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.RatePlayerStart
struct AUTTeamGame_RatePlayerStart_Params
{
	class APlayerStart*                                P;                                                        // (Parm)
	unsigned char                                      Team;                                                     // (Parm)
	class AController*                                 Player;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.SetTeam
struct AUTTeamGame_SetTeam_Params
{
	class AController*                                 Other;                                                    // (Parm)
	class AUTTeamInfo*                                 NewTeam;                                                  // (Parm)
	bool                                               bNewTeam;                                                 // (Parm)
};

// Function UTGame.UTTeamGame.ChangeTeam
struct AUTTeamGame_ChangeTeam_Params
{
	class AController*                                 Other;                                                    // (Parm)
	int                                                Num;                                                      // (Parm)
	bool                                               bNewTeam;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.PickTeam
struct AUTTeamGame_PickTeam_Params
{
	unsigned char                                      Num;                                                      // (Parm)
	class AController*                                 C;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.RestartGame
struct AUTTeamGame_RestartGame_Params
{
};

// Function UTGame.UTTeamGame.CanSpectate
struct AUTTeamGame_CanSpectate_Params
{
	class APlayerController*                           Viewer;                                                   // (Parm)
	class APlayerReplicationInfo*                      ViewTarget;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.SetEndGameFocus
struct AUTTeamGame_SetEndGameFocus_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
};

// Function UTGame.UTTeamGame.CheckEndGame
struct AUTTeamGame_CheckEndGame_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.NotifyKilled
struct AUTTeamGame_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 KilledPlayer;                                             // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTTeamGame.TooManyBots
struct AUTTeamGame_TooManyBots_Params
{
	class AController*                                 botToRemove;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.InitGame
struct AUTTeamGame_InitGame_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTTeamGame.CheckMaxLives
struct AUTTeamGame_CheckMaxLives_Params
{
	class APlayerReplicationInfo*                      Scorer;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.LevelRecommendedPlayers
struct AUTTeamGame_LevelRecommendedPlayers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.GetBotTeam
struct AUTTeamGame_GetBotTeam_Params
{
	int                                                TeamBots;                                                 // (OptionalParm, Parm)
	bool                                               bUseTeamIndex;                                            // (OptionalParm, Parm)
	int                                                TeamIndex;                                                // (OptionalParm, Parm)
	class AUTTeamInfo*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.GetHandicapNeed
struct AUTTeamGame_GetHandicapNeed_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamGame.AddBlueBots
struct AUTTeamGame_AddBlueBots_Params
{
	int                                                Num;                                                      // (Parm)
};

// Function UTGame.UTTeamGame.AddRedBots
struct AUTTeamGame_AddRedBots_Params
{
	int                                                Num;                                                      // (Parm)
};

// Function UTGame.UTTeamGame.CreateTeam
struct AUTTeamGame_CreateTeam_Params
{
	int                                                TeamIndex;                                                // (Parm)
};

// Function UTGame.UTTeamGame.FindNewObjectives
struct AUTTeamGame_FindNewObjectives_Params
{
	class AUTGameObjective*                            DisabledObjective;                                        // (Parm)
};

// Function UTGame.UTTeamGame.PostLogin
struct AUTTeamGame_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                // (Parm)
};

// Function UTGame.UTTeamGame.PreBeginPlay
struct AUTTeamGame_PreBeginPlay_Params
{
};

// Function UTGame.UTCTFGame.GetAutoObjectiveFor
struct AUTCTFGame_GetAutoObjectiveFor_Params
{
	class AUTPlayerController*                         PC;                                                       // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFGame.ViewObjective
struct AUTCTFGame_ViewObjective_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function UTGame.UTCTFGame.ScoreFlag
struct AUTCTFGame_ScoreFlag_Params
{
	class AController*                                 Scorer;                                                   // (Parm)
	class AUTCTFFlag*                                  theFlag;                                                  // (Parm)
};

// Function UTGame.UTCTFGame.CheckEndGame
struct AUTCTFGame_CheckEndGame_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
	struct FString                                     Reason;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFGame.WantFastSpawnFor
struct AUTCTFGame_WantFastSpawnFor_Params
{
	class AAIController*                               B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFGame.NearGoal
struct AUTCTFGame_NearGoal_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFGame.RegisterFlag
struct AUTCTFGame_RegisterFlag_Params
{
	class AUTCTFFlag*                                  F;                                                        // (Parm)
	int                                                TeamIndex;                                                // (Parm)
};

// Function UTGame.UTCTFGame.GetLocationFor
struct AUTCTFGame_GetLocationFor_Params
{
	class APawn*                                       StatusPawn;                                               // (Parm)
	class AActor*                                      LocationObject;                                           // (Parm, OutParm)
	int                                                MessageIndex;                                             // (Parm, OutParm)
	int                                                LocationSpeechOffset;                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFGame.GetHandicapNeed
struct AUTCTFGame_GetHandicapNeed_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFGame.SetEndGameFocus
struct AUTCTFGame_SetEndGameFocus_Params
{
	class APlayerReplicationInfo*                      Winner;                                                   // (Parm)
};

// Function UTGame.UTCTFGame.PostBeginPlay
struct AUTCTFGame_PostBeginPlay_Params
{
};

// Function UTGame.UTCTFSquadAI.ModifyAggression
struct AUTCTFSquadAI_ModifyAggression_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              Aggression;                                               // (Parm, OutParm)
};

// Function UTGame.UTCTFSquadAI.AllowContinueOnFoot
struct AUTCTFSquadAI_AllowContinueOnFoot_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AUTVehicle*                                  V;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.ModifyThreat
struct AUTCTFSquadAI_ModifyThreat_Params
{
	float                                              Current;                                                  // (Parm)
	class APawn*                                       NewThreat;                                                // (Parm)
	bool                                               bThreatVisible;                                           // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.PriorityObjective
struct AUTCTFSquadAI_PriorityObjective_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.ShouldDeferTo
struct AUTCTFSquadAI_ShouldDeferTo_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.AllowTaunt
struct AUTCTFSquadAI_AllowTaunt_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.EnemyFlagTakenBy
struct AUTCTFSquadAI_EnemyFlagTakenBy_Params
{
	class AController*                                 C;                                                        // (Parm)
};

// Function UTGame.UTCTFSquadAI.CheckSquadObjectives
struct AUTCTFSquadAI_CheckSquadObjectives_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.OverrideFollowPlayer
struct AUTCTFSquadAI_OverrideFollowPlayer_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.FlagNearBase
struct AUTCTFSquadAI_FlagNearBase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.NearHomeBase
struct AUTCTFSquadAI_NearHomeBase_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.NearEnemyBase
struct AUTCTFSquadAI_NearEnemyBase_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.MustKeepEnemy
struct AUTCTFSquadAI_MustKeepEnemy_Params
{
	class APawn*                                       E;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.OrdersForFlagCarrier
struct AUTCTFSquadAI_OrdersForFlagCarrier_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.CheckVehicle
struct AUTCTFSquadAI_CheckVehicle_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.FindHidePathFor
struct AUTCTFSquadAI_FindHidePathFor_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.VisibleToEnemiesOf
struct AUTCTFSquadAI_VisibleToEnemiesOf_Params
{
	class AActor*                                      A;                                                        // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.FormationCenter
struct AUTCTFSquadAI_FormationCenter_Params
{
	class AController*                                 C;                                                        // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.GoPickupFlag
struct AUTCTFSquadAI_GoPickupFlag_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.FindPathToObjective
struct AUTCTFSquadAI_FindPathToObjective_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AActor*                                      O;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.BeDevious
struct AUTCTFSquadAI_BeDevious_Params
{
	class APawn*                                       Enemy;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.SetAlternatePathTo
struct AUTCTFSquadAI_SetAlternatePathTo_Params
{
	class ANavigationPoint*                            NewRouteObjective;                                        // (Parm)
	class AUTBot*                                      RouteMaker;                                               // (Parm)
};

// Function UTGame.UTCTFSquadAI.ShouldUseAlternatePaths
struct AUTCTFSquadAI_ShouldUseAlternatePaths_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.AllowDetourTo
struct AUTCTFSquadAI_AllowDetourTo_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class ANavigationPoint*                            N;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFSquadAI.PostBeginPlay
struct AUTCTFSquadAI_PostBeginPlay_Params
{
};

// Function UTGame.UTTeamAI.RemoveFromTeam
struct AUTTeamAI_RemoveFromTeam_Params
{
	class AController*                                 Other;                                                    // (Parm)
};

// Function UTGame.UTTeamAI.SetOrders
struct AUTTeamAI_SetOrders_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	struct FName                                       NewOrders;                                                // (Parm)
	class AController*                                 OrderGiver;                                               // (Parm)
};

// Function UTGame.UTTeamAI.SetBotOrders
struct AUTTeamAI_SetBotOrders_Params
{
	class AUTBot*                                      NewBot;                                                   // (Parm)
};

// Function UTGame.UTTeamAI.PutOnFreelance
struct AUTTeamAI_PutOnFreelance_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTTeamAI.PutOnOffense
struct AUTTeamAI_PutOnOffense_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTTeamAI.PutOnDefense
struct AUTTeamAI_PutOnDefense_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamAI.GetPriorityFreelanceObjectiveFor
struct AUTTeamAI_GetPriorityFreelanceObjectiveFor_Params
{
	class AUTSquadAI*                                  InFreelanceSquad;                                         // (Parm)
	class AUTGameObjective*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamAI.GetPriorityStandaloneObjectiveFor
struct AUTTeamAI_GetPriorityStandaloneObjectiveFor_Params
{
	class AUTSquadAI*                                  InAttackSquad;                                            // (Parm)
	class AController*                                 InController;                                             // (Parm)
	class AUTGameObjective*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamAI.GetPriorityAttackObjectiveFor
struct AUTTeamAI_GetPriorityAttackObjectiveFor_Params
{
	class AUTSquadAI*                                  InAttackSquad;                                            // (Parm)
	class AController*                                 InController;                                             // (Parm)
	class AUTGameObjective*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamAI.GetLeastDefendedObjective
struct AUTTeamAI_GetLeastDefendedObjective_Params
{
	class AController*                                 InController;                                             // (Parm)
	class AUTGameObjective*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamAI.AddSquadWithLeader
struct AUTTeamAI_AddSquadWithLeader_Params
{
	class AController*                                 C;                                                        // (Parm)
	class AUTGameObjective*                            O;                                                        // (Parm)
	class AUTSquadAI*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamAI.PutBotOnSquadLedBy
struct AUTTeamAI_PutBotOnSquadLedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTTeamAI.AddHumanSquad
struct AUTTeamAI_AddHumanSquad_Params
{
	class AUTSquadAI*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamAI.FindHumanSquad
struct AUTTeamAI_FindHumanSquad_Params
{
	class AUTSquadAI*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamAI.SetObjectiveLists
struct AUTTeamAI_SetObjectiveLists_Params
{
};

// Function UTGame.UTTeamAI.FriendlyToward
struct AUTTeamAI_FriendlyToward_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTTeamAI.RemoveSquad
struct AUTTeamAI_RemoveSquad_Params
{
	class AUTSquadAI*                                  Squad;                                                    // (Parm)
};

// Function UTGame.UTTeamAI.FindNewObjectiveFor
struct AUTTeamAI_FindNewObjectiveFor_Params
{
	class AUTSquadAI*                                  S;                                                        // (Parm)
	bool                                               bForceUpdate;                                             // (Parm)
};

// Function UTGame.UTTeamAI.FindNewObjectives
struct AUTTeamAI_FindNewObjectives_Params
{
	class AUTGameObjective*                            DisabledObjective;                                        // (Parm)
};

// Function UTGame.UTTeamAI.NotifyKilled
struct AUTTeamAI_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function UTGame.UTTeamAI.ReAssessStrategy
struct AUTTeamAI_ReAssessStrategy_Params
{
};

// Function UTGame.UTTeamAI.Reset
struct AUTTeamAI_Reset_Params
{
};

// Function UTGame.UTTeamAI.FindSuperItems
struct AUTTeamAI_FindSuperItems_Params
{
};

// Function UTGame.UTTeamAI.CriticalObjectiveWarning
struct AUTTeamAI_CriticalObjectiveWarning_Params
{
	class AUTGameObjective*                            G;                                                        // (Parm)
	class APawn*                                       NewEnemy;                                                 // (Parm)
};

// Function UTGame.UTTeamAI.Timer
struct AUTTeamAI_Timer_Params
{
};

// Function UTGame.UTTeamAI.PostBeginPlay
struct AUTTeamAI_PostBeginPlay_Params
{
};

// Function UTGame.UTEntryGame.InitGame
struct AUTEntryGame_InitGame_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTEntryGame.StartMatch
struct AUTEntryGame_StartMatch_Params
{
};

// Function UTGame.UTEntryGame.AddBots
struct AUTEntryGame_AddBots_Params
{
	int                                                Num;                                                      // (Parm)
};

// Function UTGame.UTEntryGame.NeedPlayers
struct AUTEntryGame_NeedPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTFirstBloodMessage.AnnouncementSound
struct UUTFirstBloodMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTFirstBloodMessage.ClientReceive
struct UUTFirstBloodMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTFirstBloodMessage.GetString
struct UUTFirstBloodMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTWeap_Physicsgun.ConsumeAmmo
struct AUTWeap_Physicsgun_ConsumeAmmo_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeap_Physicsgun.Tick
struct AUTWeap_Physicsgun_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTWeap_Physicsgun.DoOverrideNextWeapon
struct AUTWeap_Physicsgun_DoOverrideNextWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_Physicsgun.DoOverridePrevWeapon
struct AUTWeap_Physicsgun_DoOverridePrevWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeap_Physicsgun.StopFire
struct AUTWeap_Physicsgun_StopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeap_Physicsgun.StartFire
struct AUTWeap_Physicsgun_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTWeap_Physicsgun.ChangeVisibility
struct AUTWeap_Physicsgun_ChangeVisibility_Params
{
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTWeap_Physicsgun.PostBeginPlay
struct AUTWeap_Physicsgun_PostBeginPlay_Params
{
};

// Function UTGame.UTDMRoster.AddToTeam
struct AUTDMRoster_AddToTeam_Params
{
	class AController*                                 Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMutator.ProcessSpeechRecognition
struct AUTMutator_ProcessSpeechRecognition_Params
{
	class AUTPlayerController*                         Speaker;                                                  // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (Const, Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTMutator.ReplaceWith
struct AUTMutator_ReplaceWith_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FString                                     aClassName;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMutator.GetNextUTMutator
struct AUTMutator_GetNextUTMutator_Params
{
	class AUTMutator*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMutator.MutatorIsAllowed
struct AUTMutator_MutatorIsAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTKillingSpreeMessage.AnnouncementSound
struct UUTKillingSpreeMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTKillingSpreeMessage.ClientReceive
struct UUTKillingSpreeMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTKillingSpreeMessage.GetString
struct UUTKillingSpreeMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTKillingSpreeMessage.GetFontSize
struct UUTKillingSpreeMessage_GetFontSize_Params
{
	int                                                Switch;                                                   // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI1;                                              // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI2;                                              // (Parm)
	class APlayerReplicationInfo*                      LocalPlayer;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSeqEvent_GameEnded.GetObjClassVersion
struct UUTSeqEvent_GameEnded_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSeqEvent_GameEnded.Activated
struct UUTSeqEvent_GameEnded_Activated_Params
{
};

// Function UTGame.UTKillsRemainingMessage.AnnouncementSound
struct UUTKillsRemainingMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTKillsRemainingMessage.ClientReceive
struct UUTKillsRemainingMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTKillsRemainingMessage.GetString
struct UUTKillsRemainingMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTDeathMessage.ClientReceive
struct UUTDeathMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTDeathMessage.GetString
struct UUTDeathMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTDeathMessage.GetConsoleColor
struct UUTDeathMessage_GetConsoleColor_Params
{
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMutator_BigHead.ModifyPlayer
struct AUTMutator_BigHead_ModifyPlayer_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTMutator_Handicap.ModifyPlayer
struct AUTMutator_Handicap_ModifyPlayer_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTMutator_LowGrav.InitMutator
struct AUTMutator_LowGrav_InitMutator_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTMutator_NoPowerups.CheckReplacement
struct AUTMutator_NoPowerups_CheckReplacement_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMutator_Slomo.InitMutator
struct AUTMutator_Slomo_InitMutator_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTMutator_SlowTimeKills.Timer
struct AUTMutator_SlowTimeKills_Timer_Params
{
};

// Function UTGame.UTMutator_SlowTimeKills.ScoreKill
struct AUTMutator_SlowTimeKills_ScoreKill_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
};

// Function UTGame.UTMutator_SlowTimeKills.MutatorIsAllowed
struct AUTMutator_SlowTimeKills_MutatorIsAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMutator_SpeedFreak.InitMutator
struct AUTMutator_SpeedFreak_InitMutator_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTMutator_SuperBerserk.CheckReplacement
struct AUTMutator_SuperBerserk_CheckReplacement_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMutator_SuperBerserk.ModifyPlayer
struct AUTMutator_SuperBerserk_ModifyPlayer_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function UTGame.UTMutator_WeaponsRespawn.InitMutator
struct AUTMutator_WeaponsRespawn_InitMutator_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTCTFTeamAI.GetPriorityFreelanceObjectiveFor
struct AUTCTFTeamAI_GetPriorityFreelanceObjectiveFor_Params
{
	class AUTSquadAI*                                  InFreelanceSquad;                                         // (Parm)
	class AUTGameObjective*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFTeamAI.AddSquadWithLeader
struct AUTCTFTeamAI_AddSquadWithLeader_Params
{
	class AController*                                 C;                                                        // (Parm)
	class AUTGameObjective*                            O;                                                        // (Parm)
	class AUTSquadAI*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSayMsg.GetConsoleColor
struct UUTSayMsg_GetConsoleColor_Params
{
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGameViewportClient.NotifyConnectionError
struct UUTGameViewportClient_NotifyConnectionError_Params
{
	TEnumAsByte<EProgressMessageType>                  MessageType;                                              // (Parm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     Title;                                                    // (OptionalParm, Parm, NeedCtorLink)
};

// Function UTGame.UTGameViewportClient.SetProgressMessage
struct UUTGameViewportClient_SetProgressMessage_Params
{
	TEnumAsByte<EProgressMessageType>                  MessageType;                                              // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Title;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bIgnoreFutureNetworkMessages;                             // (OptionalParm, Parm)
};

// Function UTGame.UTGameViewportClient.UpdateActiveSplitscreenType
struct UUTGameViewportClient_UpdateActiveSplitscreenType_Params
{
};

// Function UTGame.UTGameViewportClient.RenderHeader
struct UUTGameViewportClient_RenderHeader_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function UTGame.UTGameViewportClient.DrawTransition
struct UUTGameViewportClient_DrawTransition_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function UTGame.UTGameViewportClient.PostRender
struct UUTGameViewportClient_PostRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function UTGame.UTWeaponSwitchMessage.GetString
struct UUTWeaponSwitchMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTPowerupPickupFactory.SpawnCopyFor
struct AUTPowerupPickupFactory_SpawnCopyFor_Params
{
	class APawn*                                       Recipient;                                                // (Parm)
};

// Function UTGame.UTPowerupPickupFactory.AddWeaponOverlay
struct AUTPowerupPickupFactory_AddWeaponOverlay_Params
{
	class AUTGameReplicationInfo*                      GRI;                                                      // (Parm)
};

// Function UTGame.UTCTFHUDMessage.AddAnnouncement
struct UUTCTFHUDMessage_AddAnnouncement_Params
{
	class AUTAnnouncer*                                Announcer;                                                // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTCTFHUDMessage.GetString
struct UUTCTFHUDMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTCTFHUDMessage.GetColor
struct UUTCTFHUDMessage_GetColor_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponRewardMessage.AnnouncementSound
struct UUTWeaponRewardMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTWeaponRewardMessage.ClientReceive
struct UUTWeaponRewardMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTWeaponRewardMessage.GetString
struct UUTWeaponRewardMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTDataStore_GameSearchPersonal.GetServerStringList
struct UUTDataStore_GameSearchPersonal_GetServerStringList_Params
{
	TArray<struct FString>                             out_ServerList;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTDataStore_GameSearchPersonal.GetServerIdList
struct UUTDataStore_GameSearchPersonal_GetServerIdList_Params
{
	TArray<struct FUniqueNetId>                        out_ServerList;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTDataStore_GameSearchPersonal.RemoveServer
struct UUTDataStore_GameSearchPersonal_RemoveServer_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FUniqueNetId                                IdToRemove;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchPersonal.AddServer
struct UUTDataStore_GameSearchPersonal_AddServer_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FUniqueNetId                                IdToAdd;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchPersonal.FindServerIndexById
struct UUTDataStore_GameSearchPersonal_FindServerIndexById_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FUniqueNetId                                IdToFind;                                                 // (Const, Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchPersonal.FindServerIndexByString
struct UUTDataStore_GameSearchPersonal_FindServerIndexByString_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FString                                     IdToFind;                                                 // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchPersonal.GetPlayerNetId
struct UUTDataStore_GameSearchPersonal_GetPlayerNetId_Params
{
	struct FUniqueNetId                                out_PlayerId;                                             // (Parm, OutParm)
	int                                                ControllerId;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchPersonal.GetPlayerName
struct UUTDataStore_GameSearchPersonal_GetPlayerName_Params
{
	int                                                ControllerId;                                             // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTDataStore_GameSearchPersonal.OverrideQuerySubmission
struct UUTDataStore_GameSearchPersonal_OverrideQuerySubmission_Params
{
	unsigned char                                      ControllerId;                                             // (Parm)
	class UOnlineGameSearch*                           Search;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchPersonal.HasOutstandingQueries
struct UUTDataStore_GameSearchPersonal_HasOutstandingQueries_Params
{
	bool                                               bRestrictCheckToSelf;                                     // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchHistory.HasOutstandingQueries
struct UUTDataStore_GameSearchHistory_HasOutstandingQueries_Params
{
	bool                                               bRestrictCheckToSelf;                                     // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDataStore_GameSearchHistory.Registered
struct UUTDataStore_GameSearchHistory_Registered_Params
{
	class ULocalPlayer*                                PlayerOwner;                                              // (Parm)
};

// Function UTGame.UTDataStore_GameSearchFavorites.HasOutstandingQueries
struct UUTDataStore_GameSearchFavorites_HasOutstandingQueries_Params
{
	bool                                               bRestrictCheckToSelf;                                     // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTKillerMessage.GetString
struct UUTKillerMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTMultiKillMessage.AddAnnouncement
struct UUTMultiKillMessage_AddAnnouncement_Params
{
	class AUTAnnouncer*                                Announcer;                                                // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	class APlayerReplicationInfo*                      PRI;                                                      // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMultiKillMessage.ShouldBeRemoved
struct UUTMultiKillMessage_ShouldBeRemoved_Params
{
	class AUTQueuedAnnouncement*                       MyAnnouncement;                                           // (Parm)
	class UClass*                                      NewAnnouncementClass;                                     // (Parm)
	int                                                NewMessageIndex;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMultiKillMessage.GetFontSize
struct UUTMultiKillMessage_GetFontSize_Params
{
	int                                                Switch;                                                   // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI1;                                              // (Parm)
	class APlayerReplicationInfo*                      RelatedPRI2;                                              // (Parm)
	class APlayerReplicationInfo*                      LocalPlayer;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMultiKillMessage.AnnouncementSound
struct UUTMultiKillMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMultiKillMessage.ClientReceive
struct UUTMultiKillMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTMultiKillMessage.GetString
struct UUTMultiKillMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTVictimMessage.GetString
struct UUTVictimMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTDecalManager.CanSpawnDecals
struct AUTDecalManager_CanSpawnDecals_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDmgType_Instagib.SpawnHitEffect
struct UUTDmgType_Instagib_SpawnHitEffect_Params
{
	class APawn*                                       P;                                                        // (Parm)
	float                                              Damage;                                                   // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	struct FName                                       BoneName;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTDmgType_LinkBeam.SpawnExtraGibEffects
struct UUTDmgType_LinkBeam_SpawnExtraGibEffects_Params
{
	class AUTGib*                                      TheGib;                                                   // (Parm)
};

// Function UTGame.UTDmgType_LinkBeam.DoCustomDamageEffects
struct UUTDmgType_LinkBeam_DoCustomDamageEffects_Params
{
	class AUTPawn*                                     ThePawn;                                                  // (Parm)
	class UClass*                                      TheDamageType;                                            // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (Const, Parm, OutParm)
	struct FVector                                     HitLocation;                                              // (Parm)
};

// Function UTGame.UTVehicleKillMessage.AnnouncementSound
struct UUTVehicleKillMessage_AnnouncementSound_Params
{
	int                                                MessageIndex;                                             // (Parm)
	class UObject*                                     OptionalObject;                                           // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleKillMessage.ClientReceive
struct UUTVehicleKillMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function UTGame.UTVehicleKillMessage.GetString
struct UUTVehicleKillMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTDMSquad.AssignSquadResponsibility
struct AUTDMSquad_AssignSquadResponsibility_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.VehicleDesireability
struct AUTDMSquad_VehicleDesireability_Params
{
	class AUTVehicle*                                  V;                                                        // (Parm)
	class AUTBot*                                      B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.AllowContinueOnFoot
struct AUTDMSquad_AllowContinueOnFoot_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class AUTVehicle*                                  V;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.FriendlyToward
struct AUTDMSquad_FriendlyToward_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.SetEnemy
struct AUTDMSquad_SetEnemy_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class APawn*                                       NewEnemy;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.GetOrders
struct AUTDMSquad_GetOrders_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.BeDevious
struct AUTDMSquad_BeDevious_Params
{
	class APawn*                                       Enemy;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.NearFormationCenter
struct AUTDMSquad_NearFormationCenter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.WaitAtThisPosition
struct AUTDMSquad_WaitAtThisPosition_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.CheckSquadObjectives
struct AUTDMSquad_CheckSquadObjectives_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.ShouldDeferTo
struct AUTDMSquad_ShouldDeferTo_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.RemoveBot
struct AUTDMSquad_RemoveBot_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTDMSquad.AddBot
struct AUTDMSquad_AddBot_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
};

// Function UTGame.UTDMSquad.IsDefending
struct AUTDMSquad_IsDefending_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDMSquad.DisplayDebug
struct AUTDMSquad_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              YL;                                                       // (Parm, OutParm)
	float                                              YPos;                                                     // (Parm, OutParm)
};

// Function UTGame.UTDroppedItemPickup.PickedUpBy
struct AUTDroppedItemPickup_PickedUpBy_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTDroppedItemPickup.DroppedFrom
struct AUTDroppedItemPickup_DroppedFrom_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UTGame.UTDroppedItemPickup.Destroyed
struct AUTDroppedItemPickup_Destroyed_Params
{
};

// Function UTGame.UTDroppedItemPickup.PostBeginPlay
struct AUTDroppedItemPickup_PostBeginPlay_Params
{
};

// Function UTGame.UTDroppedItemPickup.SetPickupMesh
struct AUTDroppedItemPickup_SetPickupMesh_Params
{
	class UPrimitiveComponent*                         NewPickupMesh;                                            // (Parm, EditInline)
};

// Function UTGame.UTDroppedItemPickup.BotDesireability
struct AUTDroppedItemPickup_BotDesireability_Params
{
	class APawn*                                       Bot;                                                      // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDummyPawn.Tick
struct AUTDummyPawn_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTDummyPawn.GetPawnViewLocation
struct AUTDummyPawn_GetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDummyPawn.GetWeaponStartTraceLocation
struct AUTDummyPawn_GetWeaponStartTraceLocation_Params
{
	class AWeapon*                                     CurrentWeapon;                                            // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDummyPawn.WeaponAttachmentChanged
struct AUTDummyPawn_WeaponAttachmentChanged_Params
{
};

// Function UTGame.UTDummyPawn.GetAdjustedAimFor
struct AUTDummyPawn_GetAdjustedAimFor_Params
{
	class AWeapon*                                     InWeapon;                                                 // (Parm)
	struct FVector                                     projStart;                                                // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTDummyPawn.SetWeaponAmbientSound
struct AUTDummyPawn_SetWeaponAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                          // (Parm)
};

// Function UTGame.UTDummyPawn.SetPawnAmbientSound
struct AUTDummyPawn_SetPawnAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                          // (Parm)
};

// Function UTGame.UTDummyPawn.WeaponFired
struct AUTDummyPawn_WeaponFired_Params
{
	class AWeapon*                                     InWeapon;                                                 // (Parm)
	bool                                               bViaReplication;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (OptionalParm, Parm)
};

// Function UTGame.UTDummyPawn.PostBeginPlay
struct AUTDummyPawn_PostBeginPlay_Params
{
};

// Function UTGame.UTSeqAct_DummyWeaponFire.Update
struct UUTSeqAct_DummyWeaponFire_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSeqAct_DummyWeaponFire.NotifyDummyFire
struct UUTSeqAct_DummyWeaponFire_NotifyDummyFire_Params
{
};

// Function UTGame.UTSeqAct_DummyWeaponFire.Activated
struct UUTSeqAct_DummyWeaponFire_Activated_Params
{
};

// Function UTGame.UTEmit_ShockCombo.SetInitialState
struct AUTEmit_ShockCombo_SetInitialState_Params
{
};

// Function UTGame.UTEntryPlayerController.ShowScoreboard
struct AUTEntryPlayerController_ShowScoreboard_Params
{
};

// Function UTGame.UTEntryPlayerController.ShowMidGameMenu
struct AUTEntryPlayerController_ShowMidGameMenu_Params
{
	struct FName                                       TabTag;                                                   // (OptionalParm, Parm)
	bool                                               bEnableInput;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTEntryPlayerController.SetPawnConstructionScene
struct AUTEntryPlayerController_SetPawnConstructionScene_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function UTGame.UTEntryPlayerController.QuitToMainMenu
struct AUTEntryPlayerController_QuitToMainMenu_Params
{
};

// Function UTGame.UTEntryPlayerController.OnLinkStatusChanged
struct AUTEntryPlayerController_OnLinkStatusChanged_Params
{
	bool                                               bConnected;                                               // (Parm)
};

// Function UTGame.UTEntryPlayerController.OnConnectionStatusChange
struct AUTEntryPlayerController_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
};

// Function UTGame.UTEntryPlayerController.OnFriendMessageReceived
struct AUTEntryPlayerController_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (Parm)
	struct FString                                     SendingNick;                                              // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function UTGame.UTEntryPlayerController.OnFriendInviteReceived
struct AUTEntryPlayerController_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function UTGame.UTEntryPlayerController.OnGameInviteReceived
struct AUTEntryPlayerController_OnGameInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
};

// Function UTGame.UTEntryPlayerController.OnControllerChanged
struct AUTEntryPlayerController_OnControllerChanged_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
};

// Function UTGame.UTEntryPlayerController.Destroyed
struct AUTEntryPlayerController_Destroyed_Params
{
};

// Function UTGame.UTEntryPlayerController.RestorePostProcessing
struct AUTEntryPlayerController_RestorePostProcessing_Params
{
};

// Function UTGame.UTEntryPlayerController.InitInputSystem
struct AUTEntryPlayerController_InitInputSystem_Params
{
};

// Function UTGame.UTEntryHUD.PostRender
struct AUTEntryHUD_PostRender_Params
{
};

// Function UTGame.UTVoice_Robot.SendLocationUpdate
struct UUTVoice_Robot_SendLocationUpdate_Params
{
	class AController*                                 Sender;                                                   // (Parm)
	class APlayerReplicationInfo*                      Recipient;                                                // (Parm)
	struct FName                                       MessageType;                                              // (Parm)
	class AUTGame*                                     G;                                                        // (Parm)
	class APawn*                                       StatusPawn;                                               // (Parm)
	bool                                               bDontSendMidfield;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTGib_Robot.DoCustomGibEffects
struct AUTGib_Robot_DoCustomGibEffects_Params
{
};

// Function UTGame.UTRotatingDroppedPickup.Tick
struct AUTRotatingDroppedPickup_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTJumpLiftExit.CanBeReachedFromLiftBy
struct AUTJumpLiftExit_CanBeReachedFromLiftBy_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTJumpLiftExit.WaitForLift
struct AUTJumpLiftExit_WaitForLift_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function UTGame.UTJumpLiftExit.PostBeginPlay
struct AUTJumpLiftExit_PostBeginPlay_Params
{
};

// Function UTGame.UTKillZVolume.KillActor
struct AUTKillZVolume_KillActor_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTKillZVolume.Touch
struct AUTKillZVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTKillZVolume.PawnEnteredVolume
struct AUTKillZVolume_PawnEnteredVolume_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function UTGame.UTKillZVolume.ActorEnteredVolume
struct AUTKillZVolume_ActorEnteredVolume_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTKismetAnnouncement.AnnouncementLevel
struct UUTKismetAnnouncement_AnnouncementLevel_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTKismetAnnouncement.GetObjectiveAnnouncement
struct UUTKismetAnnouncement_GetObjectiveAnnouncement_Params
{
	unsigned char                                      MessageIndex;                                             // (Parm)
	class UObject*                                     Objective;                                                // (Parm)
	class APlayerController*                           PC;                                                       // (Parm)
	struct FObjectiveAnnouncementInfo                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTSeqAct_PlayAnnouncement.Activated
struct UUTSeqAct_PlayAnnouncement_Activated_Params
{
};

// Function UTGame.UTMutator_Arena.ModifyPlayer
struct AUTMutator_Arena_ModifyPlayer_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function UTGame.UTMutator_Arena.CheckReplacement
struct AUTMutator_Arena_CheckReplacement_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMutator_Arena.PostBeginPlay
struct AUTMutator_Arena_PostBeginPlay_Params
{
};

// Function UTGame.UTMutator_FriendlyFire.InitMutator
struct AUTMutator_FriendlyFire_InitMutator_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTMutator_FriendlyFire.MutatorIsAllowed
struct AUTMutator_FriendlyFire_MutatorIsAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTMutator_NoHoverboard.InitMutator
struct AUTMutator_NoHoverboard_InitMutator_Params
{
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function UTGame.UTPickupFactory_HealthVial.BotDesireability
struct AUTPickupFactory_HealthVial_BotDesireability_Params
{
	class APawn*                                       P;                                                        // (Parm)
	class AController*                                 C;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTPickupFactory_HealthVial.SpawnCopyFor
struct AUTPickupFactory_HealthVial_SpawnCopyFor_Params
{
	class APawn*                                       Recipient;                                                // (Parm)
};

// Function UTGame.UTPickupFactory_HealthVial.FindAdjacentVials
struct AUTPickupFactory_HealthVial_FindAdjacentVials_Params
{
	TArray<class AUTPickupFactory_HealthVial*>         InAdjacentVials;                                          // (Parm, OutParm, NeedCtorLink)
	class AUTPickupFactory_HealthVial*                 InitialCaller;                                            // (Parm)
};

// Function UTGame.UTPickupFactory_HealthVial.PostBeginPlay
struct AUTPickupFactory_HealthVial_PostBeginPlay_Params
{
};

// Function UTGame.UTProj_Grenade.PhysicsVolumeChange
struct AUTProj_Grenade_PhysicsVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
};

// Function UTGame.UTProj_Grenade.HitWall
struct AUTProj_Grenade_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
	class UPrimitiveComponent*                         WallComp;                                                 // (Parm, EditInline)
};

// Function UTGame.UTProj_Grenade.Timer
struct AUTProj_Grenade_Timer_Params
{
};

// Function UTGame.UTProj_Grenade.Init
struct AUTProj_Grenade_Init_Params
{
	struct FVector                                     Direction;                                                // (Parm)
};

// Function UTGame.UTProj_Grenade.PostBeginPlay
struct AUTProj_Grenade_PostBeginPlay_Params
{
};

// Function UTGame.UTProj_LinkPlasma.SetExplosionEffectParameters
struct AUTProj_LinkPlasma_SetExplosionEffectParameters_Params
{
	class UParticleSystemComponent*                    ProjExplosion;                                            // (Parm, EditInline)
};

// Function UTGame.UTProj_LinkPlasma.SpawnFlightEffects
struct AUTProj_LinkPlasma_SpawnFlightEffects_Params
{
};

// Function UTGame.UTProj_LinkPlasma.HitWall
struct AUTProj_LinkPlasma_HitWall_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      Wall;                                                     // (Parm)
	class UPrimitiveComponent*                         WallComp;                                                 // (Parm, EditInline)
};

// Function UTGame.UTProj_LinkPlasma.ProcessTouch
struct AUTProj_LinkPlasma_ProcessTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTProj_Rocket.PostBeginPlay
struct AUTProj_Rocket_PostBeginPlay_Params
{
};

// Function UTGame.UTProj_LoadedRocket.FlockTimer
struct AUTProj_LoadedRocket_FlockTimer_Params
{
};

// Function UTGame.UTProj_LoadedRocket.ReplicatedEvent
struct AUTProj_LoadedRocket_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTProj_LoadedRocket.Destroyed
struct AUTProj_LoadedRocket_Destroyed_Params
{
};

// Function UTGame.UTProj_ScorpionGlob_Base.Explode
struct AUTProj_ScorpionGlob_Base_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTProj_ScorpionGlob_Base.PhysicsVolumeChange
struct AUTProj_ScorpionGlob_Base_PhysicsVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
};

// Function UTGame.UTProj_ScorpionGlob_Base.ShutDown
struct AUTProj_ScorpionGlob_Base_ShutDown_Params
{
};

// Function UTGame.UTProj_ScorpionGlob_Base.Destroyed
struct AUTProj_ScorpionGlob_Base_Destroyed_Params
{
};

// Function UTGame.UTScavengerMessage.GetString
struct UUTScavengerMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UTGame.UTScriptedBotVolume.PawnLeavingVolume
struct AUTScriptedBotVolume_PawnLeavingVolume_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function UTGame.UTSeqAct_AddNamedBot.GetObjClassVersion
struct UUTSeqAct_AddNamedBot_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSeqAct_AddNamedBot.Activated
struct UUTSeqAct_AddNamedBot_Activated_Params
{
};

// Function UTGame.UTSeqAct_ChangeTeam.Activated
struct UUTSeqAct_ChangeTeam_Activated_Params
{
};

// Function UTGame.UTSeqAct_EnterVehicle.Activated
struct UUTSeqAct_EnterVehicle_Activated_Params
{
};

// Function UTGame.UTSeqAct_GetTeamNum.Activated
struct UUTSeqAct_GetTeamNum_Activated_Params
{
};

// Function UTGame.UTSeqAct_ReturnCTFFlag.Activated
struct UUTSeqAct_ReturnCTFFlag_Activated_Params
{
};

// Function UTGame.UTSeqAct_ScriptedVoiceMessage.GetObjClassVersion
struct UUTSeqAct_ScriptedVoiceMessage_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTSeqAct_ScriptedVoiceMessage.Activated
struct UUTSeqAct_ScriptedVoiceMessage_Activated_Params
{
};

// Function UTGame.UTSeqAct_SetVisibilityModifier.Activated
struct UUTSeqAct_SetVisibilityModifier_Activated_Params
{
};

// Function UTGame.UTSeqAct_SpawnProjectile.Activated
struct UUTSeqAct_SpawnProjectile_Activated_Params
{
};

// Function UTGame.UTSeqAct_ToggleAnnouncements.Activated
struct UUTSeqAct_ToggleAnnouncements_Activated_Params
{
};

// Function UTGame.UTSeqCond_CheckWeapon.Activated
struct UUTSeqCond_CheckWeapon_Activated_Params
{
};

// Function UTGame.UTSeqCond_DoTutorial.Activated
struct UUTSeqCond_DoTutorial_Activated_Params
{
};

// Function UTGame.UTSeqCond_HasInventory.Activated
struct UUTSeqCond_HasInventory_Activated_Params
{
};

// Function UTGame.UTSeqCond_IsCarryingFlag.Activated
struct UUTSeqCond_IsCarryingFlag_Activated_Params
{
};

// Function UTGame.UTSeqCond_IsConsole.Activated
struct UUTSeqCond_IsConsole_Activated_Params
{
};

// Function UTGame.UTSeqCond_IsUsingWeapon.Activated
struct UUTSeqCond_IsUsingWeapon_Activated_Params
{
};

// Function UTGame.UTSimpleDestroyable.CheckRespawn
struct AUTSimpleDestroyable_CheckRespawn_Params
{
};

// Function UTGame.UTSimpleDestroyable.Touch
struct AUTSimpleDestroyable_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTSimpleDestroyable.TakeDamage
struct AUTSimpleDestroyable_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTSimpleDestroyable.RespawnDestructible
struct AUTSimpleDestroyable_RespawnDestructible_Params
{
};

// Function UTGame.UTSimpleDestroyable.GoBoom
struct AUTSimpleDestroyable_GoBoom_Params
{
};

// Function UTGame.UTSimpleDestroyable.PostBeginPlay
struct AUTSimpleDestroyable_PostBeginPlay_Params
{
};

// Function UTGame.UTSkelControl_CicadaEngine.TickSkelControl
struct UUTSkelControl_CicadaEngine_TickSkelControl_Params
{
	float                                              DeltaTime;                                                // (Parm)
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function UTGame.UTSkelControl_DamageHinge.BreakApartOnDeath
struct UUTSkelControl_DamageHinge_BreakApartOnDeath_Params
{
	struct FVector                                     PartLocation;                                             // (Parm)
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTSkelControl_DamageHinge.BreakApart
struct UUTSkelControl_DamageHinge_BreakApart_Params
{
	struct FVector                                     PartLocation;                                             // (Parm)
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTSkelControl_DamageSpring.BreakApartOnDeath
struct UUTSkelControl_DamageSpring_BreakApartOnDeath_Params
{
	struct FVector                                     PartLocation;                                             // (Parm)
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTSkelControl_DamageSpring.BreakApart
struct UUTSkelControl_DamageSpring_BreakApart_Params
{
	struct FVector                                     PartLocation;                                             // (Parm)
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UTGame.UTSkelControl_JetThruster.TickSkelControl
struct UUTSkelControl_JetThruster_TickSkelControl_Params
{
	float                                              DeltaTime;                                                // (Parm)
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function UTGame.UTSkelControl_Oscillate.TickSkelControl
struct UUTSkelControl_Oscillate_TickSkelControl_Params
{
	float                                              DeltaTime;                                                // (Parm)
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function UTGame.UTTeleporterCustomMesh.Touch
struct AUTTeleporterCustomMesh_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTTeleporterCustomMesh.Accept
struct AUTTeleporterCustomMesh_Accept_Params
{
	class AActor*                                      Incoming;                                                 // (Parm)
	class AActor*                                      Source;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTUIDataProvider_MultiplayerMenuItem.ShouldBeFiltered
struct UUTUIDataProvider_MultiplayerMenuItem_ShouldBeFiltered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTUIDataProvider_SettingsMenuItem.ShouldBeFiltered
struct UUTUIDataProvider_SettingsMenuItem_ShouldBeFiltered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Cicada.ShouldClamp
struct AUTVehicle_Cicada_ShouldClamp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Cicada.VehicleCalcCamera
struct AUTVehicle_Cicada_VehicleCalcCamera_Params
{
	float                                              DeltaTime;                                                // (Parm)
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	struct FVector                                     CamStart;                                                 // (Parm, OutParm)
	bool                                               bPivotOnly;                                               // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle_Cicada.GetCameraStart
struct AUTVehicle_Cicada_GetCameraStart_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Cicada.VehicleWeaponImpactEffects
struct AUTVehicle_Cicada_VehicleWeaponImpactEffects_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle_Cicada.RecommendLongRangedAttack
struct AUTVehicle_Cicada_RecommendLongRangedAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Cicada.SitDriver
struct AUTVehicle_Cicada_SitDriver_Params
{
	class AUTPawn*                                     UTP;                                                      // (Parm)
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle_Cicada.PassengerEnter
struct AUTVehicle_Cicada_PassengerEnter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	int                                                SeatIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Cicada.PassengerLeave
struct AUTVehicle_Cicada_PassengerLeave_Params
{
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle_Cicada.DriverLeft
struct AUTVehicle_Cicada_DriverLeft_Params
{
};

// Function UTGame.UTVehicle_Cicada.DriverEnter
struct AUTVehicle_Cicada_DriverEnter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Cicada.ImportantVehicle
struct AUTVehicle_Cicada_ImportantVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Cicada.ResetTurningSpeed
struct AUTVehicle_Cicada_ResetTurningSpeed_Params
{
};

// Function UTGame.UTVehicle_Cicada.RigidBodyCollision
struct AUTVehicle_Cicada_RigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, EditInline)
	struct FCollisionImpactData                        RigidCollisionData;                                       // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ContactIndex;                                             // (Parm)
};

// Function UTGame.UTVehicle_Cicada.Tick
struct AUTVehicle_Cicada_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UTGame.UTVWeap_TowCable.ResetCrosshair
struct AUTVWeap_TowCable_ResetCrosshair_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function UTGame.UTVWeap_TowCable.DrawWeaponCrosshair
struct AUTVWeap_TowCable_DrawWeaponCrosshair_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
};

// Function UTGame.UTVWeap_TowCable.BeginFire
struct AUTVWeap_TowCable_BeginFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTVWeap_TowCable.CustomFire
struct AUTVWeap_TowCable_CustomFire_Params
{
};

// Function UTGame.UTVWeap_TowCable.EndFire
struct AUTVWeap_TowCable_EndFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
};

// Function UTGame.UTVWeap_TowCable.BestMode
struct AUTVWeap_TowCable_BestMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVWeap_TowCable.MaxRange
struct AUTVWeap_TowCable_MaxRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVWeap_TowCable.PostBeginPlay
struct AUTVWeap_TowCable_PostBeginPlay_Params
{
};

// Function UTGame.UTVehicle_Manta.RecommendCharge
struct AUTVehicle_Manta_RecommendCharge_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class APawn*                                       Enemy;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.TooCloseToAttack
struct AUTVehicle_Manta_TooCloseToAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.ShouldClamp
struct AUTVehicle_Manta_ShouldClamp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.RigidBodyCollision
struct AUTVehicle_Manta_RigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, EditInline)
	struct FCollisionImpactData                        RigidCollisionData;                                       // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ContactIndex;                                             // (Parm)
};

// Function UTGame.UTVehicle_Manta.GetChargePower
struct AUTVehicle_Manta_GetChargePower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.ReplicatedEvent
struct AUTVehicle_Manta_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTVehicle_Manta.DrivingStatusChanged
struct AUTVehicle_Manta_DrivingStatusChanged_Params
{
};

// Function UTGame.UTVehicle_Manta.IncomingMissile
struct AUTVehicle_Manta_IncomingMissile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
};

// Function UTGame.UTVehicle_Manta.Dodge
struct AUTVehicle_Manta_Dodge_Params
{
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.ChooseFireMode
struct AUTVehicle_Manta_ChooseFireMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.MantaDuckEffect
struct AUTVehicle_Manta_MantaDuckEffect_Params
{
};

// Function UTGame.UTVehicle_Manta.MantaJumpEffect
struct AUTVehicle_Manta_MantaJumpEffect_Params
{
};

// Function UTGame.UTVehicle_Manta.PossessedBy
struct AUTVehicle_Manta_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function UTGame.UTVehicle_Manta.OverrideEndFire
struct AUTVehicle_Manta_OverrideEndFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.OverrideBeginFire
struct AUTVehicle_Manta_OverrideBeginFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.DriverEnter
struct AUTVehicle_Manta_DriverEnter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.CanBeBaseForPawn
struct AUTVehicle_Manta_CanBeBaseForPawn_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Manta.Tick
struct AUTVehicle_Manta_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.CriticalChargeAttack
struct AUTVehicle_Scorpion_CriticalChargeAttack_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.RecommendCharge
struct AUTVehicle_Scorpion_RecommendCharge_Params
{
	class AUTBot*                                      B;                                                        // (Parm)
	class APawn*                                       Enemy;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.SetBurnOut
struct AUTVehicle_Scorpion_SetBurnOut_Params
{
};

// Function UTGame.UTVehicle_Scorpion.CauseMuzzleFlashLight
struct AUTVehicle_Scorpion_CauseMuzzleFlashLight_Params
{
	int                                                SeatIndex;                                                // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.BreakOffBlade
struct AUTVehicle_Scorpion_BreakOffBlade_Params
{
	bool                                               bLeftBlade;                                               // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.RigidBodyCollision
struct AUTVehicle_Scorpion_RigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, EditInline)
	struct FCollisionImpactData                        RigidCollisionData;                                       // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ContactIndex;                                             // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.CheckScriptedSelfDestruct
struct AUTVehicle_Scorpion_CheckScriptedSelfDestruct_Params
{
};

// Function UTGame.UTVehicle_Scorpion.OnSelfDestruct
struct AUTVehicle_Scorpion_OnSelfDestruct_Params
{
	class UUTSeqAct_SelfDestruct*                      Action;                                                   // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.TeamChanged
struct AUTVehicle_Scorpion_TeamChanged_Params
{
};

// Function UTGame.UTVehicle_Scorpion.IncomingMissile
struct AUTVehicle_Scorpion_IncomingMissile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.TooCloseToAttack
struct AUTVehicle_Scorpion_TooCloseToAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.ChooseFireMode
struct AUTVehicle_Scorpion_ChooseFireMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.FindAutoExit
struct AUTVehicle_Scorpion_FindAutoExit_Params
{
	class APawn*                                       ExitingDriver;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.BladeHit
struct AUTVehicle_Scorpion_BladeHit_Params
{
	class AActor*                                      HitActor;                                                 // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               bLeftBlade;                                               // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.TakeDamage
struct AUTVehicle_Scorpion_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle_Scorpion.DriverLeft
struct AUTVehicle_Scorpion_DriverLeft_Params
{
};

// Function UTGame.UTVehicle_Scorpion.DisplayHud
struct AUTVehicle_Scorpion_DisplayHud_Params
{
	class AUTHUD*                                      HUD;                                                      // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector2D                                   HudPOS;                                                   // (Parm)
	int                                                SeatIndex;                                                // (OptionalParm, Parm)
};

// Function UTGame.UTVehicle_Scorpion.PlaySelfDestruct
struct AUTVehicle_Scorpion_PlaySelfDestruct_Params
{
};

// Function UTGame.UTVehicle_Scorpion.SetBladesExtended
struct AUTVehicle_Scorpion_SetBladesExtended_Params
{
	bool                                               bExtended;                                                // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.OverrideEndFire
struct AUTVehicle_Scorpion_OverrideEndFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.OverrideBeginFire
struct AUTVehicle_Scorpion_OverrideBeginFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.ReplicatedEvent
struct AUTVehicle_Scorpion_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.TryToDrive
struct AUTVehicle_Scorpion_TryToDrive_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.SelfDestruct
struct AUTVehicle_Scorpion_SelfDestruct_Params
{
	class AActor*                                      ImpactedActor;                                            // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.BlowupVehicle
struct AUTVehicle_Scorpion_BlowupVehicle_Params
{
};

// Function UTGame.UTVehicle_Scorpion.DisableVehicle
struct AUTVehicle_Scorpion_DisableVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.ServerBoost
struct AUTVehicle_Scorpion_ServerBoost_Params
{
};

// Function UTGame.UTVehicle_Scorpion.OnActivateRocketBoosters
struct AUTVehicle_Scorpion_OnActivateRocketBoosters_Params
{
	class UUTSeqAct_ActivateRocketBoosters*            BoosterAction;                                            // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.DeactivateRocketBoosters
struct AUTVehicle_Scorpion_DeactivateRocketBoosters_Params
{
};

// Function UTGame.UTVehicle_Scorpion.EnableFullSteering
struct AUTVehicle_Scorpion_EnableFullSteering_Params
{
};

// Function UTGame.UTVehicle_Scorpion.DeactivateHandbrake
struct AUTVehicle_Scorpion_DeactivateHandbrake_Params
{
};

// Function UTGame.UTVehicle_Scorpion.ActivateRocketBoosters
struct AUTVehicle_Scorpion_ActivateRocketBoosters_Params
{
};

// Function UTGame.UTVehicle_Scorpion.UnlockWheels
struct AUTVehicle_Scorpion_UnlockWheels_Params
{
};

// Function UTGame.UTVehicle_Scorpion.LockWheels
struct AUTVehicle_Scorpion_LockWheels_Params
{
};

// Function UTGame.UTVehicle_Scorpion.SuspensionHeavyShift
struct AUTVehicle_Scorpion_SuspensionHeavyShift_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.StopVehicleSounds
struct AUTVehicle_Scorpion_StopVehicleSounds_Params
{
};

// Function UTGame.UTVehicle_Scorpion.SetInputs
struct AUTVehicle_Scorpion_SetInputs_Params
{
	float                                              InForward;                                                // (Parm)
	float                                              InStrafe;                                                 // (Parm)
	float                                              InUp;                                                     // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.DriverEnter
struct AUTVehicle_Scorpion_DriverEnter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.CanBeBaseForPawn
struct AUTVehicle_Scorpion_CanBeBaseForPawn_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicle_Scorpion.PancakeOther
struct AUTVehicle_Scorpion_PancakeOther_Params
{
	class APawn*                                       Other;                                                    // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.RanInto
struct AUTVehicle_Scorpion_RanInto_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.PostBeginPlay
struct AUTVehicle_Scorpion_PostBeginPlay_Params
{
};

// Function UTGame.UTVehicle_Scorpion.Tick
struct AUTVehicle_Scorpion_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function UTGame.UTVehicle_Scorpion.ReadyToSelfDestruct
struct AUTVehicle_Scorpion_ReadyToSelfDestruct_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleBoostPad.Tick
struct AUTVehicleBoostPad_Tick_Params
{
	float                                              DT;                                                       // (Parm)
};

// Function UTGame.UTVehicleBoostPad.CalculateForce
struct AUTVehicleBoostPad_CalculateForce_Params
{
	struct FVector                                     CarLocation;                                              // (Parm)
	struct FVector                                     CarVelocity;                                              // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleBoostPad.UnTouch
struct AUTVehicleBoostPad_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UTGame.UTVehicleBoostPad.Touch
struct AUTVehicleBoostPad_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UTGame.UTVehicleBoostPad.Trigger
struct AUTVehicleBoostPad_Trigger_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class APawn*                                       EventInstigator;                                          // (Parm)
};

// Function UTGame.UTVehicleBoostPad.PostBeginPlay
struct AUTVehicleBoostPad_PostBeginPlay_Params
{
};

// Function UTGame.UTVehicleCTFGame.AllowMutator
struct AUTVehicleCTFGame_AllowMutator_Params
{
	struct FString                                     MutatorClassName;                                         // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UTGame.UTVehicleShield.TakeDamage
struct AUTVehicleShield_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function UTGame.UTVehicleShield.ShieldFullyOnline
struct AUTVehicleShield_ShieldFullyOnline_Params
{
};

// Function UTGame.UTVehicleShield.SetActive
struct AUTVehicleShield_SetActive_Params
{
	bool                                               bNowActive;                                               // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
