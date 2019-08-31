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

// Class UTGame.UTPlayerController
// 0x00E8 (0x089C - 0x07B4)
class AUTPlayerController : public AUDKPlayerController
{
public:
	unsigned long                                      bLateComer : 1;                                           // 0x07B4(0x0004)
	unsigned long                                      bIsTyping : 1;                                            // 0x07B4(0x0004)
	unsigned long                                      bAutoTaunt : 1;                                           // 0x07B4(0x0004) (Config, GlobalConfig)
	unsigned long                                      bUseVehicleRotationOnPossess : 1;                         // 0x07B4(0x0004) (Config, GlobalConfig)
	unsigned long                                      bRotateMinimap : 1;                                       // 0x07B4(0x0004)
	unsigned long                                      bCameraOutOfWorld : 1;                                    // 0x07B4(0x0004)
	unsigned long                                      bFirstPersonWeaponsSelfShadow : 1;                        // 0x07B4(0x0004) (Config, GlobalConfig)
	unsigned long                                      bBehindView : 1;                                          // 0x07B4(0x0004)
	unsigned long                                      bForceBehindView : 1;                                     // 0x07B4(0x0004)
	unsigned long                                      bFreeCamera : 1;                                          // 0x07B4(0x0004)
	unsigned long                                      bNoTextToSpeechVoiceMessages : 1;                         // 0x07B4(0x0004) (Config, GlobalConfig)
	unsigned long                                      bTextToSpeechTeamMessagesOnly : 1;                        // 0x07B4(0x0004) (Config, GlobalConfig)
	unsigned long                                      bCurrentCamAnimIsDamageShake : 1;                         // 0x07B4(0x0004)
	unsigned long                                      bCurrentCamAnimAffectsFOV : 1;                            // 0x07B4(0x0004)
	unsigned long                                      bLandingShake : 1;                                        // 0x07B4(0x0004) (Config, GlobalConfig)
	unsigned long                                      bCenteredWeaponFire : 1;                                  // 0x07B4(0x0004) (Config)
	unsigned long                                      bNonlinearZoomInterpolation : 1;                          // 0x07B4(0x0004) (Transient)
	unsigned long                                      bQuittingToMainMenu : 1;                                  // 0x07B4(0x0004) (Transient)
	unsigned long                                      bDebugFreeCam : 1;                                        // 0x07B4(0x0004) (Transient)
	unsigned long                                      bJustFoundVehicle : 1;                                    // 0x07B4(0x0004)
	unsigned long                                      bNoCrosshair : 1;                                         // 0x07B4(0x0004) (Config)
	unsigned long                                      bSimpleCrosshair : 1;                                     // 0x07B4(0x0004) (Config)
	unsigned long                                      bAlreadyReset : 1;                                        // 0x07B4(0x0004)
	unsigned long                                      bServerMutedText : 1;                                     // 0x07B4(0x0004)
	unsigned long                                      bHideObjectivePaths : 1;                                  // 0x07B4(0x0004) (Config, GlobalConfig)
	unsigned char                                      IdentifiedTeam;                                           // 0x07B8(0x0001)
	TEnumAsByte<EPawnShadowMode>                       PawnShadowMode;                                           // 0x07B9(0x0001) (Config, GlobalConfig)
	TEnumAsByte<EWeaponHand>                           WeaponHandPreference;                                     // 0x07BA(0x0001) (Config, GlobalConfig)
	TEnumAsByte<EWeaponHand>                           WeaponHand;                                               // 0x07BB(0x0001)
	TEnumAsByte<EAutoObjectivePreference>              AutoObjectivePreference;                                  // 0x07BC(0x0001) (Config, GlobalConfig)
	TEnumAsByte<EUTVehicleControls>                    VehicleControlType;                                       // 0x07BD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07BE(0x0002) MISSED OFFSET
	struct FVector                                     DesiredLocation;                                          // 0x07C0(0x000C)
	class AUTAnnouncer*                                Announcer;                                                // 0x07CC(0x0004)
	class AUTMusicManager*                             MusicManager;                                             // 0x07D0(0x0004)
	float                                              LastTauntAnimTime;                                        // 0x07D4(0x0004)
	float                                              LastKickWarningTime;                                      // 0x07D8(0x0004)
	struct FString                                     MsgPlayerNotFound;                                        // 0x07DC(0x000C) (Const, Localized, NeedCtorLink)
	class UForceFeedbackWaveform*                      CameraShakeShortWaveForm;                                 // 0x07E8(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeLongWaveForm;                                  // 0x07EC(0x0004)
	class UCameraAnim*                                 DamageCameraAnim;                                         // 0x07F0(0x0004)
	float                                              LastCameraTimeStamp;                                      // 0x07F4(0x0004)
	class UClass*                                      MatineeCameraClass;                                       // 0x07F8(0x0004)
	class AActor*                                      CalcViewActor;                                            // 0x07FC(0x0004)
	struct FVector                                     CalcViewActorLocation;                                    // 0x0800(0x000C)
	struct FRotator                                    CalcViewActorRotation;                                    // 0x080C(0x000C)
	struct FVector                                     CalcViewLocation;                                         // 0x0818(0x000C)
	struct FRotator                                    CalcViewRotation;                                         // 0x0824(0x000C)
	float                                              CalcEyeHeight;                                            // 0x0830(0x0004)
	struct FVector                                     CalcWalkBob;                                              // 0x0834(0x000C)
	float                                              LastWarningTime;                                          // 0x0840(0x0004)
	float                                              FOVLinearZoomRate;                                        // 0x0844(0x0004)
	float                                              FOVNonlinearZoomInterpSpeed;                              // 0x0848(0x0004) (Transient)
	float                                              ZoomRotationModifier;                                     // 0x084C(0x0004)
	struct FRotator                                    DebugFreeCamRot;                                          // 0x0850(0x000C) (Transient)
	float                                              LastShowPathTime;                                         // 0x085C(0x0004)
	class AActor*                                      LastAutoObjective;                                        // 0x0860(0x0004)
	float                                              LastBullseyeTime;                                         // 0x0864(0x0004)
	float                                              LastUseTime;                                              // 0x0868(0x0004)
	float                                              OldMessageTime;                                           // 0x086C(0x0004)
	float                                              LastFriendlyFireTime;                                     // 0x0870(0x0004)
	class UUTUIDataStore_StringAliasBindingsMap*       BoundEventsStringDataStore;                               // 0x0874(0x0004)
	float                                              NextAdminCmdTime;                                         // 0x0878(0x0004)
	float                                              OnFootDefaultFOV;                                         // 0x087C(0x0004) (Config, GlobalConfig)
	float                                              LastIncomingMessageTime;                                  // 0x0880(0x0004)
	float                                              LastCombatUpdateTime;                                     // 0x0884(0x0004)
	float                                              LastTeamChangeTime;                                       // 0x0888(0x0004)
	class UClass*                                      AchievementHandlerClass;                                  // 0x088C(0x0004)
	class UUTAchievementsBase*                         AchievementHandler;                                       // 0x0890(0x0004) (Transient)
	class UUTLeaderboardRead*                          LeaderboardStatsRead;                                     // 0x0894(0x0004)
	class UClass*                                      LeaderboardStatsWriteClass;                               // 0x0898(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPlayerController");
		return ptr;
	}


	void ReadLeaderboardStatsComplete(bool bWasSuccessful);
	void ClientWriteLeaderboardStats(class UClass* OnlineStatsWriteClass, bool bIsIncomplete);
	void ClientUpdateSpiceOfLife(int MutatorBitMask);
	void ClientUpdateAchievement(int AchievementId, int Count);
	void InitAchievementHandler();
	void Disconnect();
	void ServerForceTextUnMute(const struct FString& TargetPlayer);
	void AdminForceTextUnMute(const struct FString& TargetPlayer);
	void ServerForceTextMute(const struct FString& TargetPlayer);
	void AdminForceTextMute(const struct FString& TargetPlayer);
	void ServerForceVoiceUnMute(const struct FString& TargetPlayer);
	void AdminForceVoiceUnMute(const struct FString& TargetPlayer);
	void ServerForceVoiceMute(const struct FString& TargetPlayer);
	void AdminForceVoiceMute(const struct FString& TargetPlayer);
	void ServerChangeMap(const struct FString& URL);
	void AdminChangeMap(const struct FString& URL);
	void ServerRestartMap();
	void AdminRestartMap();
	void AdminPlayerList();
	void AdminKick(const struct FString& S);
	void AdminKickBan(const struct FString& S);
	void ServerAdmin(const struct FString& CommandLine);
	void Admin(const struct FString& CommandLine);
	void ServerAdminLogOut();
	void AdminLogout();
	void ServerAdminLogin(const struct FString& Password);
	void AdminLogin(const struct FString& Password);
	bool AdminCmdOk();
	void ServerTeamSay(const struct FString& msg);
	void ServerSay(const struct FString& msg);
	void ServerKickBan(const struct FString& PlayerToKick, bool bBan);
	void GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList);
	void ServerChangeTeam(int N);
	void BullseyeMessage();
	void ServerSetNetSpeed(int NewSpeed);
	void ReceiveBotVoiceMessage(class AUTPlayerReplicationInfo* SenderPRI, int MessageIndex, class UObject* LocationObject);
	void SendMessage(class APlayerReplicationInfo* Recipient, const struct FName& MessageType, float Wait, class UClass* DamageType);
	bool CanRestartPlayer();
	void CharacterProcessingComplete();
	void GetPlayerLoc();
	void UpdateRotation(float DeltaTime);
	void ClientEndZoom();
	void EndZoomNonlinear(float ZoomInterpSpeed);
	void EndZoom();
	void StopZoom();
	void StartZoomNonlinear(float NewDesiredFOV, float NewZoomInterpSpeed);
	void StartZoom(float NewDesiredFOV, float NewZoomRate);
	void AdjustFOV(float DeltaTime);
	void OnUpdatePropertyFOVAngle();
	void FlushDebug();
	void ClientBecameActivePlayer();
	void ServerBecomeActivePlayer();
	void BecomeActive();
	void ServerShowPathToBase(unsigned char TeamNum);
	void BasePath(unsigned char Num);
	void ClientPawnDied();
	void PawnDied(class APawn* P);
	void CheckBulletWhip(class USoundCue* BulletWhip, const struct FVector& FireLocation, const struct FVector& FireDir, const struct FVector& HitLocation);
	void ClientRoundEnded(class AActor* EndRoundFocus);
	void RoundHasEnded(class AActor* EndRoundFocus);
	void ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner);
	void ShowMidGameMenu(const struct FName& TabTag, bool bEnableInput);
	void ShowMap();
	void AdjustCameraScale(bool bIn);
	void NextWeapon();
	void PrevWeapon();
	void ServerViewObjective();
	void ViewObjective();
	void ServerViewPlayerByName(const struct FString& PlayerName);
	void ViewPlayerByName(const struct FString& PlayerName);
	void ServerViewSelf(const struct FViewTargetTransitionParams& TransitionParams);
	void SwitchWeapon(unsigned char T);
	void ViewNextBot();
	void LongClientAdjustPosition(float TimeStamp, const struct FName& NewState, TEnumAsByte<EPhysics> newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase, float NewFloorX, float NewFloorY, float NewFloorZ);
	void ShortServerMove(float TimeStamp, const struct FVector& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, int View);
	void CallServerMove(class USavedMove* NewMove, const struct FVector& ClientLoc, unsigned char ClientRoll, int View, class USavedMove* OldMove);
	void ToggleTranslocator();
	void ToggleMelee();
	void ViewShake(float DeltaTime);
	void OnStopCameraAnim(class UUTSeqAct_StopCameraAnim* inAction);
	void OnPlayCameraAnim(class UUTSeqAct_PlayCameraAnim* inAction);
	void ClientStopCameraAnim(class UCameraAnim* AnimToStop);
	void ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace> Space, const struct FRotator& CustomPlaySpace);
	void SetCameraAnimStrength(float NewStrength);
	void StopCameraAnim(bool bImmediate);
	void PlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bIsDamageShake);
	void StopViewShaking();
	void DamageShake(int Damage, class UClass* DamageType);
	void PlayAnnouncement(class UClass* InMessageClass, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	void ClientPlayAnnouncement(class UClass* InMessageClass, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	void Music(int EventIndex);
	bool AlreadyInActionMusic();
	void ClientMusicEvent(int EventIndex);
	void GetPlayerViewPoint(struct FVector* POVLocation, struct FRotator* POVRotation);
	void SpawnCamera();
	void SetCameraMode(const struct FName& NewCamMode);
	void ClientSetBehindView(bool bNewBehindView);
	void SetBehindView(bool bNewBehindView);
	void BehindView();
	void ClientReset();
	void Reset();
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void ShowScoreboard();
	void ServerSpectate();
	void ClearDoubleClick();
	bool PerformedUseAction();
	void Use();
	void ServerUse();
	void ClientPlayTakeHit(const struct FVector& HitLoc, unsigned char Damage, class UClass* DamageType);
	void NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum);
	void PlayStartupMessage(unsigned char StartupStage);
	void ToggleScreenShotMode();
	void SetAutoTaunt(bool Value);
	void ServerSetAutoTaunt(bool Value);
	bool UsingFirstPersonCamera();
	void ResetCameraMode();
	void SetHand(TEnumAsByte<EWeaponHand> NewWeaponHand);
	void ServerSetHand(TEnumAsByte<EWeaponHand> NewWeaponHand);
	void ServerPlayerPreferences(TEnumAsByte<EWeaponHand> NewWeaponHand, bool bNewAutoTaunt, bool bNewCenteredWeaponFire, TEnumAsByte<EAutoObjectivePreference> NewAutoObjectivePreference, TEnumAsByte<EUTVehicleControls> NewVehicleControls);
	void ReceivedPlayer();
	void AcknowledgePossession(class APawn* P);
	void Possess(class APawn* inPawn, bool bVehicleTransition);
	void ClientSetAutoObjective(class AActor* NewAutoObjective);
	void SetAutoObjective(class AActor* ObjectiveActor, bool bOnlyNotifyDifferent);
	void CheckAutoObjective(bool bOnlyNotifyDifferent);
	void SetViewTarget(class AActor* NewViewTarget, const struct FViewTargetTransitionParams& TransitionParams);
	void ClientRestart(class APawn* NewPawn);
	void Restart(bool bVehicleTransition);
	void FixFOV();
	void FOV(float F);
	void CheckJumpOrDuck();
	void KickWarning();
	void DrawHUD(class AHUD* H);
	void SoakPause(class APawn* P);
	void OnControllerChanged(int ControllerId, bool bIsConnected);
	void Destroyed();
	void Typing(bool bTyping);
	void Taunt(int TauntIndex);
	void ServerPlayVehicleHorn();
	void PlayVehicleHorn();
	bool TriggerInteracted();
	void PlayWinMessage(bool bWinner);
	void ProjectileWarningTimer();
	void ReceiveProjectileWarning(class AProjectile* Proj);
	void ReceiveWarning(class APawn* shooter, float projSpeed, const struct FVector& FireDir);
	void PlayBeepSound();
	bool LandingShake();
	void ServerDropFlag();
	void DropFlag();
	void ToggleMinimap();
	class AUTVehicle* CheckVehicleToDrive(bool bEnterVehicle);
	void ClientSetRequestedEntryWithFlag(class AUTVehicle* V, bool bNewValue, int MessageIndex);
	class AUTVehicle* CheckPickedVehicle(class AUTVehicle* V, bool bEnterVehicle);
	bool FindVehicleToDrive();
	struct FRotator GetAdjustedAimFor(class AWeapon* W, const struct FVector& StartFireLoc);
	float AimHelpModifier();
	bool AimingHelp(bool bInstantHit);
	void ClientHearSound(class USoundCue* ASound, class AActor* SourceActor, const struct FVector& SourceLocation, bool bStopWhenOwnerDestroyed, bool bIsOccluded);
	void ToggleSpeaking(bool bNowOn);
	void ServerProcessSpeechRecognition(const struct FSpeechRecognizedWord& ReplicatedWords);
	void SpeechRecognitionComplete();
	void ClientSetSpeechRecognitionObject(class USpeechRecognition* NewRecognitionData);
	void OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	void OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool CleanupOnlineSubsystemSession(bool bWasFromMenu);
	void FinishQuitToMainMenu();
	void QuitToMainMenu();
	void SetFrontEndErrorMessage(const struct FString& Title, const struct FString& Message);
	void ClientWasKicked();
	void NotifyNotEnoughSpaceInInvite();
	void NotifyNotAllPlayersCanJoinInvite();
	void NotifyInviteFailed();
	void OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	void OnGameInviteReceived(unsigned char LocalUserNum, const struct FString& RequestingNick);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	void OnLinkStatusChanged(bool bConnected);
	void OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	void ClientSetOnlineStatus();
	void ClearOnlineDelegates();
	void AddOnlineDelegates(bool bRegisterVoice);
	void UnregisterPlayerDataStores();
	void RegisterCustomPlayerDataStores();
	void ClearStringAliasBindingMapCache();
	void ServerSetCharacterClass(class UClass* CharClass);
	void PulseTeamColor();
	void InitInputSystem();
	void SwitchHud();
	void ServerThrowWeapon();
	void Camera(const struct FName& NewMode);
};


// Class UTGame.UTHUDBase
// 0x0068 (0x05F4 - 0x058C)
class AUTHUDBase : public AUDKHUD
{
public:
	class UGFxUIScoreboard*                            ScoreboardMovie;                                          // 0x058C(0x0004)
	class UGFxUI_PauseMenu*                            PauseMenuMovie;                                           // 0x0590(0x0004)
	class UClass*                                      MusicManagerClass;                                        // 0x0594(0x0004)
	class AUTPlayerController*                         UTPlayerOwner;                                            // 0x0598(0x0004)
	class AUTGameReplicationInfo*                      UTGRI;                                                    // 0x059C(0x0004)
	unsigned long                                      bIsSplitScreen : 1;                                       // 0x05A0(0x0004)
	unsigned long                                      bEnableActorOverlays : 1;                                 // 0x05A0(0x0004)
	unsigned long                                      bCrosshairShow : 1;                                       // 0x05A0(0x0004)
	unsigned long                                      bCrosshairOnFriendly : 1;                                 // 0x05A0(0x0004)
	unsigned long                                      bGreenCrosshair : 1;                                      // 0x05A0(0x0004)
	struct FTextureCoordinates                         ToolTipSepCoords;                                         // 0x05A4(0x0010)
	float                                              LastTimeTooltipDrawn;                                     // 0x05B4(0x0004)
	class UTexture2D*                                  IconHudTexture;                                           // 0x05B8(0x0004) (Const)
	struct FString                                     ConsoleIconFontClassName;                                 // 0x05BC(0x000C) (Config, NeedCtorLink)
	float                                              ConfiguredCrosshairScaling;                               // 0x05C8(0x0004)
	float                                              LastPickupTime;                                           // 0x05CC(0x0004)
	struct FColor                                      BlackColor;                                               // 0x05D0(0x0004) (Const)
	struct FColor                                      GoldColor;                                                // 0x05D4(0x0004) (Const)
	struct FColor                                      LightGoldColor;                                           // 0x05D8(0x0004) (Const)
	struct FColor                                      LightGreenColor;                                          // 0x05DC(0x0004) (Const)
	float                                              ResolutionScale;                                          // 0x05E0(0x0004)
	float                                              ResolutionScaleX;                                         // 0x05E4(0x0004)
	int                                                ViewX;                                                    // 0x05E8(0x0004)
	int                                                ViewY;                                                    // 0x05EC(0x0004)
	class UGFxUILeaderboard*                           LeaderboardMovie;                                         // 0x05F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTHUDBase");
		return ptr;
	}


	void DrawShadowedRotatedTile(class UTexture2D* Tex, const struct FRotator& Rot, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, const struct FColor& TileColor, bool bScaleToRes);
	void DrawShadowedStretchedTile(class UTexture2D* Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, const struct FColor& TileColor, bool bScaleToRes);
	void DrawShadowedTile(class UTexture2D* Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, const struct FColor& TileColor, bool bScaleToRes);
	bool CheckCrosshairOnFriendly();
	void DrawToolTip(class UCanvas* Cvs, class APlayerController* PC, const struct FString& Command, float X, float Y, float U, float V, float UL, float VL, float ResScale, class UTexture2D* IconTexture, float Alpha);
	void SetShowLeaderboard(bool bEnableLeaderboard);
	void ToggleLeaderboard();
	void SetShowScores(bool bEnableShowScores);
	int GetLocalPlayerOwnerIndex();
	void ReleaseShowScores();
	void CompletePauseMenuClose();
	void TogglePauseMenu();
	void CloseOtherMenus();
	void SetVisible(bool bNewVisible);
	void RemoveMovies();
	void OnOpenAnimComplete();
	void OnCloseAnimComplete();
	void PostRender();
	void ResolutionChanged();
	void ShowMenu();
	void Timer();
	void PostBeginPlay();
};


// Class UTGame.UTGFxHudWrapper
// 0x000C (0x0600 - 0x05F4)
class AUTGFxHudWrapper : public AUTHUDBase
{
public:
	class UGFxMinimapHud*                              HudMovie;                                                 // 0x05F4(0x0004)
	class UGFxProjectedUI*                             InventoryMovie;                                           // 0x05F8(0x0004)
	class UClass*                                      MinimapHUDClass;                                          // 0x05FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGFxHudWrapper");
		return ptr;
	}


	void CompleteCloseTimer();
	void CompleteCloseInventory();
	void ToggleInventory();
	void AddConsoleMessage(const struct FString& M, class UClass* InMessageClass, class APlayerReplicationInfo* PRI, float Lifetime);
	void LocalizedMessage(class UClass* InMessageClass, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, const struct FString& CriticalString, int Switch, float Position, float Lifetime, int FontSize, const struct FColor& DrawColor, class UObject* OptionalObject);
	void DrawHUD();
	void PostRender();
	void ResolutionChanged();
	void CloseOtherMenus();
	void DisplayHit(const struct FVector& HitDir, int Damage, class UClass* DamageType);
	void SetVisible(bool bNewVisible);
	int GetLocalPlayerOwnerIndex();
	void CreateHUDMovie();
	void PostBeginPlay();
	void RemoveMovies();
	void Destroyed();
	void MinimapZoomOut();
	void MinimapZoomIn();
};


// Class UTGame.UTGFxTeamHUDWrapper
// 0x0000 (0x0600 - 0x0600)
class AUTGFxTeamHUDWrapper : public AUTGFxHudWrapper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGFxTeamHUDWrapper");
		return ptr;
	}


	void Timer();
};


// Class UTGame.UTPlayerReplicationInfo
// 0x00F9 (0x037D - 0x0284)
class AUTPlayerReplicationInfo : public APlayerReplicationInfo
{
public:
	unsigned long                                      bHasFlag : 1;                                             // 0x0284(0x0004) (Net)
	unsigned long                                      bHolding : 1;                                             // 0x0284(0x0004) (Net)
	unsigned long                                      bIsFemale : 1;                                            // 0x0284(0x0004) (Net)
	int                                                spree;                                                    // 0x0288(0x0004)
	int                                                MultiKillLevel;                                           // 0x028C(0x0004)
	float                                              LastKillTime;                                             // 0x0290(0x0004)
	class AUTSquadAI*                                  Squad;                                                    // 0x0294(0x0004) (Net)
	class AUTCarriedObject*                            HasFlag;                                                  // 0x0298(0x0004)
	class UClass*                                      VoiceClass;                                               // 0x029C(0x0004)
	class AUTPlayerReplicationInfo*                    LastKillerPRI;                                            // 0x02A0(0x0004)
	struct FColor                                      DefaultHudColor;                                          // 0x02A4(0x0004)
	struct FVector                                     HUDLocation;                                              // 0x02A8(0x000C)
	class UClass*                                      CharClassInfo;                                            // 0x02B4(0x0004) (Net, RepNotify)
	class UTexture*                                    CharPortrait;                                             // 0x02B8(0x0004)
	TArray<struct FIntStat>                            KillStats;                                                // 0x02BC(0x000C) (NeedCtorLink)
	TArray<struct FIntStat>                            DeathStats;                                               // 0x02C8(0x000C) (NeedCtorLink)
	TArray<struct FIntStat>                            SuicideStats;                                             // 0x02D4(0x000C) (NeedCtorLink)
	TArray<struct FIntStat>                            EventStats;                                               // 0x02E0(0x000C) (NeedCtorLink)
	TArray<struct FIntStat>                            VehicleKillStats;                                         // 0x02EC(0x000C) (NeedCtorLink)
	TArray<struct FIntStat>                            PickupStats;                                              // 0x02F8(0x000C) (NeedCtorLink)
	TArray<struct FTimeStat>                           DrivingStats;                                             // 0x0304(0x000C) (NeedCtorLink)
	TArray<struct FTimeStat>                           PowerupTimeStats;                                         // 0x0310(0x000C) (NeedCtorLink)
	struct FString                                     OrdersString[0x8];                                        // 0x031C(0x000C) (Const, Localized, NeedCtorLink)
	unsigned char                                      OrdersIndex;                                              // 0x037C(0x0001) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPlayerReplicationInfo");
		return ptr;
	}


	void UpdatePowerupAchievements(const struct FName& StatName, int Time);
	void UpdateEventStatAchievements(const struct FName& StatName);
	bool AttemptMidGameMenu();
	void ShowMidGameMenu(bool bInitial);
	void ReplicatedEvent(const struct FName& VarName);
	void ServerTeleportToActor(class AActor* DestinationActor);
	bool AllowClientToTeleport(class AActor* DestinationActor, class AUTPawn** OwnerPawn);
	void SeamlessTravelTo(class APlayerReplicationInfo* NewPRI);
	void CopyProperties(class APlayerReplicationInfo* PRI);
	void OverrideWith(class APlayerReplicationInfo* PRI);
	struct FString GetCallSign();
	void Reset();
	void IncrementKills(bool bEnemyKill);
	class AUTCarriedObject* GetFlag();
	void SetFlag(class AUTCarriedObject* NewFlag);
	void StopPowerupTimeStat(const struct FName& NewStatName);
	void StartPowerupTimeStat(const struct FName& NewStatName);
	int IncrementPickupStat(const struct FName& NewStatName);
	int IncrementVehicleKillStat(const struct FName& NewStatName);
	void StopDrivingStat(const struct FName& NewStatName);
	void StartDrivingStat(const struct FName& NewStatName);
	int IncrementEventStat(const struct FName& NewStatName);
	int IncrementSuicideStat(const struct FName& NewStatName);
	int IncrementDeathStat(const struct FName& NewStatName);
	int IncrementKillStat(const struct FName& NewStatName);
	bool ShouldBroadCastWelcomeMessage(bool bExiting);
	bool IsLocalPlayerPRI();
};


// Class UTGame.UTCharInfo
// 0x0024 (0x0060 - 0x003C)
class UUTCharInfo : public UObject
{
public:
	TArray<struct FCharacterInfo>                      Characters;                                               // 0x003C(0x000C) (Edit, Config, NeedCtorLink)
	TArray<class UClass*>                              Families;                                                 // 0x0048(0x000C) (Edit, NeedCtorLink)
	float                                              LOD1DisplayFactor;                                        // 0x0054(0x0004) (Edit, Config)
	float                                              LOD2DisplayFactor;                                        // 0x0058(0x0004) (Edit, Config)
	float                                              LOD3DisplayFactor;                                        // 0x005C(0x0004) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCharInfo");
		return ptr;
	}


	struct FString GetRandomCharClassName();
	class UClass* FindFamilyInfo(const struct FString& InFamilyID);
};


// Class UTGame.UTTeamInfo
// 0x005C (0x024C - 0x01F0)
class AUTTeamInfo : public ATeamInfo
{
public:
	int                                                DesiredTeamSize;                                          // 0x01F0(0x0004)
	class AUTTeamAI*                                   AI;                                                       // 0x01F4(0x0004)
	class AUTGameObjective*                            HomeBase;                                                 // 0x01F8(0x0004) (Net)
	class AUTCarriedObject*                            TeamFlag;                                                 // 0x01FC(0x0004) (Net)
	struct FString                                     Faction;                                                  // 0x0200(0x000C) (NeedCtorLink)
	struct FColor                                      BaseTeamColor[0x4];                                       // 0x020C(0x0004)
	struct FString                                     TeamColorNames[0x4];                                      // 0x021C(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeamInfo");
		return ptr;
	}


	void Destroyed();
	struct FCharacterInfo GetBotInfo(const struct FString& BotName);
	void GetAvailableBotList(const struct FString& FactionFilter, bool bMalesOnly, TArray<int>* AvailableBots);
	bool BotNameTaken(const struct FString& BotName);
	void RemoveFromTeam(class AController* Other);
	void SetBotOrders(class AUTBot* NewBot);
	bool NeedsBotMoreThan(class AUTTeamInfo* T);
	void Initialize(int NewTeamIndex);
	bool AllBotsSpawned();
	void Reset();
	struct FColor GetHUDColor();
	struct FString GetHumanReadableName();
};


// Class UTGame.UTPawn
// 0x024C (0x087C - 0x0630)
class AUTPawn : public AUDKPawn
{
public:
	unsigned long                                      bFixedView : 1;                                           // 0x0630(0x0004)
	unsigned long                                      bSpawnDone : 1;                                           // 0x0630(0x0004)
	unsigned long                                      bSpawnIn : 1;                                             // 0x0630(0x0004)
	unsigned long                                      bShieldAbsorb : 1;                                        // 0x0630(0x0004)
	unsigned long                                      bDodging : 1;                                             // 0x0630(0x0004)
	unsigned long                                      bStopOnDoubleLanding : 1;                                 // 0x0630(0x0004)
	unsigned long                                      bIsInvulnerable : 1;                                      // 0x0630(0x0004)
	unsigned long                                      bJustDroppedOrb : 1;                                      // 0x0630(0x0004)
	unsigned long                                      bForcedFeignDeath : 1;                                    // 0x0630(0x0004)
	unsigned long                                      bWeaponBob : 1;                                           // 0x0630(0x0004) (Config, GlobalConfig)
	unsigned long                                      bJustLanded : 1;                                          // 0x0630(0x0004)
	unsigned long                                      bLandRecovery : 1;                                        // 0x0630(0x0004)
	unsigned long                                      bHasHoverboard : 1;                                       // 0x0630(0x0004) (Net)
	unsigned long                                      bStopDeathCamera : 1;                                     // 0x0630(0x0004)
	unsigned long                                      bWinnerCam : 1;                                           // 0x0630(0x0004)
	unsigned long                                      bGibbed : 1;                                              // 0x0630(0x0004)
	unsigned long                                      bHeadGibbed : 1;                                          // 0x0630(0x0004)
	unsigned long                                      bArmsAttached : 1;                                        // 0x0630(0x0004)
	unsigned long                                      bWeaponAttachmentVisible : 1;                             // 0x0630(0x0004)
	unsigned long                                      bHideOnListenServer : 1;                                  // 0x0630(0x0004)
	unsigned long                                      bPostRenderTraceSucceeded : 1;                            // 0x0630(0x0004)
	unsigned long                                      bReceivedValidTeam : 1;                                   // 0x0630(0x0004)
	unsigned long                                      bKillsAffectHead : 1;                                     // 0x0630(0x0004)
	unsigned long                                      bKilledByBio : 1;                                         // 0x0630(0x0004)
	class UClass*                                      CurrentWeaponAttachmentClass;                             // 0x0634(0x0004) (Net, RepNotify)
	int                                                UnfeignFailedCount;                                       // 0x0638(0x0004)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x063C(0x0004) (ExportObject, Component, EditInline)
	class UAnimNodeBlend*                              FeignDeathBlend;                                          // 0x0640(0x0004)
	class UAnimNodeSlot*                               FullBodyAnimSlot;                                         // 0x0644(0x0004)
	class UAnimNodeSlot*                               TopHalfAnimSlot;                                          // 0x0648(0x0004)
	float                                              DeathHipLinSpring;                                        // 0x064C(0x0004) (Edit)
	float                                              DeathHipLinDamp;                                          // 0x0650(0x0004) (Edit)
	float                                              DeathHipAngSpring;                                        // 0x0654(0x0004) (Edit)
	float                                              DeathHipAngDamp;                                          // 0x0658(0x0004) (Edit)
	float                                              StartDeathAnimTime;                                       // 0x065C(0x0004)
	class UClass*                                      DeathAnimDamageType;                                      // 0x0660(0x0004)
	float                                              TimeLastTookDeathAnimDamage;                              // 0x0664(0x0004)
	struct FVector                                     FixedViewLoc;                                             // 0x0668(0x000C)
	struct FRotator                                    FixedViewRot;                                             // 0x0674(0x000C)
	float                                              CameraScale;                                              // 0x0680(0x0004)
	float                                              CurrentCameraScale;                                       // 0x0684(0x0004)
	float                                              CameraScaleMin;                                           // 0x0688(0x0004)
	float                                              CameraScaleMax;                                           // 0x068C(0x0004)
	struct FVector                                     OldCameraPosition;                                        // 0x0690(0x000C)
	float                                              CameraZOffset;                                            // 0x069C(0x0004)
	float                                              HeroCameraScale;                                          // 0x06A0(0x0004) (Edit)
	int                                                HeroCameraPitch;                                          // 0x06A4(0x0004) (Edit)
	float                                              DodgeSpeed;                                               // 0x06A8(0x0004)
	float                                              DodgeSpeedZ;                                              // 0x06AC(0x0004)
	TEnumAsByte<EDoubleClickDir>                       CurrentDir;                                               // 0x06B0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	float                                              DoubleJumpEyeHeight;                                      // 0x06B4(0x0004) (Edit)
	float                                              DoubleJumpThreshold;                                      // 0x06B8(0x0004)
	float                                              DefaultAirControl;                                        // 0x06BC(0x0004)
	float                                              Bob;                                                      // 0x06C0(0x0004) (Config, GlobalConfig)
	float                                              LandBob;                                                  // 0x06C4(0x0004)
	float                                              JumpBob;                                                  // 0x06C8(0x0004)
	float                                              AppliedBob;                                               // 0x06CC(0x0004)
	float                                              bobtime;                                                  // 0x06D0(0x0004)
	struct FVector                                     WalkBob;                                                  // 0x06D4(0x000C)
	float                                              FeignDeathBodyAtRestSpeed;                                // 0x06E0(0x0004)
	float                                              FeignDeathStartTime;                                      // 0x06E4(0x0004)
	float                                              FeignDeathRecoveryStartTime;                              // 0x06E8(0x0004)
	int                                                SuperHealthMax;                                           // 0x06EC(0x0004)
	class UClass*                                      SoundGroupClass;                                          // 0x06F0(0x0004)
	class UClass*                                      CurrCharClassInfo;                                        // 0x06F4(0x0004)
	TArray<struct FName>                               TakeHitPhysicsFixedBones;                                 // 0x06F8(0x000C) (NeedCtorLink)
	TArray<struct FName>                               NoDriveBodies;                                            // 0x0704(0x000C) (NeedCtorLink)
	class UForceFeedbackWaveform*                      FallingDamageWaveForm;                                    // 0x0710(0x0004)
	float                                              AccumulateDamage;                                         // 0x0714(0x0004)
	float                                              AccumulationTime;                                         // 0x0718(0x0004)
	float                                              LastHoverboardTime;                                       // 0x071C(0x0004)
	float                                              MinHoverboardInterval;                                    // 0x0720(0x0004)
	class UUTAnimBlendByDriving*                       DrivingNode;                                              // 0x0724(0x0004)
	class UUTAnimBlendByVehicle*                       VehicleNode;                                              // 0x0728(0x0004)
	class UUTAnimBlendByHoverboarding*                 HoverboardingNode;                                        // 0x072C(0x0004)
	float                                              ShieldBeltArmor;                                          // 0x0730(0x0004) (Net)
	float                                              VestArmor;                                                // 0x0734(0x0004) (Net)
	float                                              ThighpadArmor;                                            // 0x0738(0x0004) (Net)
	class AUTWeaponAttachment*                         CurrentWeaponAttachment;                                  // 0x073C(0x0004)
	struct FName                                       WeaponSocket;                                             // 0x0740(0x0008)
	struct FName                                       WeaponSocket2;                                            // 0x0748(0x0008)
	struct FName                                       PawnEffectSockets[0x2];                                   // 0x0750(0x0008)
	float                                              HeadOffset;                                               // 0x0760(0x0004)
	float                                              HeadRadius;                                               // 0x0764(0x0004)
	float                                              HeadHeight;                                               // 0x0768(0x0004)
	struct FName                                       HeadBone;                                                 // 0x076C(0x0008)
	class UStaticMeshComponent*                        HeadshotNeckAttachment;                                   // 0x0774(0x0004) (ExportObject, Component, EditInline)
	class UClass*                                      TransInEffects[0x2];                                      // 0x0778(0x0004)
	struct FLinearColor                                TranslocateColor[0x2];                                    // 0x0780(0x0010)
	class UCameraAnim*                                 TransCameraAnim[0x3];                                     // 0x07A0(0x0004)
	class USoundCue*                                   ArmorHitSound;                                            // 0x07AC(0x0004)
	class USoundCue*                                   SpawnSound;                                               // 0x07B0(0x0004)
	class USoundCue*                                   TeleportSound;                                            // 0x07B4(0x0004)
	struct FLinearColor                                SpawnProtectionColor;                                     // 0x07B8(0x0010)
	float                                              TeamBeaconPlayerInfoMaxDist;                              // 0x07C8(0x0004) (Edit)
	class UTexture*                                    SpeakingBeaconTexture;                                    // 0x07CC(0x0004) (Edit)
	float                                              MapSize;                                                  // 0x07D0(0x0004)
	struct FTextureCoordinates                         IconCoords;                                               // 0x07D4(0x0010)
	float                                              LastPainSound;                                            // 0x07E4(0x0004)
	float                                              RagdollLifespan;                                          // 0x07E8(0x0004)
	class AUTProjectile*                               AttachedProj;                                             // 0x07EC(0x0004)
	float                                              MaxFootstepDistSq;                                        // 0x07F0(0x0004)
	float                                              MaxJumpSoundDistSq;                                       // 0x07F4(0x0004)
	class UClass*                                      HoverboardClass;                                          // 0x07F8(0x0004)
	struct FDrivenWeaponPawnInfo                       LastDrivenWeaponPawn;                                     // 0x07FC(0x000C)
	class AUTClientSideWeaponPawn*                     ClientSideWeaponPawn;                                     // 0x0808(0x0004)
	class UMaterialInterface*                          ShieldBeltMaterialInstance;                               // 0x080C(0x0004)
	class UMaterialInterface*                          ShieldBeltTeamMaterialInstances[0x4];                     // 0x0810(0x0004)
	int                                                JumpBootCharge;                                           // 0x0820(0x0004)
	float                                              DefaultMeshScale;                                         // 0x0824(0x0004)
	struct FName                                       TauntNames[0x6];                                          // 0x0828(0x0008)
	float                                              DesiredMeshScale;                                         // 0x0858(0x0004)
	struct FVector                                     CamOffset;                                                // 0x085C(0x000C)
	class UParticleSystemComponent*                    BioBurnAway;                                              // 0x0868(0x0004) (ExportObject, Component, EditInline)
	float                                              BioBurnAwayTime;                                          // 0x086C(0x0004)
	struct FName                                       BioEffectName;                                            // 0x0870(0x0008)
	float                                              DeathTime;                                                // 0x0878(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPawn");
		return ptr;
	}


	void HandDamp(float LinDamp);
	void HandSpring(float LinSpring);
	void BackDamp(float LinDamp);
	void BackSpring(float LinSpring);
	void PostBigTeleport();
	void PostTeleport(class ATeleporter* OutTeleporter);
	class UClass* GetFamilyInfo();
	bool NeedToTurn(const struct FVector& targ);
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void OnInfiniteAmmo(class UUTSeqAct_InfiniteAmmo* Action);
	void OnExitVehicle(class UUTSeqAct_ExitVehicle* Action);
	void StuckFalling();
	void OnRanOver(class ASVehicle* Vehicle, class UPrimitiveComponent* RunOverComponent, int WheelIndex);
	void RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData);
	void TakeFallingDamage();
	void SetOverlayVisibility(bool bVisible);
	void TornOff();
	struct FRotator GetViewRotation();
	void AdjustCameraScale(bool bMoveCameraIn);
	bool IsFirstPerson();
	void ModifyRotForDebugFreeCam(struct FRotator* out_CamRot);
	bool IsLocationOnHead(float AdditionalScale, struct FImpactInfo* Impact);
	void TakeDrowningDamage();
	void SwitchWeapon(unsigned char NewGroup);
	void OnUseHoverboard(class UUTSeqAct_UseHoverboard* Action);
	void ServerHoverboard();
	void TakeHitBlendedOut();
	void PlayTakeHitEffects();
	void PlayHit(float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FVector& Momentum, const struct FTraceHitInfo& HitInfo);
	void WeaponAttachmentChanged();
	void WeaponChanged(class AUTWeapon* NewWeapon);
	void WeaponStoppedFiring(class AWeapon* InWeapon, bool bViaReplication);
	void WeaponFired(class AWeapon* InWeapon, bool bViaReplication, const struct FVector& HitLocation);
	void TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	bool GetPuttingDownWeapon();
	void SetPuttingDownWeapon(bool bNowPuttingDownWeapon);
	void SetHeadScale(float NewScale);
	void ReplicatedEvent(const struct FName& VarName);
	void FireRateChanged();
	void SetBigHead();
	void FiringModeUpdated(class AWeapon* InWeapon, unsigned char InFiringMode, bool bViaReplication);
	void ForceRagdoll();
	void FeignDeath();
	void ServerFeignDeath();
	bool CheckValidLocation(const struct FVector& FeignLocation);
	bool SetFeignEndLocation(const struct FVector& HitLocation, const struct FVector& FeignLocation);
	void PlayFeignDeath();
	void FeignDeathDelayTimer();
	void StartFeignDeathRecoveryAnim();
	void ApplyWeaponOverlayFlags(unsigned char NewFlags);
	void ClearWeaponOverlayFlag(unsigned char FlagToClear);
	void SetWeaponOverlayFlag(unsigned char FlagToSet);
	class UMaterialInterface* GetOverlayMaterial();
	class UMaterialInterface* GetShieldMaterialInstance(bool bTeamGame);
	void SetOverlayMaterial(class UMaterialInterface* NewOverlay);
	class USoundCue* GetWeaponAmbientSound();
	void SetWeaponAmbientSound(class USoundCue* NewAmbientSound);
	class USoundCue* GetPawnAmbientSound();
	void SetPawnAmbientSound(class USoundCue* NewAmbientSound);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void PlayDyingSound();
	bool CanMultiJump();
	bool CanDoubleJump();
	void JumpOutOfWater(const struct FVector& JumpDir);
	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
	bool DoJump(bool bUpdating);
	void StopFlying();
	void StartFlying();
	void Gasp();
	void DoDoubleJump(bool bUpdating);
	bool PerformDodge(TEnumAsByte<EDoubleClickDir> DoubleClickMove, const struct FVector& Dir, const struct FVector& Cross);
	struct FVector BotDodge(const struct FVector& Dir);
	bool Dodge(TEnumAsByte<EDoubleClickDir> DoubleClickMove);
	struct FVector GetWeaponStartTraceLocation(class AWeapon* CurrentWeapon);
	bool CalcThirdPersonCam(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void SetHeroCam(struct FRotator* out_CamRot);
	bool TryNewCamRot(class AUTPlayerController* PC, const struct FRotator& ViewRotation, float* CamDist);
	void FindGoodEndView(class APlayerController* InPC, struct FRotator* GoodRotation);
	void SetThirdPersonCamera(bool bNewBehindView);
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void AddDefaultInventory();
	void Destroyed();
	void DoingDeathAnim();
	void PlayDying(class UClass* DamageType, const struct FVector& HitLoc);
	void TurnOffPawn();
	void SpawnGibs(class UClass* UTDamageType, const struct FVector& HitLocation);
	class AUTGib* SpawnGib(class UClass* GibClass, const struct FName& BoneName, class UClass* UTDamageType, const struct FVector& HitLocation, bool bSpinGib);
	void SpawnHeadGib(class UClass* UTDamageType, const struct FVector& HitLocation);
	bool ShouldGib(class UClass* UTDamageType);
	void PlayJumpingSound();
	void PlayLandingSound();
	struct FName GetMaterialBelowFeet();
	void ActuallyPlayFootstepSound(int FootDown);
	void PlayFootStepSound(int FootDown);
	struct FString GetDebugName();
	bool GiveHealth(int HealAmount, int HealMax);
	void HoldGameObject(class AUDKCarriedObject* GameObj);
	void EnableInventoryPickup();
	void DropFlag();
	void AdjustDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, int* InDamage, struct FVector* Momentum);
	int ShieldAbsorb(int Damage);
	int AbsorbDamage(int CurrentShieldStrength, float AbsorptionRate, int* Damage);
	int GetShieldStrength();
	void ClientRestart();
	void StopDriving(class AVehicle* V);
	void StartDriving(class AVehicle* V);
	void SpawnTransEffect(int TeamNum);
	void PlayTeleportEffect(bool bOut, bool bSound);
	void DeactivateSpawnProtection();
	void FixedView(const struct FString& VisibleMeshes);
	void SetMeshVisibility(bool bVisible);
	void SetWeaponAttachmentVisibility(bool bAttachmentVisible);
	void SetWeaponVisibility(bool bWeaponVisible);
	void EndViewTarget(class APlayerController* PC);
	void BecomeViewTarget(class APlayerController* PC);
	struct FVector GetPawnViewLocation();
	void UpdateEyeHeight(float DeltaTime);
	void FaceRotation(const struct FRotator& NewRotation, float DeltaTime);
	void PostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	struct FString GetScreenName();
	void OnModifyHealth(class USeqAct_ModifyHealth* Action);
	void PlayVictoryAnimation();
	float GetEyeHeight();
	float RangedAttackTime();
	bool RecommendLongRangedAttack();
	unsigned char ChooseFireMode();
	bool StopWeaponFiring();
	bool BotFire(bool bFinished);
	bool StopFiring();
	void StartFire(unsigned char FireModeNum);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void AddVelocity(const struct FVector& NewVelocity, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo);
	void Falling();
	void StuckOnPawn(class APawn* OtherPawn);
	void JumpOffPawn();
	void gibbedBy(class AActor* Other);
	void EncroachedBy(class AActor* Other);
	bool EncroachingOn(class AActor* Other);
	void TurnOff();
	struct FVector WeaponBob(float BobDamping, float JumpDamping);
	void SpawnDefaultController();
	void OnPlayAnim(class UUTSeqAct_PlayAnim* inAction);
	void PlayEmote(const struct FName& InEmoteTag, int InPlayerID);
	void ServerPlayEmote(const struct FName& InEmoteTag, int InPlayerID);
	void DoPlayEmote(const struct FName& InEmoteTag, int InPlayerID);
	void PerformEmoteCommand(const struct FEmoteInfo& EInfo, int PlayerID);
	void LeaveABloodSplatterDecal(const struct FVector& HitLoc, const struct FVector& HitNorm);
	void SetWeapAnimType(TEnumAsByte<EWeapAnimType> AnimType);
	void SetAnimRateScale(float RateScale);
	void SetHandIKEnabled(bool bEnabled);
	void PostInitAnimTree(class USkeletalMeshComponent* SkelComp);
	void ReattachMesh();
	void UpdateShadowSettings(bool bWantShadow);
	void PostBeginPlay();
	void SetTeamColor();
	void SetFirstPersonArmsInfo(class USkeletalMesh* FirstPersonArmMesh, class UMaterialInterface* ArmMaterial);
	void NotifyTeamChanged();
	void ResetCharPhysState();
	void SetPawnRBChannels(bool bRagdollMode);
	void SetCharacterMeshInfo(class USkeletalMesh* SkelMesh, class UMaterialInterface* HeadMaterial, class UMaterialInterface* BodyMaterial);
	void SetCharacterClassFromInfo(class UClass* Info);
	bool VerifyBodyMaterialInstance();
	void SetArmsSkin(class UMaterialInterface* NewMaterial);
	void SetSkin(class UMaterial* NewMaterial);
	void SetInvisible(bool bNowInvisible);
	void SetBodyMatColor(const struct FLinearColor& NewBodyMatColor, float NewOverlayDuration);
	void ClearBodyMatColor();
	void SetWalking(bool bNewIsWalking);
	void RenderMapIcon(class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, const struct FLinearColor& FinalColor);
	bool InCombat();
	bool PoweredUp();
	void HeadVolumeChange(class APhysicsVolume* newHeadVolume);
	void FellOutOfWorld(class UClass* dmgType);
	class AUTPlayerReplicationInfo* GetUTPlayerReplicationInfo();
	float AdjustedStrength();
	void AdjustPPEffects(class AUTPlayerController* PC, bool bRemove);
};


// Class UTGame.UTFamilyInfo
// 0x0160 (0x019C - 0x003C)
class UUTFamilyInfo : public UObject
{
public:
	class UTexture*                                    DefaultHeadPortrait;                                      // 0x003C(0x0004)
	TArray<class UTexture*>                            DefaultTeamHeadPortrait;                                  // 0x0040(0x000C) (NeedCtorLink)
	struct FString                                     FamilyID;                                                 // 0x004C(0x000C) (NeedCtorLink)
	struct FString                                     Faction;                                                  // 0x0058(0x000C) (NeedCtorLink)
	class USkeletalMesh*                               CharacterMesh;                                            // 0x0064(0x0004)
	TArray<class UMaterialInterface*>                  CharacterTeamBodyMaterials;                               // 0x0068(0x000C) (NeedCtorLink)
	TArray<class UMaterialInterface*>                  CharacterTeamHeadMaterials;                               // 0x0074(0x000C) (NeedCtorLink)
	struct FString                                     ArmMeshPackageName;                                       // 0x0080(0x000C) (NeedCtorLink)
	class USkeletalMesh*                               ArmMesh;                                                  // 0x008C(0x0004)
	struct FString                                     ArmSkinPackageName;                                       // 0x0090(0x000C) (NeedCtorLink)
	class UMaterialInterface*                          RedArmMaterial;                                           // 0x009C(0x0004)
	class UMaterialInterface*                          BlueArmMaterial;                                          // 0x00A0(0x0004)
	struct FString                                     NeckStumpName;                                            // 0x00A4(0x000C) (NeedCtorLink)
	struct FVector                                     PortraitExtraOffset;                                      // 0x00B0(0x000C)
	class UPhysicsAsset*                               PhysAsset;                                                // 0x00BC(0x0004)
	TArray<class UAnimSet*>                            AnimSets;                                                 // 0x00C0(0x000C) (NeedCtorLink)
	struct FName                                       LeftFootBone;                                             // 0x00CC(0x0008)
	struct FName                                       RightFootBone;                                            // 0x00D4(0x0008)
	TArray<struct FName>                               TakeHitPhysicsFixedBones;                                 // 0x00DC(0x000C) (NeedCtorLink)
	class UClass*                                      SoundGroupClass;                                          // 0x00E8(0x0004)
	class UClass*                                      VoiceClass;                                               // 0x00EC(0x0004)
	class UMaterialInstanceConstant*                   BaseMICParent;                                            // 0x00F0(0x0004)
	class UMaterialInstanceConstant*                   BioDeathMICParent;                                        // 0x00F4(0x0004)
	class UMaterialInstance*                           BloodSplatterDecalMaterial;                               // 0x00F8(0x0004)
	struct FLinearColor                                NonTeamEmissiveColor;                                     // 0x00FC(0x0010)
	struct FLinearColor                                NonTeamTintColor;                                         // 0x010C(0x0010)
	TArray<struct FEmoteInfo>                          FamilyEmotes;                                             // 0x011C(0x000C) (NeedCtorLink)
	TArray<struct FGibInfo>                            Gibs;                                                     // 0x0128(0x000C) (NeedCtorLink)
	struct FGibInfo                                    HeadGib;                                                  // 0x0134(0x0010)
	class USkeletalMesh*                               DeathMeshSkelMesh;                                        // 0x0144(0x0004)
	class UPhysicsAsset*                               DeathMeshPhysAsset;                                       // 0x0148(0x0004)
	int                                                DeathMeshNumMaterialsToSetResident;                       // 0x014C(0x0004)
	TArray<struct FName>                               DeathMeshBreakableJoints;                                 // 0x0150(0x000C) (NeedCtorLink)
	TArray<class UMaterialInstanceTimeVarying*>        SkeletonBurnOutMaterials;                                 // 0x015C(0x000C) (NeedCtorLink)
	class UParticleSystem*                             HeadShotEffect;                                           // 0x0168(0x0004)
	struct FName                                       HeadShotGoreSocketName;                                   // 0x016C(0x0008)
	class UStaticMesh*                                 HeadShotNeckGoreAttachment;                               // 0x0174(0x0004)
	class UClass*                                      BloodEmitterClass;                                        // 0x0178(0x0004)
	TArray<struct FDistanceBasedParticleTemplate>      BloodEffects;                                             // 0x017C(0x000C) (NeedCtorLink)
	class UParticleSystem*                             GibExplosionTemplate;                                     // 0x0188(0x0004)
	float                                              DrivingDrawScale;                                         // 0x018C(0x0004)
	unsigned long                                      bIsFemale : 1;                                            // 0x0190(0x0004)
	float                                              DefaultMeshScale;                                         // 0x0194(0x0004)
	float                                              BaseTranslationOffset;                                    // 0x0198(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTFamilyInfo");
		return ptr;
	}


	int GetEmoteIndex(const struct FName& EmoteTag);
	void GetEmotes(const struct FName& Category, TArray<struct FString>* Captions, TArray<struct FName>* EmoteTags);
	class UClass* GetVoiceClass();
	int GetEmoteGroupCnt(const struct FName& Category);
	class UTexture* GetCharPortrait(int TeamNum);
	void GetTeamMaterials(int TeamNum, class UMaterialInterface** TeamMaterialHead, class UMaterialInterface** TeamMaterialBody);
	class UMaterialInterface* GetFirstPersonArmsMaterial(int TeamNum);
	class USkeletalMesh* GetFirstPersonArms();
};


// Class UTGame.UTUIDataStore_StringAliasBindingsMap
// 0x0000 (0x0110 - 0x0110)
class UUTUIDataStore_StringAliasBindingsMap : public UUDKUIDataStore_StringAliasBindingMap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataStore_StringAliasBindingsMap");
		return ptr;
	}

};


// Class UTGame.UTGame
// 0x0174 (0x04F0 - 0x037C)
class AUTGame : public AUDKGame
{
public:
	unsigned long                                      bExportMenuData : 1;                                      // 0x037C(0x0004)
	unsigned long                                      bWeaponStay : 1;                                          // 0x037C(0x0004)
	unsigned long                                      bTeamScoreRounds : 1;                                     // 0x037C(0x0004)
	unsigned long                                      bSoaking : 1;                                             // 0x037C(0x0004)
	unsigned long                                      bPlayersVsBots : 1;                                       // 0x037C(0x0004)
	unsigned long                                      bCustomBots : 1;                                          // 0x037C(0x0004)
	unsigned long                                      bAutoNumBots : 1;                                         // 0x037C(0x0004)
	unsigned long                                      bPlayersMustBeReady : 1;                                  // 0x037C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bForceRespawn : 1;                                        // 0x037C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bTempForceRespawn : 1;                                    // 0x037C(0x0004)
	unsigned long                                      bWaitForNetPlayers : 1;                                   // 0x037C(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShouldWaitForNetPlayers : 1;                             // 0x037C(0x0004)
	unsigned long                                      bWarmupRound : 1;                                         // 0x037C(0x0004) (Config)
	unsigned long                                      bFirstBlood : 1;                                          // 0x037C(0x0004)
	unsigned long                                      bQuickStart : 1;                                          // 0x037C(0x0004)
	unsigned long                                      bSkipPlaySound : 1;                                       // 0x037C(0x0004)
	unsigned long                                      bStartedCountDown : 1;                                    // 0x037C(0x0004)
	unsigned long                                      bFinalStartup : 1;                                        // 0x037C(0x0004)
	unsigned long                                      bOverTimeBroadcast : 1;                                   // 0x037C(0x0004)
	unsigned long                                      bMustHaveMultiplePlayers : 1;                             // 0x037C(0x0004)
	unsigned long                                      bPlayerBecameActive : 1;                                  // 0x037C(0x0004)
	unsigned long                                      bMustJoinBeforeStart : 1;                                 // 0x037C(0x0004)
	unsigned long                                      bDemoMode : 1;                                            // 0x037C(0x0004)
	unsigned long                                      bUndrivenVehicleDamage : 1;                               // 0x037C(0x0004)
	unsigned long                                      bStartWithLockerWeaps : 1;                                // 0x037C(0x0004)
	unsigned long                                      bAllowHoverboard : 1;                                     // 0x037C(0x0004)
	unsigned long                                      bConsoleServer : 1;                                       // 0x037C(0x0004)
	unsigned long                                      bAllowKeyboardAndMouse : 1;                               // 0x037C(0x0004)
	unsigned long                                      bScoreDeaths : 1;                                         // 0x037C(0x0004)
	unsigned long                                      bPlayedTenKills : 1;                                      // 0x037C(0x0004)
	unsigned long                                      bPlayedFiveKills : 1;                                     // 0x037C(0x0004)
	unsigned long                                      bPlayedOneKill : 1;                                       // 0x037C(0x0004)
	unsigned long                                      bMidGameHasMap : 1;                                       // 0x0380(0x0004)
	unsigned long                                      bForceMidGameMenuAtStart : 1;                             // 0x0380(0x0004) (Config)
	unsigned long                                      bNecrisLocked : 1;                                        // 0x0380(0x0004)
	unsigned long                                      bIgnoreTeamForVoiceChat : 1;                              // 0x0380(0x0004)
	unsigned long                                      bUseClassicHUD : 1;                                       // 0x0380(0x0004)
	unsigned long                                      bLogGameplayEvents : 1;                                   // 0x0380(0x0004) (Config)
	unsigned long                                      bGivePhysicsGun : 1;                                      // 0x0380(0x0004)
	struct FString                                     Acronym;                                                  // 0x0384(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x0390(0x000C) (Const, Localized, NeedCtorLink)
	int                                                ServerSkillLevel;                                         // 0x039C(0x0004) (Config, GlobalConfig)
	float                                              EndTimeDelay;                                             // 0x03A0(0x0004) (Config, GlobalConfig)
	float                                              BotRatio;                                                 // 0x03A4(0x0004) (Config, GlobalConfig)
	int                                                NetWait;                                                  // 0x03A8(0x0004) (Config)
	int                                                ClientProcessingTimeout;                                  // 0x03AC(0x0004) (Config)
	int                                                MinNetPlayers;                                            // 0x03B0(0x0004) (Config, GlobalConfig)
	int                                                RestartWait;                                              // 0x03B4(0x0004) (Config, GlobalConfig)
	int                                                WarmupTime;                                               // 0x03B8(0x0004) (Config)
	int                                                WarmupRemaining;                                          // 0x03BC(0x0004)
	unsigned char                                      StartupStage;                                             // 0x03C0(0x0001)
	unsigned char                                      WeaponTauntUsed[0x14];                                    // 0x03C1(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	int                                                DesiredPlayerCount;                                       // 0x03D8(0x0004)
	float                                              SpawnProtectionTime;                                      // 0x03DC(0x0004)
	int                                                DefaultMaxLives;                                          // 0x03E0(0x0004)
	int                                                LateEntryLives;                                           // 0x03E4(0x0004) (Config)
	int                                                PendingMatchElapsedTime;                                  // 0x03E8(0x0004)
	int                                                CountDown;                                                // 0x03EC(0x0004)
	float                                              AdjustedDifficulty;                                       // 0x03F0(0x0004)
	int                                                PlayerKills;                                              // 0x03F4(0x0004)
	int                                                PlayerDeaths;                                             // 0x03F8(0x0004)
	class ANavigationPoint*                            LastPlayerStartSpot;                                      // 0x03FC(0x0004)
	class ANavigationPoint*                            LastStartSpot;                                            // 0x0400(0x0004)
	float                                              EndTime;                                                  // 0x0404(0x0004)
	int                                                EndMessageWait;                                           // 0x0408(0x0004)
	int                                                EndMessageCounter;                                        // 0x040C(0x0004) (Transient)
	struct FString                                     RulesMenuType;                                            // 0x0410(0x000C) (NeedCtorLink)
	struct FString                                     GameUMenuType;                                            // 0x041C(0x000C) (NeedCtorLink)
	class AActor*                                      EndGameFocus;                                             // 0x0428(0x0004)
	int                                                ResetCountDown;                                           // 0x042C(0x0004) (Edit)
	int                                                ResetTimeDelay;                                           // 0x0430(0x0004) (Edit, Config)
	class AUTVehicle*                                  VehicleList;                                              // 0x0434(0x0004)
	class AUTTeamInfo*                                 EnemyRoster;                                              // 0x0438(0x0004)
	struct FString                                     EnemyRosterName;                                          // 0x043C(0x000C) (NeedCtorLink)
	TArray<class UClass*>                              DefaultInventory;                                         // 0x0448(0x000C) (NeedCtorLink)
	class UClass*                                      VictoryMessageClass;                                      // 0x0454(0x0004)
	TArray<struct FString>                             MapPrefixes;                                              // 0x0458(0x000C) (NeedCtorLink)
	class UClass*                                      ConsolePlayerControllerClass;                             // 0x0464(0x0004)
	struct FString                                     DemoPrefix;                                               // 0x0468(0x000C) (NeedCtorLink)
	class UClass*                                      BotClass;                                                 // 0x0474(0x0004)
	TArray<struct FGameMapCycle>                       GameSpecificMapCycles;                                    // 0x0478(0x000C) (Config, GlobalConfig, NeedCtorLink)
	int                                                MapCycleIndex;                                            // 0x0484(0x0004) (Config, GlobalConfig)
	TArray<struct FActiveBotInfo>                      ActiveBots;                                               // 0x0488(0x000C) (Config, GlobalConfig, NeedCtorLink)
	class ANavigationPoint*                            ScriptedStartSpot;                                        // 0x0494(0x0004)
	struct FString                                     EndOfMatchRulesTemplateStr_Scoring;                       // 0x0498(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     EndOfMatchRulesTemplateStr_ScoringSingle;                 // 0x04A4(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     EndOfMatchRulesTemplateStr_Time;                          // 0x04B0(0x000C) (Const, Localized, NeedCtorLink)
	class USpeechRecognition*                          SpeechRecognitionData;                                    // 0x04BC(0x0004)
	float                                              LastEncouragementTime;                                    // 0x04C0(0x0004)
	float                                              LastManDownTime;                                          // 0x04C4(0x0004)
	class APawn*                                       Sniper;                                                   // 0x04C8(0x0004)
	struct FName                                       MidgameScorePanelTag;                                     // 0x04CC(0x0008)
	struct FString                                     GameplayEventsWriterClassName;                            // 0x04D4(0x000C) (Config, NeedCtorLink)
	class UGameplayEventsWriter*                       GameplayEventsWriter;                                     // 0x04E0(0x0004) (Transient)
	TArray<struct FName>                               SpreeStatEvents;                                          // 0x04E4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGame");
		return ptr;
	}


	void WriteOnlineStats();
	void UpdateGameSettings();
	bool AllowCheats(class APlayerController* P);
	bool GetLocationFor(class APawn* StatusPawn, int LocationSpeechOffset, class AActor** LocationObject, int* MessageIndex);
	struct FString GetEndOfMatchRules(int InGoalScore, int InTimeLimit);
	void ContinueSeamlessTravel();
	void ProcessServerTravel(const struct FString& URL, bool bAbsolute);
	struct FString GetNextMap();
	int GetCurrentMapCycleIndex(TArray<struct FString>* MapList);
	void WriteOnlinePlayerScores();
	void ProcessSpeechRecognition(class AUTPlayerController* Speaker, TArray<struct FSpeechRecognizedWord>* Words);
	class AUTMutator* GetBaseUTMutator();
	class AActor* GetAutoObjectiveFor(class AUTPlayerController* PC);
	void HandleSeamlessTravelPlayer(class AController** C);
	void PostSeamlessTravel();
	void GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList);
	void ShowPathTo(class APlayerController* P, int TeamNum);
	bool AllowClientToTeleport(class AUTPlayerReplicationInfo* ClientPRI, class AActor* DestinationActor);
	void AddMutator(const struct FString& mutname, bool bUserAdded);
	void ViewObjective(class APlayerController* PC);
	void ActivateVehicleFactory(class AUTVehicleFactory* VF);
	void RegisterVehicle(class AUTVehicle* V);
	bool CheckScore(class APlayerReplicationInfo* Scorer);
	bool CheckMaxLives(class APlayerReplicationInfo* Scorer);
	float RatePlayerStart(class APlayerStart* P, unsigned char Team, class AController* Player);
	class APlayerStart* ChoosePlayerStart(class AController* Player, unsigned char InTeam);
	bool IsConsoleDedicatedServer();
	int CalculatedNetSpeed();
	void AddInitialBots();
	bool MatchIsInProgress();
	void EndRound(class AActor* EndRoundFocus);
	bool JustStarted(float MaxElapsedTime);
	void PlayStartupMessage();
	void PlayRegularEndOfMatchMessage();
	void PlayEndOfMatchMessage();
	bool IsAWinner(class APlayerController* C);
	bool DominatingVictory();
	class ANavigationPoint* FindPlayerStart(class AController* Player, unsigned char InTeam, const struct FString& IncomingName);
	void EndLogging(const struct FString& Reason);
	void EndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason);
	void StartMatch();
	void ResetAllPlayerMuteListsToSpectatorChannel();
	void RemovePlayerFromMuteLists(class AUTPlayerController* PC);
	void SetupPlayerMuteList(class AUTPlayerController* PC, bool bForceSpectatorChannel);
	void UpdateGameplayMuteList(class APlayerController* PC);
	void EndSpree(class AUTPlayerReplicationInfo* Killer, class AUTPlayerReplicationInfo* Other);
	void NotifySpree(class AUTPlayerReplicationInfo* Other, int Num);
	void ReduceDamage(class APawn* injured, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum);
	struct FString GetEndGameConditionRule();
	struct FString GetMapTypeRule();
	void InitGameReplicationInfo();
	class AUTTeamInfo* GetBotTeam(int TeamBots, bool bUseTeamIndex, int TeamIndex);
	void InitializeBot(class AUTBot* NewBot, class AUTTeamInfo* BotTeam, struct FCharacterInfo* BotInfo);
	class AUTBot* SpawnBot(const struct FString& BotName, bool bUseTeamIndex, int TeamIndex);
	class AUTBot* AddBot(const struct FString& BotName, bool bUseTeamIndex, int TeamIndex);
	class AUTBot* AddNamedBot(const struct FString& BotName, bool bUseTeamIndex, int TeamIndex);
	void AddBots(int Num);
	bool NeedPlayers();
	void KillBot(class AUTBot* B);
	void KillThis();
	void KillOthers();
	void KillBots();
	void Logout(class AController* Exiting);
	void DiscardInventory(class APawn* Other, class AController* Killer);
	void ChangeName(class AController* Other, const struct FString& S, bool bNameChange);
	bool CanSpectate(class APlayerController* Viewer, class APlayerReplicationInfo* ViewTarget);
	void AddDefaultInventory(class APawn* PlayerPawn);
	void CampaignSkillAdjust(class AUTBot* aBot);
	void RestartPlayer(class AController* aPlayer);
	int GetHandicapNeed(class APawn* Other);
	void AssignHoverboard(class AUTPawn* P);
	void UpdateGameSettingsCounts();
	void PostLogin(class APlayerController* NewPlayer);
	bool AtCapacity(bool bSpectator);
	void SetEndGameFocus(class APlayerReplicationInfo* Winner);
	bool CheckEndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason);
	void RestartGame();
	bool TooManyBots(class AController* botToRemove);
	float SpawnWait(class AAIController* B);
	bool WantFastSpawnFor(class AAIController* B);
	bool ShouldRespawn(class APickupFactory* Other);
	class APlayerController* Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage);
	int LevelRecommendedPlayers();
	bool SetPause(class APlayerController* PC, const struct FScriptDelegate& CanUnpauseDelegate);
	void GenericPlayerInitialization(class AController* C);
	void InitGame(const struct FString& Options, struct FString* ErrorMessage);
	bool ForceRespawn();
	void Killed(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType);
	void AdjustSkill(class AAIController* B, class APlayerController* P, bool bWinner);
	void ScoreKill(class AController* Killer, class AController* Other);
	void BroadcastDeathMessage(class AController* Killer, class AController* Other, class UClass* DamageType);
	void SetGameSpeed(float T);
	bool SkipPlaySound();
	struct FString ParseKillMessage(const struct FString& KillerName, const struct FString& VictimName, const struct FString& DeathMessage);
	void NotifyNavigationChanged(class ANavigationPoint* N);
	void FindNewObjectives(class AUTGameObjective* DisabledObjective);
	void Reset();
	bool AllowBecomeActivePlayer(class APlayerController* P);
	void DriverLeftVehicle(class AVehicle* V, class APawn* P);
	void DriverEnteredVehicle(class AVehicle* V, class APawn* P);
	class UClass* SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	bool AllowMutator(const struct FString& MutatorClassName);
	bool UseLowGore(class AWorldInfo* WI);
	void PostBeginPlay();
};


// Class UTGame.UTGameReplicationInfo
// 0x0050 (0x0274 - 0x0224)
class AUTGameReplicationInfo : public AGameReplicationInfo
{
public:
	float                                              WeaponBerserk;                                            // 0x0224(0x0004) (Net)
	int                                                MinNetPlayers;                                            // 0x0228(0x0004) (Net)
	int                                                BotDifficulty;                                            // 0x022C(0x0004) (Net)
	unsigned long                                      bWarmupRound : 1;                                         // 0x0230(0x0004) (Net)
	unsigned long                                      bForceDefaultCharacter : 1;                               // 0x0230(0x0004) (Config, GlobalConfig)
	unsigned long                                      bStoryMode : 1;                                           // 0x0230(0x0004) (Net)
	unsigned long                                      bConsoleServer : 1;                                       // 0x0230(0x0004) (Net)
	unsigned long                                      bAllowKeyboardAndMouse : 1;                               // 0x0230(0x0004) (Net)
	unsigned long                                      bAnnouncementsDisabled : 1;                               // 0x0230(0x0004) (Net)
	unsigned long                                      bRequireReady : 1;                                        // 0x0230(0x0004) (Net)
	TEnumAsByte<EFlagState>                            FlagState[0x2];                                           // 0x0234(0x0001) (Net)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0236(0x0002) MISSED OFFSET
	struct FString                                     MutatorList;                                              // 0x0238(0x000C) (Net, NeedCtorLink)
	struct FString                                     RulesString;                                              // 0x0244(0x000C) (Net, NeedCtorLink)
	TArray<class UMaterialInterface*>                  WeaponOverlays;                                           // 0x0250(0x000C) (NeedCtorLink)
	TArray<struct FMeshEffect>                         VehicleWeaponEffects;                                     // 0x025C(0x000C) (NeedCtorLink)
	struct FString                                     MessageOfTheDay;                                          // 0x0268(0x000C) (Edit, Net, Config, GlobalConfig, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameReplicationInfo");
		return ptr;
	}


	void AddGameRule(const struct FString& Rule);
	void SetHudShowScores(bool bShow);
	void ShowMidGameMenu(class AUTPlayerController* InstigatorPC, const struct FName& TabTag, bool bEnableInput);
	void Timer();
	bool FlagIsDown(int TeamIndex);
	void SetFlagDown(int TeamIndex);
	bool FlagIsHeldEnemy(int TeamIndex);
	void SetFlagHeldEnemy(int TeamIndex);
	bool FlagIsHeldFriendly(int TeamIndex);
	void SetFlagHeldFriendly(int TeamIndex);
	bool FlagsAreHome();
	bool FlagIsHome(int TeamIndex);
	void SetFlagHome(int TeamIndex);
	void CharacterProcessingComplete();
	void SortPRIArray();
	bool InOrder(class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2);
	void PostBeginPlay();
};


// Class UTGame.UTVehicle
// 0x02FC (0x0AA0 - 0x07A4)
class AUTVehicle : public AUDKVehicle
{
public:
	unsigned long                                      bDriverHoldsFlag : 1;                                     // 0x07A4(0x0004)
	unsigned long                                      bCanCarryFlag : 1;                                        // 0x07A4(0x0004)
	unsigned long                                      bValidLinkTarget : 1;                                     // 0x07A4(0x0004)
	unsigned long                                      bEnteringUnlocks : 1;                                     // 0x07A4(0x0004)
	unsigned long                                      bHasCustomEntryRadius : 1;                                // 0x07A4(0x0004)
	unsigned long                                      bKeyVehicle : 1;                                          // 0x07A4(0x0004) (Net, RepNotify)
	unsigned long                                      bMustBeUpright : 1;                                       // 0x07A4(0x0004)
	unsigned long                                      bOverrideAVRiLLocks : 1;                                  // 0x07A4(0x0004)
	unsigned long                                      bStickDeflectionThrottle : 1;                             // 0x07A4(0x0004)
	unsigned long                                      bShouldAutoCenterViewPitch : 1;                           // 0x07A4(0x0004)
	unsigned long                                      bHasWeaponBar : 1;                                        // 0x07A4(0x0004)
	unsigned long                                      bNeverReset : 1;                                          // 0x07A4(0x0004)
	unsigned long                                      bShouldLeaveForCombat : 1;                                // 0x07A4(0x0004)
	unsigned long                                      bDrawHealthOnHUD : 1;                                     // 0x07A4(0x0004)
	unsigned long                                      bDriverCastsShadow : 1;                                   // 0x07A4(0x0004)
	unsigned long                                      bHasBeenDriven : 1;                                       // 0x07A4(0x0004)
	unsigned long                                      bDropDetailWhenDriving : 1;                               // 0x07A4(0x0004)
	unsigned long                                      bLookSteerOnNormalControls : 1;                           // 0x07A4(0x0004) (Edit)
	unsigned long                                      bLookSteerOnSimpleControls : 1;                           // 0x07A4(0x0004) (Edit)
	unsigned long                                      bUsingLookSteer : 1;                                      // 0x07A4(0x0004) (Transient)
	unsigned long                                      bFindGroundExit : 1;                                      // 0x07A4(0x0004)
	unsigned long                                      bRequestedEntryWithFlag : 1;                              // 0x07A4(0x0004)
	unsigned long                                      bInitializedVehicleEffects : 1;                           // 0x07A4(0x0004)
	unsigned long                                      bRagdollDriverOnDarkwalkerHorn : 1;                       // 0x07A4(0x0004) (Edit)
	unsigned long                                      bHasTurretExplosion : 1;                                  // 0x07A4(0x0004)
	unsigned long                                      bPostRenderTraceSucceeded : 1;                            // 0x07A4(0x0004)
	unsigned long                                      bPlayingSpawnEffect : 1;                                  // 0x07A4(0x0004) (Net, RepNotify)
	unsigned long                                      bReducedFallingCollisionDamage : 1;                       // 0x07A4(0x0004)
	unsigned long                                      bRotateCameraUnderVehicle : 1;                            // 0x07A4(0x0004) (Edit)
	unsigned long                                      bNoZSmoothing : 1;                                        // 0x07A4(0x0004)
	unsigned long                                      bLimitCameraZLookingUp : 1;                               // 0x07A4(0x0004)
	unsigned long                                      bNoFollowJumpZ : 1;                                       // 0x07A4(0x0004)
	unsigned long                                      bFixedCamZ : 1;                                           // 0x07A8(0x0004)
	unsigned long                                      bCameraNeverHidesVehicle : 1;                             // 0x07A8(0x0004)
	unsigned long                                      bStopDeathCamera : 1;                                     // 0x07A8(0x0004)
	unsigned long                                      bIsConsoleTurning : 1;                                    // 0x07A8(0x0004)
	unsigned long                                      bAcceptTurretJump : 1;                                    // 0x07A8(0x0004)
	unsigned long                                      bShowDamageDebug : 1;                                     // 0x07A8(0x0004)
	unsigned long                                      bStealthVehicle : 1;                                      // 0x07A8(0x0004)
	unsigned long                                      bHasEnemyVehicleSound : 1;                                // 0x07A8(0x0004)
	unsigned long                                      bIsNecrisVehicle : 1;                                     // 0x07A8(0x0004)
	unsigned long                                      bSpectatedView : 1;                                       // 0x07A8(0x0004)
	class USoundCue*                                   VehicleLockedSound;                                       // 0x07AC(0x0004)
	TEnumAsByte<EAIVehiclePurpose>                     AIPurpose;                                                // 0x07B0(0x0001)
	unsigned char                                      LinkedToCount;                                            // 0x07B1(0x0001) (Net, RepNotify)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07B2(0x0002) MISSED OFFSET
	class AActor*                                      NoPassengerObjective;                                     // 0x07B4(0x0004)
	float                                              DeflectionReverseThresh;                                  // 0x07B8(0x0004)
	class UPhysicalMaterial*                           DrivingPhysicalMaterial;                                  // 0x07BC(0x0004) (Transient)
	class UPhysicalMaterial*                           DefaultPhysicalMaterial;                                  // 0x07C0(0x0004) (Transient)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x07C4(0x0004) (ExportObject, Component, EditInline)
	float                                              VehicleLostTime;                                          // 0x07C8(0x0004)
	float                                              PlayerStartTime;                                          // 0x07CC(0x0004)
	float                                              RespawnTime;                                              // 0x07D0(0x0004)
	float                                              InitialSpawnDelay;                                        // 0x07D4(0x0004)
	float                                              LinkHealMult;                                             // 0x07D8(0x0004)
	class UAudioComponent*                             LinkedToAudio;                                            // 0x07DC(0x0004) (ExportObject, Component, EditInline)
	class USoundCue*                                   LinkedToCue;                                              // 0x07E0(0x0004)
	class USoundCue*                                   LinkedEndSound;                                           // 0x07E4(0x0004)
	float                                              MaxDesireability;                                         // 0x07E8(0x0004)
	TArray<class USoundCue*>                           HornSounds;                                               // 0x07EC(0x000C) (NeedCtorLink)
	float                                              HornAIRadius;                                             // 0x07F8(0x0004)
	float                                              LastHornTime;                                             // 0x07FC(0x0004)
	int                                                HornIndex;                                                // 0x0800(0x0004)
	float                                              LeftStickDirDeadZone;                                     // 0x0804(0x0004) (Edit)
	float                                              LookSteerSensitivity;                                     // 0x0808(0x0004) (Edit)
	float                                              LookSteerDamping;                                         // 0x080C(0x0004) (Edit)
	float                                              LookSteerDeadZone;                                        // 0x0810(0x0004) (Edit)
	float                                              ConsoleSteerScale;                                        // 0x0814(0x0004) (Edit)
	class USoundCue*                                   LockedOnSound;                                            // 0x0818(0x0004)
	class UClass*                                      RanOverDamageType;                                        // 0x081C(0x0004)
	class USoundCue*                                   RanOverSound;                                             // 0x0820(0x0004)
	int                                                StolenAnnouncementIndex;                                  // 0x0824(0x0004)
	class USoundCue*                                   StolenSound;                                              // 0x0828(0x0004)
	class AUTVehicle*                                  NextVehicle;                                              // 0x082C(0x0004)
	class AUTVehicleFactory*                           ParentFactory;                                            // 0x0830(0x0004)
	class AUTBot*                                      Reservation;                                              // 0x0834(0x0004)
	struct FString                                     VehiclePositionString;                                    // 0x0838(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     VehicleNameString;                                        // 0x0844(0x000C) (Const, Localized, NeedCtorLink)
	struct FObjectiveAnnouncementInfo                  NeedToPickUpAnnouncement;                                 // 0x0850(0x0010) (NeedCtorLink)
	float                                              TeamBeaconPlayerInfoMaxDist;                              // 0x0860(0x0004)
	float                                              HUDExtent;                                                // 0x0864(0x0004)
	class UClass*                                      VehicleDrowningDamType;                                   // 0x0868(0x0004)
	class UClass*                                      ExplosionLightClass;                                      // 0x086C(0x0004)
	float                                              MaxExplosionLightDistance;                                // 0x0870(0x0004)
	class AEmitter*                                    DeathExplosion;                                           // 0x0874(0x0004)
	float                                              TimeTilSecondaryVehicleExplosion;                         // 0x0878(0x0004)
	int                                                ClientHealth;                                             // 0x087C(0x0004)
	TArray<class UMaterialInterface*>                  TeamMaterials;                                            // 0x0880(0x000C) (NeedCtorLink)
	class UClass*                                      VehiclePieceClass;                                        // 0x088C(0x0004)
	float                                              DamageSmokeThreshold;                                     // 0x0890(0x0004)
	class UClass*                                      ExplosionDamageType;                                      // 0x0894(0x0004)
	float                                              MaxImpactEffectDistance;                                  // 0x0898(0x0004)
	float                                              MaxFireEffectDistance;                                    // 0x089C(0x0004)
	class UParticleSystem*                             ExplosionTemplate;                                        // 0x08A0(0x0004)
	TArray<struct FDistanceBasedParticleTemplate>      BigExplosionTemplates;                                    // 0x08A4(0x000C) (NeedCtorLink)
	class UParticleSystem*                             SecondaryExplosion;                                       // 0x08B0(0x0004)
	struct FName                                       BigExplosionSocket;                                       // 0x08B4(0x0008)
	float                                              BurnOutTime;                                              // 0x08BC(0x0004)
	float                                              DeadVehicleLifeSpan;                                      // 0x08C0(0x0004)
	int                                                DelayedBurnoutCount;                                      // 0x08C4(0x0004)
	float                                              ExplosionDamage;                                          // 0x08C8(0x0004)
	float                                              ExplosionRadius;                                          // 0x08CC(0x0004)
	float                                              ExplosionMomentum;                                        // 0x08D0(0x0004)
	float                                              ExplosionInAirAngVel;                                     // 0x08D4(0x0004)
	class UCameraAnim*                                 DeathExplosionShake;                                      // 0x08D8(0x0004)
	float                                              InnerExplosionShakeRadius;                                // 0x08DC(0x0004)
	float                                              OuterExplosionShakeRadius;                                // 0x08E0(0x0004)
	struct FName                                       TurretScaleControlName;                                   // 0x08E4(0x0008)
	struct FName                                       TurretSocketName;                                         // 0x08EC(0x0008)
	TArray<struct FDistanceBasedParticleTemplate>      DistanceTurretExplosionTemplates;                         // 0x08F4(0x000C) (NeedCtorLink)
	struct FVector                                     TurretOffset;                                             // 0x0900(0x000C)
	class AUTVehicleDeathPiece*                        DestroyedTurret;                                          // 0x090C(0x0004)
	class UStaticMesh*                                 DestroyedTurretTemplate;                                  // 0x0910(0x0004)
	float                                              TurretExplosiveForce;                                     // 0x0914(0x0004)
	class USoundCue*                                   ExplosionSound;                                           // 0x0918(0x0004)
	struct FName                                       BurnTimeParameterName;                                    // 0x091C(0x0008)
	float                                              SpawnRadius;                                              // 0x0924(0x0004)
	class USoundCue*                                   SpawnInSound;                                             // 0x0928(0x0004)
	class USoundCue*                                   SpawnOutSound;                                            // 0x092C(0x0004)
	class USoundCue*                                   BoostPadSound;                                            // 0x0930(0x0004)
	struct FVector                                     FlagOffset;                                               // 0x0934(0x000C) (Edit)
	struct FRotator                                    FlagRotation;                                             // 0x0940(0x000C) (Edit)
	struct FName                                       FlagBone;                                                 // 0x094C(0x0008) (Edit)
	float                                              MapSize;                                                  // 0x0954(0x0004)
	struct FTextureCoordinates                         IconCoords;                                               // 0x0958(0x0010)
	struct FTextureCoordinates                         FlipToolTipIconCoords;                                    // 0x0968(0x0010)
	struct FTextureCoordinates                         EnterToolTipIconCoords;                                   // 0x0978(0x0010)
	struct FTextureCoordinates                         DropFlagIconCoords;                                       // 0x0988(0x0010)
	struct FTextureCoordinates                         DropOrbIconCoords;                                        // 0x0998(0x0010)
	int                                                LastHealth;                                               // 0x09A8(0x0004)
	float                                              HealthPulseTime;                                          // 0x09AC(0x0004)
	struct FVector                                     TeamBeaconOffset;                                         // 0x09B0(0x000C)
	class APlayerReplicationInfo*                      PassengerPRI;                                             // 0x09BC(0x0004) (Net)
	struct FVector                                     PassengerTeamBeaconOffset;                                // 0x09C0(0x000C)
	class UTexture2D*                                  HudIcons;                                                 // 0x09CC(0x0004)
	struct FTextureCoordinates                         HudCoords;                                                // 0x09D0(0x0010)
	TArray<class UParticleSystem*>                     SpawnInTemplates;                                         // 0x09E0(0x000C) (NeedCtorLink)
	TArray<struct FMaterialList>                       SpawnMaterialLists;                                       // 0x09EC(0x000C) (NeedCtorLink)
	struct FName                                       SpawnMaterialParameterName;                               // 0x09F8(0x0008)
	struct FInterpCurveFloat                           SpawnMaterialParameterCurve;                              // 0x0A00(0x0010) (NeedCtorLink)
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0A10(0x000C) (NeedCtorLink)
	float                                              SpawnInTime;                                              // 0x0A1C(0x0004)
	class UMaterialInterface*                          BurnOutMaterial[0x2];                                     // 0x0A20(0x0004)
	float                                              CollisionDamageMult;                                      // 0x0A28(0x0004)
	float                                              LastCollisionDamageTime;                                  // 0x0A2C(0x0004)
	float                                              SeatCameraScale;                                          // 0x0A30(0x0004) (Edit)
	float                                              OldCamPosZ;                                               // 0x0A34(0x0004)
	float                                              CameraSmoothingFactor;                                    // 0x0A38(0x0004)
	float                                              DefaultFOV;                                               // 0x0A3C(0x0004)
	TArray<struct FTimePosition>                       OldPositions;                                             // 0x0A40(0x000C) (NeedCtorLink)
	float                                              CameraLag;                                                // 0x0A4C(0x0004)
	struct FVector                                     CameraOffset;                                             // 0x0A50(0x000C)
	float                                              LookForwardDist;                                          // 0x0A5C(0x0004) (Edit)
	float                                              MinCameraDistSq;                                          // 0x0A60(0x0004)
	struct FVector                                     OldCameraPosition;                                        // 0x0A64(0x000C)
	float                                              DisabledTime;                                             // 0x0A70(0x0004) (Edit)
	float                                              TimeLastDisabled;                                         // 0x0A74(0x0004)
	class UParticleSystem*                             DisabledTemplate;                                         // 0x0A78(0x0004)
	class UParticleSystemComponent*                    DisabledEffectComponent;                                  // 0x0A7C(0x0004) (ExportObject, Component, EditInline)
	class UStaticMesh*                                 ReferenceMovementMesh;                                    // 0x0A80(0x0004)
	float                                              LastEnemyWarningTime;                                     // 0x0A84(0x0004)
	TArray<class USoundNodeWave*>                      EnemyVehicleSound;                                        // 0x0A88(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      VehicleDestroyedSound;                                    // 0x0A94(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicle");
		return ptr;
	}


	bool ShouldLeaveForCombat(class AUTBot* B);
	void ApplyWeaponEffects(int OverlayFlags, int SeatIndex);
	struct FLinearColor GetSeatColor(int SeatIndex, bool bIsPlayersSeat);
	void DisplaySeats(class AUTHUD* HUD, class UCanvas* Canvas, float PosX, float PosY, float Width, float Height, int SIndex);
	void DisplayExtraHud(class AUTHUD* HUD, class UCanvas* Canvas, const struct FVector2D& pos, float Width, float Height, int SIndex);
	void DrawBarGraph(float X, float Y, float Width, float MaxWidth, float Height, class UCanvas* DrawCanvas);
	void DisplayHud(class AUTHUD* HUD, class UCanvas* Canvas, const struct FVector2D& HudPOS, int SeatIndex);
	struct FName GetVehicleKillStatName();
	bool CanAttack(class AActor* Other);
	void DetachDriver(class APawn* P);
	void SetMovementEffect(int SeatIndex, bool bSetActive, class AUTPawn* UTP);
	void SetSeatStoragePawn(int SeatIndex, class APawn* PawnToSit);
	void SetShieldActive(int SeatIndex, bool bActive);
	void OnExitVehicle(class UUTSeqAct_ExitVehicle* Action);
	void GetSVehicleDebug(TArray<struct FString>* DebugInfo);
	class AUTGib* SpawnGibVehicle(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UStaticMesh* TheMesh, const struct FVector& HitLocation, bool bSpinGib, const struct FVector& ImpulseDirection, class UParticleSystem* PS_OnBreak, class UParticleSystem* PS_Trail);
	void ApplyRandomMorphDamage(int Amount);
	void ApplyMorphHeal(int Amount);
	void ReceivedHealthChange();
	void InitializeMorphs();
	void RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision);
	float GetCollisionDamageModifier(TArray<struct FRigidBodyContactInfo>* ContactInfos);
	int GetHealth(int SeatIndex);
	void OnPropertyChange(const struct FName& PropName);
	struct FString GetHumanReadableName();
	void OnDriverPhysicsAssetChanged(class AUTPawn* UTP);
	void SitDriver(class AUTPawn* UTP, int SeatIndex);
	void AttachDriver(class APawn* P);
	void CheckDamageSmoke();
	void StopVehicleSounds();
	void TurretExplosion();
	void RBPenetrationDestroy();
	bool ShouldSpawnExplosionLight(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SetBurnOut();
	void DisableCollision();
	void DisableDamageSmoke();
	void TurnOffShadows();
	void StartBurnOut();
	void AdjustCameraScale(bool bMoveCameraIn);
	void VehicleCalcCamera(float DeltaTime, int SeatIndex, bool bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart);
	float LimitCameraZ(float CurrentCamZ, float OriginalCamZ, int SeatIndex);
	struct FVector GetCameraStart(int SeatIndex);
	struct FVector GetCameraFocus(int SeatIndex);
	bool CalcCamera(float DeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void FindGoodEndView(class APlayerController* PC, struct FRotator* GoodRotation);
	void VehicleAdjustFlashLocation(int SeatIndex, unsigned char FireModeNum, const struct FVector& NewLocation, bool bClear);
	void VehicleAdjustFlashCount(int SeatIndex, unsigned char FireModeNum, bool bClear);
	void SpawnImpactEmitter(const struct FVector& HitLocation, const struct FVector& HitNormal, int SeatIndex, struct FMaterialImpactEffect* ImpactEffect);
	void VehicleWeaponImpactEffects(const struct FVector& HitLocation, int SeatIndex);
	class AActor* FindWeaponHitNormal(const struct FVector& End, const struct FVector& Start, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo);
	void VehicleWeaponFireEffects(const struct FVector& HitLocation, int SeatIndex);
	void VehicleWeaponStoppedFiring(bool bViaReplication, int SeatIndex);
	void WeaponStoppedFiring(class AWeapon* InWeapon, bool bViaReplication);
	void VehicleWeaponFired(bool bViaReplication, const struct FVector& HitLocation, int SeatIndex);
	void WeaponFired(class AWeapon* InWeapon, bool bViaReplication, const struct FVector& HitLocation);
	void CauseMuzzleFlashLight(int SeatIndex);
	void GetWeaponViewAxes(class AUTWeapon* WhichWeapon, struct FVector* XAxis, struct FVector* YAxis, struct FVector* ZAxis);
	bool OverrideEndFire(unsigned char FireModeNum);
	bool OverrideBeginFire(unsigned char FireModeNum);
	struct FRotator GetWeaponAim(class AUTVehicleWeapon* VWeapon);
	struct FVector GetPhysicalFireStartLoc(class AUTWeapon* ForWeapon);
	struct FVector GetEffectLocation(int SeatIndex);
	void GetBarrelLocationAndRotation(int SeatIndex, struct FVector* SocketLocation, struct FRotator* SocketRotation);
	void ClearFlashLocation(class AWeapon* Who);
	void SetFlashLocation(class AWeapon* Who, unsigned char FireModeNum, const struct FVector& NewLoc);
	void IncrementFlashCount(class AWeapon* Who, unsigned char FireModeNum);
	void ClearFlashCount(class AWeapon* Who);
	void SetFiringMode(class AWeapon* Weap, unsigned char FiringModeNum);
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void InitializeTurrets();
	void PreCacheSeatNames();
	void InitializeSeats();
	bool ImportantVehicle();
	class AActor* GetHomingTarget(class AUTProjectile* Seeker, class AController* InstigatedBy);
	void TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum);
	void PlayTakeHitEffects();
	void PlayHit(float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, const struct FVector& Momentum, const struct FTraceHitInfo& HitInfo);
	void StopLinkedEffect();
	void StartLinkedEffect();
	void DecrementLinkedToCount();
	void IncrementLinkedToCount();
	bool HealDamage(int Amount, class AController* Healer, class UClass* DamageType);
	bool AllowLinkThroughOwnedActor(class AActor* OwnedActor);
	bool TeamLink(int TeamNum);
	void SetReservation(class AController* C);
	bool StopsProjectile(class AProjectile* P);
	bool SpokenFor(class AController* C);
	float ReservationCostMultiplier(class APawn* P);
	float BotDesireability(class AUTSquadAI* S, int TeamIndex, class AActor* Objective);
	bool OpenPositionFor(class APawn* P);
	bool Occupied();
	void CheckReset();
	void PassengerLeave(int SeatIndex);
	bool DriverLeave(bool bForceLeave);
	bool PassengerEnter(class APawn* P, int SeatIndex);
	int GetFirstAvailableSeat();
	void DriverLeft();
	void AttachFlag(class AUTCarriedObject* FlagActor, class APawn* NewDriver);
	void HoldGameObject(class AUDKCarriedObject* GameObj);
	bool DriverEnter(class APawn* P);
	void HandleEnteringFlag(class AUTPlayerReplicationInfo* EnteringPRI);
	class AUTVehicle* GetMoveTargetFor(class APawn* P);
	int NumPassengers();
	void UpdateControllerOnPossess(bool bVehicleTransition);
	void PlayHorn();
	bool CheckTurretPitchLimit(int NeededPitch, int SeatIndex);
	bool TooCloseToAttack(class AActor* Other);
	void LockOnWarning(class AUDKProjectile* IncomingMissile);
	void SendLockOnMessage(int Switch);
	void ShootMissile(class AProjectile* P);
	void IncomingMissile(class AProjectile* P);
	bool Dodge(TEnumAsByte<EDoubleClickDir> DoubleClickMove);
	void TeamChanged_VehicleEffects();
	void TeamChanged();
	void SetTeamNum(unsigned char T);
	void PostRenderPassengerBeacon(class APlayerController* PC, class UCanvas* Canvas, const struct FLinearColor& TeamColor, const struct FColor& TextColor, class AUTWeapon* Weap, class APlayerReplicationInfo* InPassengerPRI, const struct FVector& InPassengerTeamBeaconOffset);
	void RenderPassengerBeacons(class APlayerController* PC, class UCanvas* Canvas, const struct FLinearColor& TeamColor, const struct FColor& TextColor, class AUTWeapon* Weap);
	float GetDisplayedHealth();
	void PostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	bool ShouldShowUseable(class APlayerController* PC, float Dist);
	void VehicleLocked(class APawn* P);
	bool KickOutBot();
	bool TryToDrive(class APawn* P);
	bool CanEnterVehicle(class APawn* P);
	class APlayerReplicationInfo* GetSeatPRI(int SeatNum);
	bool InCustomEntryRadius(class APawn* P);
	void BlowupVehicle();
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	class AController* GetCollisionDamageInstigator();
	void TornOff();
	bool ChangeSeat(class AController* ControllerToMove, int RequestedSeat);
	bool HasPriority(class AController* first, class AController* second);
	void ServerChangeSeat(int RequestedSeat);
	void ServerAdjacentSeat(int Direction, class AController* C);
	class AController* GetControllerForSeatIndex(int SeatIndex);
	int GetSeatIndexForController(class AController* ControllerToMove);
	bool AnySeatAvailable();
	bool SeatAvailable(int SeatIndex);
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void DrivingStatusChanged();
	void SetKeyVehicle();
	void ReplicatedEvent(const struct FName& VarName);
	void WeaponRotationChanged(int SeatIndex);
	struct FRotator GetViewRotation();
	bool ShouldClamp();
	struct FRotator GetClampedViewRotation();
	void ProcessViewRotation(float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	void ServerSetConsoleTurning(bool bNewConsoleTurning);
	int GetSeatIndexFromPrefix(const struct FString& Prefix);
	void TakeFireDamage();
	void EnableVehicle();
	bool DisableVehicle();
	void SetTexturesToBeResident(bool bActive);
	void Destroyed();
	void DriverRadiusDamage(float DamageAmount, float DamageRadius, class AController* EventInstigator, class UClass* DamageType, float Momentum, const struct FVector& HitLocation, class AActor* DamageCauser, float DamageFalloffExponent);
	void TakeWaterDamage();
	void PancakeOther(class APawn* Other);
	void RanInto(class AActor* Other);
	bool FindAutoExit(class APawn* ExitingDriver);
	struct FRotator ExitRotation();
	void EntryAnnouncement(class AController* C);
	void VehicleEvent(const struct FName& EventTag);
	void PlayVehicleAnimation(const struct FName& EventTag);
	void PlayVehicleSound(const struct FName& SoundTag);
	void TriggerVehicleEffect(const struct FName& EventTag);
	void SetVehicleEffectParms(const struct FName& TriggerName, class UParticleSystemComponent* PSC);
	void InitializeEffects();
	void CreateVehicleEffect(int EffectIndex);
	bool CriticalChargeAttack(class AUTBot* B);
	bool RecommendCharge(class AUTBot* B, class APawn* Enemy);
	bool IsDriverSeat(class AVehicle* TestSeatPawn);
	bool ContinueOnFoot();
	float AdjustedStrength();
	void RenderMapIcon(class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, const struct FLinearColor& FinalColor);
	void DrawKillIcon(class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY);
	void DisplayWeaponBar(class UCanvas* Canvas, class AUTHUD* HUD);
	class UClass* GetRanOverDamageType();
	void EjectSeat(int SeatIdx);
	void StopSpawnEffect();
	void PlaySpawnEffect();
	float GetChargePower();
	void FellOutOfWorld(class UClass* dmgType);
	void SetInputs(float InForward, float InStrafe, float InUp);
	void UpdateLookSteerStatus();
	void CreateDamageMaterialInstance();
	void ReattachMesh();
	void UpdateShadowSettings(bool bWantShadow);
	void PostBeginPlay();
};


// Class UTGame.UTLocalMessage
// 0x0014 (0x0064 - 0x0050)
class UUTLocalMessage : public ULocalMessage
{
public:
	int                                                MessageArea;                                              // 0x0050(0x0004)
	int                                                AnnouncementPriority;                                     // 0x0054(0x0004)
	unsigned long                                      bShowPortrait : 1;                                        // 0x0058(0x0004)
	float                                              AnnouncementVolume;                                       // 0x005C(0x0004)
	float                                              AnnouncementDelay;                                        // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTLocalMessage");
		return ptr;
	}


	bool KilledByVictoryMessage(int AnnouncementIndex);
	float GetPos(int Switch, class AHUD* myHUD);
	bool AddAnnouncement(class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	bool ShouldBeRemoved(class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	unsigned char AnnouncementLevel(unsigned char MessageIndex);
};


// Class UTGame.UTVehicleCantCarryFlagMessage
// 0x0010 (0x0074 - 0x0064)
class UUTVehicleCantCarryFlagMessage : public UUTLocalMessage
{
public:
	struct FString                                     FlagMessage;                                              // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	class USoundNodeWave*                              FlagAnnouncement;                                         // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleCantCarryFlagMessage");
		return ptr;
	}


	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	unsigned char AnnouncementLevel(unsigned char MessageIndex);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTGameObjective
// 0x011F (0x03FC - 0x02DD)
class AUTGameObjective : public AUDKGameObjective
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	unsigned long                                      bAlreadyRendered : 1;                                     // 0x02E0(0x0004)
	unsigned long                                      bAllowRemoteUse : 1;                                      // 0x02E0(0x0004)
	unsigned long                                      bFirstObjective : 1;                                      // 0x02E0(0x0004)
	unsigned long                                      bHasSensor : 1;                                           // 0x02E0(0x0004)
	unsigned long                                      bIsConstructing : 1;                                      // 0x02E0(0x0004)
	unsigned long                                      bIsDisabled : 1;                                          // 0x02E0(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x02E0(0x0004)
	unsigned long                                      bPostRenderTraceSucceeded : 1;                            // 0x02E0(0x0004)
	unsigned long                                      bHasLocationSpeech : 1;                                   // 0x02E0(0x0004)
	unsigned long                                      bScriptRenderAdditionalMinimap : 1;                       // 0x02E0(0x0004)
	unsigned char                                      StartTeam;                                                // 0x02E4(0x0001)
	unsigned char                                      DefensePriority;                                          // 0x02E5(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02E6(0x0002) MISSED OFFSET
	class AUTSquadAI*                                  DefenseSquad;                                             // 0x02E8(0x0004)
	class AUTDefensePoint*                             DefensePoints;                                            // 0x02EC(0x0004)
	struct FString                                     ObjectiveName;                                            // 0x02F0(0x000C) (Edit, Const, Localized, NeedCtorLink)
	TArray<class ANavigationPoint*>                    VehicleParkingSpots;                                      // 0x02FC(0x000C) (Edit, NeedCtorLink)
	class AVolume*                                     MyBaseVolume;                                             // 0x0308(0x0004) (Edit)
	float                                              BaseRadius;                                               // 0x030C(0x0004) (Edit)
	TArray<struct FScorerRecord>                       Scorers;                                                  // 0x0310(0x000C) (NeedCtorLink)
	int                                                Score;                                                    // 0x031C(0x0004)
	class AUTGameObjective*                            NextObjective;                                            // 0x0320(0x0004)
	struct FLinearColor                                ControlColor[0x3];                                        // 0x0324(0x0010)
	struct FTextureCoordinates                         AttackCoords;                                             // 0x0354(0x0010)
	float                                              IconPosX;                                                 // 0x0364(0x0004)
	float                                              IconPosY;                                                 // 0x0368(0x0004)
	float                                              IconExtentX;                                              // 0x036C(0x0004)
	float                                              IconExtentY;                                              // 0x0370(0x0004)
	class UMaterial*                                   HudMaterial;                                              // 0x0374(0x0004)
	float                                              MaxSensorRange;                                           // 0x0378(0x0004)
	float                                              CameraViewDistance;                                       // 0x037C(0x0004)
	TArray<class AUTVehicleFactory*>                   VehicleFactories;                                         // 0x0380(0x000C) (NeedCtorLink)
	TArray<class APlayerStart*>                        PlayerStarts;                                             // 0x038C(0x000C) (NeedCtorLink)
	TArray<class AUTTeamStaticMesh*>                   TeamStaticMeshes;                                         // 0x0398(0x000C) (NeedCtorLink)
	struct FObjectiveAnnouncementInfo                  AttackAnnouncement;                                       // 0x03A4(0x0010) (Edit, NeedCtorLink)
	struct FObjectiveAnnouncementInfo                  DefendAnnouncement;                                       // 0x03B4(0x0010) (Edit, NeedCtorLink)
	float                                              HighlightScale;                                           // 0x03C4(0x0004)
	float                                              MaxHighlightScale;                                        // 0x03C8(0x0004)
	float                                              HighlightSpeed;                                           // 0x03CC(0x0004)
	float                                              MinimapIconScale;                                         // 0x03D0(0x0004)
	float                                              LastHighlightUpdate;                                      // 0x03D4(0x0004)
	float                                              LastPostRenderTraceTime;                                  // 0x03D8(0x0004)
	float                                              MaxBeaconDistance;                                        // 0x03DC(0x0004)
	TArray<class USoundNodeWave*>                      LocationSpeech;                                           // 0x03E0(0x000C) (Edit, NeedCtorLink)
	struct FLinearColor                                AttackLinearColor;                                        // 0x03EC(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameObjective");
		return ptr;
	}


	bool ReachedParkingSpot(class APawn* P);
	void MarkShootSpotsFor(class APawn* P);
	void TriggerFlagEvent(const struct FName& EventType, class AController* EventInstigator);
	void SetAlarm(bool bNowOn);
	class AUTCarriedObject* GetFlag();
	bool ValidSpawnPointFor(unsigned char TeamIndex);
	bool TeleportTo(class AUTPawn* Traveler);
	void FindGoodEndView(class APlayerController* PC, struct FRotator* GoodRotation);
	void SetTeam(unsigned char TeamIndex);
	void ShareScore(int TotalScore, const struct FString& EventDesc);
	void AddScorer(class AUTPlayerReplicationInfo* PRI, float Pct);
	void ClientReset();
	void Reset();
	bool BetterObjectiveThan(class AUTGameObjective* Best, unsigned char DesiredTeamNum, unsigned char RequesterTeamNum);
	int GetNumDefenders();
	bool TellBotHowToDisable(class AUTBot* B);
	struct FString GetHumanReadableName();
	bool NearObjective(class APawn* P);
	bool BotNearObjective(class AAIController* C);
	bool CanDoubleJump(class APawn* Other);
	bool NeedsHealing();
	bool TeamLink(int TeamNum);
	bool TellBotHowToHeal(class AUTBot* B);
	bool Shootable();
	bool IsActive();
	bool IsNeutral();
	bool IsCritical();
	void DrawMapSelection(class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner);
	void RenderExtraDetails(class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float ColorPercent, bool bSelected);
	void RenderMinimap(class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float ColorPercent);
	void HighlightOnMinimap(int Switch);
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	bool UsedBy(class APawn* P);
	class AUTGameObjective* FindNearestFriendlyNode(int TeamIndex);
	void ReplicatedEvent(const struct FName& VarName);
	void UpdateTeamStaticMeshes();
	void AddTeamStaticMesh(class AUTTeamStaticMesh* SMesh);
	void Destroyed();
	class AActor* GetAutoObjectiveActor(class AUTPlayerController* PC);
	class USoundNodeWave* GetLocationSpeechFor(class APlayerController* PC, int LocationSpeechOffset, int MessageIndex);
	int GetLocationMessageIndex(class AUTBot* B, class APawn* StatusPawn);
	struct FVector GetHUDOffset(class APlayerController* PC, class UCanvas* Canvas);
	bool IsStandalone();
	void PostBeginPlay();
};


// Class UTGame.UTWeapon
// 0x02D4 (0x05B8 - 0x02E4)
class AUTWeapon : public AUDKWeapon
{
public:
	unsigned long                                      bExportMenuData : 1;                                      // 0x02E4(0x0004)
	unsigned long                                      bWasLocked : 1;                                           // 0x02E4(0x0004)
	unsigned long                                      bUseCustomCoordinates : 1;                                // 0x02E4(0x0004) (Config)
	unsigned long                                      bSmallWeapons : 1;                                        // 0x02E4(0x0004) (Config, GlobalConfig)
	unsigned long                                      bSuperWeapon : 1;                                         // 0x02E4(0x0004)
	unsigned long                                      bNeverForwardPendingFire : 1;                             // 0x02E4(0x0004)
	unsigned long                                      bSuppressSounds : 1;                                      // 0x02E4(0x0004)
	unsigned long                                      bUsesOffhand : 1;                                         // 0x02E4(0x0004) (Edit)
	unsigned long                                      bPendingShow : 1;                                         // 0x02E4(0x0004)
	unsigned long                                      bShowAltMuzzlePSCWhenWeaponHidden : 1;                    // 0x02E4(0x0004)
	unsigned long                                      bMuzzleFlashPSCLoops : 1;                                 // 0x02E4(0x0004)
	unsigned long                                      bMuzzleFlashAttached : 1;                                 // 0x02E4(0x0004)
	unsigned long                                      bSplashJump : 1;                                          // 0x02E4(0x0004)
	unsigned long                                      bRecommendSplashDamage : 1;                               // 0x02E4(0x0004)
	unsigned long                                      bSniping : 1;                                             // 0x02E4(0x0004)
	unsigned long                                      bFastRepeater : 1;                                        // 0x02E4(0x0004)
	unsigned long                                      bLockedAimWhileFiring : 1;                                // 0x02E4(0x0004)
	unsigned long                                      bUsingAimingHelp : 1;                                     // 0x02E4(0x0004)
	unsigned long                                      bAllowFiringWithoutController : 1;                        // 0x02E4(0x0004)
	unsigned long                                      bTargetFrictionEnabled : 1;                               // 0x02E4(0x0004) (Edit, Config)
	unsigned long                                      bTargetAdhesionEnabled : 1;                               // 0x02E4(0x0004) (Edit, Config)
	unsigned long                                      bForceHidden : 1;                                         // 0x02E4(0x0004)
	unsigned long                                      bHasLocationSpeech : 1;                                   // 0x02E4(0x0004)
	class UClass*                                      AmmoPickupClass;                                          // 0x02E8(0x0004)
	int                                                LockerAmmoCount;                                          // 0x02EC(0x0004)
	int                                                MaxAmmoCount;                                             // 0x02F0(0x0004)
	TArray<int>                                        ShotCost;                                                 // 0x02F4(0x000C) (NeedCtorLink)
	TArray<float>                                      MinReloadPct;                                             // 0x0300(0x000C) (NeedCtorLink)
	TArray<class UCameraAnim*>                         FireCameraAnim;                                           // 0x030C(0x000C) (NeedCtorLink)
	class UForceFeedbackWaveform*                      WeaponFireWaveForm;                                       // 0x0318(0x0004)
	TArray<struct FName>                               EffectSockets;                                            // 0x031C(0x000C) (NeedCtorLink)
	int                                                IconX;                                                    // 0x0328(0x0004)
	int                                                IconY;                                                    // 0x032C(0x0004)
	int                                                IconWidth;                                                // 0x0330(0x0004)
	int                                                IconHeight;                                               // 0x0334(0x0004)
	float                                              SwitchAbortTime;                                          // 0x0338(0x0004)
	struct FTextureCoordinates                         IconCoordinates;                                          // 0x033C(0x0010)
	struct FTextureCoordinates                         CrossHairCoordinates;                                     // 0x034C(0x0010)
	struct FTextureCoordinates                         SimpleCrossHairCoordinates;                               // 0x035C(0x0010)
	class UTexture2D*                                  CrosshairImage;                                           // 0x036C(0x0004)
	struct FTextureCoordinates                         LockedCrossHairCoordinates;                               // 0x0370(0x0010)
	float                                              CurrentLockedScale;                                       // 0x0380(0x0004)
	float                                              StartLockedScale;                                         // 0x0384(0x0004)
	float                                              FinalLockedScale;                                         // 0x0388(0x0004)
	float                                              LockedScaleTime;                                          // 0x038C(0x0004)
	float                                              LockedStartTime;                                          // 0x0390(0x0004)
	float                                              LastHitEnemyTime;                                         // 0x0394(0x0004)
	struct FColor                                      CrosshairColor;                                           // 0x0398(0x0004) (Config)
	float                                              CrosshairScaling;                                         // 0x039C(0x0004)
	struct FTextureCoordinates                         CustomCrosshairCoordinates;                               // 0x03A0(0x0010) (Config)
	float                                              DroppedPickupOffsetZ;                                     // 0x03B0(0x0004)
	TArray<unsigned char>                              bZoomedFireMode;                                          // 0x03B4(0x000C) (NeedCtorLink)
	unsigned char                                      ZoomedFireModeNum;                                        // 0x03C0(0x0001)
	unsigned char                                      InventoryGroup;                                           // 0x03C1(0x0001)
	TEnumAsByte<EAmmoWidgetDisplayStyle>               AmmoDisplayType;                                          // 0x03C2(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03C3(0x0001) MISSED OFFSET
	float                                              ZoomedTargetFOV;                                          // 0x03C4(0x0004)
	float                                              ZoomedRate;                                               // 0x03C8(0x0004)
	float                                              ZoomFadeTime;                                             // 0x03CC(0x0004)
	class USoundCue*                                   ZoomInSound;                                              // 0x03D0(0x0004)
	class USoundCue*                                   ZoomOutSound;                                             // 0x03D4(0x0004)
	class UClass*                                      AttachmentClass;                                          // 0x03D8(0x0004)
	struct FVector                                     PivotTranslation;                                         // 0x03DC(0x000C)
	float                                              GroupWeight;                                              // 0x03E8(0x0004)
	float                                              InventoryWeight;                                          // 0x03EC(0x0004)
	TArray<struct FName>                               WeaponFireAnim;                                           // 0x03F0(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               ArmFireAnim;                                              // 0x03FC(0x000C) (Edit, NeedCtorLink)
	class UAnimSet*                                    ArmsAnimSet;                                              // 0x0408(0x0004) (Edit)
	struct FName                                       WeaponPutDownAnim;                                        // 0x040C(0x0008) (Edit)
	struct FName                                       ArmsPutDownAnim;                                          // 0x0414(0x0008) (Edit)
	struct FName                                       WeaponEquipAnim;                                          // 0x041C(0x0008) (Edit)
	struct FName                                       ArmsEquipAnim;                                            // 0x0424(0x0008) (Edit)
	TArray<struct FName>                               WeaponIdleAnims;                                          // 0x042C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               ArmIdleAnims;                                             // 0x0438(0x000C) (Edit, NeedCtorLink)
	TArray<class USoundCue*>                           WeaponFireSnd;                                            // 0x0444(0x000C) (Edit, NeedCtorLink)
	class USoundCue*                                   WeaponPutDownSnd;                                         // 0x0450(0x0004) (Edit)
	class USoundCue*                                   WeaponEquipSnd;                                           // 0x0454(0x0004) (Edit)
	float                                              BobDamping;                                               // 0x0458(0x0004) (Edit)
	float                                              JumpDamping;                                              // 0x045C(0x0004) (Edit)
	float                                              MaxPitchLag;                                              // 0x0460(0x0004)
	float                                              MaxYawLag;                                                // 0x0464(0x0004)
	float                                              LastRotUpdate;                                            // 0x0468(0x0004)
	struct FRotator                                    LastRotation;                                             // 0x046C(0x000C)
	float                                              OldLeadMag[0x2];                                          // 0x0478(0x0004)
	int                                                OldRotDiff[0x2];                                          // 0x0480(0x0004)
	float                                              OldMaxDiff[0x2];                                          // 0x0488(0x0004)
	float                                              RotChgSpeed;                                              // 0x0490(0x0004)
	float                                              ReturnChgSpeed;                                           // 0x0494(0x0004)
	struct FColor                                      WeaponColor;                                              // 0x0498(0x0004)
	float                                              WeaponCanvasXPct;                                         // 0x049C(0x0004)
	float                                              WeaponCanvasYPct;                                         // 0x04A0(0x0004)
	struct FName                                       MuzzleFlashSocket;                                        // 0x04A4(0x0008)
	class UUTParticleSystemComponent*                  MuzzleFlashPSC;                                           // 0x04AC(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystem*                             MuzzleFlashPSCTemplate;                                   // 0x04B0(0x0004)
	class UParticleSystem*                             MuzzleFlashAltPSCTemplate;                                // 0x04B4(0x0004)
	struct FColor                                      MuzzleFlashColor;                                         // 0x04B8(0x0004)
	class UUDKExplosionLight*                          MuzzleFlashLight;                                         // 0x04BC(0x0004) (ExportObject, Component, EditInline)
	class UClass*                                      MuzzleFlashLightClass;                                    // 0x04C0(0x0004)
	float                                              MuzzleFlashDuration;                                      // 0x04C4(0x0004) (Edit)
	struct FVector                                     PlayerViewOffset;                                         // 0x04C8(0x000C) (Edit)
	struct FVector                                     SmallWeaponsOffset;                                       // 0x04D4(0x000C) (Edit)
	float                                              WideScreenOffsetScaling;                                  // 0x04E0(0x0004) (Edit)
	struct FRotator                                    WidescreenRotationOffset;                                 // 0x04E4(0x000C)
	struct FVector                                     HiddenWeaponsOffset;                                      // 0x04F0(0x000C)
	float                                              ProjectileSpawnOffset;                                    // 0x04FC(0x0004)
	struct FRotator                                    LockerRotation;                                           // 0x0500(0x000C)
	struct FVector                                     LockerOffset;                                             // 0x050C(0x000C)
	float                                              CurrentRating;                                            // 0x0518(0x0004)
	float                                              aimerror;                                                 // 0x051C(0x0004)
	struct FObjectiveAnnouncementInfo                  NeedToPickUpAnnouncement;                                 // 0x0520(0x0010) (NeedCtorLink)
	float                                              AimingHelpRadius[0x2];                                    // 0x0530(0x0004)
	float                                              ZoomedTurnSpeedScalePct;                                  // 0x0538(0x0004) (Edit, Config)
	float                                              TargetFrictionDistanceMin;                                // 0x053C(0x0004) (Edit, Config)
	float                                              TargetFrictionDistancePeak;                               // 0x0540(0x0004) (Edit, Config)
	float                                              TargetFrictionDistanceMax;                                // 0x0544(0x0004) (Edit, Config)
	struct FInterpCurveFloat                           TargetFrictionDistanceCurve;                              // 0x0548(0x0010) (Edit, Config, NeedCtorLink)
	struct FVector2D                                   TargetFrictionMultiplierRange;                            // 0x0558(0x0008) (Edit, Config)
	float                                              TargetFrictionPeakRadiusScale;                            // 0x0560(0x0004) (Edit, Config)
	float                                              TargetFrictionPeakHeightScale;                            // 0x0564(0x0004) (Edit, Config)
	struct FVector                                     TargetFrictionOffset;                                     // 0x0568(0x000C) (Edit, Config)
	float                                              TargetFrictionZoomedBoostValue;                           // 0x0574(0x0004) (Edit, Config)
	float                                              TargetAdhesionTimeMax;                                    // 0x0578(0x0004) (Edit, Config)
	float                                              TargetAdhesionDistanceMax;                                // 0x057C(0x0004) (Edit, Config)
	float                                              TargetAdhesionAimDistY;                                   // 0x0580(0x0004) (Edit, Config)
	float                                              TargetAdhesionAimDistZ;                                   // 0x0584(0x0004) (Edit, Config)
	struct FVector2D                                   TargetAdhesionScaleRange;                                 // 0x0588(0x0008) (Edit, Config)
	float                                              TargetAdhesionScaleAmountMin;                             // 0x0590(0x0004) (Edit, Config)
	float                                              TargetAdhesionTargetVelocityMin;                          // 0x0594(0x0004) (Edit, Config)
	float                                              TargetAdhesionPlayerVelocityMin;                          // 0x0598(0x0004) (Edit, Config)
	float                                              TargetAdhesionZoomedBoostValue;                           // 0x059C(0x0004) (Edit, Config)
	TArray<class USoundNodeWave*>                      LocationSpeech;                                           // 0x05A0(0x000C) (NeedCtorLink)
	struct FString                                     UseHintString;                                            // 0x05AC(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeapon");
		return ptr;
	}


	bool EnableFriendlyWarningCrosshair();
	void DrawKillIcon(class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY);
	bool CoversScreenSpace(const struct FVector& ScreenLoc, class UCanvas* Canvas);
	void HolderEnteredVehicle();
	bool CanViewAccelerationWhenFiring();
	void ClientWeaponThrown();
	void DropFrom(const struct FVector& StartLocation, const struct FVector& StartVelocity);
	float GetPowerPerc();
	void Activate();
	void ThrottleLook(float* aTurn, float* aLookUp);
	bool RecommendLongRangedAttack();
	float DetourWeight(class APawn* Other, float PathWeight);
	void SetWeaponOverlayFlags(class AUTPawn* OwnerPawn);
	void Destroyed();
	class UAnimNodeSequence* GetArmAnimNodeSeq();
	void SetupArmsAnim();
	void RefireCheckTimer();
	struct FVector GetEffectLocation();
	struct FVector GetPhysicalFireStartLoc(const struct FVector& AimDir);
	void FiringPutDownWeapon();
	bool TryPutDown();
	bool AllowSwitchTo(class AWeapon* NewWeapon);
	void PreloadTextures(bool bForcePreload);
	void FireAmmunition();
	void ClientWeaponSet(bool bOptionalSet, bool bDoNotActivate);
	void SendToFiringState(unsigned char FireModeNum);
	void EndFire(unsigned char FireModeNum);
	void ClientEndFire(unsigned char FireModeNum);
	void EndZoom(class AUTPlayerController* PC);
	void StartZoom(class AUTPlayerController* PC);
	bool CheckZoom(unsigned char FireModeNum);
	TEnumAsByte<EZoomState> GetZoomedState();
	void ProcessInstantHit(unsigned char FiringMode, const struct FImpactInfo& Impact, int NumHits);
	class AProjectile* ProjectileFire();
	struct FImpactInfo InstantAimHelp(const struct FVector& StartTrace, const struct FVector& EndTrace, const struct FImpactInfo& RealImpact);
	void InstantFire();
	struct FVector InstantFireEndTrace(const struct FVector& StartTrace);
	struct FVector InstantFireStartTrace();
	bool bReadyToFire();
	void WeaponEmpty();
	bool DenyPickupQuery(class UClass* ItemClass, class AActor* Pickup);
	void Loaded(bool bUseWeaponMax);
	bool NeedAmmo();
	float DesireAmmo(bool bDetour);
	bool HasAnyAmmo();
	bool HasAmmo(unsigned char FireModeNum, int Amount);
	bool AmmoMaxed(int Mode);
	int AddAmmo(int Amount);
	void ConsumeAmmo(unsigned char FireModeNum);
	bool StillFiring(unsigned char FireMode);
	bool ReadyToFire(bool bFinished);
	bool IsFullyCharged();
	unsigned char BestMode();
	bool ShouldFireWithoutTarget();
	bool SplashJump();
	float RangedAttackTime();
	float SuggestDefenseStyle();
	float SuggestAttackStyle();
	bool RecommendRangedAttack();
	bool FocusOnLeader(bool bLeaderFiring);
	bool FireOnRelease();
	float GetOptimalRangeFor(class AActor* Target);
	bool CanHeal(class AActor* Other);
	float GetDamageRadius();
	float BotDesireability(class AActor* PickupHolder, class APawn* P, class AController* C);
	bool CanAttack(class AActor* Other);
	float GetWeaponRating();
	float RelativeStrengthVersus(class APawn* P, float Dist);
	void AdjustPlayerDamage(class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, int* Damage, struct FVector* Momentum);
	int LagRot(int NewValue, int LastValue, float MaxDiff, int Index);
	bool ShouldLagRot();
	void SetPosition(class AUDKPawn* Holder);
	TEnumAsByte<EWeaponHand> GetHand();
	bool CanThrow();
	void ServerReselectWeapon();
	void GetViewAxes(struct FVector* XAxis, struct FVector* YAxis, struct FVector* ZAxis);
	void PerformWeaponChange();
	void ChangeVisibility(bool bIsVisible);
	void DetachMuzzleFlash();
	void DetachWeapon();
	void AttachMuzzleFlash();
	void SetMuzzleFlashParams(class UParticleSystemComponent* PSC);
	void AttachWeaponTo(class USkeletalMeshComponent* MeshCpnt, const struct FName& SocketName);
	void PlayWeaponEquip();
	float GetEquipTime();
	void TimeWeaponEquipping();
	void PlayWeaponPutDown();
	void TimeWeaponPutDown();
	void StopMuzzleFlash();
	void CauseMuzzleFlash();
	void CauseMuzzleFlashLight();
	void MuzzleFlashTimer();
	void PlayFiringSound();
	void WeaponPlaySound(class USoundCue* Sound, float NoiseLoudness);
	void WeaponCalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot);
	void ShakeView();
	void StopFireEffects(unsigned char FireModeNum);
	void PlayFireEffects(unsigned char FireModeNum, const struct FVector& HitLocation);
	void PlayWeaponAnimation(const struct FName& Sequence, float fDesiredDuration, bool bLoop, class USkeletalMeshComponent* SkelMesh);
	void PlayArmAnimation(const struct FName& Sequence, float fDesiredDuration, bool OffHand, bool bLoop, class USkeletalMeshComponent* SkelMesh);
	float GetFireInterval(unsigned char FireModeNum);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	int GetAmmoCount();
	void DrawLockedOn(class AHUD* H);
	void DrawWeaponCrosshair(class AHUD* HUD);
	void ActiveRenderOverlays(class AHUD* H);
	void SetSkin(class UMaterial* NewMaterial);
	bool ShouldSwitchTo(class AUTWeapon* InWeapon);
	void CalcInventoryWeight();
	void ReplicatedEvent(const struct FName& VarName);
	void CreateOverlayMesh();
	void AdjustWeaponTimingForConsole();
	void PostBeginPlay();
	void ServerStartFire(unsigned char FireModeNum);
};


// Class UTGame.UTIdleKickWarningMessage
// 0x0000 (0x0064 - 0x0064)
class UUTIdleKickWarningMessage : public UUTLocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTIdleKickWarningMessage");
		return ptr;
	}


	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTEmitter
// 0x0000 (0x01E0 - 0x01E0)
class AUTEmitter : public AEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmitter");
		return ptr;
	}


	void SetLightEnvironment(class ULightEnvironmentComponent* Light);
	void SetTemplate(class UParticleSystem* NewTemplate, bool bDestroyOnFinish);
	class UParticleSystem* GetTemplateForDistance(const struct FVector& SpawnLocation, class AWorldInfo* WI, TArray<struct FDistanceBasedParticleTemplate>* TemplateList);
};


// Class UTGame.UTReplicatedEmitter
// 0x0008 (0x01E8 - 0x01E0)
class AUTReplicatedEmitter : public AUTEmitter
{
public:
	class UParticleSystem*                             EmitterTemplate;                                          // 0x01E0(0x0004)
	float                                              ServerLifeSpan;                                           // 0x01E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTReplicatedEmitter");
		return ptr;
	}


	void PostBeginPlay();
};


// Class UTGame.UTWillowWhisp
// 0x00BC (0x02A4 - 0x01E8)
class AUTWillowWhisp : public AUTReplicatedEmitter
{
public:
	struct FVector                                     WayPoints[0xF];                                           // 0x01E8(0x000C) (Net)
	int                                                NumPoints;                                                // 0x029C(0x0004) (Net, RepNotify)
	int                                                Position;                                                 // 0x02A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWillowWhisp");
		return ptr;
	}


	void StartNextPath();
	void SetTemplate(class UParticleSystem* NewTemplate, bool bDestroyOnFinish);
	void ReplicatedEvent(const struct FName& VarName);
	void SetInitialState();
	void PostBeginPlay();
};


// Class UTGame.UTObjectiveSpecificMessage
// 0x0000 (0x0064 - 0x0064)
class UUTObjectiveSpecificMessage : public UUTLocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTObjectiveSpecificMessage");
		return ptr;
	}


	void SetHUDDisplay(class APlayerController* P, int Switch, const struct FString& Text, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	struct FObjectiveAnnouncementInfo GetObjectiveAnnouncement(unsigned char MessageIndex, class UObject* Objective, class APlayerController* PC);
};


// Class UTGame.UTObjectiveAnnouncement
// 0x0000 (0x0064 - 0x0064)
class UUTObjectiveAnnouncement : public UUTObjectiveSpecificMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTObjectiveAnnouncement");
		return ptr;
	}


	void SetHUDDisplay(class APlayerController* P, int Switch, const struct FString& Text, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	bool ShouldBeRemoved(class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex);
	struct FObjectiveAnnouncementInfo GetObjectiveAnnouncement(unsigned char MessageIndex, class UObject* Objective, class APlayerController* PC);
};


// Class UTGame.UTWeaponPawn
// 0x0000 (0x0608 - 0x0608)
class AUTWeaponPawn : public AUDKWeaponPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponPawn");
		return ptr;
	}


	void ApplyWeaponEffects(int OverlayFlags, int SeatIndex);
	void DisplayHud(class AUTHUD* HUD, class UCanvas* Canvas, const struct FVector2D& HudPOS, int SIndex);
	bool TooCloseToAttack(class AActor* Other);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	bool DriverLeave(bool bForceLeave);
	void FaceRotation(const struct FRotator& NewRotation, float DeltaTime);
	void HoldGameObject(class AUDKCarriedObject* GameObj);
	void AttachDriver(class APawn* P);
	void SetBaseEyeheight();
	float GetCollisionRadius();
	bool DoJump(bool bUpdating);
	void SetMovementPhysics();
	void BaseChange();
	void JumpOffPawn();
	void AddVelocity(const struct FVector& NewVelocity, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo);
	void DropToGround();
	bool PlaceExitingDriver(class APawn* ExitingDriver);
	void AdjustCameraScale(bool bIn);
	void ServerChangeSeat(int RequestedSeat);
	void ServerAdjacentSeat(int Direction, class AController* C);
	void DriverLeft();
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void ClearFlashLocation(class AWeapon* Who);
	void SetFlashLocation(class AWeapon* Who, unsigned char FireModeNum, const struct FVector& NewLoc);
	void ClearFlashCount(class AWeapon* Who);
	void IncrementFlashCount(class AWeapon* Who, unsigned char FireModeNum);
	void SetFiringMode(class AWeapon* Weap, unsigned char FiringModeNum);
	void ProcessViewRotation(float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot);
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void ReplicatedEvent(const struct FName& VarName);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	struct FName GetVehicleDrivingStatName();
};


// Class UTGame.UTTeamGameMessage
// 0x0040 (0x00A4 - 0x0064)
class UUTTeamGameMessage : public UUTLocalMessage
{
public:
	struct FString                                     RequestTeamSwapPrefix;                                    // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     RequestTeamSwapPostfix;                                   // 0x0070(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     YouAreOnRedMessage;                                       // 0x007C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     YouAreOnBlueMessage;                                      // 0x0088(0x000C) (Const, Localized, NeedCtorLink)
	struct FColor                                      RedDrawColor;                                             // 0x0094(0x0004)
	struct FColor                                      BlueDrawColor;                                            // 0x0098(0x0004)
	class USoundNodeWave*                              AnnouncerSounds[0x2];                                     // 0x009C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeamGameMessage");
		return ptr;
	}


	struct FColor GetColor(int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	float GetPos(int Switch, class AHUD* myHUD);
	int GetFontSize(int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTTimerMessage
// 0x000C (0x0070 - 0x0064)
class UUTTimerMessage : public UUTLocalMessage
{
public:
	TArray<struct FObjectiveAnnouncementInfo>          Announcements;                                            // 0x0064(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTimerMessage");
		return ptr;
	}


	int GetFontSize(int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTStartupMessage
// 0x006C (0x00D0 - 0x0064)
class UUTStartupMessage : public UUTLocalMessage
{
public:
	struct FString                                     Stage[0x7];                                               // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     NotReady;                                                 // 0x00B8(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     SinglePlayer;                                             // 0x00C4(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTStartupMessage");
		return ptr;
	}


	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTHUD
// 0x0488 (0x0A7C - 0x05F4)
class AUTHUD : public AUTHUDBase
{
public:
	class UClass*                                      WeaponSwitchMessage;                                      // 0x05F4(0x0004)
	class UTexture2D*                                  AltHudTexture;                                            // 0x05F8(0x0004) (Const)
	class UTexture2D*                                  TalkingTexture;                                           // 0x05FC(0x0004) (Const)
	class UTexture2D*                                  UT3GHudTexture;                                           // 0x0600(0x0004) (Const)
	struct FLinearColor                                LC_White;                                                 // 0x0604(0x0010) (Const)
	struct FColor                                      GrayColor;                                                // 0x0614(0x0004) (Const)
	float                                              LastAmmoPickupTime;                                       // 0x0618(0x0004)
	float                                              LastHealthPickupTime;                                     // 0x061C(0x0004)
	float                                              LastArmorPickupTime;                                      // 0x0620(0x0004)
	class APawn*                                       PawnOwner;                                                // 0x0624(0x0004)
	class AUTPawn*                                     UTPawnOwner;                                              // 0x0628(0x0004)
	class AUTPlayerReplicationInfo*                    UTOwnerPRI;                                               // 0x062C(0x0004)
	unsigned long                                      bShowAllAI : 1;                                           // 0x0630(0x0004)
	unsigned long                                      bHudMessageRendered : 1;                                  // 0x0630(0x0004)
	unsigned long                                      bShowWeaponbar : 1;                                       // 0x0630(0x0004) (Config)
	unsigned long                                      bOnlyShowWeaponBarIfChanging : 1;                         // 0x0630(0x0004) (Config)
	unsigned long                                      bNoWeaponNumbers : 1;                                     // 0x0630(0x0004)
	unsigned long                                      bFadeOutHitEffect : 1;                                    // 0x0630(0x0004)
	unsigned long                                      bShowClock : 1;                                           // 0x0630(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowDoll : 1;                                            // 0x0630(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowAmmo : 1;                                            // 0x0630(0x0004) (Config, GlobalConfig)
	unsigned long                                      bHasMap : 1;                                              // 0x0630(0x0004)
	unsigned long                                      bShowMap : 1;                                             // 0x0630(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowPowerups : 1;                                        // 0x0630(0x0004) (Config, GlobalConfig)
	unsigned long                                      bDisplayingPowerups : 1;                                  // 0x0630(0x0004)
	unsigned long                                      bShowScoring : 1;                                         // 0x0630(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowFragCount : 1;                                       // 0x0630(0x0004)
	unsigned long                                      bHasLeaderboard : 1;                                      // 0x0630(0x0004)
	unsigned long                                      bShowLeaderboard : 1;                                     // 0x0630(0x0004)
	unsigned long                                      bShowVehicle : 1;                                         // 0x0630(0x0004) (Config, GlobalConfig)
	unsigned long                                      bShowVehicleArmorCount : 1;                               // 0x0630(0x0004)
	unsigned long                                      bIsFirstPlayer : 1;                                       // 0x0630(0x0004)
	TArray<class UFont*>                               HudFonts;                                                 // 0x0634(0x000C) (NeedCtorLink)
	class UMaterial*                                   CharPortraitMaterial;                                     // 0x0640(0x0004)
	class UMaterialInstanceConstant*                   CharPortraitMI;                                           // 0x0644(0x0004)
	float                                              CharPortraitYPerc;                                        // 0x0648(0x0004)
	float                                              CharPortraitXPerc;                                        // 0x064C(0x0004)
	float                                              CharPortraitTime;                                         // 0x0650(0x0004)
	float                                              CharPortraitSlideTime;                                    // 0x0654(0x0004)
	float                                              CharPortraitSlideTransitionTime;                          // 0x0658(0x0004)
	struct FVector2D                                   CharPortraitSize;                                         // 0x065C(0x0008)
	class AUTPlayerReplicationInfo*                    CharPRI;                                                  // 0x0664(0x0004)
	class AUTPlayerReplicationInfo*                    CharPendingPRI;                                           // 0x0668(0x0004)
	float                                              WeaponBarScale;                                           // 0x066C(0x0004)
	float                                              WeaponBoxWidth;                                           // 0x0670(0x0004)
	float                                              WeaponBoxHeight;                                          // 0x0674(0x0004)
	float                                              HUDScaleX;                                                // 0x0678(0x0004)
	float                                              HUDScaleY;                                                // 0x067C(0x0004)
	struct FLinearColor                                TeamHUDColor;                                             // 0x0680(0x0010)
	struct FColor                                      TeamTextColor;                                            // 0x0690(0x0004)
	float                                              WeaponBarY;                                               // 0x0694(0x0004)
	class AUTWeapon*                                   WeaponList[0xA];                                          // 0x0698(0x0004)
	float                                              CurrentWeaponScale[0xA];                                  // 0x06C0(0x0004)
	float                                              SelectedWeaponScale;                                      // 0x06E8(0x0004)
	float                                              BounceWeaponScale;                                        // 0x06EC(0x0004)
	float                                              SelectedWeaponAlpha;                                      // 0x06F0(0x0004)
	float                                              OffWeaponAlpha;                                           // 0x06F4(0x0004)
	float                                              EmptyWeaponAlpha;                                         // 0x06F8(0x0004)
	float                                              LastHUDUpdateTime;                                        // 0x06FC(0x0004)
	int                                                BouncedWeapon;                                            // 0x0700(0x0004)
	float                                              WeaponScaleSpeed;                                         // 0x0704(0x0004)
	float                                              WeaponBarXOffset;                                         // 0x0708(0x0004)
	float                                              WeaponXOffset;                                            // 0x070C(0x0004)
	float                                              SelectedBoxScale;                                         // 0x0710(0x0004)
	float                                              WeaponYScale;                                             // 0x0714(0x0004)
	float                                              WeaponYOffset;                                            // 0x0718(0x0004)
	float                                              WeaponAmmoLength;                                         // 0x071C(0x0004)
	float                                              WeaponAmmoThickness;                                      // 0x0720(0x0004)
	float                                              WeaponAmmoOffsetX;                                        // 0x0724(0x0004)
	float                                              WeaponAmmoOffsetY;                                        // 0x0728(0x0004)
	float                                              SelectedWeaponAmmoOffsetX;                                // 0x072C(0x0004)
	float                                              LastWeaponBarDrawnTime;                                   // 0x0730(0x0004)
	float                                              MessageOffset[0x7];                                       // 0x0734(0x0004)
	class UTexture2D*                                  MapBackground;                                            // 0x0750(0x0004)
	float                                              MapDefaultSize;                                           // 0x0754(0x0004) (Config)
	struct FString                                     DisplayedOrders;                                          // 0x0758(0x000C) (NeedCtorLink)
	float                                              OrderUpdateTime;                                          // 0x0764(0x0004)
	class AWeapon*                                     LastSelectedWeapon;                                       // 0x0768(0x0004)
	float                                              SafeRegionPct;                                            // 0x076C(0x0004) (Config)
	float                                              FullWidth;                                                // 0x0770(0x0004)
	float                                              FullHeight;                                               // 0x0774(0x0004)
	int                                                MaxNoOfIndicators;                                        // 0x0778(0x0004)
	TArray<struct FDamageInfo>                         DamageData;                                               // 0x077C(0x000C) (NeedCtorLink)
	class UMaterial*                                   BaseMaterial;                                             // 0x0788(0x0004)
	float                                              FadeTime;                                                 // 0x078C(0x0004)
	struct FName                                       PositionalParamName;                                      // 0x0790(0x0008)
	struct FName                                       FadeParamName;                                            // 0x0798(0x0008)
	float                                              HitEffectIntensity;                                       // 0x07A0(0x0004)
	struct FLinearColor                                MaxHitEffectColor;                                        // 0x07A4(0x0010)
	float                                              HitEffectFadeTime;                                        // 0x07B4(0x0004)
	class UMaterialEffect*                             HitEffect;                                                // 0x07B8(0x0004)
	class UMaterialInstanceConstant*                   HitEffectMaterialInstance;                                // 0x07BC(0x0004) (Transient)
	struct FVector2D                                   ClockPosition;                                            // 0x07C0(0x0008)
	struct FVector2D                                   DollPosition;                                             // 0x07C8(0x0008)
	float                                              LastDollUpdate;                                           // 0x07D0(0x0004)
	float                                              DollVisibility;                                           // 0x07D4(0x0004)
	struct FTextureCoordinates                         HealthBGCoords;                                           // 0x07D8(0x0010)
	float                                              HealthOffsetX;                                            // 0x07E8(0x0004)
	float                                              HealthBGOffsetX;                                          // 0x07EC(0x0004)
	float                                              HealthBGOffsetY;                                          // 0x07F0(0x0004)
	float                                              HealthIconX;                                              // 0x07F4(0x0004)
	float                                              HealthIconY;                                              // 0x07F8(0x0004)
	float                                              HealthTextX;                                              // 0x07FC(0x0004)
	float                                              HealthTextY;                                              // 0x0800(0x0004)
	int                                                LastHealth;                                               // 0x0804(0x0004)
	float                                              HealthPulseTime;                                          // 0x0808(0x0004)
	struct FTextureCoordinates                         ArmorBGCoords;                                            // 0x080C(0x0010)
	float                                              ArmorBGOffsetX;                                           // 0x081C(0x0004)
	float                                              ArmorBGOffsetY;                                           // 0x0820(0x0004)
	float                                              ArmorIconX;                                               // 0x0824(0x0004)
	float                                              ArmorIconY;                                               // 0x0828(0x0004)
	float                                              ArmorTextX;                                               // 0x082C(0x0004)
	float                                              ArmorTextY;                                               // 0x0830(0x0004)
	int                                                LastArmorAmount;                                          // 0x0834(0x0004)
	float                                              ArmorPulseTime;                                           // 0x0838(0x0004)
	struct FVector2D                                   AmmoPosition;                                             // 0x083C(0x0008)
	float                                              AmmoBarOffsetY;                                           // 0x0844(0x0004)
	struct FTextureCoordinates                         AmmoBGCoords;                                             // 0x0848(0x0010)
	float                                              AmmoTextOffsetX;                                          // 0x0858(0x0004)
	float                                              AmmoTextOffsetY;                                          // 0x085C(0x0004)
	class AUTWeapon*                                   LastWeapon;                                               // 0x0860(0x0004)
	int                                                LastAmmoCount;                                            // 0x0864(0x0004)
	float                                              AmmoPulseTime;                                            // 0x0868(0x0004)
	struct FVector2D                                   MapPosition;                                              // 0x086C(0x0008)
	struct FVector2D                                   PowerupDims;                                              // 0x0874(0x0008)
	float                                              PowerupYPos;                                              // 0x087C(0x0004)
	float                                              PowerupTransitionTime;                                    // 0x0880(0x0004)
	struct FVector2D                                   ScoringPosition;                                          // 0x0884(0x0008)
	float                                              FragPulseTime;                                            // 0x088C(0x0004)
	int                                                LastFragCount;                                            // 0x0890(0x0004)
	struct FVector2D                                   VehiclePosition;                                          // 0x0894(0x0008)
	float                                              DamageIndicatorSize;                                      // 0x089C(0x0004) (Config, GlobalConfig)
	float                                              NameplateWidth;                                           // 0x08A0(0x0004)
	float                                              NameplateBubbleWidth;                                     // 0x08A4(0x0004)
	struct FTextureCoordinates                         NameplateLeft;                                            // 0x08A8(0x0010)
	struct FTextureCoordinates                         NameplateCenter;                                          // 0x08B8(0x0010)
	struct FTextureCoordinates                         NameplateBubble;                                          // 0x08C8(0x0010)
	struct FTextureCoordinates                         NameplateRight;                                           // 0x08D8(0x0010)
	struct FLinearColor                                BlackBackgroundColor;                                     // 0x08E8(0x0010)
	struct FString                                     WarmupString;                                             // 0x08F8(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     WaitingForMatch;                                          // 0x0904(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     PressFireToBegin;                                         // 0x0910(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     SpectatorMessage;                                         // 0x091C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     DeadMessage;                                              // 0x0928(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     FireToRespawnMessage;                                     // 0x0934(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     YouHaveWon;                                               // 0x0940(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     YouHaveLost;                                              // 0x094C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     PlaceMarks[0x4];                                          // 0x0958(0x000C) (Const, Localized, NeedCtorLink)
	struct FTextureCoordinates                         PawnDollBGCoords;                                         // 0x0988(0x0010)
	float                                              DollOffsetX;                                              // 0x0998(0x0004)
	float                                              DollOffsetY;                                              // 0x099C(0x0004)
	float                                              DollWidth;                                                // 0x09A0(0x0004)
	float                                              DollHeight;                                               // 0x09A4(0x0004)
	float                                              VestX;                                                    // 0x09A8(0x0004)
	float                                              VestY;                                                    // 0x09AC(0x0004)
	float                                              VestWidth;                                                // 0x09B0(0x0004)
	float                                              VestHeight;                                               // 0x09B4(0x0004)
	float                                              ThighX;                                                   // 0x09B8(0x0004)
	float                                              ThighY;                                                   // 0x09BC(0x0004)
	float                                              ThighWidth;                                               // 0x09C0(0x0004)
	float                                              ThighHeight;                                              // 0x09C4(0x0004)
	float                                              HelmetX;                                                  // 0x09C8(0x0004)
	float                                              HelmetY;                                                  // 0x09CC(0x0004)
	float                                              HelmetWidth;                                              // 0x09D0(0x0004)
	float                                              HelmetHeight;                                             // 0x09D4(0x0004)
	float                                              BootX;                                                    // 0x09D8(0x0004)
	float                                              BootY;                                                    // 0x09DC(0x0004)
	float                                              BootWidth;                                                // 0x09E0(0x0004)
	float                                              BootHeight;                                               // 0x09E4(0x0004)
	float                                              THeight;                                                  // 0x09E8(0x0004)
	float                                              TX;                                                       // 0x09EC(0x0004)
	float                                              TY;                                                       // 0x09F0(0x0004)
	struct FLinearColor                                AmmoBarColor;                                             // 0x09F4(0x0010) (Const)
	struct FLinearColor                                RedLinearColor;                                           // 0x0A04(0x0010) (Const)
	struct FLinearColor                                BlueLinearColor;                                          // 0x0A14(0x0010) (Const)
	struct FLinearColor                                DMLinearColor;                                            // 0x0A24(0x0010) (Const)
	struct FLinearColor                                WhiteLinearColor;                                         // 0x0A34(0x0010) (Const)
	struct FLinearColor                                GoldLinearColor;                                          // 0x0A44(0x0010) (Const)
	struct FLinearColor                                SilverLinearColor;                                        // 0x0A54(0x0010) (Const)
	class UTexture2D*                                  BkgTexture;                                               // 0x0A64(0x0004) (Edit)
	struct FTextureCoordinates                         BkgTexCoords;                                             // 0x0A68(0x0010) (Edit)
	struct FColor                                      BkgTexColor;                                              // 0x0A78(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTHUD");
		return ptr;
	}


	void DisplayConsoleMessages();
	void DisplayLeaderBoard(const struct FVector2D& pos);
	void DrawNameplateBackground(const struct FVector2D& pos, float WordWidth, const struct FLinearColor& NameplateColor, float WordHeight);
	void DisplayFragCount(const struct FVector2D& pos);
	void DisplayScoring();
	void DisplayPowerups();
	void DisplayAmmo(class AUTWeapon* Weapon);
	void DisplayPawnDoll();
	void DisplayClock();
	void DisplayHUDMessage(const struct FString& Message, float XOffsetPct, float YOffsetPct);
	void DisplayPortrait(float DeltaTime);
	void HidePortrait();
	void ShowPortrait(class AUTPlayerReplicationInfo* ShowPRI, float PortraitDuration, bool bOverrideCurrentSpeaker);
	class UFont* GetFontSizeIndex(int FontSize);
	struct FString FormatTime(int Seconds);
	void DrawBarGraph(float X, float Y, float Width, float MaxWidth, float Height, class UCanvas* DrawCanvas, const struct FColor& BarColor, const struct FColor& BackColor);
	void DrawHealth(float X, float Y, float Width, float MaxWidth, float Height, class UCanvas* DrawCanvas, unsigned char Alpha);
	void DrawBeaconBackground(float X, float Y, float Width, float Height, const struct FLinearColor& DrawColor, class UCanvas* DrawCanvas);
	void DrawBackground(float X, float Y, float Width, float Height, const struct FLinearColor& DrawColor, class UCanvas* DrawCanvas);
	void DisplayDamage();
	void UpdateDamage();
	void FlashDamage(float FlashPosition);
	void DisplayHit(const struct FVector& HitDir, int Damage, class UClass* DamageType);
	void GetTeamColor(int TeamIndex, struct FLinearColor* ImageColor, struct FColor* TextColor);
	void StartMusic();
	class UUIInteraction* GetUIController(class ULocalPlayer** LP);
	void DrawAIOverlays();
	void DisplayMap();
	void DisplayWeaponBar();
	void DrawPostGameHud();
	void DrawLivingHud();
	void DisplayLocalMessages();
	void DrawMicIcon();
	void DrawGameHud();
	void ShowSquadRoutes();
	void ShowAllAI();
	void DrawHUD();
	void PostRender();
	void DrawMessageText(const struct FHudLocalizedMessage& LocalMessage, float ScreenX, float ScreenY);
	void GetScreenCoords(float PosY, float* ScreenX, float* ScreenY, struct FHudLocalizedMessage* InMessage);
	struct FVector2D ResolveHUDPosition(const struct FVector2D& Position, float Width, float Height);
	void Message(class APlayerReplicationInfo* PRI, const struct FString& msg, const struct FName& MsgType, float Lifetime);
	void PostBeginPlay();
	void ShrinkHUD();
	void GrowHUD();
	void SetDisplayedOrders(const struct FString& OrderText);
	void DrawTileCentered(class UTexture2D* Tex, float XL, float YL, float U, float V, float UL, float VL, const struct FLinearColor& C);
};


// Class UTGame.UTCarriedObject
// 0x00EC (0x02F8 - 0x020C)
class AUTCarriedObject : public AUDKCarriedObject
{
public:
	unsigned long                                      bLastSecondSave : 1;                                      // 0x020C(0x0004)
	unsigned long                                      bLeavingDroppedState : 1;                                 // 0x020C(0x0004)
	unsigned long                                      bUseTeamColorForIcon : 1;                                 // 0x020C(0x0004)
	float                                              TossDistance;                                             // 0x0210(0x0004)
	class AUTPlayerReplicationInfo*                    HolderPRI;                                                // 0x0214(0x0004) (Net, RepNotify)
	class APawn*                                       Holder;                                                   // 0x0218(0x0004)
	float                                              TakenTime;                                                // 0x021C(0x0004)
	float                                              MaxDropTime;                                              // 0x0220(0x0004)
	class AController*                                 FirstTouch;                                               // 0x0224(0x0004)
	TArray<class AController*>                         Assists;                                                  // 0x0228(0x000C) (NeedCtorLink)
	float                                              MapSize;                                                  // 0x0234(0x0004)
	struct FTextureCoordinates                         IconCoords;                                               // 0x0238(0x0010)
	class UTexture2D*                                  IconTexture;                                              // 0x0248(0x0004)
	struct FName                                       GameObjBone3P;                                            // 0x024C(0x0008)
	struct FVector                                     GameObjOffset3P;                                          // 0x0254(0x000C)
	struct FRotator                                    GameObjRot3P;                                             // 0x0260(0x000C)
	struct FVector                                     GameObjOffset1P;                                          // 0x026C(0x000C)
	struct FRotator                                    GameObjRot1P;                                             // 0x0278(0x000C)
	class USoundCue*                                   PickupSound;                                              // 0x0284(0x0004)
	class USoundCue*                                   DroppedSound;                                             // 0x0288(0x0004)
	class USoundCue*                                   ReturnedSound;                                            // 0x028C(0x0004)
	class APawn*                                       OldHolder;                                                // 0x0290(0x0004)
	class UPointLightComponent*                        FlagLight;                                                // 0x0294(0x0004) (ExportObject, Component, EditInline)
	float                                              DefaultRadius;                                            // 0x0298(0x0004)
	float                                              DefaultHeight;                                            // 0x029C(0x0004)
	TArray<struct FObjectiveAnnouncementInfo>          NeedToPickUpAnnouncements;                                // 0x02A0(0x000C) (NeedCtorLink)
	float                                              HighlightScale;                                           // 0x02AC(0x0004)
	float                                              MaxHighlightScale;                                        // 0x02B0(0x0004)
	float                                              HighlightSpeed;                                           // 0x02B4(0x0004)
	float                                              LastHighlightUpdate;                                      // 0x02B8(0x0004)
	float                                              LastFlagSeeTime;                                          // 0x02BC(0x0004)
	int                                                LastSeeMessageIndex;                                      // 0x02C0(0x0004)
	struct FLinearColor                                RedColor;                                                 // 0x02C4(0x0010)
	struct FLinearColor                                BlueColor;                                                // 0x02D4(0x0010)
	struct FLinearColor                                GoldColor;                                                // 0x02E4(0x0010)
	class UForceFeedbackWaveform*                      PickUpWaveForm;                                           // 0x02F4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCarriedObject");
		return ptr;
	}


	void CheckPain();
	void CheckFit();
	void AutoSendHome();
	void CheckTouching();
	void LogDropped(class AController* EventInstigator);
	void LogReturned(class AController* EventInstigator);
	void LogTaken(class AController* EventInstigator);
	class AUDKGameObjective* GetKismetEventObjective();
	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
	void NotReachableBy(class APawn* P);
	void ClientReturnedHome();
	void ReplicatedEvent(const struct FName& VarName);
	void FellOutOfWorld(class UClass* dmgType);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	bool ValidHolder(class AActor* Other);
	class AActor* Position();
	void ClearHolder();
	void CalcSetHome();
	void BroadcastTakenDroppedMessage(class AController* EventInstigator);
	void BroadcastTakenFromBaseMessage(class AController* EventInstigator);
	void BroadcastDroppedMessage(class AController* EventInstigator);
	void BroadcastReturnedMessage();
	void KismetSendHome();
	void SendHome(class AController* Returner);
	void Drop(class AController* Killer);
	void Score();
	void SendFlagMessage(class AController* C);
	void SetHolder(class AController* C);
	void RenderEnemyMapIcon(class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, class AUTGameObjective* NearbyObjective);
	void RenderMapIcon(class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner);
	void DrawIcon(class UCanvas* Canvas, const struct FVector& IconLocation, float IconWidth, float IconAlpha);
	class UTexture2D* GetIconTexture();
	void HighlightOnMinimap(int Switch);
	bool ShouldMinimapRenderFor(class APlayerController* PC);
	bool FlagUse(class AController* C);
	void PostBeginPlay();
};


// Class UTGame.UTPickupFactory
// 0x003C (0x03A8 - 0x036C)
class AUTPickupFactory : public AUDKPickupFactory
{
public:
	class AController*                                 TeamOwner[0x4];                                           // 0x036C(0x0004)
	class USoundCue*                                   RespawnSound;                                             // 0x037C(0x0004)
	class UAudioComponent*                             PickupReadySound;                                         // 0x0380(0x0004) (ExportObject, Component, EditInline)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0384(0x0004) (ExportObject, Component, EditInline)
	struct FName                                       PickupStatName;                                           // 0x0388(0x0008)
	unsigned long                                      bHasLocationSpeech : 1;                                   // 0x0390(0x0004)
	TArray<class USoundNodeWave*>                      LocationSpeech;                                           // 0x0394(0x000C) (NeedCtorLink)
	float                                              LastSeekNotificationTime;                                 // 0x03A0(0x0004)
	class UForceFeedbackWaveform*                      PickUpWaveForm;                                           // 0x03A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPickupFactory");
		return ptr;
	}


	void PickedUpBy(class APawn* P);
	void SetInitialState();
	void SetPickupHidden();
	void SetPickupVisible();
	void InitPickupMeshEffects();
	struct FName GetPickupStatName();
	void SetPickupMesh();
	void StartPulse(const struct FLinearColor& TargetEmissive);
	bool StopsProjectile(class AProjectile* P);
	void RespawnEffect();
	void UpdateHUD(class AUTHUD* H);
	bool ShouldCamp(class AUTBot* B, float MaxWait);
	void ReplicatedEvent(const struct FName& VarName);
	void ShutDown();
	void DisablePickup();
	void SetResOut();
	void PostBeginPlay();
};


// Class UTGame.UTWeaponLocker
// 0x0088 (0x0430 - 0x03A8)
class AUTWeaponLocker : public AUTPickupFactory
{
public:
	TArray<struct FWeaponEntry>                        Weapons;                                                  // 0x03A8(0x000C) (Edit, Component, NeedCtorLink)
	struct FReplacementWeaponEntry                     ReplacementWeapons[0x6];                                  // 0x03B4(0x0008) (Net, RepNotify)
	TArray<struct FVector>                             LockerPositions;                                          // 0x03E4(0x000C) (NeedCtorLink)
	struct FString                                     LockerString;                                             // 0x03F0(0x000C) (Const, Localized, NeedCtorLink)
	TArray<struct FPawnToucher>                        Customers;                                                // 0x03FC(0x000C) (NeedCtorLink)
	unsigned long                                      bIsActive : 1;                                            // 0x0408(0x0004)
	unsigned long                                      bPlayerNearby : 1;                                        // 0x0408(0x0004)
	unsigned long                                      bScalingUp : 1;                                           // 0x0408(0x0004)
	float                                              CurrentWeaponScaleX;                                      // 0x040C(0x0004)
	float                                              ProximityDistanceSquared;                                 // 0x0410(0x0004)
	class UParticleSystemComponent*                    AmbientEffect;                                            // 0x0414(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    ProximityEffect;                                          // 0x0418(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystem*                             InactiveEffectTemplate;                                   // 0x041C(0x0004)
	class UParticleSystem*                             ActiveEffectTemplate;                                     // 0x0420(0x0004)
	class UParticleSystem*                             WeaponSpawnEffectTemplate;                                // 0x0424(0x0004)
	float                                              ScaleRate;                                                // 0x0428(0x0004)
	float                                              NextProximityCheckTime;                                   // 0x042C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponLocker");
		return ptr;
	}


	void ShowHidden();
	void DestroyWeapons();
	void SetPlayerNearby(class APlayerController* PC, bool bNewPlayerNearby, bool bPlayEffects);
	void NotifyLocalPlayerDead(class APlayerController* PC);
	void ShowActive();
	void InitializePickup();
	float DetourWeight(class APawn* Other, float PathWeight);
	float BotDesireability(class APawn* Bot, class AController* C);
	struct FString GetHumanReadableName();
	void Reset();
	void ReplaceWeapon(int Index, class UClass* NewWeaponClass);
	void ReplicatedEvent(const struct FName& VarName);
	void InitializeWeapons();
	void PostBeginPlay();
	bool HasCustomer(class APawn* P);
	bool AddCustomer(class APawn* P);
	bool ShouldCamp(class AUTBot* B, float MaxWait);
	void SetInitialState();
};


// Class UTGame.UTWeaponPickupFactory
// 0x001C (0x03C4 - 0x03A8)
class AUTWeaponPickupFactory : public AUTPickupFactory
{
public:
	class UClass*                                      WeaponPickupClass;                                        // 0x03A8(0x0004) (Edit)
	unsigned long                                      bWeaponStay : 1;                                          // 0x03AC(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x03AC(0x0004)
	class UParticleSystemComponent*                    BaseGlow;                                                 // 0x03B0(0x0004) (ExportObject, Component, EditInline)
	float                                              WeaponPickupScaling;                                      // 0x03B4(0x0004)
	TArray<struct FPawnToucher>                        Customers;                                                // 0x03B8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponPickupFactory");
		return ptr;
	}


	void NotifyLocalPlayerDead(class APlayerController* PC);
	void ShowHidden();
	void ShowActive();
	void SpawnCopyFor(class APawn* Recipient);
	void PickedUpBy(class APawn* P);
	bool AllowPickup(class AUTBot* Bot);
	bool HasCustomer(class APawn* P);
	bool AddCustomer(class APawn* P);
	void StartSleeping();
	void SetWeaponStay();
	bool CheckForErrors();
	void ReplicatedEvent(const struct FName& VarName);
	void SetPickupMesh();
	void SetPickupHidden();
	void SetPickupVisible();
	void InitializePickup();
};


// Class UTGame.UTMusicManager
// 0x0050 (0x0224 - 0x01D4)
class AUTMusicManager : public AInfo
{
public:
	float                                              MusicStartTime;                                           // 0x01D4(0x0004)
	int                                                LastBeat;                                                 // 0x01D8(0x0004)
	float                                              CurrTempo;                                                // 0x01DC(0x0004)
	float                                              CurrFadeFactor;                                           // 0x01E0(0x0004)
	class AUTPlayerController*                         PlayerOwner;                                              // 0x01E4(0x0004)
	float                                              MusicVolume;                                              // 0x01E8(0x0004) (Config, GlobalConfig)
	float                                              LastActionEventTime;                                      // 0x01EC(0x0004)
	unsigned long                                      bPendingAction : 1;                                       // 0x01F0(0x0004)
	float                                              StingerVolumeMultiplier;                                  // 0x01F4(0x0004) (Config)
	TEnumAsByte<EMusicState>                           CurrentState;                                             // 0x01F8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F9(0x0003) MISSED OFFSET
	int                                                PendingEvent;                                             // 0x01FC(0x0004)
	float                                              PendingEventPlayTime;                                     // 0x0200(0x0004)
	float                                              PendingEventDelay;                                        // 0x0204(0x0004)
	class UAudioComponent*                             CurrentTrack;                                             // 0x0208(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             MusicTracks[0x6];                                         // 0x020C(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMusicManager");
		return ptr;
	}


	void ChangeTrack(TEnumAsByte<EMusicState> NewState);
	void Tick(float DeltaTime);
	void ProcessMusicEvent();
	bool AlreadyInActionMusic();
	void MusicEvent(int NewEventIndex);
	class UAudioComponent* CreateNewTrack(class USoundCue* MusicCue);
	void IntroFinished(class UAudioComponent* AC);
	void StartMusic();
	void PostBeginPlay();
};


// Class UTGame.UTDamageType
// 0x00C8 (0x012C - 0x0064)
class UUTDamageType : public UDamageType
{
public:
	struct FLinearColor                                DamageBodyMatColor;                                       // 0x0064(0x0010)
	float                                              DamageOverlayTime;                                        // 0x0074(0x0004)
	float                                              DeathOverlayTime;                                         // 0x0078(0x0004)
	float                                              XRayEffectTime;                                           // 0x007C(0x0004)
	unsigned long                                      bCausesBlood : 1;                                         // 0x0080(0x0004)
	unsigned long                                      bLocationalHit : 1;                                       // 0x0080(0x0004)
	unsigned long                                      bAlwaysGibs : 1;                                          // 0x0080(0x0004)
	unsigned long                                      bNeverGibs : 1;                                           // 0x0080(0x0004)
	unsigned long                                      bDirectDamage : 1;                                        // 0x0080(0x0004)
	unsigned long                                      bSeversHead : 1;                                          // 0x0080(0x0004)
	unsigned long                                      bCauseConvulsions : 1;                                    // 0x0080(0x0004)
	unsigned long                                      bUseTearOffMomentum : 1;                                  // 0x0080(0x0004)
	unsigned long                                      bThrowRagdoll : 1;                                        // 0x0080(0x0004)
	unsigned long                                      bLeaveBodyEffect : 1;                                     // 0x0080(0x0004)
	unsigned long                                      bBulletHit : 1;                                           // 0x0080(0x0004)
	unsigned long                                      bVehicleHit : 1;                                          // 0x0080(0x0004)
	unsigned long                                      bSelfDestructDamage : 1;                                  // 0x0080(0x0004)
	unsigned long                                      bUseDamageBasedDeathEffects : 1;                          // 0x0080(0x0004) (Edit)
	unsigned long                                      bSpecialDeathCamera : 1;                                  // 0x0080(0x0004)
	unsigned long                                      bAnimateHipsForDeathAnim : 1;                             // 0x0080(0x0004) (Edit)
	unsigned long                                      bComplainFriendlyFire : 1;                                // 0x0080(0x0004)
	unsigned long                                      bOverrideHitEffectColor : 1;                              // 0x0080(0x0004)
	unsigned long                                      bHeadGibCamera : 1;                                       // 0x0080(0x0004)
	unsigned long                                      bCausesBloodSplatterDecals : 1;                           // 0x0080(0x0004)
	unsigned long                                      bDontHurtInstigator : 1;                                  // 0x0080(0x0004)
	float                                              GibPerterbation;                                          // 0x0084(0x0004)
	int                                                GibThreshold;                                             // 0x0088(0x0004)
	int                                                MinAccumulateDamageThreshold;                             // 0x008C(0x0004)
	int                                                AlwaysGibDamageThreshold;                                 // 0x0090(0x0004)
	float                                              PhysicsTakeHitMomentumThreshold;                          // 0x0094(0x0004)
	class UClass*                                      DamageWeaponClass;                                        // 0x0098(0x0004)
	int                                                DamageWeaponFireMode;                                     // 0x009C(0x0004)
	class UParticleSystem*                             GibTrail;                                                 // 0x00A0(0x0004)
	class UClass*                                      DeathCameraEffectVictim;                                  // 0x00A4(0x0004)
	class UClass*                                      DeathCameraEffectInstigator;                              // 0x00A8(0x0004)
	struct FName                                       DeathAnim;                                                // 0x00AC(0x0008) (Edit)
	float                                              DeathAnimRate;                                            // 0x00B4(0x0004) (Edit)
	float                                              MotorDecayTime;                                           // 0x00B8(0x0004) (Edit)
	float                                              StopAnimAfterDamageInterval;                              // 0x00BC(0x0004) (Edit)
	class UCameraAnim*                                 DamageCameraAnim;                                         // 0x00C0(0x0004)
	float                                              NodeDamageScaling;                                        // 0x00C4(0x0004)
	struct FName                                       KillStatsName;                                            // 0x00C8(0x0008)
	struct FName                                       DeathStatsName;                                           // 0x00D0(0x0008)
	struct FName                                       SuicideStatsName;                                         // 0x00D8(0x0008)
	int                                                RewardCount;                                              // 0x00E0(0x0004)
	class UClass*                                      RewardAnnouncementClass;                                  // 0x00E4(0x0004)
	int                                                RewardAnnouncementSwitch;                                 // 0x00E8(0x0004)
	struct FName                                       RewardEvent;                                              // 0x00EC(0x0008)
	int                                                CustomTauntIndex;                                         // 0x00F4(0x0004)
	struct FLinearColor                                HitEffectColor;                                           // 0x00F8(0x0010)
	struct FString                                     DeathString;                                              // 0x0108(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     FemaleSuicide;                                            // 0x0114(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     MaleSuicide;                                              // 0x0120(0x000C) (Edit, Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDamageType");
		return ptr;
	}


	class UClass* GetDeathCameraEffectVictim(class AUTPawn* UTP);
	class UClass* GetDeathCameraEffectInstigator(class AUTPawn* UTP);
	void CalcDeathCamera(class AUTPawn* P, float DeltaTime, struct FVector* CameraLocation, struct FRotator* CameraRotation, float* CameraFOV);
	void DrawKillIcon(class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY);
	void SpawnExtraGibEffects(class AUTGib* TheGib);
	void CreateDeathGoreChunks(class AUTPawn* ThePawn, class UClass* TheDamageType, const struct FVector& HitLocation, struct FTraceHitInfo* HitInfo);
	void BoneBreaker(class AUTPawn* ThePawn, class USkeletalMeshComponent* TheMesh, const struct FVector& Impulse, const struct FVector& HitLocation, const struct FName& BoneName);
	void CreateDeathSkeleton(class AUTPawn* ThePawn, class UClass* TheDamageType, const struct FVector& HitLocation, struct FTraceHitInfo* HitInfo);
	void DoCustomDamageEffects(class AUTPawn* ThePawn, class UClass* TheDamageType, const struct FVector& HitLocation, struct FTraceHitInfo* HitInfo);
	bool ShouldGib(class AUTPawn* DeadPawn);
	void SpawnGibEffects(class AUTGib* Gib);
	void PawnTornOff(class AUTPawn* DeadPawn);
	void ScoreKill(class AUTPlayerReplicationInfo* KillerPRI, class AUTPlayerReplicationInfo* KilledPRI, class APawn* KilledPawn);
	struct FName GetStatsName(const struct FName& StatType);
	void IncrementSuicides(class AUTPlayerReplicationInfo* KilledPRI);
	void IncrementDeaths(class AUTPlayerReplicationInfo* KilledPRI);
	int IncrementKills(class AUTPlayerReplicationInfo* KillerPRI);
	float GetHitEffectDuration(class APawn* P, float Damage);
	void SpawnHitEffect(class APawn* P, float Damage, const struct FVector& Momentum, const struct FName& BoneName, const struct FVector& HitLocation);
	struct FString SuicideMessage(class APlayerReplicationInfo* Victim);
	struct FString DeathMessage(class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim);
};


// Class UTGame.UTSeqAct_PlayCameraAnim
// 0x0014 (0x00FC - 0x00E8)
class UUTSeqAct_PlayCameraAnim : public USequenceAction
{
public:
	class UCameraAnim*                                 AnimToPlay;                                               // 0x00E8(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x00EC(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x00F0(0x0004) (Edit)
	float                                              Rate;                                                     // 0x00F4(0x0004) (Edit)
	float                                              IntensityScale;                                           // 0x00F8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_PlayCameraAnim");
		return ptr;
	}


	int GetObjClassVersion();
};


// Class UTGame.UTSeqAct_StopCameraAnim
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_StopCameraAnim : public USequenceAction
{
public:
	unsigned long                                      bStopImmediately : 1;                                     // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_StopCameraAnim");
		return ptr;
	}


	int GetObjClassVersion();
};


// Class UTGame.UTInventoryManager
// 0x001C (0x020C - 0x01F0)
class AUTInventoryManager : public AInventoryManager
{
public:
	unsigned long                                      bInfiniteAmmo : 1;                                        // 0x01F0(0x0004) (Net)
	TArray<struct FAmmoStore>                          AmmoStorage;                                              // 0x01F4(0x000C) (NeedCtorLink)
	class AWeapon*                                     PreviousWeapon;                                           // 0x0200(0x0004)
	class AUTWeapon*                                   PendingSwitchWeapon;                                      // 0x0204(0x0004)
	float                                              LastAdjustWeaponTime;                                     // 0x0208(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTInventoryManager");
		return ptr;
	}


	void SwitchToBestWeapon(bool bForceADifferentWeapon);
	void DrawHUD(class AHUD* H);
	void SwitchToPreviousWeapon();
	void ChangedWeapon();
	class AInventory* HasInventoryOfClass(class UClass* InvClass);
	void AddAmmoToWeapon(int AmountToAdd, class UClass* WeaponClassToAddTo);
	bool NeedsAmmo(class UClass* TestWeapon);
	void RemoveFromInventory(class AInventory* ItemToRemove);
	void DiscardInventory();
	bool AddInventory(class AInventory* NewItem, bool bDoNotActivate);
	void CheckSwitchTo(class AUTWeapon* NewWeapon);
	void RetrySwitchTo(class AUTWeapon* NewWeapon);
	void ProcessRetrySwitch();
	class AInventory* CreateInventory(class UClass* NewInventoryItemClass, bool bDoNotActivate);
	void ClientWeaponSet(class AWeapon* NewWeapon, bool bOptionalSet, bool bDoNotActivate);
	void SetPendingWeapon(class AWeapon* DesiredWeapon);
	void ServerSetCurrentWeapon(class AWeapon* DesiredWeapon);
	void ClientSetCurrentWeapon(class AWeapon* DesiredWeapon);
	void SetCurrentWeapon(class AWeapon* DesiredWeapon);
	void AllAmmo(bool bAmmoForSuperWeapons);
	void NextWeapon();
	void PrevWeapon();
	void AdjustWeapon(int NewOffset);
	void SwitchWeapon(unsigned char NewGroup);
	void GetWeaponList(bool bFilter, int GroupFilter, bool bNoEmpty, TArray<class AUTWeapon*>* WeaponList);
	void OwnerEvent(const struct FName& EventName);
	void ClientSyncWeapon(class AWeapon* NewWeapon);
};


// Class UTGame.UTTeamHUD
// 0x0038 (0x0AB4 - 0x0A7C)
class AUTTeamHUD : public AUTHUD
{
public:
	unsigned long                                      bShowDirectional : 1;                                     // 0x0A7C(0x0004)
	int                                                LastScores[0x2];                                          // 0x0A80(0x0004)
	int                                                ScoreTransitionTime[0x2];                                 // 0x0A88(0x0004)
	struct FVector2D                                   TeamIconCenterPoints[0x2];                                // 0x0A90(0x0008)
	float                                              LeftTeamPulseTime;                                        // 0x0AA0(0x0004)
	float                                              RightTeamPulseTime;                                       // 0x0AA4(0x0004)
	float                                              OldLeftScore;                                             // 0x0AA8(0x0004)
	float                                              OldRightScore;                                            // 0x0AAC(0x0004)
	float                                              TeamScaleModifier;                                        // 0x0AB0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeamHUD");
		return ptr;
	}


	void DisplayDirectionIndicator(unsigned char TeamIndex, const struct FVector2D& pos, class AActor* destActor, float DestScale);
	void DisplayTeamLogos(unsigned char TeamIndex, const struct FVector2D& pos, float DestScale);
	class AActor* GetDirectionalDest(unsigned char TeamIndex);
	int GetTeamScore(unsigned char TeamIndex);
	void DisplayTeamScore();
	void DisplayScoring();
};


// Class UTGame.UTCTFHUD
// 0x000A (0x0ABE - 0x0AB4)
class AUTCTFHUD : public AUTTeamHUD
{
public:
	class AUTCTFBase*                                  FlagBases[0x2];                                           // 0x0AB4(0x0004)
	TEnumAsByte<EFlagState>                            FlagStates[0x2];                                          // 0x0ABC(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCTFHUD");
		return ptr;
	}


	class AActor* GetDirectionalDest(unsigned char TeamIndex);
	void DisplayTeamLogos(unsigned char TeamIndex, const struct FVector2D& pos, float DestScale);
	void Timer();
	void PostBeginPlay();
};


// Class UTGame.UTWeaponKillRewardMessage
// 0x0020 (0x0084 - 0x0064)
class UUTWeaponKillRewardMessage : public UUTLocalMessage
{
public:
	struct FString                                     RewardString[0x2];                                        // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	class USoundNodeWave*                              RewardSounds[0x2];                                        // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponKillRewardMessage");
		return ptr;
	}


	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTAchievementsBase
// 0x0038 (0x0074 - 0x003C)
class UUTAchievementsBase : public UObject
{
public:
	TArray<struct FAchievementData>                    AchievementsArray;                                        // 0x003C(0x000C) (NeedCtorLink)
	class UClass*                                      AchievementStatsReadClass;                                // 0x0048(0x0004)
	class UClass*                                      AchievementStatsWriteClass;                               // 0x004C(0x0004)
	TArray<struct FAchievementValue>                   AchievementValues;                                        // 0x0050(0x000C) (NeedCtorLink)
	unsigned long                                      bInitializedAchievementValues : 1;                        // 0x005C(0x0004)
	TArray<struct FAchievementValue>                   DeferredAchievementUpdates;                               // 0x0060(0x000C) (NeedCtorLink)
	class UOnlineStatsRead*                            AchievementStatsRead;                                     // 0x006C(0x0004)
	int                                                ReadStatsCount;                                           // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAchievementsBase");
		return ptr;
	}


	void FlushAchievementStatsComplete(const struct FName& SessionName, bool bWasSuccessful);
	void WriteAchievementStats();
	void ReadAchievementStatsComplete(bool bWasSuccessful);
	void ReadAchievementStats();
	bool GetAchievementUnlockType(int AchievementId, int* UnlockType, unsigned char* bUnlockEnabled);
	bool GetAchievementProgressCriteria(int AchievementId, int* ProgressCriteria, unsigned char* bProgressEnabled);
	bool GetAchievementUnlockCriteria(int AchievementId, int* UnlockCriteria);
	bool SetAchievementValue(int AchievementId, int Value);
	bool GetAchievementValue(int AchievementId, int* Value);
	bool UpdateAchievementByteCount(int AchievementId, int Counter);
	bool UpdateAchievementCount(int AchievementId, int Count, int* Progress, int* MaxProgress, unsigned char* bProgressEnabled);
	bool UpdateAchievementBitMask(int AchievementId, int BitMask, int* Progress, int* MaxProgress, unsigned char* bProgressEnabled);
	void DisplayAchievementProgress(int AchievementId, int Progress, int MaxProgress);
	void AchievementDone(bool bWasSuccessful);
	void UnlockAchievement(int AchievementId);
	void UpdateAchievement(int AchievementId, int Value, bool bSkipCommit);
	void Cleanup();
	void Initialize();
};


// Class UTGame.UTAchievements
// 0x0000 (0x0074 - 0x0074)
class UUTAchievements : public UUTAchievementsBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAchievements");
		return ptr;
	}


	void UpdateSpiceOfLife(int MutatorBitMask);
};


// Class UTGame.UTLeaderboardRead
// 0x0000 (0x0088 - 0x0088)
class UUTLeaderboardRead : public UOnlineStatsRead
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTLeaderboardRead");
		return ptr;
	}


	int GetScore(const struct FUniqueNetId& Player);
};


// Class UTGame.UTAnnouncer
// 0x0038 (0x020C - 0x01D4)
class AUTAnnouncer : public AInfo
{
public:
	unsigned char                                      AnnouncerLevel;                                           // 0x01D4(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	class UClass*                                      PlayingAnnouncementClass;                                 // 0x01D8(0x0004)
	int                                                PlayingAnnouncementIndex;                                 // 0x01DC(0x0004)
	class AUTQueuedAnnouncement*                       Queue;                                                    // 0x01E0(0x0004)
	class AUTPlayerController*                         PlayerOwner;                                              // 0x01E4(0x0004)
	class USoundCue*                                   AnnouncerSoundCue;                                        // 0x01E8(0x0004)
	struct FString                                     CustomAnnouncerSoundCue;                                  // 0x01EC(0x000C) (Config, GlobalConfig, NeedCtorLink)
	class USoundCue*                                   UTVoiceSoundCue;                                          // 0x01F8(0x0004)
	struct FString                                     UTVoiceSoundCueSoundCue;                                  // 0x01FC(0x000C) (Config, GlobalConfig, NeedCtorLink)
	class UAudioComponent*                             CurrentAnnouncementComponent;                             // 0x0208(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnnouncer");
		return ptr;
	}


	void PlayAnnouncement(class UClass* InMessageClass, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	void AnnouncementFinished(class UAudioComponent* AC);
	void PlayAnnouncementNow(class UClass* InMessageClass, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	void PlayNextAnnouncement();
	void PostBeginPlay();
	void Destroyed();
};


// Class UTGame.UTCheatManager
// 0x0008 (0x0064 - 0x005C)
class UUTCheatManager : public UCheatManager
{
public:
	class UClass*                                      LMC;                                                      // 0x005C(0x0004)
	class USpeechRecognition*                          RecogObject;                                              // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCheatManager");
		return ptr;
	}


	void KillAllPawns(class UClass* aClass);
	void KillAll(class UClass* aClass);
	void SetStickBind(float val);
	void ShowStickBindings();
	void TiltIt(bool bActive);
	void LeaveADecal(const struct FVector& HitLoc, const struct FVector& HitNorm);
	void SpawnABloodDecal();
	void KillOtherBots();
	void EditWeapon(const struct FString& WhichWeapon);
	void SuicideBy(const struct FString& Type, int DeathHealth);
	void RBGrav(float NewGravityScaling);
	void KillBadGuys();
	void ViewBot();
	void FreeCamera();
	void Invisible(bool B);
	void AllAmmo();
	void PhysicsGun();
	void DoubleUp();
	void AllWeapons();
	void SummonV(const struct FString& ClassName);
	void LMS(int Switch);
	void LM(const struct FString& MessageClassName);
	void Glow(float F);
	void ViewFlag();
};


// Class UTGame.UTPlayerInput
// 0x0009 (0x03ED - 0x03E4)
class UUTPlayerInput : public UUDKPlayerInput
{
public:
	float                                              LastDuckTime;                                             // 0x03E4(0x0004)
	unsigned long                                      bHoldDuck : 1;                                            // 0x03E8(0x0004)
	TEnumAsByte<EDoubleClickDir>                       ForcedDoubleClick;                                        // 0x03EC(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPlayerInput");
		return ptr;
	}


	void Jump();
	void UnDuck();
	void Duck();
};


// Class UTGame.DemoRecSpectator
// 0x000C (0x08A8 - 0x089C)
class ADemoRecSpectator : public AUTPlayerController
{
public:
	unsigned long                                      bFindPlayer : 1;                                          // 0x089C(0x0004)
	unsigned long                                      bLockRotationToViewTarget : 1;                            // 0x089C(0x0004) (Config)
	unsigned long                                      bAutoSwitchPlayers : 1;                                   // 0x089C(0x0004) (Config)
	class APlayerReplicationInfo*                      MyRealViewTarget;                                         // 0x08A0(0x0004)
	float                                              AutoSwitchPlayerInterval;                                 // 0x08A4(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.DemoRecSpectator");
		return ptr;
	}


	void UpdateRotation(float DeltaTime);
	void GetPlayerViewPoint(struct FVector* CameraLocation, struct FRotator* CameraRotation);
	void Pause();
	bool SetPause(bool bPause, const struct FScriptDelegate& CanUnpauseDelegate);
	void ClientSetRealViewTarget(class APlayerReplicationInfo* NewTarget);
	void ServerViewSelf(const struct FViewTargetTransitionParams& TransitionParams);
	void SetViewTarget(class AActor* NewViewTarget, const struct FViewTargetTransitionParams& TransitionParams);
	void DemoViewNextPlayer();
	void ViewClass(class UClass* aClass, bool bQuiet, bool bCheat);
	void Slomo(float NewTimeDilation);
	void InitPlayerReplicationInfo();
	void ReceivedPlayer();
	void PostBeginPlay();
};


// Class UTGame.ForcedDirVolume
// 0x0000 (0x0264 - 0x0264)
class AForcedDirVolume : public AUDKForcedDirectionVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.ForcedDirVolume");
		return ptr;
	}

};


// Class UTGame.GFxMinimap
// 0x00BC (0x0134 - 0x0078)
class UGFxMinimap : public UGFxObject
{
public:
	class UGFxMinimapHud*                              HUD;                                                      // 0x0078(0x0004)
	class AWorldInfo*                                  ThisWorld;                                                // 0x007C(0x0004)
	class UUTMapInfo*                                  MapInfo;                                                  // 0x0080(0x0004)
	int                                                MapTexSize;                                               // 0x0084(0x0004)
	unsigned long                                      bNeedsUpdateData : 1;                                     // 0x0088(0x0004)
	class UGFxObject*                                  PlayerIcon;                                               // 0x008C(0x0004)
	class UGFxObject*                                  CompassIcon;                                              // 0x0090(0x0004)
	class UGFxObject*                                  MapMC;                                                    // 0x0094(0x0004)
	TArray<class UGFxObject*>                          EnemyIcons;                                               // 0x0098(0x000C) (NeedCtorLink)
	TArray<class UGFxObject*>                          MyTeamIcons;                                              // 0x00A4(0x000C) (NeedCtorLink)
	TArray<class UGFxObject*>                          FlagIcons;                                                // 0x00B0(0x000C) (NeedCtorLink)
	TArray<class UGFxObject*>                          ObjectiveIcons;                                           // 0x00BC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FMatrix                                     IconMatrix;                                               // 0x00D0(0x0040)
	class UGFxObject*                                  IconsRedMC;                                               // 0x0110(0x0004)
	class UGFxObject*                                  IconsBlueMC;                                              // 0x0114(0x0004)
	class UGFxObject*                                  IconsFlagMC;                                              // 0x0118(0x0004)
	int                                                IconsRedCount;                                            // 0x011C(0x0004)
	int                                                IconsBlueCount;                                           // 0x0120(0x0004)
	int                                                IconsFlagCount;                                           // 0x0124(0x0004)
	TArray<class AUTGameObjective*>                    Objectives;                                               // 0x0128(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxMinimap");
		return ptr;
	}


	void Update(float Scale);
	void UpdateIcons(bool bIsRedIconType, TArray<class AActor*>* Actors, TArray<class UGFxObject*>* ActorIcons);
	TArray<class UGFxObject*> GenFlagIcons(int N);
	TArray<class UGFxObject*> GenEnemyIcons(int N);
	TArray<class UGFxObject*> GenFriendIcons(int N);
	void UpdateData();
	void Init(class UGFxMinimapHud* H);
};


// Class UTGame.UTMapInfo
// 0x00C8 (0x0108 - 0x0040)
class UUTMapInfo : public UUDKMapInfo
{
public:
	int                                                RecommendedPlayersMin;                                    // 0x0040(0x0004) (Edit)
	int                                                RecommendedPlayersMax;                                    // 0x0044(0x0004) (Edit)
	class UUTMapMusicInfo*                             MapMusicInfo;                                             // 0x0048(0x0004) (Edit)
	class UTexture*                                    MapTexture;                                               // 0x004C(0x0004) (Edit)
	float                                              MapTextureYaw;                                            // 0x0050(0x0004) (Edit)
	struct FVector                                     MapCenter;                                                // 0x0054(0x000C) (Edit)
	float                                              MapExtent;                                                // 0x0060(0x0004) (Edit)
	int                                                MapYaw;                                                   // 0x0064(0x0004) (Edit)
	float                                              RotatingMiniMapRange;                                     // 0x0068(0x0004) (Edit)
	float                                              DefaultMapSize;                                           // 0x006C(0x0004) (Edit)
	TArray<class AUTGameObjective*>                    Objectives;                                               // 0x0070(0x000C) (NeedCtorLink)
	unsigned long                                      bMapUpToDate : 1;                                         // 0x007C(0x0004) (Transient)
	class AActor*                                      CurrentActor;                                             // 0x0080(0x0004) (Transient)
	class AActor*                                      WatchedActor;                                             // 0x0084(0x0004) (Transient)
	class UMaterial*                                   HudIcons;                                                 // 0x0088(0x0004) (Transient)
	class UTexture2D*                                  HUDIconsT;                                                // 0x008C(0x0004) (Transient)
	struct FVector                                     MapRotX;                                                  // 0x0090(0x000C)
	struct FVector                                     MapRotY;                                                  // 0x009C(0x000C)
	int                                                CurrentMapRotYaw;                                         // 0x00A8(0x0004)
	class UMaterialInstanceConstant*                   MapMaterialInstance;                                      // 0x00AC(0x0004) (Transient)
	class UMaterial*                                   MapMaterialReference;                                     // 0x00B0(0x0004)
	float                                              UseableRadius;                                            // 0x00B4(0x0004)
	struct FVector                                     ActualMapCenter;                                          // 0x00B8(0x000C) (Transient)
	float                                              RadarWidth;                                               // 0x00C4(0x0004) (Transient)
	float                                              RadarRange;                                               // 0x00C8(0x0004) (Transient)
	struct FVector                                     CenterPos;                                                // 0x00CC(0x000C) (Transient)
	float                                              MapScale;                                                 // 0x00D8(0x0004) (Transient)
	float                                              ColorPercent;                                             // 0x00DC(0x0004) (Transient)
	class UMaterialInstanceConstant*                   GreenIconMaterialInstance;                                // 0x00E0(0x0004) (Transient)
	struct FTextureCoordinates                         PlayerIconCoords;                                         // 0x00E4(0x0010)
	class AUDKVehicle*                                 KeyVehicles[0x2];                                         // 0x00F4(0x0004)
	TArray<class AUTGameObjective*>                    Sensors;                                                  // 0x00FC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMapInfo");
		return ptr;
	}


	struct FVector GetActorHudLocation(class AActor* CActor);
	void DrawMapImage(class UCanvas* Canvas, float X, float Y, float W, float H, float PlayerYaw, float BkgImgScaling);
	void ChangeMapRotation(const struct FRotator& NewMapRotation);
	struct FVector UpdateHUDLocation(const struct FVector& InLocation);
	void DrawRotatedMaterialTile(class UCanvas* Canvas, class UMaterialInstanceConstant* M, const struct FVector& MapLocation, int InYaw, float XWidth, float YWidth, float XStart, float YStart, float XLength, float YLength);
	void DrawRotatedTile(class UCanvas* Canvas, class UTexture2D* T, const struct FVector& MapLocation, int InYaw, float IconScale, const struct FTextureCoordinates& TexCoords, const struct FLinearColor& DrawColor);
	void AddKeyVehicle(class AUTVehicle* V);
	void DrawMap(class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, bool bFullDetail, float AspectRatio);
	void UpdateNodes(class AUTPlayerController* PlayerOwner);
	void RenderAdditionalInformation(class UCanvas* Canvas, class AUTPlayerController* PlayerOwner);
	void RenderLinks(class UCanvas* Canvas, class AUTPlayerController* PlayerOwner);
	void FindObjectives();
	void VerifyMapExtent();
};


// Class UTGame.GFxMinimapHud
// 0x011C (0x0298 - 0x017C)
class UGFxMinimapHud : public UGFxMoviePlayer
{
public:
	class AWorldInfo*                                  ThisWorld;                                                // 0x017C(0x0004)
	class UGFxMinimap*                                 Minimap;                                                  // 0x0180(0x0004)
	float                                              Radius;                                                   // 0x0184(0x0004)
	float                                              CurZoomf;                                                 // 0x0188(0x0004)
	float                                              NormalZoomf;                                              // 0x018C(0x0004)
	float                                              MaxZoomf;                                                 // 0x0190(0x0004)
	float                                              MinZoomf;                                                 // 0x0194(0x0004)
	class UGFxObject*                                  LogMC;                                                    // 0x0198(0x0004)
	TArray<struct FMessageRow>                         Messages;                                                 // 0x019C(0x000C) (NeedCtorLink)
	TArray<struct FMessageRow>                         FreeMessages;                                             // 0x01A8(0x000C) (NeedCtorLink)
	float                                              MessageHeight;                                            // 0x01B4(0x0004)
	int                                                NumMessages;                                              // 0x01B8(0x0004)
	class UGFxObject*                                  PlayerStatsMC;                                            // 0x01BC(0x0004)
	class UGFxObject*                                  TeamStatsMC;                                              // 0x01C0(0x0004)
	class UGFxObject*                                  HealthTF;                                                 // 0x01C4(0x0004)
	class UGFxObject*                                  HealthBarMC;                                              // 0x01C8(0x0004)
	class UGFxObject*                                  AmmoCountTF;                                              // 0x01CC(0x0004)
	class UGFxObject*                                  AmmoBarMC;                                                // 0x01D0(0x0004)
	class UGFxObject*                                  MaxAmmoMC;                                                // 0x01D4(0x0004)
	class UGFxObject*                                  ArmorTF;                                                  // 0x01D8(0x0004)
	class UGFxObject*                                  ArmorMC;                                                  // 0x01DC(0x0004)
	class UGFxObject*                                  VArmorMC;                                                 // 0x01E0(0x0004)
	class UGFxObject*                                  VArmorTF;                                                 // 0x01E4(0x0004)
	class UGFxObject*                                  TimeTF;                                                   // 0x01E8(0x0004)
	class UGFxObject*                                  WeaponMC;                                                 // 0x01EC(0x0004)
	class UGFxObject*                                  ArmorPercTF;                                              // 0x01F0(0x0004)
	class UGFxObject*                                  CenterTextMC;                                             // 0x01F4(0x0004)
	class UGFxObject*                                  CenterTextTF;                                             // 0x01F8(0x0004)
	class UGFxObject*                                  ScoreBarMC[0x2];                                          // 0x01FC(0x0004)
	class UGFxObject*                                  ScoreTF[0x2];                                             // 0x0204(0x0004)
	class UGFxObject*                                  FlagCarrierMC[0x2];                                       // 0x020C(0x0004)
	class UGFxObject*                                  FlagCarrierTF[0x2];                                       // 0x0214(0x0004)
	class UGFxObject*                                  EnemyNameTF;                                              // 0x021C(0x0004)
	class UGFxObject*                                  HitLocMC[0x8];                                            // 0x0220(0x0004)
	class UGFxObject*                                  MultiKillN_TF;                                            // 0x0240(0x0004)
	class UGFxObject*                                  MultiKillMsg_TF;                                          // 0x0244(0x0004)
	class UGFxObject*                                  MultiKillMC;                                              // 0x0248(0x0004)
	class UGFxObject*                                  ReticuleMC;                                               // 0x024C(0x0004)
	class UGFxObject*                                  RBotMC;                                                   // 0x0250(0x0004)
	class UGFxObject*                                  RRightMC;                                                 // 0x0254(0x0004)
	class UGFxObject*                                  RTopMC;                                                   // 0x0258(0x0004)
	class UGFxObject*                                  RLeftMC;                                                  // 0x025C(0x0004)
	class AUTVehicle*                                  LastVehicle;                                              // 0x0260(0x0004)
	class AUTWeapon*                                   LastWeapon;                                               // 0x0264(0x0004)
	float                                              LastHealth;                                               // 0x0268(0x0004)
	float                                              LastArmor;                                                // 0x026C(0x0004)
	float                                              LastVHealth;                                              // 0x0270(0x0004)
	int                                                LastAmmoCount;                                            // 0x0274(0x0004)
	int                                                LastScore[0x2];                                           // 0x0278(0x0004)
	unsigned char                                      LastFlagHome[0x2];                                        // 0x0280(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0282(0x0002) MISSED OFFSET
	class AUTPlayerReplicationInfo*                    LastEnemy;                                                // 0x0284(0x0004)
	class AUTPlayerReplicationInfo*                    LastFlagCarrier[0x2];                                     // 0x0288(0x0004)
	class AUTGameReplicationInfo*                      GRI;                                                      // 0x0290(0x0004)
	unsigned long                                      bIsTeamHUD : 1;                                           // 0x0294(0x0004)
	unsigned long                                      bDrawWeaponCrosshairs : 1;                                // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxMinimapHud");
		return ptr;
	}


	void AddDeathMessage(class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Killed, class UClass* Dmg);
	struct FString GetRank(class APlayerReplicationInfo* PRI);
	void SetCenterText(const struct FString& Text);
	void ShowMultiKill(int N, const struct FString& msg);
	void DisplayHit(const struct FVector& HitDir, int Damage, class UClass* DamageType);
	void MinimapZoomIn();
	void MinimapZoomOut();
	void ToggleCrosshair(bool bToggle);
	void TickHud(float DeltaTime);
	void UpdateGameHUD(class AUTPlayerReplicationInfo* PRI);
	void AddMessage(const struct FString& Type, const struct FString& msg);
	void RemoveMessage();
	void ClearStats(bool clearScores);
	struct FString FormatTime(int Seconds);
	void Init(class ULocalPlayer* Player);
	class UGFxObject* InitMessageRow();
	class UGFxObject* CreateMessageRow();
	void registerMiniMapView(class UGFxMinimap* MC, float R);
};


// Class UTGame.UTGFxTeamHUD
// 0x0000 (0x0298 - 0x0298)
class UUTGFxTeamHUD : public UGFxMinimapHud
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGFxTeamHUD");
		return ptr;
	}


	struct FString GetRank(class APlayerReplicationInfo* PRI);
	void UpdateGameHUD(class AUTPlayerReplicationInfo* PRI);
};


// Class UTGame.UTVehicle_Hoverboard
// 0x0140 (0x0BE0 - 0x0AA0)
class AUTVehicle_Hoverboard : public AUTVehicle
{
public:
	class UUDKSkeletalMeshComponent*                   HoverboardMesh;                                           // 0x0AA0(0x0004) (ExportObject, Component, EditInline)
	struct FVector                                     MeshLocationOffset;                                       // 0x0AA4(0x000C) (Edit)
	struct FRotator                                    MeshRotationOffset;                                       // 0x0AB0(0x000C) (Edit)
	float                                              JumpForceMag;                                             // 0x0ABC(0x0004) (Edit)
	float                                              DodgeForceMag;                                            // 0x0AC0(0x0004) (Edit)
	float                                              TrickJumpWarmupMax;                                       // 0x0AC4(0x0004) (Edit)
	float                                              JumpCheckTraceDist;                                       // 0x0AC8(0x0004) (Edit)
	float                                              TrickSpinWarmup;                                          // 0x0ACC(0x0004)
	float                                              JumpDelay;                                                // 0x0AD0(0x0004)
	float                                              LastJumpTime;                                             // 0x0AD4(0x0004)
	unsigned long                                      bDoHoverboardJump : 1;                                    // 0x0AD8(0x0004) (Net, RepNotify)
	unsigned long                                      bIsDodging : 1;                                           // 0x0AD8(0x0004)
	unsigned long                                      bGrabbingBoard : 1;                                       // 0x0AD8(0x0004)
	unsigned long                                      bNoVehicleEntry : 1;                                      // 0x0AD8(0x0004)
	struct FVector                                     DodgeForce;                                               // 0x0ADC(0x000C)
	class URB_StayUprightSetup*                        LeanUprightConstraintSetup;                               // 0x0AE8(0x0004) (ExportObject, NeedCtorLink, EditInline)
	class URB_ConstraintInstance*                      LeanUprightConstraintInstance;                            // 0x0AEC(0x0004) (ExportObject, NeedCtorLink, EditInline)
	class URB_ConstraintSetup*                         FootBoardConstraintSetup;                                 // 0x0AF0(0x0004) (ExportObject, NeedCtorLink, EditInline)
	class URB_ConstraintInstance*                      LeftFootBoardConstraintInstance;                          // 0x0AF4(0x0004) (ExportObject, NeedCtorLink, EditInline)
	class URB_ConstraintInstance*                      RightFootBoardConstraintInstance;                         // 0x0AF8(0x0004) (ExportObject, NeedCtorLink, EditInline)
	class USkelControlSingleBone*                      SpineTurnControl;                                         // 0x0AFC(0x0004)
	float                                              MaxTrackYaw;                                              // 0x0B00(0x0004) (Edit)
	float                                              CurrentHeadYaw;                                           // 0x0B04(0x0004) (Transient)
	float                                              TurnLeanFactor;                                           // 0x0B08(0x0004) (Edit)
	float                                              MaxLeanPitchSpeed;                                        // 0x0B0C(0x0004) (Edit)
	float                                              TargetPitch;                                              // 0x0B10(0x0004) (Transient)
	class URB_DistanceJointSetup*                      DistanceJointSetup;                                       // 0x0B14(0x0004) (ExportObject, NeedCtorLink, EditInline)
	class URB_ConstraintInstance*                      DistanceJointInstance;                                    // 0x0B18(0x0004) (ExportObject, NeedCtorLink, EditInline)
	class UParticleSystem*                             RedDustEffect;                                            // 0x0B1C(0x0004)
	class UParticleSystem*                             BlueDustEffect;                                           // 0x0B20(0x0004)
	struct FName                                       DustVelMagParamName;                                      // 0x0B24(0x0008)
	struct FName                                       DustBoardHeightParamName;                                 // 0x0B2C(0x0008)
	struct FName                                       DustVelParamName;                                         // 0x0B34(0x0008)
	class UParticleSystemComponent*                    ThrusterEffect;                                           // 0x0B3C(0x0004) (ExportObject, Component, EditInline)
	struct FName                                       ThrusterEffectSocket;                                     // 0x0B40(0x0008)
	class UParticleSystem*                             RedThrusterEffect;                                        // 0x0B48(0x0004)
	class UParticleSystem*                             BlueThrusterEffect;                                       // 0x0B4C(0x0004)
	class UParticleSystemComponent*                    RoosterEffect;                                            // 0x0B50(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystem*                             RoosterEffectTemplate;                                    // 0x0B54(0x0004)
	float                                              RoosterTurnScale;                                         // 0x0B58(0x0004)
	class UAudioComponent*                             RoosterNoise;                                             // 0x0B5C(0x0004) (ExportObject, Component, EditInline)
	class USoundCue*                                   RoosterSoundCue;                                          // 0x0B60(0x0004)
	class UAudioComponent*                             CurveSound;                                               // 0x0B64(0x0004) (ExportObject, Component, EditInline)
	class USoundCue*                                   EngineThrustSound;                                        // 0x0B68(0x0004)
	class USoundCue*                                   TurnSound;                                                // 0x0B6C(0x0004)
	class USoundCue*                                   JumpSound;                                                // 0x0B70(0x0004)
	float                                              CameraInitialOut;                                         // 0x0B74(0x0004)
	struct FVector                                     HoverCamOffset;                                           // 0x0B78(0x000C) (Edit)
	struct FRotator                                    HoverCamRotOffset;                                        // 0x0B84(0x000C) (Edit)
	struct FVector                                     VelLookAtOffset;                                          // 0x0B90(0x000C) (Edit)
	struct FVector                                     VelBasedCamOffset;                                        // 0x0B9C(0x000C) (Edit)
	float                                              VelRollFactor;                                            // 0x0BA8(0x0004) (Edit)
	float                                              HoverCamMaxVelUsed;                                       // 0x0BAC(0x0004) (Edit)
	float                                              ViewRollRate;                                             // 0x0BB0(0x0004) (Edit)
	int                                                CurrentViewRoll;                                          // 0x0BB4(0x0004)
	float                                              TargetPhysicsWeight;                                      // 0x0BB8(0x0004)
	float                                              PhysWeightBlendTimeToGo;                                  // 0x0BBC(0x0004)
	float                                              PhysWeightBlendTime;                                      // 0x0BC0(0x0004) (Edit)
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // 0x0BC4(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BC5(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        HandleMesh;                                               // 0x0BC8(0x0004) (ExportObject, Component, EditInline)
	int                                                FallingDamageRagdollThreshold;                            // 0x0BCC(0x0004)
	float                                              ImpactGroundResetPhysRiderThresh;                         // 0x0BD0(0x0004) (Edit)
	float                                              BigImpactPhysRiderZVel;                                   // 0x0BD4(0x0004) (Edit)
	float                                              DesiredSpeedSquared;                                      // 0x0BD8(0x0004)
	float                                              LastDesiredSpeedTime;                                     // 0x0BDC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicle_Hoverboard");
		return ptr;
	}


	bool ContinueOnFoot();
	void BelowSpeedThreshold();
	bool TooCloseToAttack(class AActor* Other);
	void SpawnRoosterEffect();
	bool OnTouchForcedDirVolume(class AUDKForcedDirectionVolume* Vol);
	void HoverboardLanded();
	void HideBoard();
	void ToggleAnimBoard(bool bAnimBoard, float Delay);
	void StopVehicleSounds();
	void RBPenetrationDestroy();
	void RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData);
	void RanInto(class AActor* Other);
	bool EncroachingOn(class AActor* Other);
	void RagdollDriver();
	bool DisableVehicle();
	void ReplicatedEvent(const struct FName& VarName);
	void SetOnlyControllableByTilt(bool bActive);
	void DrivingStatusChanged();
	void DriverLeft();
	bool DriverLeave(bool bForceLeave);
	void IncomingMissile(class AProjectile* P);
	bool Dodge(TEnumAsByte<EDoubleClickDir> InDoubleClickMove);
	unsigned char ChooseFireMode();
	float GetChargePower();
	void NotifyDriverTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum);
	void DriverRadiusDamage(float DamageAmount, float DamageRadius, class AController* EventInstigator, class UClass* DamageType, float Momentum, const struct FVector& HitLocation, class AActor* DamageCauser, float DamageFalloffExp);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void OnHoverboardSpinJump(class UUTSeqAct_HoverboardSpinJump* Action);
	void ClientForceSpinWarmup();
	void ServerSpin(float Direction);
	void ForceSpinJump();
	void SetInputs(float InForward, float InStrafe, float InUp);
	void BoardJumpEffect();
	void ServerChangeSeat(int RequestedSeat);
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void DetachDriver(class APawn* P);
	void InitPhysicsAnimPawn();
	void OnDriverPhysicsAssetChanged(class AUTPawn* UTP);
	bool IsHumanDriver(class AUTVehicle_Hoverboard* HB, class APawn* P);
	void TestResetPhys();
	void HandDamp(float LinDamp);
	void HandSpring(float LinSpring);
	void BackDamp(float LinDamp);
	void BackSpring(float LinSpring);
	void SetHoverboardRiderPhysics(class AUTPawn* UTP);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void SetFlagAttachToBody(class AUTPawn* UTP, bool bAttached);
	void SitDriver(class AUTPawn* UTP, int SeatIndex);
	void AttachDriver(class APawn* P);
	void VehicleCalcCamera(float DeltaTime, int SeatIndex, bool bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart);
	struct FVector GetCameraStart(int SeatIndex);
	bool DriverEnter(class APawn* P);
	void AttachHoverboardEffects();
	void InitializeEffects();
	void DriverDied(class UClass* DamageType);
	void WeaponRotationChanged(int SeatIndex);
	void Tick(float DeltaSeconds);
	void UpdateHoverboardDustEffect(float DustHeight);
	void ServerRequestDodge(bool bDodgeLeft);
	void RequestDodge();
	bool KickOutBot();
	bool ShouldShowUseable(class APlayerController* PC, float Dist);
	bool AnySeatAvailable();
	struct FVector GetCameraFocus(int SeatIndex);
	void DisplayHud(class AUTHUD* HUD, class UCanvas* Canvas, const struct FVector2D& HudPOS, int SeatIndex);
	float GetDisplayedHealth();
	void PlayHorn();
	bool CoversScreenSpace(const struct FVector& ScreenLoc, class UCanvas* Canvas);
	void FindGoodEndView(class APlayerController* InPC, struct FRotator* GoodRotation);
	void PostInitRigidBody(class UPrimitiveComponent* PrimComp);
};


// Class UTGame.UTBeamWeapon
// 0x005C (0x0614 - 0x05B8)
class AUTBeamWeapon : public AUTWeapon
{
public:
	class UParticleSystem*                             BeamTemplate[0x2];                                        // 0x05B8(0x0004)
	class UParticleSystemComponent*                    BeamEmitter[0x2];                                         // 0x05C0(0x0004) (ExportObject, Component, EditInline)
	struct FName                                       BeamSockets[0x2];                                         // 0x05C8(0x0008)
	struct FName                                       EndPointParamName;                                        // 0x05D8(0x0008)
	struct FName                                       BeamPreFireAnim[0x2];                                     // 0x05E0(0x0008)
	struct FName                                       BeamFireAnim[0x2];                                        // 0x05F0(0x0008)
	struct FName                                       BeamPostFireAnim[0x2];                                    // 0x0600(0x0008)
	class UForceFeedbackWaveform*                      BeamWeaponFireWaveForm;                                   // 0x0610(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTBeamWeapon");
		return ptr;
	}


	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void UpdateBeam(float DeltaTime);
	void ProcessBeamHit(const struct FVector& StartTrace, const struct FVector& AimDir, float DeltaTime, struct FImpactInfo* TestImpact);
	void UpdateBeamEmitter(const struct FVector& FlashLocation, const struct FVector& HitNormal, class AActor* HitActor);
	void SetBeamEmitterHidden(bool bHide);
	void KillBeamEmitter();
	void AddBeamEmitter();
};


// Class UTGame.UTWeap_LinkGun
// 0x00A0 (0x06B4 - 0x0614)
class AUTWeap_LinkGun : public AUTBeamWeapon
{
public:
	class AActor*                                      LinkedTo;                                                 // 0x0614(0x0004) (Net)
	class UPrimitiveComponent*                         LinkedComponent;                                          // 0x0618(0x0004) (ExportObject, Component, EditInline)
	float                                              WeaponLinkDistance;                                       // 0x061C(0x0004)
	TArray<class AUTWeap_LinkGun*>                     LinkedList;                                               // 0x0620(0x000C) (NeedCtorLink)
	class AActor*                                      Victim;                                                   // 0x062C(0x0004)
	int                                                LinkStrength;                                             // 0x0630(0x0004) (Net, RepNotify)
	float                                              LinkFlexibility;                                          // 0x0634(0x0004)
	float                                              LinkBreakDelay;                                           // 0x0638(0x0004)
	float                                              MomentumTransfer;                                         // 0x063C(0x0004)
	float                                              BeamAmmoUsePerSecond;                                     // 0x0640(0x0004)
	float                                              ReaccquireTimer;                                          // 0x0644(0x0004)
	unsigned long                                      bBeamHit : 1;                                             // 0x0648(0x0004) (Net)
	unsigned long                                      bAutoCharge : 1;                                          // 0x0648(0x0004)
	unsigned long                                      bFullPower : 1;                                           // 0x0648(0x0004) (Net, RepNotify)
	float                                              RechargeRate;                                             // 0x064C(0x0004)
	float                                              SavedDamage;                                              // 0x0650(0x0004)
	float                                              SavedAmmoUse;                                             // 0x0654(0x0004)
	float                                              MinimumDamage;                                            // 0x0658(0x0004)
	float                                              PartialAmmo;                                              // 0x065C(0x0004)
	class UMaterialInstanceConstant*                   WeaponMaterialInstance;                                   // 0x0660(0x0004)
	class AUTLinkBeamLight*                            BeamLight;                                                // 0x0664(0x0004)
	class USoundCue*                                   StartAltFireSound;                                        // 0x0668(0x0004)
	class USoundCue*                                   EndAltFireSound;                                          // 0x066C(0x0004)
	class AUTEmitter*                                  BeamEndpointEffect;                                       // 0x0670(0x0004)
	class UParticleSystemComponent*                    PoweredUpEffect;                                          // 0x0674(0x0004) (ExportObject, Component, EditInline)
	struct FName                                       PoweredUpEffectSocket;                                    // 0x0678(0x0008)
	struct FVector                                     BeamAttachLocation;                                       // 0x0680(0x000C)
	float                                              LastBeamAttachTime;                                       // 0x068C(0x0004)
	struct FVector                                     BeamAttachNormal;                                         // 0x0690(0x000C)
	class AActor*                                      BeamAttachActor;                                          // 0x069C(0x0004)
	class UClass*                                      LinkAttachmentClass;                                      // 0x06A0(0x0004)
	class UParticleSystem*                             TeamMuzzleFlashTemplates[0x3];                            // 0x06A4(0x0004)
	class UParticleSystem*                             HighPowerMuzzleFlashTemplate;                             // 0x06B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeap_LinkGun");
		return ptr;
	}


	void BoostPower();
	bool DenyPickupQuery(class UClass* ItemClass, class AActor* Pickup);
	float SuggestDefenseStyle();
	float SuggestAttackStyle();
	float GetOptimalRangeFor(class AActor* Target);
	bool CanHeal(class AActor* Other);
	unsigned char BestMode();
	bool FocusOnLeader(bool bLeaderFiring);
	float GetAIRating();
	void ReplicatedEvent(const struct FName& VarName);
	void ChangeVisibility(bool bIsVisible);
	void CalcLinkStrength();
	void GetLinkedWeapons(TArray<class AUTWeap_LinkGun*>* LinkedWeapons);
	void FindLinkedWeapons();
	void UnLink(bool bDelayed);
	void AttemptLinkTo(class AActor* Who, class UPrimitiveComponent* HitComponent);
	struct FVector GetLinkedToLocation();
	void ProcessBeamHit(const struct FVector& StartTrace, const struct FVector& AimDir, float DeltaTime, struct FImpactInfo* TestImpact);
	void RechargeAmmo();
	void ConsumeBeamAmmo(float Amount);
	void ConsumeAmmo(unsigned char FireModeNum);
	void KillEndpointEffect();
	void KillBeamEmitter();
	void SetBeamEmitterHidden(bool bHide);
	void Destroyed();
	class UClass* GetProjectileClass();
	void UpdateBeamEmitter(const struct FVector& FlashLocation, const struct FVector& HitNormal, class AActor* HitActor);
	void AttachWeaponTo(class USkeletalMeshComponent* MeshCpnt, const struct FName& SocketName);
	void SetSkin(class UMaterial* NewMaterial);
	void DrawWeaponCrosshair(class AHUD* HUD);
	class UParticleSystem* GetTeamMuzzleFlashTemplate(unsigned char TeamNum);
	void PostBeginPlay();
};


// Class UTGame.UTGFxTweenableMoviePlayer
// 0x000C (0x0188 - 0x017C)
class UUTGFxTweenableMoviePlayer : public UGFxMoviePlayer
{
public:
	TArray<struct FGFxTween>                           TweenList;                                                // 0x017C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGFxTweenableMoviePlayer");
		return ptr;
	}


	void TweenComplete(int Index);
	void PrintTweensToLog();
	void ClearsTweensOnMovieClip(class UGFxObject* MC, bool bReset);
	void Tick(float DeltaTime);
	void ProcessTweenCallback(const struct FString& Callback, class UGFxObject* TargetMC);
	void TweenTo(class UGFxObject* MC, float Duration, const struct FString& Member, float Target, TEnumAsByte<ETweenType> NewTweenType, const struct FString& Callback);
};


// Class UTGame.GFxProjectedUI
// 0x0108 (0x0290 - 0x0188)
class UGFxProjectedUI : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  Root;                                                     // 0x0188(0x0004)
	class UGFxObject*                                  Window;                                                   // 0x018C(0x0004)
	class UGFxObject*                                  MainMC;                                                   // 0x0190(0x0004)
	class UGFxObject*                                  BackpackMC;                                               // 0x0194(0x0004)
	class UGFxObject*                                  ArsenalMC;                                                // 0x0198(0x0004)
	TArray<class UGFxUI_InventoryButton*>              Buttons;                                                  // 0x019C(0x000C) (NeedCtorLink)
	TArray<struct FItemData>                           Items;                                                    // 0x01A8(0x000C) (NeedCtorLink)
	class UGFxObject*                                  EquippedWeapon;                                           // 0x01B4(0x0004)
	class UGFxObject*                                  EquippedWeaponOutline;                                    // 0x01B8(0x0004)
	class UGFxObject*                                  EquippedWeaponText1;                                      // 0x01BC(0x0004)
	class UGFxObject*                                  EquippedWeaponText2;                                      // 0x01C0(0x0004)
	unsigned long                                      bArsenalTabFocused : 1;                                   // 0x01C4(0x0004)
	unsigned long                                      bInitialized : 1;                                         // 0x01C4(0x0004)
	class UGFxObject*                                  BackpackTabMC;                                            // 0x01C8(0x0004)
	class UGFxObject*                                  ArsenalTabMC;                                             // 0x01CC(0x0004)
	class UGFxObject*                                  LeftArrow02;                                              // 0x01D0(0x0004)
	class UGFxObject*                                  LeftArrow01;                                              // 0x01D4(0x0004)
	class UGFxObject*                                  BackgroundMC;                                             // 0x01D8(0x0004)
	class UGFxObject*                                  CPCLogoMC;                                                // 0x01DC(0x0004)
	class UGFxObject*                                  StartUpTextMC;                                            // 0x01E0(0x0004)
	class UGFxObject*                                  BG_LineMC;                                                // 0x01E4(0x0004)
	class UGFxObject*                                  BG_ArrowMC;                                               // 0x01E8(0x0004)
	class UGFxObject*                                  BG_Optic1MC;                                              // 0x01EC(0x0004)
	class UGFxObject*                                  BG_Optic2MC;                                              // 0x01F0(0x0004)
	class UGFxObject*                                  BG_Optic3MC;                                              // 0x01F4(0x0004)
	class UGFxObject*                                  BG_Optic4MC;                                              // 0x01F8(0x0004)
	class UGFxObject*                                  BG_Edge_LeftBottom;                                       // 0x01FC(0x0004)
	class UGFxObject*                                  BG_Edge_LeftMiddle;                                       // 0x0200(0x0004)
	class UGFxObject*                                  BG_Edge_LeftTop;                                          // 0x0204(0x0004)
	class UGFxObject*                                  BG_Edge_RightTop;                                         // 0x0208(0x0004)
	class UGFxObject*                                  BG_Edge_RightMiddle;                                      // 0x020C(0x0004)
	class UGFxObject*                                  BG_Edge_RightBottom;                                      // 0x0210(0x0004)
	class UGFxObject*                                  InfoMC;                                                   // 0x0214(0x0004)
	class UGFxObject*                                  InfoIconWeap;                                             // 0x0218(0x0004)
	class UGFxObject*                                  InfoIconItem;                                             // 0x021C(0x0004)
	class UGFxObject*                                  InfoText;                                                 // 0x0220(0x0004)
	class UGFxObject*                                  InfoTitle;                                                // 0x0224(0x0004)
	float                                              Scale;                                                    // 0x0228(0x0004)
	float                                              Width;                                                    // 0x022C(0x0004)
	float                                              Height;                                                   // 0x0230(0x0004)
	float                                              rotval;                                                   // 0x0234(0x0004)
	float                                              rightThreshold;                                           // 0x0238(0x0004)
	float                                              leftThreshold;                                            // 0x023C(0x0004)
	class UClass*                                      WeaponClass[0xB];                                         // 0x0240(0x0004)
	struct FRotator                                    StartRotation;                                            // 0x026C(0x000C)
	struct FString                                     AcceptString;                                             // 0x0278(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     CancelString;                                             // 0x0284(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxProjectedUI");
		return ptr;
	}


	void CreateItemData();
	void UpdatePos();
	void FloatSelectionDown(class UGFxObject* ButtonIconMC);
	void FloatSelectionUp(class UGFxObject* ButtonIconMC);
	void TweenTurbines(bool Toggle);
	void ProcessTweenCallback(const struct FString& Callback, class UGFxObject* TargetMC);
	void UpdateEquippedWeapon();
	void FakeUpdateEquippedWeapon(int Index);
	void PopulateArsenal();
	void SetInfo(int Index);
	void OnClickFakeItem(const struct FEventData& ev);
	void OnFocusBackpackTab(const struct FEventData& ev);
	void OnFocusArsenalTab(const struct FEventData& ev);
	void OnFocusUpdateInfo(const struct FEventData& ev);
	void OnClickWeaponButton(const struct FEventData& ev);
	void OnFocusOutSelection(const struct FEventData& ev);
	void OnFocusInSelection(const struct FEventData& ev);
	void SwitchWeapon(unsigned char Index);
	void SetupBackpackButtons();
	void SetupArsenalButtons();
	void PopulateBackpackFake();
	void SetupInfo();
	void SetupBackpack();
	void SetupArsenal();
	void SetupBorder();
	void SetupBG();
	void OnCloseAnimComplete();
	void StartCloseAnimation();
	void AddCaptureKeys();
	void ConfigureInventory();
	bool Start(bool StartPaused);
};


// Class UTGame.GFxUI_InventoryButton
// 0x0010 (0x0094 - 0x0084)
class UGFxUI_InventoryButton : public UGFxClikWidget
{
public:
	struct FString                                     Content;                                                  // 0x0084(0x000C) (NeedCtorLink)
	class UGFxObject*                                  IconMC;                                                   // 0x0090(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUI_InventoryButton");
		return ptr;
	}


	void SetIconMC(class UGFxObject* iconClip);
	void SetContent(const struct FString& newContent);
};


// Class UTGame.UTItemPickupFactory
// 0x0020 (0x03C8 - 0x03A8)
class AUTItemPickupFactory : public AUTPickupFactory
{
public:
	class USoundCue*                                   PickupSound;                                              // 0x03A8(0x0004)
	struct FString                                     PickupMessage;                                            // 0x03AC(0x000C) (Const, Localized, NeedCtorLink)
	float                                              RespawnTime;                                              // 0x03B8(0x0004)
	struct FString                                     UseHintMessage;                                           // 0x03BC(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTItemPickupFactory");
		return ptr;
	}


	float BotDesireability(class APawn* P, class AController* C);
	float GetRespawnTime();
	void SetRespawn();
	void SpawnCopyFor(class APawn* Recipient);
	struct FString GetLocalString(int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3);
	void InitializePickup();
};


// Class UTGame.UTHealthPickupFactory
// 0x0008 (0x03D0 - 0x03C8)
class AUTHealthPickupFactory : public AUTItemPickupFactory
{
public:
	int                                                HealingAmount;                                            // 0x03C8(0x0004)
	unsigned long                                      bSuperHeal : 1;                                           // 0x03CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTHealthPickupFactory");
		return ptr;
	}


	float BotDesireability(class APawn* P, class AController* C);
	int HealAmount(class APawn* Recipient);
	void SpawnCopyFor(class APawn* Recipient);
	void UpdateHUD(class AUTHUD* H);
};


// Class UTGame.UTArmorPickupFactory
// 0x0004 (0x03CC - 0x03C8)
class AUTArmorPickupFactory : public AUTItemPickupFactory
{
public:
	int                                                ShieldAmount;                                             // 0x03C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTArmorPickupFactory");
		return ptr;
	}


	float BotDesireability(class APawn* Bot, class AController* C);
	void AddShieldStrength(class AUTPawn* P);
	int CanUseShield(class AUTPawn* P);
	void SpawnCopyFor(class APawn* Recipient);
	void PostBeginPlay();
	void UpdateHUD(class AUTHUD* H);
};


// Class UTGame.UTWeap_ShockRifleBase
// 0x0000 (0x05B8 - 0x05B8)
class AUTWeap_ShockRifleBase : public AUTWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeap_ShockRifleBase");
		return ptr;
	}

};


// Class UTGame.UTWeap_RocketLauncher
// 0x0154 (0x070C - 0x05B8)
class AUTWeap_RocketLauncher : public AUTWeapon
{
public:
	TEnumAsByte<ERocketFireMode1>                      LoadedFireMode;                                           // 0x05B8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	class UClass*                                      SeekingRocketClass;                                       // 0x05BC(0x0004)
	class UClass*                                      LoadedRocketClass;                                        // 0x05C0(0x0004)
	class UClass*                                      GrenadeClass;                                             // 0x05C4(0x0004)
	int                                                GrenadeSpreadDist;                                        // 0x05C8(0x0004)
	class USoundCue*                                   AltFireModeChangeSound;                                   // 0x05CC(0x0004)
	class USoundCue*                                   RocketLoadedSound;                                        // 0x05D0(0x0004)
	class USoundCue*                                   GrenadeFireSound;                                         // 0x05D4(0x0004)
	class UUDKSkeletalMeshComponent*                   SkeletonFirstPersonMesh;                                  // 0x05D8(0x0004) (ExportObject, Component, EditInline)
	unsigned long                                      bIsAnyAmmoHidden : 1;                                     // 0x05DC(0x0004)
	unsigned long                                      bLockedOnTarget : 1;                                      // 0x05DC(0x0004) (Net)
	unsigned long                                      bTargetLockingActive : 1;                                 // 0x05DC(0x0004)
	float                                              LockCheckTime;                                            // 0x05E0(0x0004) (Edit)
	float                                              LockRange;                                                // 0x05E4(0x0004)
	float                                              LockAcquireTime;                                          // 0x05E8(0x0004) (Edit)
	float                                              LockTolerance;                                            // 0x05EC(0x0004) (Edit)
	class AActor*                                      LockedTarget;                                             // 0x05F0(0x0004) (Net)
	class APlayerReplicationInfo*                      LockedTargetPRI;                                          // 0x05F4(0x0004)
	class AActor*                                      PendingLockedTarget;                                      // 0x05F8(0x0004)
	float                                              LastLockedOnTime;                                         // 0x05FC(0x0004)
	float                                              PendingLockedTargetTime;                                  // 0x0600(0x0004)
	float                                              LastValidTargetTime;                                      // 0x0604(0x0004)
	float                                              LockAim;                                                  // 0x0608(0x0004)
	float                                              ConsoleLockAim;                                           // 0x060C(0x0004)
	class USoundCue*                                   LockAcquiredSound;                                        // 0x0610(0x0004)
	class USoundCue*                                   LockLostSound;                                            // 0x0614(0x0004)
	float                                              LastTargetLockCheckTime;                                  // 0x0618(0x0004)
	int                                                LoadedShotCount;                                          // 0x061C(0x0004)
	int                                                MaxLoadCount;                                             // 0x0620(0x0004)
	class USoundCue*                                   WeaponLoadedSnd;                                          // 0x0624(0x0004)
	TArray<float>                                      AltFireQueueTimes;                                        // 0x0628(0x000C) (NeedCtorLink)
	TArray<float>                                      AltFireLaunchTimes;                                       // 0x0634(0x000C) (NeedCtorLink)
	TArray<float>                                      AltFireEndTimes;                                          // 0x0640(0x000C) (NeedCtorLink)
	TArray<class USoundCue*>                           AltFireSndQue;                                            // 0x064C(0x000C) (NeedCtorLink)
	TArray<struct FName>                               MuzzleFlashSocketList;                                    // 0x0658(0x000C) (NeedCtorLink)
	TArray<class UUTParticleSystemComponent*>          MuzzleFlashPSCList;                                       // 0x0664(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	int                                                SpreadDist;                                               // 0x0670(0x0004)
	float                                              GracePeriod;                                              // 0x0674(0x0004)
	float                                              WaitToFirePct;                                            // 0x0678(0x0004)
	struct FString                                     GrenadeString;                                            // 0x067C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     SpiralString;                                             // 0x0688(0x000C) (Const, Localized, NeedCtorLink)
	struct FTextureCoordinates                         LoadedIconCoords[0x3];                                    // 0x0694(0x0010)
	struct FName                                       LoadUpAnimList[0x3];                                      // 0x06C4(0x0008)
	struct FName                                       WeaponAltFireLaunch[0x3];                                 // 0x06DC(0x0008)
	struct FName                                       WeaponAltFireLaunchEnd[0x3];                              // 0x06F4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeap_RocketLauncher");
		return ptr;
	}


	void ReplicatedEvent(const struct FName& VarName);
	int AddAmmo(int Amount);
	void UpdateAmmoVisibility();
	void HideRocket(const struct FName& RocketName, bool ShouldHide);
	void HideRocketAmmo();
	void PlayFiringSound();
	class UClass* GetProjectileClass();
	class AProjectile* ProjectileFire();
	void FireLoad();
	void WeaponFireLoad();
	int GetSpreadDist();
	unsigned char BestMode();
	float GetAIRating();
	float SuggestAttackStyle();
	void DrawLFMData(class AHUD* HUD);
	void CauseMuzzleFlash();
	void DetachMuzzleFlash();
	void AttachMuzzleFlash();
	void CauseMuzzleFlashLight();
	void StopMuzzleFlash();
	void MuzzleFlashTimer();
	void ActiveRenderOverlays(class AHUD* H);
	void Destroyed();
	void CheckTargetLock();
	void Tick(float DeltaTime);
	bool CanLockOnTo(class AActor* TA);
	void AdjustLockTarget(class AActor* NewLockTarget);
	void FireAmmunition();
	void GetWeaponDebug(TArray<struct FString>* DebugInfo);
	float GetFireInterval(unsigned char FireModeNum);
	void AdjustWeaponTimingForConsole();
};


// Class UTGame.GFxUDKFrontEnd
// 0x0078 (0x01F4 - 0x017C)
class UGFxUDKFrontEnd : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                                   // 0x017C(0x0004)
	class UGFxObject*                                  ManagerMC;                                                // 0x0180(0x0004)
	unsigned long                                      bInitialized : 1;                                         // 0x0184(0x0004)
	class UGFxUDKFrontEnd_MainMenu*                    MainMenuView;                                             // 0x0188(0x0004)
	class UGFxUDKFrontEnd_InstantAction*               InstantActionView;                                        // 0x018C(0x0004)
	class UGFxUDKFrontEnd_Multiplayer*                 MultiplayerView;                                          // 0x0190(0x0004)
	class UGFxUDKFrontEnd_HostGame*                    HostGameView;                                             // 0x0194(0x0004)
	class UGFxUDKFrontEnd_MapSelect*                   MapSelectView;                                            // 0x0198(0x0004)
	class UGFxUDKFrontEnd_GameMode*                    GameModeView;                                             // 0x019C(0x0004)
	class UGFxUDKFrontEnd_Mutators*                    MutatorsView;                                             // 0x01A0(0x0004)
	class UGFxUDKFrontEnd_Settings*                    SettingsView;                                             // 0x01A4(0x0004)
	class UGFxUDKFrontEnd_ServerSettings*              ServerSettingsView;                                       // 0x01A8(0x0004)
	class UGFxUDKFrontEnd_JoinGame*                    JoinGameView;                                             // 0x01AC(0x0004)
	class UGFxUDKFrontEnd_InfoDialog*                  InfoDialog;                                               // 0x01B0(0x0004)
	class UGFxUDKFrontEnd_FilterDialog*                FilterDialog;                                             // 0x01B4(0x0004)
	class UGFxUDKFrontEnd_JoinDialog*                  JoinDialog;                                               // 0x01B8(0x0004)
	class UGFxUDKFrontEnd_ErrorDialog*                 ErrorDialog;                                              // 0x01BC(0x0004)
	class UGFxUDKFrontEnd_PasswordDialog*              PasswordDialog;                                           // 0x01C0(0x0004)
	TArray<struct FViewInfo>                           ViewData;                                                 // 0x01C4(0x000C) (Config, NeedCtorLink)
	TArray<class UGFxUDKFrontEnd_View*>                ViewStack;                                                // 0x01D0(0x000C) (NeedCtorLink)
	TArray<struct FName>                               LoadedViews;                                              // 0x01DC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __EscapeDelegate__Delegate;                               // 0x01E8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd");
		return ptr;
	}


	void DestroyDependantViews(const struct FName& InViewName);
	void LoadDependantViews(const struct FName& InViewName);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool CheckLinkConnectionAndError(const struct FString& AlternateTitle, const struct FString& AlternateMessage);
	void PostWidgetInit();
	void ASShowCursor(bool bShowCursor);
	void ConfigureView(class UGFxUDKFrontEnd_View* InView, const struct FName& WidgetName, const struct FName& WidgetPath);
	void UpdateViewLayout();
	class UGFxObject* PopViewStub();
	class UGFxObject* PopView();
	void ASSetSelectionFocus(class UGFxObject* MovieClip);
	void SetSelectionFocus(class UGFxObject* MovieClip);
	void PushDialogView(class UGFxUDKFrontEnd_View* dialogView);
	void PushView(class UGFxUDKFrontEnd_View* TargetView);
	bool IsViewAllowed(class UGFxUDKFrontEnd_View* TargetView);
	void ConfigureTargetView(class UGFxUDKFrontEnd_View* TargetView);
	void ConfigureTargetDialog(class UGFxUDKFrontEnd_View* TargetDialog);
	class UGFxUDKFrontEnd_Dialog* SpawnDialog(const struct FName& TargetDialogName, class UGFxUDKFrontEnd_Screen* ParentView);
	void PushViewByName(const struct FName& TargetViewName, class UGFxUDKFrontEnd_Screen* ParentView);
	void SetEscapeDelegate(const struct FScriptDelegate& InDelegate);
	bool IsViewLoaded(const struct FName& InViewName);
	void LoadViewByName(const struct FName& InViewName);
	void LoadView(const struct FViewInfo& InViewInfo);
	void LoadViews();
	void ConfigFrontEnd();
	bool Start(bool StartPaused);
	void EscapeDelegate();
};


// Class UTGame.GFxUIView
// 0x0004 (0x007C - 0x0078)
class UGFxUIView : public UGFxObject
{
public:
	unsigned long                                      bRequiresNetwork : 1;                                     // 0x0078(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUIView");
		return ptr;
	}


	void ConsoleCommand(const struct FString& Cmd, bool bWriteToLog);
	int GetPlayerControllerId(int PlayerIndex);
	int GetPlayerIndex();
	struct FString GetCommonOptionsURL();
	bool IsLoggedIn(int ControllerId, bool bRequireOnlineLogin);
	struct FString GetPlayerName();
	bool HasLinkConnection();
	class AUDKPlayerController* GetUDKPlayerOwner(int PlayerIndex);
	class ULocalPlayer* GetPlayerOwner(int PlayerIndex);
};


// Class UTGame.GFxUDKFrontEnd_View
// 0x000C (0x0088 - 0x007C)
class UGFxUDKFrontEnd_View : public UGFxUIView
{
public:
	class UGFxUDKFrontEnd*                             MenuManager;                                              // 0x007C(0x0004)
	struct FName                                       ViewName;                                                 // 0x0080(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_View");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void OnEscapeKeyPress();
	void MoveBackImpl();
	void Select_Back(const struct FEventData& ev);
	void PlayCloseAnimation();
	void PlayOpenAnimation();
	void DisableSubComponents(bool bDisableComponents);
	void OnViewClosed();
	void OnViewActivated();
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class UTGame.GFxUDKFrontEnd_Dialog
// 0x0020 (0x00A8 - 0x0088)
class UGFxUDKFrontEnd_Dialog : public UGFxUDKFrontEnd_View
{
public:
	class UGFxObject*                                  DialogMC;                                                 // 0x0088(0x0004)
	class UGFxObject*                                  TitleTxt;                                                 // 0x008C(0x0004)
	class UGFxObject*                                  InfoTxt;                                                  // 0x0090(0x0004)
	class UGFxClikWidget*                              BackBtn;                                                  // 0x0094(0x0004)
	class UGFxClikWidget*                              AcceptBtn;                                                // 0x0098(0x0004)
	struct FScriptDelegate                             __AcceptDelegate__Delegate;                               // 0x009C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_Dialog");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void Select_Back(const struct FEventData& ev);
	void SetBackButton_OnPress(const struct FScriptDelegate& EventListener);
	void SetBackButton(class UGFxObject* InBackButton);
	void PlayCloseAnimation();
	void PlayOpenAnimation();
	void OnTopMostView(bool bPlayOpenAnimation);
	void DisableSubComponents(bool bDisableComponents);
	void OnViewClosed();
	void AcceptDelegate(const struct FEventData& ev);
};


// Class UTGame.GFxUDKFrontEnd_PasswordDialog
// 0x000C (0x00B4 - 0x00A8)
class UGFxUDKFrontEnd_PasswordDialog : public UGFxUDKFrontEnd_Dialog
{
public:
	class UGFxClikWidget*                              PasswordRendererMC;                                       // 0x00A8(0x0004)
	class UGFxObject*                                  PasswordTextField;                                        // 0x00AC(0x0004)
	class UGFxClikWidget*                              JoinBtn;                                                  // 0x00B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_PasswordDialog");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void ClearPasswordRenderer();
	struct FString GetPassword();
	void SetOKButtonListener(const struct FScriptDelegate& DelegateListener);
	void SetBackButtonListener(const struct FScriptDelegate& DelegateListener);
	void DisableSubComponents(bool bEnableComponents);
	void OnViewClosed();
	void OnTopMostView(bool bPlayOpenAnimation);
};


// Class UTGame.GFxUDKFrontEnd_ErrorDialog
// 0x0000 (0x00A8 - 0x00A8)
class UGFxUDKFrontEnd_ErrorDialog : public UGFxUDKFrontEnd_Dialog
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_ErrorDialog");
		return ptr;
	}


	void DisableSubComponents(bool bDisableComponents);
	void OnViewClosed();
	void SetButtonLabel(const struct FString& ButtonLabel);
	void SetInfo(const struct FString& Info);
	void SetTitle(const struct FString& Title);
	void OnTopMostView(bool bPlayOpenAnimation);
};


// Class UTGame.GFxUDKFrontEnd_JoinDialog
// 0x0010 (0x00B8 - 0x00A8)
class UGFxUDKFrontEnd_JoinDialog : public UGFxUDKFrontEnd_Dialog
{
public:
	class UGFxClikWidget*                              ServerInfoListMC;                                         // 0x00A8(0x0004)
	class UGFxClikWidget*                              MutatorListMC;                                            // 0x00AC(0x0004)
	class UGFxClikWidget*                              JoinBtn;                                                  // 0x00B0(0x0004)
	class UGFxClikWidget*                              SpectateBtn;                                              // 0x00B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_JoinDialog");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void SetSpectateButtonPress(const struct FScriptDelegate& SpectateButtonListener);
	void SetJoinButtonPress(const struct FScriptDelegate& JoinButtonListener);
	void PopulateServerInfo(class UOnlineGameSettings* GameSettings);
	void DisableSubComponents(bool bDisableComponents);
	void OnTopMostView(bool bPlayOpenAnimation);
};


// Class UTGame.GFxUDKFrontEnd_FilterDialog
// 0x0034 (0x00DC - 0x00A8)
class UGFxUDKFrontEnd_FilterDialog : public UGFxUDKFrontEnd_Dialog
{
public:
	class UUTUIDataStore_StringList*                   StringListDataStore;                                      // 0x00A8(0x0004) (Transient)
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                            // 0x00AC(0x0004)
	class UUTDataStore_GameSearchDM*                   SearchDataStore;                                          // 0x00B0(0x0004)
	class UGFxClikWidget*                              FilterListMC;                                             // 0x00B4(0x0004)
	unsigned long                                      bFiltersHaveChanged : 1;                                  // 0x00B8(0x0004)
	class UGFxObject*                                  DataProvider;                                             // 0x00BC(0x0004)
	class UGFxObject*                                  GameTypeOptionItem;                                       // 0x00C0(0x0004)
	TArray<struct UGFxUDKFrontEnd_FilterDialog_FOption> ListOptions;                                              // 0x00C4(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnSwitchedGameType__Delegate;                           // 0x00D0(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_FilterDialog");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void PushFilterListUpdate();
	void SetupListDataProvider();
	void OnFilterList_OptionChanged(const struct FEventData& ev);
	struct FString GetGameClassByFriendlyName(const struct FString& FriendlyName);
	void ForceLANOption(int PlayerIndex);
	void ValidateServerType();
	void SetBackButtonListener(const struct FScriptDelegate& DelegateListener);
	void DisableSubComponents(bool bEnableComponents);
	void OnViewClosed();
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
	void OnSwitchedGameType();
};


// Class UTGame.GFxUDKFrontEnd_InfoDialog
// 0x0000 (0x00A8 - 0x00A8)
class UGFxUDKFrontEnd_InfoDialog : public UGFxUDKFrontEnd_Dialog
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_InfoDialog");
		return ptr;
	}


	void SetAcceptButton_OnPress(const struct FScriptDelegate& EventListener);
	void SetBackButtonLabel(const struct FString& Label);
	void SetAcceptButtonLabel(const struct FString& Label);
	void SetInfo(const struct FString& Info);
	void SetTitle(const struct FString& Title);
	void DisableSubComponents(bool bDisableComponents);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewClosed();
};


// Class UTGame.GFxUDKFrontEnd_Screen
// 0x0054 (0x00DC - 0x0088)
class UGFxUDKFrontEnd_Screen : public UGFxUDKFrontEnd_View
{
public:
	struct FString                                     ViewTitle;                                                // 0x0088(0x000C) (Config, NeedCtorLink)
	class UGFxClikWidget*                              BackBtn;                                                  // 0x0094(0x0004)
	class UGFxObject*                                  TitleMC;                                                  // 0x0098(0x0004)
	class UGFxObject*                                  FooterMC;                                                 // 0x009C(0x0004)
	class UGFxObject*                                  LogoMC;                                                   // 0x00A0(0x0004)
	class UGFxObject*                                  HelpTxt;                                                  // 0x00A4(0x0004)
	class UGFxObject*                                  InfoTxt;                                                  // 0x00A8(0x0004)
	struct FString                                     AcceptButtonHelpText;                                     // 0x00AC(0x000C) (NeedCtorLink)
	struct FString                                     CancelButtonHelpText;                                     // 0x00B8(0x000C) (NeedCtorLink)
	struct FString                                     AcceptButtonImage;                                        // 0x00C4(0x000C) (NeedCtorLink)
	struct FString                                     CancelButtonImage;                                        // 0x00D0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_Screen");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void UpdateHelpButtonImages();
	void FocusIn_BackButton(const struct FEventData& ev);
};


// Class UTGame.GFxUDKFrontEnd_JoinGame
// 0x009C (0x0178 - 0x00DC)
class UGFxUDKFrontEnd_JoinGame : public UGFxUDKFrontEnd_Screen
{
public:
	class UUDKDataStore_GameSearchBase*                SearchDataStore;                                          // 0x00DC(0x0004) (Transient)
	class UUTUIDataStore_StringList*                   StringListDataStore;                                      // 0x00E0(0x0004) (Transient)
	class UUTDataStore_GameSearchDM*                   SearchDMDataStore;                                        // 0x00E4(0x0004) (Transient)
	TArray<struct FOnlineGameSearchResult>             ServerInfoList;                                           // 0x00E8(0x000C) (Transient, NeedCtorLink)
	class UUTUIDataStore_MenuItems*                    MenuItemDataStore;                                        // 0x00F4(0x0004) (Transient)
	class UOnlineSubsystem*                            OnlineSub;                                                // 0x00F8(0x0004) (Transient)
	TScriptInterface<class UOnlineGameInterface>       GameInterface;                                            // 0x00FC(0x0008) (Transient)
	unsigned long                                      bGametypeOutdated : 1;                                    // 0x0104(0x0004) (Transient)
	unsigned long                                      bSpectate : 1;                                            // 0x0104(0x0004) (Transient)
	unsigned long                                      bIssuedInitialQuery : 1;                                  // 0x0104(0x0004) (Transient)
	unsigned long                                      bQueryDialogShowing : 1;                                  // 0x0104(0x0004) (Transient)
	unsigned long                                      bJoinDialogShowing : 1;                                   // 0x0104(0x0004) (Transient)
	unsigned long                                      bProcessingJoin : 1;                                      // 0x0104(0x0004) (Transient)
	struct FName                                       SearchDSName;                                             // 0x0108(0x0008) (Const, Transient)
	class UGFxUDKFrontEnd_PasswordDialog*              PasswordDialog;                                           // 0x0110(0x0004) (Transient)
	class UGFxUDKFrontEnd_JoinDialog*                  JoinDialogMC;                                             // 0x0114(0x0004) (Transient)
	TEnumAsByte<EQueryCompletionAction>                QueryCompletionAction;                                    // 0x0118(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	struct FString                                     ServerPassword;                                           // 0x011C(0x000C) (Transient, NeedCtorLink)
	int                                                LastServerAdded;                                          // 0x0128(0x0004)
	TArray<class UUDKUIDataProvider_SearchResult*>     ServerListData;                                           // 0x012C(0x000C) (NeedCtorLink)
	class UGFxObject*                                  MenuMC;                                                   // 0x0138(0x0004)
	class UGFxClikWidget*                              ServerListMC;                                             // 0x013C(0x0004)
	class UGFxClikWidget*                              RefreshBtn;                                               // 0x0140(0x0004)
	class UGFxObject*                                  HeaderBarMC;                                              // 0x0144(0x0004)
	class UGFxClikWidget*                              FlagsHeaderBtn;                                           // 0x0148(0x0004)
	class UGFxClikWidget*                              ServerHeaderBtn;                                          // 0x014C(0x0004)
	class UGFxClikWidget*                              MapHeaderBtn;                                             // 0x0150(0x0004)
	class UGFxClikWidget*                              PlayersHeaderBtn;                                         // 0x0154(0x0004)
	class UGFxClikWidget*                              PingHeaderBtn;                                            // 0x0158(0x0004)
	class UGFxObject*                                  FilterMatchTypeTxt;                                       // 0x015C(0x0004)
	class UGFxObject*                                  FilterGameModeTxt;                                        // 0x0160(0x0004)
	class UGFxObject*                                  StatusTxt;                                                // 0x0164(0x0004)
	class UGFxObject*                                  LoadingTickerMC;                                          // 0x0168(0x0004)
	class UGFxObject*                                  ServerCountTxt;                                           // 0x016C(0x0004)
	class UGFxClikWidget*                              FilterBtn;                                                // 0x0170(0x0004)
	int                                                SelectedIndex;                                            // 0x0174(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_JoinGame");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void NotifyGameTypeChanged();
	void OnCancelSearchComplete(bool bWasSuccessful);
	void SetRefreshing(bool IsRefreshing);
	void CancelQuery(TEnumAsByte<EQueryCompletionAction> DesiredCancelAction);
	bool AllowJoinServer();
	void OnJoinGameComplete(const struct FName& SessionName, bool bSuccessful);
	void ProcessJoin();
	void JoinServer();
	void JoinServerClikListener(const struct FEventData& ev);
	void SpectateServer(const struct FEventData& ev);
	void OnServerListItemPress(const struct FEventData& ev);
	void OnPingHeaderPress(const struct FEventData& ev);
	void OnPlayersHeaderPress(const struct FEventData& ev);
	void OnMapHeaderPress(const struct FEventData& ev);
	void OnServerHeaderPress(const struct FEventData& ev);
	void UpdateListDataProvider();
	void ServerFilterChangedGameType();
	void OnFilterButtonPress(const struct FEventData& ev);
	void OnRefreshButtonPress(const struct FEventData& ev);
	int GetDesiredMatchType();
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
	void OnFindOnlineGamesCompleteDelegate(bool bWasSuccessful);
	void SubmitServerListQuery(int PlayerIndex);
	void RefreshServerList(int InPlayerIndex, int MaxResults);
	struct FString BuildJoinURL(const struct FString& ResolvedConnectionURL);
	void UpdateServerCount();
	void OnPasswordDialog_OK(const struct FEventData& ev);
	struct FString StripInvalidPasswordCharacters(const struct FString& PasswordString, const struct FString& InvalidChars);
	void PromptForServerPassword();
	void UpdateButtonStates();
	void UseLANMode();
	void ConditionalRefreshServerList(int PlayerIndex);
	void OnGameTypeChanged(int PlayerIndex);
	int GetGameTypeSearchProviderIndex(const struct FString& GameClassName);
	void UpdateFilterButton();
	void Cleanup();
	void ForceLANOption(int PlayerIndex);
	void ValidateServerType();
	void DisableSubComponents(bool bDisableComponents);
	void OnViewClosed();
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewActivated();
	void OnViewLoaded();
};


// Class UTGame.GFxUDKFrontEnd_SettingsBase
// 0x0028 (0x0104 - 0x00DC)
class UGFxUDKFrontEnd_SettingsBase : public UGFxUDKFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              ListMC;                                                   // 0x00DC(0x0004)
	struct FString                                     SelectedOptionSet;                                        // 0x00E0(0x000C) (NeedCtorLink)
	class UGFxObject*                                  ListDataProvider;                                         // 0x00EC(0x0004)
	class UGFxObject*                                  MenuMC;                                                   // 0x00F0(0x0004)
	TArray<class UUTUIDataProvider_MenuOption*>        SettingsList;                                             // 0x00F4(0x000C) (NeedCtorLink)
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                        // 0x0100(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_SettingsBase");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	int FindPropertyIndexByName(const struct FString& InPropertyName);
	void Select_BackImpl();
	void OnEscapeKeyPress();
	int FindLocalizedSettingIndexByName(const struct FString& InSettingName);
	void UpdateListDataProvider();
	void UpdateDescription();
	void OnOptionChanged(const struct FEventData& ev);
	void OnListChange(const struct FEventData& ev);
	void SetList(class UGFxObject* List);
	void SaveState();
	void Select_Back(const struct FEventData& ev);
	void LoadDataFromStore();
	void SetSelectedOptionSet();
	void DisableSubComponents(bool bDisableComponents);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewActivated();
	void OnViewLoaded();
};


// Class UTGame.GFxUDKFrontEnd_ServerSettings
// 0x0004 (0x0108 - 0x0104)
class UGFxUDKFrontEnd_ServerSettings : public UGFxUDKFrontEnd_SettingsBase
{
public:
	unsigned long                                      bDataChangedByReqs : 1;                                   // 0x0104(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_ServerSettings");
		return ptr;
	}


	struct FString FindControlByUTClassName(unsigned char UTUIControlClass);
	void PopulateOptionDataProviderForIndex(int Index, class UGFxObject** OutDataProvider, struct FString* OutDefaultValue, int* OutDefaultIndex);
	void UpdateListDataProvider();
	void SaveState();
	void OnOptionChanged(const struct FEventData& ev);
	void SetSelectedOptionSet();
};


// Class UTGame.GFxUDKFrontEnd_Settings
// 0x0000 (0x0104 - 0x0104)
class UGFxUDKFrontEnd_Settings : public UGFxUDKFrontEnd_SettingsBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_Settings");
		return ptr;
	}


	void PopulateOptionDataProviderForIndex(int Index, class UGFxObject** OutDataProvider, struct FString* OutDefaultValue, int* OutDefaultIndex);
	void UpdateListDataProvider();
	void SetSelectedOptionSet();
};


// Class UTGame.GFxUDKFrontEnd_Mutators
// 0x0040 (0x011C - 0x00DC)
class UGFxUDKFrontEnd_Mutators : public UGFxUDKFrontEnd_Screen
{
public:
	TArray<class UUTUIDataProvider_Mutator*>           AllMutatorsList;                                          // 0x00DC(0x000C) (NeedCtorLink)
	TArray<class UUTUIDataProvider_Mutator*>           AvailableMutatorList;                                     // 0x00E8(0x000C) (NeedCtorLink)
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                            // 0x00F4(0x0004) (Transient)
	TArray<int>                                        EnabledList;                                              // 0x00F8(0x000C) (NeedCtorLink)
	class UGFxClikWidget*                              ListMC;                                                   // 0x0104(0x0004)
	class UGFxObject*                                  MenuMC;                                                   // 0x0108(0x0004)
	class UGFxObject*                                  ListDataProvider;                                         // 0x010C(0x0004)
	class UGFxClikWidget*                              ConfigListMC;                                             // 0x0110(0x0004)
	class UGFxObject*                                  ConfigListDataProvider;                                   // 0x0114(0x0004)
	unsigned long                                      bFirstUpdateAfterActivation : 1;                          // 0x0118(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_Mutators");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void SetConfigList(class UGFxObject* ConfigList);
	void SetList(class UGFxObject* List);
	bool IsCurrentMutatorConfigurable();
	void ApplyGameModeFilter();
	int GetNumEnabledMutators();
	struct FString GetEnabledMutators();
	void AddMutatorAndFilterList(int NewMutator);
	void SetMutatorEnabled(int MutatorId);
	void UpdateConfigListDataProvider();
	void UpdateListDataProvider();
	void UpdateDescription();
	void OnListChange(const struct FEventData& ev);
	unsigned char FindMutatorIndexByClass(const struct FString& MutatorClass);
	void OnListItemPress(const struct FEventData& ev);
	void PlayOpenAnimation();
	void DisableSubComponents(bool bDisableComponents);
	void OnTopMostView(bool bPlayOpenAnimation);
	void SortAllMutatorsBasedOnOfficialArray();
	void OnViewActivated();
	void OnViewLoaded();
};


// Class UTGame.GFxUDKFrontEnd_GameMode
// 0x003C (0x0118 - 0x00DC)
class UGFxUDKFrontEnd_GameMode : public UGFxUDKFrontEnd_Screen
{
public:
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                        // 0x00DC(0x0004) (Transient)
	class UUTUIDataStore_StringList*                   StringListDataStore;                                      // 0x00E0(0x0004) (Transient)
	struct FString                                     GameMode;                                                 // 0x00E4(0x000C) (Transient, NeedCtorLink)
	struct FString                                     MapName;                                                  // 0x00F0(0x000C) (Transient, NeedCtorLink)
	class UGFxClikWidget*                              ListMC;                                                   // 0x00FC(0x0004)
	class UGFxObject*                                  ListDataProvider;                                         // 0x0100(0x0004)
	class UGFxObject*                                  MenuMC;                                                   // 0x0104(0x0004)
	class UGFxClikWidget*                              ImgScrollerMC;                                            // 0x0108(0x0004)
	TArray<class UUTUIDataProvider_GameModeInfo*>      GameModeList;                                             // 0x010C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_GameMode");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void ASSetList(class UGFxObject* List);
	void SetImgScroller(class UGFxClikWidget* InImgScroller);
	void UpdateListDataProvider();
	void UpdateDescription();
	void OnListChange(const struct FEventData& ev);
	void OnListItemPress(const struct FEventData& ev);
	void OnGameModeChange(int SelectedIndex);
	void OnGameModeSelected(const struct FString& InGameMode, const struct FString& InDefaultMap, const struct FString& InGameSettingsClass);
	void DisableSubComponents(bool bDisableComponents);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class UTGame.GFxUDKFrontEnd_MapSelect
// 0x0020 (0x00FC - 0x00DC)
class UGFxUDKFrontEnd_MapSelect : public UGFxUDKFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              ListMC;                                                   // 0x00DC(0x0004)
	class UGFxObject*                                  ListDataProvider;                                         // 0x00E0(0x0004)
	class UGFxClikWidget*                              ImgScrollerMC;                                            // 0x00E4(0x0004)
	class UGFxObject*                                  MenuMC;                                                   // 0x00E8(0x0004)
	TArray<class UUTUIDataProvider_MapInfo*>           MapList;                                                  // 0x00EC(0x000C) (NeedCtorLink)
	int                                                LastSelectedItem;                                         // 0x00F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_MapSelect");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	struct FString GetMapFriendlyName(const struct FString& Map);
	struct FString GetSelectedMap();
	void SetupMapCycle(const struct FString& SelectedMap);
	struct FName GetCurrentGameMode();
	struct FString GetImageMarkupByMapName(const struct FString& InMapName);
	void SetImgScroller(class UGFxClikWidget* InImgScroller);
	void UpdateListDataProvider();
	void OnListItemPress(const struct FEventData& ev);
	void SetList(class UGFxObject* List);
	void OnMapList_ValueChanged(const struct FString& InMapSelected, const struct FString& InMapImageSelected);
	void DisableSubComponents(bool bDisableComponents);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class UTGame.GFxUDKFrontEnd_LaunchGame
// 0x00A4 (0x0180 - 0x00DC)
class UGFxUDKFrontEnd_LaunchGame : public UGFxUDKFrontEnd_Screen
{
public:
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                        // 0x00DC(0x0004) (Transient)
	class UUTUIDataStore_StringList*                   StringListDataStore;                                      // 0x00E0(0x0004) (Transient)
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                            // 0x00E4(0x0004) (Transient)
	struct FString                                     DefaultMapName;                                           // 0x00E8(0x000C) (Transient, NeedCtorLink)
	struct FString                                     DefaultGameMode;                                          // 0x00F4(0x000C) (Transient, NeedCtorLink)
	struct FString                                     DefaultGameModeSettings;                                  // 0x0100(0x000C) (Transient, NeedCtorLink)
	struct FString                                     DefaultMapImage;                                          // 0x010C(0x000C) (Transient, NeedCtorLink)
	struct FString                                     DefaultGameModePrefixes;                                  // 0x0118(0x000C) (Transient, NeedCtorLink)
	TArray<struct UGFxUDKFrontEnd_LaunchGame_FOption>  ListOptions;                                              // 0x0124(0x000C) (Config, NeedCtorLink)
	class UGFxClikWidget*                              ListMC;                                                   // 0x0130(0x0004)
	class UGFxObject*                                  ListDataProvider;                                         // 0x0134(0x0004)
	class UGFxObject*                                  MenuMC;                                                   // 0x0138(0x0004)
	class UGFxObject*                                  MapImageMC;                                               // 0x013C(0x0004)
	class UGFxObject*                                  MapNameTxt;                                               // 0x0140(0x0004)
	class UGFxObject*                                  GameTitleTxt;                                             // 0x0144(0x0004)
	class UGFxObject*                                  BotLvlTxt;                                                // 0x0148(0x0004)
	class UGFxObject*                                  OpponentsTxt;                                             // 0x014C(0x0004)
	class UGFxObject*                                  ScoreTxt;                                                 // 0x0150(0x0004)
	class UGFxObject*                                  TimeTxt;                                                  // 0x0154(0x0004)
	class UGFxObject*                                  MapTxt;                                                   // 0x0158(0x0004)
	class UGFxObject*                                  RespawnTxt;                                               // 0x015C(0x0004)
	class UGFxObject*                                  MutatorsTxt;                                              // 0x0160(0x0004)
	class UGFxObject*                                  MapLabelTxt;                                              // 0x0164(0x0004)
	class UGFxObject*                                  BotLvlLabelTxt;                                           // 0x0168(0x0004)
	class UGFxObject*                                  OpponentsLabelTxt;                                        // 0x016C(0x0004)
	class UGFxObject*                                  ScoreLabelTxt;                                            // 0x0170(0x0004)
	class UGFxObject*                                  TimeLabelTxt;                                             // 0x0174(0x0004)
	class UGFxObject*                                  RespawnLabelTxt;                                          // 0x0178(0x0004)
	class UGFxObject*                                  MutatorsLabelTxt;                                         // 0x017C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_LaunchGame");
		return ptr;
	}


	struct FString GetStringFromMarkup(const struct FString& MarkupString);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	struct FString GetGameModeFriendlyString(const struct FString& InGameMode);
	void UpdateListDataProvider();
	void UpdateDescription();
	void OnListChange(const struct FEventData& ev);
	void OnListItemPress(const struct FEventData& ev);
	void UpdateGameSettingsPanel();
	void OnStartGame_Confirm();
	void PlayCloseAnimation();
	void PlayOpenAnimation();
	void OnTopMostView(bool bPlayOpenAnimation);
	void DisableSubComponents(bool bDisableComponents);
	void OnViewActivated();
	void OnViewLoaded();
};


// Class UTGame.GFxUDKFrontEnd_HostGame
// 0x0000 (0x0180 - 0x0180)
class UGFxUDKFrontEnd_HostGame : public UGFxUDKFrontEnd_LaunchGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_HostGame");
		return ptr;
	}


	void OnStartGame_Confirm();
	void FinishStartDedicated();
	void OnGameCreated(const struct FName& SessionName, bool bWasSuccessful);
	void CreateOnlineGame(int PlayerIndex);
	void SetupGameSettings();
	struct FString GenerateMutatorURLString();
	void ValidateServerType();
	struct FString StripInvalidPasswordCharacters(const struct FString& PasswordString, const struct FString& InvalidChars);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewActivated();
};


// Class UTGame.GFxUDKFrontEnd_Multiplayer
// 0x0018 (0x00F4 - 0x00DC)
class UGFxUDKFrontEnd_Multiplayer : public UGFxUDKFrontEnd_Screen
{
public:
	TArray<struct UGFxUDKFrontEnd_Multiplayer_FOption> ListOptions;                                              // 0x00DC(0x000C) (Config, NeedCtorLink)
	class UGFxClikWidget*                              ListMC;                                                   // 0x00E8(0x0004)
	class UGFxObject*                                  ListDataProvider;                                         // 0x00EC(0x0004)
	class UGFxObject*                                  MenuMC;                                                   // 0x00F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_Multiplayer");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void SetList(class UGFxObject* InList);
	void UpdateListDataProvider();
	void UpdateDescription();
	void OnListChange(const struct FEventData& ev);
	void OnListItemPress(const struct FEventData& ev);
	void Select_HostGame();
	void Select_JoinGame();
	void DisableSubComponents(bool bDisableComponents);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class UTGame.GFxUDKFrontEnd_InstantAction
// 0x0000 (0x0180 - 0x0180)
class UGFxUDKFrontEnd_InstantAction : public UGFxUDKFrontEnd_LaunchGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_InstantAction");
		return ptr;
	}


	void OnStartGame_Confirm();
	void OnViewActivated();
};


// Class UTGame.GFxUDKFrontEnd_MainMenu
// 0x001D (0x00F9 - 0x00DC)
class UGFxUDKFrontEnd_MainMenu : public UGFxUDKFrontEnd_Screen
{
public:
	TArray<struct UGFxUDKFrontEnd_MainMenu_FOption>    ListOptions;                                              // 0x00DC(0x000C) (Config, NeedCtorLink)
	class UGFxClikWidget*                              ListMC;                                                   // 0x00E8(0x0004)
	class UGFxObject*                                  ListDataProvider;                                         // 0x00EC(0x0004)
	class UGFxObject*                                  UserLabelTxt;                                             // 0x00F0(0x0004)
	class UGFxObject*                                  UserNameTxt;                                              // 0x00F4(0x0004)
	unsigned char                                      LastSelectedIndex;                                        // 0x00F8(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUDKFrontEnd_MainMenu");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void OnEscapeKeyPress();
	void SetList(class UGFxObject* InList);
	void UpdateListDataProvider();
	void UpdateDescription();
	void OnListChange(const struct FEventData& ev);
	void OnListItemPress(const struct FEventData& ev);
	void ExitDialog_SelectBack(const struct FEventData& ev);
	void ExitDialog_SelectOK(const struct FEventData& ev);
	void Select_ExitGame();
	void Select_Multiplayer();
	void Select_InstantAction();
	void DisableSubComponents(bool bDisableComponents);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class UTGame.UTDataStore_GameSearchDM
// 0x0014 (0x00C0 - 0x00AC)
class UUTDataStore_GameSearchDM : public UUDKDataStore_GameSearchBase
{
public:
	class UClass*                                      HistoryGameSearchDataStoreClass;                          // 0x00AC(0x0004)
	class UUTDataStore_GameSearchHistory*              HistoryGameSearchDataStore;                               // 0x00B0(0x0004) (Transient)
	TArray<struct FGameSearchSettingsStorage>          StoredGameSearchValues;                                   // 0x00B4(0x000C) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDataStore_GameSearchDM");
		return ptr;
	}


	void SaveGameSearchParameters();
	void LoadGameSearchParameters();
	int FindStoredSettingValueIndex(int StoredGameSearchIndex, int LocalizedSettingId, bool bAddIfNecessary);
	int FindStoredSearchIndex(const struct FName& GameSearchName);
	bool HasOutstandingQueries(bool bRestrictCheckToSelf);
	bool SubmitGameSearch(unsigned char ControllerIndex, bool bInvalidateExistingSearchResults);
	void Registered(class ULocalPlayer* PlayerOwner);
};


// Class UTGame.UTUIDataStore_MenuItems
// 0x0000 (0x00F4 - 0x00F4)
class UUTUIDataStore_MenuItems : public UUDKUIDataStore_MenuItems
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataStore_MenuItems");
		return ptr;
	}

};


// Class UTGame.UTUIDataStore_StringList
// 0x0000 (0x008C - 0x008C)
class UUTUIDataStore_StringList : public UUDKUIDataStore_StringList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataStore_StringList");
		return ptr;
	}

};


// Class UTGame.UTUIResourceDataProvider
// 0x0000 (0x0098 - 0x0098)
class UUTUIResourceDataProvider : public UUDKUIResourceDataProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIResourceDataProvider");
		return ptr;
	}

};


// Class UTGame.UTUIDataProvider_GameModeInfo
// 0x007C (0x0114 - 0x0098)
class UUTUIDataProvider_GameModeInfo : public UUTUIResourceDataProvider
{
public:
	struct FString                                     GameMode;                                                 // 0x0098(0x000C) (Config, NeedCtorLink)
	struct FString                                     DefaultMap;                                               // 0x00A4(0x000C) (Config, NeedCtorLink)
	struct FString                                     GameSettingsClass;                                        // 0x00B0(0x000C) (Config, NeedCtorLink)
	struct FString                                     GameSearchClass;                                          // 0x00BC(0x000C) (Config, NeedCtorLink)
	struct FString                                     OptionSet;                                                // 0x00C8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00D4(0x000C) (Const, Config, Localized, NeedCtorLink)
	struct FString                                     PreviewImageMarkup;                                       // 0x00E0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Prefixes;                                                 // 0x00EC(0x000C) (Config, NeedCtorLink)
	struct FString                                     IconImage;                                                // 0x00F8(0x000C) (Config, NeedCtorLink)
	float                                              IconU;                                                    // 0x0104(0x0004) (Config)
	float                                              IconV;                                                    // 0x0108(0x0004) (Config)
	float                                              IconUL;                                                   // 0x010C(0x0004) (Config)
	float                                              IconVL;                                                   // 0x0110(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_GameModeInfo");
		return ptr;
	}

};


// Class UTGame.UTUIDataProvider_MapInfo
// 0x0000 (0x00CC - 0x00CC)
class UUTUIDataProvider_MapInfo : public UUDKUIDataProvider_MapInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_MapInfo");
		return ptr;
	}


	bool SupportedByCurrentGameMode();
	bool ShouldBeFiltered();
};


// Class UTGame.UTGameSettingsCommon
// 0x0008 (0x00B4 - 0x00AC)
class UUTGameSettingsCommon : public UUDKGameSettingsCommon
{
public:
	int                                                MaxPlayers;                                               // 0x00AC(0x0004) (DataBinding)
	int                                                MinNetPlayers;                                            // 0x00B0(0x0004) (DataBinding)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSettingsCommon");
		return ptr;
	}


	void SetCustomMutators(class UUTUIDataStore_MenuItems* MenuDataStore, TArray<struct FString>* MutatorClassNames);
	int GenerateMutatorBitmaskFromURL(class UUTUIDataStore_MenuItems* MenuDataStore, TArray<struct FString>* MutatorClassNames);
	void SetMutators(struct FString* URL);
	void UpdateFromURL(class AGameInfo* Game, struct FString* URL);
	void BuildURL(struct FString* OutURL);
	void SetOfficialMutatorBitmask(int MutatorBitMask);
	void SetCustomMapName(const struct FString& MapName);
};


// Class UTGame.UTUIDataProvider_SearchResult
// 0x0000 (0x00BC - 0x00BC)
class UUTUIDataProvider_SearchResult : public UUDKUIDataProvider_SearchResult
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_SearchResult");
		return ptr;
	}

};


// Class UTGame.UTBot
// 0x01B4 (0x0610 - 0x045C)
class AUTBot : public AUDKBot
{
public:
	class APawn*                                       InstantWarningShooter;                                    // 0x045C(0x0004)
	float                                              LastWarningTime;                                          // 0x0460(0x0004)
	unsigned long                                      bHuntPlayer : 1;                                          // 0x0464(0x0004)
	unsigned long                                      bCanFire : 1;                                             // 0x0464(0x0004)
	unsigned long                                      bStrafeDir : 1;                                           // 0x0464(0x0004)
	unsigned long                                      bChangeDir : 1;                                           // 0x0464(0x0004)
	unsigned long                                      bFrustrated : 1;                                          // 0x0464(0x0004)
	unsigned long                                      bInitLifeMessage : 1;                                     // 0x0464(0x0004)
	unsigned long                                      bReachedGatherPoint : 1;                                  // 0x0464(0x0004)
	unsigned long                                      bTacticalDoubleJump : 1;                                  // 0x0464(0x0004)
	unsigned long                                      bWasNearObjective : 1;                                    // 0x0464(0x0004)
	unsigned long                                      bHasFired : 1;                                            // 0x0464(0x0004)
	unsigned long                                      bForcedDirection : 1;                                     // 0x0464(0x0004)
	unsigned long                                      bFireSuccess : 1;                                         // 0x0464(0x0004)
	unsigned long                                      bStoppedFiring : 1;                                       // 0x0464(0x0004)
	unsigned long                                      bMustCharge : 1;                                          // 0x0464(0x0004)
	unsigned long                                      bPursuingFlag : 1;                                        // 0x0464(0x0004)
	unsigned long                                      bJustLanded : 1;                                          // 0x0464(0x0004)
	unsigned long                                      bRecommendFastMove : 1;                                   // 0x0464(0x0004)
	unsigned long                                      bIgnoreEnemyChange : 1;                                   // 0x0464(0x0004)
	unsigned long                                      bHasSuperWeapon : 1;                                      // 0x0464(0x0004)
	unsigned long                                      bPendingDoubleJump : 1;                                   // 0x0464(0x0004)
	unsigned long                                      bAllowedToImpactJump : 1;                                 // 0x0464(0x0004)
	unsigned long                                      bScriptedFrozen : 1;                                      // 0x0464(0x0004)
	unsigned long                                      bSendFlagMessage : 1;                                     // 0x0464(0x0004)
	unsigned long                                      bForceNoDetours : 1;                                      // 0x0464(0x0004)
	unsigned long                                      bShortCamp : 1;                                           // 0x0464(0x0004)
	unsigned long                                      bBetrayTeam : 1;                                          // 0x0464(0x0004)
	unsigned long                                      bSpawnedByKismet : 1;                                     // 0x0464(0x0004)
	unsigned long                                      bFinalStretch : 1;                                        // 0x0464(0x0004)
	unsigned long                                      bDirectHunt : 1;                                          // 0x0464(0x0004)
	unsigned long                                      bCheckDriverPickups : 1;                                  // 0x0464(0x0004) (Transient)
	unsigned long                                      bResetCombatTimer : 1;                                    // 0x0464(0x0004) (Transient)
	class AActor*                                      ImpactTarget;                                             // 0x0468(0x0004)
	float                                              ImpactJumpZ;                                              // 0x046C(0x0004)
	float                                              MaxSpecialJumpZ;                                          // 0x0470(0x0004)
	struct FName                                       OldMessageType;                                           // 0x0474(0x0008)
	int                                                OldMessageID;                                             // 0x047C(0x0004)
	int                                                LastTauntIndex;                                           // 0x0480(0x0004)
	class UClass*                                      KilledVehicleClass;                                       // 0x0484(0x0004)
	struct FVector                                     HidingSpot;                                               // 0x0488(0x000C)
	float                                              Aggressiveness;                                           // 0x0494(0x0004)
	float                                              LastAttractCheck;                                         // 0x0498(0x0004)
	class ANavigationPoint*                            BlockedPath;                                              // 0x049C(0x0004)
	float                                              AcquireTime;                                              // 0x04A0(0x0004)
	float                                              Aggression;                                               // 0x04A4(0x0004)
	float                                              LoseEnemyCheckTime;                                       // 0x04A8(0x0004)
	class AActor*                                      StartleActor;                                             // 0x04AC(0x0004)
	float                                              StartTacticalTime;                                        // 0x04B0(0x0004)
	float                                              LastUnderFire;                                            // 0x04B4(0x0004)
	float                                              RetreatStartTime;                                         // 0x04B8(0x0004)
	float                                              ForcedFlagDropTime;                                       // 0x04BC(0x0004)
	float                                              BaseAlertness;                                            // 0x04C0(0x0004)
	float                                              Accuracy;                                                 // 0x04C4(0x0004)
	float                                              BaseAggressiveness;                                       // 0x04C8(0x0004)
	float                                              StrafingAbility;                                          // 0x04CC(0x0004)
	float                                              CombatStyle;                                              // 0x04D0(0x0004)
	float                                              Tactics;                                                  // 0x04D4(0x0004)
	float                                              ReactionTime;                                             // 0x04D8(0x0004)
	float                                              Jumpiness;                                                // 0x04DC(0x0004)
	class UClass*                                      FavoriteWeapon;                                           // 0x04E0(0x0004)
	float                                              OldMessageTime;                                           // 0x04E4(0x0004)
	struct FString                                     GoalString;                                               // 0x04E8(0x000C) (NeedCtorLink)
	struct FString                                     SoakString;                                               // 0x04F4(0x000C) (NeedCtorLink)
	class AUTBot*                                      NextSquadMember;                                          // 0x0500(0x0004)
	float                                              ReTaskTime;                                               // 0x0504(0x0004)
	class AUTDefensePoint*                             DefensePoint;                                             // 0x0508(0x0004)
	class ANavigationPoint*                            DefensivePosition;                                        // 0x050C(0x0004)
	class AActor*                                      NoVehicleGoal;                                            // 0x0510(0x0004)
	struct FVector                                     DirectionHint;                                            // 0x0514(0x000C)
	float                                              StopStartTime;                                            // 0x0520(0x0004)
	float                                              LastRespawnTime;                                          // 0x0524(0x0004)
	float                                              FailedHuntTime;                                           // 0x0528(0x0004)
	class APawn*                                       FailedHuntEnemy;                                          // 0x052C(0x0004)
	float                                              LastSearchTime;                                           // 0x0530(0x0004)
	float                                              LastSearchWeight;                                         // 0x0534(0x0004)
	float                                              CampTime;                                                 // 0x0538(0x0004)
	int                                                NumRandomJumps;                                           // 0x053C(0x0004)
	float                                              LastFireAttempt;                                          // 0x0540(0x0004)
	float                                              GatherTime;                                               // 0x0544(0x0004)
	struct FName                                       OrderNames[0x10];                                         // 0x0548(0x0008) (Edit)
	struct FName                                       OldOrders;                                                // 0x05C8(0x0008)
	class AController*                                 OldOrderGiver;                                            // 0x05D0(0x0004)
	struct FVector                                     LastKnownPosition;                                        // 0x05D4(0x000C)
	struct FVector                                     LastKillerPosition;                                       // 0x05E0(0x000C)
	class AActor*                                      ScriptedTarget;                                           // 0x05EC(0x0004)
	float                                              LastActionMusicUpdate;                                    // 0x05F0(0x0004)
	float                                              LastTryHoverboardTime;                                    // 0x05F4(0x0004)
	class AActor*                                      LastFireTarget;                                           // 0x05F8(0x0004)
	float                                              LastCanAttackCheckTime;                                   // 0x05FC(0x0004)
	float                                              LastInjuredVoiceMessageTime;                              // 0x0600(0x0004)
	struct FScriptDelegate                             __CustomActionFunc__Delegate;                             // 0x0604(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTBot");
		return ptr;
	}


	bool HandlePathObstruction(class AActor* BlockedBy);
	void UnderLift(class ALiftCenter* M);
	void PerformCustomAction(const struct FScriptDelegate& ActionFunc);
	bool CustomActionFunc(class AUTBot* B);
	void StopMovement();
	bool FocusOnLeader(bool bLeaderFiring);
	bool IsShootingObjective();
	bool Stopped();
	bool FindViewSpot();
	bool IsHunting();
	bool EngageDirection(const struct FVector& StrafeDir, bool bForced);
	bool IsStrafing();
	bool DefendMelee(float Dist);
	void DoRetreat();
	void DoTacticalMove();
	void DoCharge();
	void DoStakeOut();
	bool LoseEnemy();
	bool LostContact(float MaxTime);
	float GetDesiredOffset();
	void ForceGiveWeapon();
	void Celebrate();
	void EnableBumps();
	void WanderOrCamp();
	void MoveAwayFrom(class AController* C);
	void MoveToDefensePoint();
	bool ShouldDefendPosition();
	bool IsDefending();
	void OnAIFreeze(class UUTSeqAct_AIFreeze* FreezeAction);
	bool IsRetreating();
	void DamageAttitudeTo(class AController* Other, float Damage);
	bool SuperPickupNotSpokenFor(class AUTPickupFactory* P);
	float SuperDesireability(class APickupFactory* P);
	float RatePickup(class AActor* PickupHolder, class UClass* InvClass);
	bool NeedWeapon();
	class AActor* FaceActor(float StrafingModifier);
	bool ShouldStrafeTo(class AActor* WayPoint);
	class AActor* FaceMoveTarget();
	void NotifyKilled(class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType);
	bool TryToDuck(const struct FVector& duckDir, bool bReversed);
	void ChangeStrafe();
	bool TryWallDodge(const struct FVector& HitNormal, class AActor* HitActor);
	void MissedDodge();
	void NotifyFallingHitWall(const struct FVector& HitNormal, class AActor* HitActor);
	void ReceiveRunOverWarning(class AUDKVehicle* V, float projSpeed, const struct FVector& VehicleDir);
	void ReceiveWarning(class APawn* shooter, float projSpeed, const struct FVector& FireDir);
	void DelayedInstantWarning();
	void NotifyTakeHit(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum);
	void ReceiveProjectileWarning(class AProjectile* Proj);
	void DelayedWarning();
	bool TryDuckTowardsMoveTarget(const struct FVector& Dir, const struct FVector& Y);
	struct FRotator GetAdjustedAimFor(class AWeapon* InWeapon, const struct FVector& projStart);
	float AdjustAimError(float TargetDist, bool bInstantProj);
	bool CheckFutureSight(float DeltaTime);
	struct FVector GetDirectionHint();
	bool FindBestPathToward(class AActor* A, bool bCheckedReach, bool bAllowDetour);
	bool AllowDetourTo(class ANavigationPoint* N);
	bool SetRouteToGoal(class AActor* A);
	bool StartMoveToward(class AActor* O);
	void TimedDodgeToMoveTarget();
	void NotifyPostLanded();
	bool NotifyLanded(const struct FVector& HitNormal, class AActor* FloorActor);
	void SetFall();
	bool PriorityObjective();
	bool NotifyBump(class AActor* Other, const struct FVector& HitNormal);
	bool AdjustAround(class APawn* Other);
	void ClearPathFor(class AController* C);
	bool CheckPathToGoalAround(class APawn* P);
	void Restart(bool bVehicleTransition);
	bool FindRoamDest();
	void SoakStop(const struct FString& problem);
	bool PickRetreatDestination();
	void TossFlagToPlayer(class AController* OrderGiver);
	bool FindInventoryGoal(float BestWeight);
	bool FindSuperPickup(float MaxDist);
	void ChooseAttackMode();
	void DoRangedAttackOn(class AActor* A);
	void FightEnemy(bool bCanCharge, float EnemyStrength);
	void VehicleFightEnemy(bool bCanCharge, float EnemyStrength);
	bool DoWaitForLanding();
	void DelayedLeaveVehicle();
	void LeaveVehicle(bool bBlocking);
	void EnterVehicle(class AVehicle* V);
	void ExecuteWhatToDoNext();
	void WhatToDoNext();
	void SetAlertness(float NewAlertness);
	void SetPeripheralVision();
	void SetMaxDesiredSpeed();
	void ResetSkill();
	void Initialize(float InSkill, struct FCharacterInfo* BotInfo);
	void Possess(class APawn* aPawn, bool bVehicleTransition);
	void Reset();
	void NotifyMissedJump();
	void NotifyJumpApex();
	void MayDodgeToMoveTarget();
	void NotifyPhysicsVolumeChange(class APhysicsVolume* NewVolume);
	bool StrafeFromDamage(float Damage, class UClass* DamageType, bool bFindDest);
	void EnemyChanged(bool bNewEnemyVisible);
	void SetEnemyInfo(bool bNewEnemyVisible);
	float RelativeStrength(class APawn* Other);
	bool AssignSquadResponsibility();
	void FreePoint();
	bool IsSniping();
	void CheckIfShouldCrouch(const struct FVector& StartPosition, const struct FVector& TargetPosition, float probability);
	bool CanStakeOut();
	bool ClearShot(const struct FVector& TargetLoc, bool bImmediateFire);
	void SetAttractionState();
	void SeePlayer(class APawn* SeenPlayer);
	void HearNoise(float Loudness, class AActor* NoiseMaker, const struct FName& NoiseType);
	void ClearTemporaryOrders();
	void SetTemporaryOrders(const struct FName& NewOrders, class AController* OrderGiver);
	void SetBotOrders(const struct FName& NewOrders, class AController* OrderGiver, bool bShouldAck);
	void SendMessage(class APlayerReplicationInfo* Recipient, const struct FName& MessageType, float Wait, class UClass* DamageType);
	void YellAt(class APlayerReplicationInfo* Moron);
	struct FName GetOrders();
	void DisplayDebug(class AHUD* HUD, float* YL, float* YPos);
	bool CanCombo();
	bool CanComboMoving();
	bool ProficientWithWeapon();
	float WeaponPreference(class AWeapon* W);
	float RateWeapon(class AWeapon* W);
	void OnAIStopFire(class UUTSeqAct_AIStopFire* FireAction);
	void StopFiring();
	void TimedFireWeaponAtScriptedTarget();
	void OnAIStartFireAt(class UUTSeqAct_AIStartFireAt* FireAction);
	bool CanAttack(class AActor* Other);
	bool FireWeaponAt(class AActor* A);
	void TimedFireWeaponAtEnemy();
	bool ShouldFireAgain();
	bool WeaponFireAgain(bool bFinishedFire);
	void ReadyForLift();
	void WaitForMover(class AInterpActor* M);
	void ResetDoubleJump();
	void TimeDJReset();
	bool CanImpactJump();
	void SetCombatTimer();
	void Startle(class AActor* Feared);
	void FearThisSpot(class AUTAvoidMarker* aSpot);
	bool NotifyHitWall(const struct FVector& HitNormal, class AActor* Wall);
	void SetupSpecialPathAbilities();
	void NotifyAddInventory(class AInventory* NewItem);
	bool HasTimedPowerup();
	bool LandingShake();
	void SpawnedByKismet();
	void PostBeginPlay();
	void Destroyed();
	void PawnDied(class APawn* P);
	void StartMonitoring(class APawn* P, float MaxDist);
	void WasKilledBy(class AController* Other);
	void EnemyJustTeleported();
};


// Class UTGame.UTVictoryMessage
// 0x0018 (0x007C - 0x0064)
class UUTVictoryMessage : public UUTLocalMessage
{
public:
	class USoundNodeWave*                              VictorySounds[0x6];                                       // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVictoryMessage");
		return ptr;
	}


	bool AddAnnouncement(class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	unsigned char AnnouncementLevel(unsigned char MessageIndex);
};


// Class UTGame.UTUIDataProvider_Mutator
// 0x0034 (0x00CC - 0x0098)
class UUTUIDataProvider_Mutator : public UUTUIResourceDataProvider
{
public:
	struct FString                                     ClassName;                                                // 0x0098(0x000C) (Config, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00A4(0x000C) (Const, Config, Localized, NeedCtorLink)
	struct FString                                     GroupNames;                                               // 0x00B0(0x000C) (Config, NeedCtorLink)
	TArray<struct FString>                             SupportedGameTypes;                                       // 0x00BC(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bStandaloneOnly : 1;                                      // 0x00C8(0x0004) (Config)
	unsigned long                                      bOfficialMutator : 1;                                     // 0x00C8(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_Mutator");
		return ptr;
	}


	bool SupportsCurrentGameMode();
	bool ShouldBeFiltered();
};


// Class UTGame.UTUIDataProvider_MenuOption
// 0x0000 (0x00F0 - 0x00F0)
class UUTUIDataProvider_MenuOption : public UUDKUIDataProvider_MenuOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_MenuOption");
		return ptr;
	}

};


// Class UTGame.GFxUI_PauseMenu
// 0x0034 (0x01BC - 0x0188)
class UGFxUI_PauseMenu : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                                   // 0x0188(0x0004)
	class UGFxObject*                                  PauseMC;                                                  // 0x018C(0x0004)
	class UGFxObject*                                  OverlayMC;                                                // 0x0190(0x0004)
	class UGFxObject*                                  Btn_Resume_Wrapper;                                       // 0x0194(0x0004)
	class UGFxObject*                                  Btn_Exit_Wrapper;                                         // 0x0198(0x0004)
	class UGFxClikWidget*                              Btn_ResumeMC;                                             // 0x019C(0x0004)
	class UGFxClikWidget*                              Btn_ExitMC;                                               // 0x01A0(0x0004)
	struct FString                                     ResumeString;                                             // 0x01A4(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     ExitString;                                               // 0x01B0(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUI_PauseMenu");
		return ptr;
	}


	void UT_ConsoleCommand(const struct FString& Cmd, bool bWriteToLog);
	void OnCloseAnimationComplete();
	void OnPlayAnimationComplete();
	void PlayCloseAnimation();
	void PlayOpenAnimation();
	void OnPressExitButton(const struct FEventData& ev);
	void OnPressResumeButton(const struct FEventData& ev);
	bool Start(bool StartPaused);
};


// Class UTGame.GFxUIFrontEnd_TitleScreen
// 0x0041 (0x01BD - 0x017C)
class UGFxUIFrontEnd_TitleScreen : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  TitleScreenMC;                                            // 0x017C(0x0004)
	class UGFxObject*                                  MainMenuMC;                                               // 0x0180(0x0004)
	class UGFxObject*                                  MenuButtonsMC;                                            // 0x0184(0x0004)
	class UGFxObject*                                  BlackMC;                                                  // 0x0188(0x0004)
	class UGFxClikWidget*                              MenuBtn1MC;                                               // 0x018C(0x0004)
	class UGFxClikWidget*                              MenuBtn2MC;                                               // 0x0190(0x0004)
	class UGFxClikWidget*                              MenuBtn3MC;                                               // 0x0194(0x0004)
	class UGFxClikWidget*                              MenuBtn4MC;                                               // 0x0198(0x0004)
	class UGFxClikWidget*                              MenuBtn5MC;                                               // 0x019C(0x0004)
	class UGFxClikWidget*                              MenuBtn6MC;                                               // 0x01A0(0x0004)
	struct FString                                     InstantActionMap;                                         // 0x01A4(0x000C) (NeedCtorLink)
	struct FString                                     CampaignMap;                                              // 0x01B0(0x000C) (NeedCtorLink)
	unsigned char                                      Selection;                                                // 0x01BC(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUIFrontEnd_TitleScreen");
		return ptr;
	}


	void UT_ConsoleCommand(const struct FString& Cmd, bool bWriteToLog);
	void OnCloseAnimationComplete();
	void PlayCloseAnimation();
	void OnMenuButtonPress(const struct FEventData& ev);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool Start(bool StartPaused);
};


// Class UTGame.GFxUILeaderboard
// 0x0088 (0x0210 - 0x0188)
class UGFxUILeaderboard : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                                   // 0x0188(0x0004)
	class UGFxObject*                                  LeaderboardMC;                                            // 0x018C(0x0004)
	class UGFxObject*                                  OverlayMC;                                                // 0x0190(0x0004)
	class UGFxObject*                                  TitleMC;                                                  // 0x0194(0x0004)
	class UGFxObject*                                  ListMC;                                                   // 0x0198(0x0004)
	class UGFxObject*                                  CountMC;                                                  // 0x019C(0x0004)
	class UGFxObject*                                  CountTF;                                                  // 0x01A0(0x0004)
	class UGFxObject*                                  Title_TitleGMC;                                           // 0x01A4(0x0004)
	class UGFxObject*                                  TitleTF;                                                  // 0x01A8(0x0004)
	class UGFxObject*                                  TitleGMC;                                                 // 0x01AC(0x0004)
	class UGFxObject*                                  ListHeaderMC;                                             // 0x01B0(0x0004)
	class UGFxObject*                                  ListScoreTF;                                              // 0x01B4(0x0004)
	class UGFxObject*                                  ListTitleTF;                                              // 0x01B8(0x0004)
	class UGFxObject*                                  FooterMC;                                                 // 0x01BC(0x0004)
	class UGFxObject*                                  FooterItemMC;                                             // 0x01C0(0x0004)
	class UGFxObject*                                  PlayerRow;                                                // 0x01C4(0x0004)
	unsigned long                                      bPlayerRowTween : 1;                                      // 0x01C8(0x0004)
	unsigned long                                      bInitialized : 1;                                         // 0x01C8(0x0004)
	unsigned long                                      bResolvingLocalPlayer : 1;                                // 0x01C8(0x0004)
	class UGFxObject*                                  Footer_NameTF;                                            // 0x01CC(0x0004)
	class UGFxObject*                                  Footer_ScoreLabelTF;                                      // 0x01D0(0x0004)
	class UGFxObject*                                  Footer_ScoreTF;                                           // 0x01D4(0x0004)
	class UGFxObject*                                  Footer_RankLabelTF;                                       // 0x01D8(0x0004)
	class UGFxObject*                                  Footer_RankTF;                                            // 0x01DC(0x0004)
	TArray<struct FListRow>                            ListItems;                                                // 0x01E0(0x000C) (NeedCtorLink)
	int                                                LeaderboardReadCount;                                     // 0x01EC(0x0004)
	TArray<struct FUILeaderboardEntry>                 LeaderboardData;                                          // 0x01F0(0x000C) (NeedCtorLink)
	TScriptInterface<class UOnlineStatsInterface>      OSI;                                                      // 0x01FC(0x0008)
	class UUTLeaderboardRead*                          LeaderboardStatsRead;                                     // 0x0204(0x0004)
	float                                              LastInitialReadAttempt;                                   // 0x0208(0x0004)
	int                                                ReadAttemptCount;                                         // 0x020C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUILeaderboard");
		return ptr;
	}


	void ReadOnlineStatsComplete(bool bWasSuccessful);
	void OnlineCleanup();
	void Tick(float DeltaTime);
	void DoInitialLeaderboardRead();
	void OnlineInit();
	void OnOpenAnimComplete();
	void OnCloseAnimComplete();
	void ProcessTweenCallback(const struct FString& Callback, class UGFxObject* TargetMC);
	void TweenPlayerRow(class UGFxObject* RowMC);
	void FloatLeaderboardAnimationY(bool Direction);
	void FloatLeaderboardAnimationX(bool Direction);
	void UpdateFooter(const struct FUILeaderboardEntry& FooterData);
	void UpdateHeaders();
	void SetPlayerRow(class UGFxObject* UpdatedPlayerRow);
	void UpdateRow(const struct FListRow& CurRow, const struct FUILeaderboardEntry& CurData);
	void UpdateLeaderboardLists();
	void Draw();
	void SetupList();
	void ConfigLeaderboard();
	void PlayCloseAnimation();
	void PlayOpenAnimation();
	bool Start(bool StartPaused);
};


// Class UTGame.GFxUIScoreboard
// 0x02F4 (0x047C - 0x0188)
class UGFxUIScoreboard : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                                   // 0x0188(0x0004)
	class UGFxObject*                                  ScoreboardMC;                                             // 0x018C(0x0004)
	class UGFxObject*                                  OverlayMC;                                                // 0x0190(0x0004)
	class UGFxObject*                                  TitleMC;                                                  // 0x0194(0x0004)
	class UGFxObject*                                  BlueTeamMC;                                               // 0x0198(0x0004)
	class UGFxObject*                                  RedTeamMC;                                                // 0x019C(0x0004)
	class UGFxObject*                                  TimeMC;                                                   // 0x01A0(0x0004)
	class UGFxObject*                                  TimeTF;                                                   // 0x01A4(0x0004)
	class UGFxObject*                                  Title_TitleGMC;                                           // 0x01A8(0x0004)
	class UGFxObject*                                  TitleTF;                                                  // 0x01AC(0x0004)
	class UGFxObject*                                  TitleGMC;                                                 // 0x01B0(0x0004)
	class UGFxObject*                                  BlueHeaderMC;                                             // 0x01B4(0x0004)
	class UGFxObject*                                  BlueScoreTF;                                              // 0x01B8(0x0004)
	class UGFxObject*                                  BlueTitleTF;                                              // 0x01BC(0x0004)
	class UGFxObject*                                  RedHeaderMC;                                              // 0x01C0(0x0004)
	class UGFxObject*                                  RedScoreTF;                                               // 0x01C4(0x0004)
	class UGFxObject*                                  RedTitleTF;                                               // 0x01C8(0x0004)
	class UGFxObject*                                  FooterMC;                                                 // 0x01CC(0x0004)
	class UGFxObject*                                  FooterItemMC;                                             // 0x01D0(0x0004)
	unsigned char                                      RedTeamIndex;                                             // 0x01D4(0x0001)
	unsigned char                                      BlueTeamIndex;                                            // 0x01D5(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01D6(0x0002) MISSED OFFSET
	class UGFxObject*                                  PlayerRow;                                                // 0x01D8(0x0004)
	unsigned long                                      bPlayerRowTween : 1;                                      // 0x01DC(0x0004)
	unsigned long                                      bTeamGame : 1;                                            // 0x01DC(0x0004)
	unsigned long                                      bInitialized : 1;                                         // 0x01DC(0x0004)
	struct FScoreEntry                                 RedEntries[0xC];                                          // 0x01E0(0x0018) (NeedCtorLink)
	struct FScoreEntry                                 BlueEntries[0xC];                                         // 0x0300(0x0018) (NeedCtorLink)
	struct FScoreboardState                            PreviousState;                                            // 0x0420(0x0024) (NeedCtorLink)
	TArray<struct FScoreRow>                           BlueItems;                                                // 0x0444(0x000C) (NeedCtorLink)
	TArray<struct FScoreRow>                           RedItems;                                                 // 0x0450(0x000C) (NeedCtorLink)
	int                                                NameCnt;                                                  // 0x045C(0x0004) (Transient)
	class UGFxObject*                                  Footer_NameTF;                                            // 0x0460(0x0004)
	class UGFxObject*                                  Footer_PlaceLabelTF;                                      // 0x0464(0x0004)
	class UGFxObject*                                  Footer_PlaceTF;                                           // 0x0468(0x0004)
	class UGFxObject*                                  Footer_ScoreLabelTF;                                      // 0x046C(0x0004)
	class UGFxObject*                                  Footer_ScoreTF;                                           // 0x0470(0x0004)
	class UGFxObject*                                  Footer_DeathsLabelTF;                                     // 0x0474(0x0004)
	class UGFxObject*                                  Footer_DeathsTF;                                          // 0x0478(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.GFxUIScoreboard");
		return ptr;
	}


	struct FString GetTimeOnline(class AUTPlayerReplicationInfo* PRI);
	bool IsValidScoreboardPlayer(class AUTPlayerReplicationInfo* PRI);
	void ProcessTweenCallback(const struct FString& Callback, class UGFxObject* TargetMC);
	void TweenPlayerRow(class UGFxObject* RowMC);
	void FloatScoreboardAnimationY(bool Direction);
	void FloatScoreboardAnimationX(bool Direction);
	void UpdateFooter(class AUTGameReplicationInfo* GRI, class AUTPlayerReplicationInfo* LocalPlayerPRI, unsigned char PRIIndex);
	void UpdateHeaders(class AUTGameReplicationInfo* GRI);
	struct FString FormatTime(int Seconds);
	void UpdatePreviousState(class AUTGameReplicationInfo* GRI);
	void SetPlayerRow(class UGFxObject* UpdatedPlayerRow);
	void Tick(float DeltaTime);
	void UpdateRow(const struct FScoreRow& ThisRow, class AUTPlayerReplicationInfo* ThisPRI, struct FScoreEntry* ThisEntry);
	void ClearRow(const struct FScoreRow& ThisRow);
	void UpdatePRILists(class AUTGameReplicationInfo* GRI);
	void Draw();
	void SetupRedTeam();
	void SetupBlueTeam();
	void ConfigScoreboard();
	void PlayCloseAnimation();
	void PlayOpenAnimation();
	bool Start(bool StartPaused);
};


// Class UTGame.MorphTestActor
// 0x000C (0x021C - 0x0210)
class AMorphTestActor : public ASkeletalMeshActor
{
public:
	class AActor*                                      LookAtActor;                                              // 0x0210(0x0004) (Edit)
	float                                              MinMorphDistance;                                         // 0x0214(0x0004) (Edit)
	float                                              MaxMorphDistance;                                         // 0x0218(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.MorphTestActor");
		return ptr;
	}


	void Tick(float DeltaSeconds);
};


// Class UTGame.PhysAnimTestActor
// 0x0088 (0x025C - 0x01D4)
class APhysAnimTestActor : public AActor
{
public:
	TArray<struct FName>                               LowerBoneNames;                                           // 0x01D4(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               LinearBoneSpringNames;                                    // 0x01E0(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               AngularBoneSpringNames;                                   // 0x01EC(0x000C) (Edit, NeedCtorLink)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x01F8(0x0004) (Edit, ExportObject, Component, EditInline)
	TEnumAsByte<EPATAState>                            CurrentState;                                             // 0x01FC(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01FD(0x0003) MISSED OFFSET
	unsigned long                                      bBlendToGetUp : 1;                                        // 0x0200(0x0004)
	unsigned long                                      bBlendingBack : 1;                                        // 0x0200(0x0004)
	unsigned long                                      bRampingDownMotors : 1;                                   // 0x0200(0x0004)
	unsigned long                                      bNextPokeKnocksDown : 1;                                  // 0x0200(0x0004)
	float                                              GetUpBlendStartTime;                                      // 0x0204(0x0004)
	float                                              GetUpBlendTime;                                           // 0x0208(0x0004) (Edit)
	float                                              GetUpToIdleTime;                                          // 0x020C(0x0004) (Edit)
	float                                              ActorOriginHeight;                                        // 0x0210(0x0004) (Edit)
	float                                              PokePauseTime;                                            // 0x0214(0x0004) (Edit)
	float                                              PokeBlendTime;                                            // 0x0218(0x0004) (Edit)
	float                                              BlendBackStartTime;                                       // 0x021C(0x0004)
	float                                              MotorDownStartTime;                                       // 0x0220(0x0004)
	float                                              MotorDownTime;                                            // 0x0224(0x0004) (Edit)
	float                                              MotorDownAnimTime;                                        // 0x0228(0x0004) (Edit)
	float                                              BlendStaggerAnimTime;                                     // 0x022C(0x0004) (Edit)
	float                                              StaggerSpeedAdj;                                          // 0x0230(0x0004) (Edit)
	float                                              StaggerVel;                                               // 0x0234(0x0004) (Edit)
	struct FVector                                     MoveDir;                                                  // 0x0238(0x000C)
	float                                              AngularHipDriveScale;                                     // 0x0244(0x0004) (Edit)
	float                                              StaggerMuscleScale;                                       // 0x0248(0x0004) (Edit)
	class UAnimNodeBlend*                              BlendNode;                                                // 0x024C(0x0004)
	class UAnimNodeSequence*                           GetUpNode;                                                // 0x0250(0x0004)
	class UAnimNodeSequence*                           RunNode;                                                  // 0x0254(0x0004)
	class URB_BodyInstance*                            HipBody;                                                  // 0x0258(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.PhysAnimTestActor");
		return ptr;
	}


	void OnAnimEnd(class UAnimNodeSequence* InSeqNode, float PlayedTime, float ExcessTime);
	void Tick(float DeltaSeconds);
	void RecoverFromRagdoll();
	void SetBoneSprings(bool bEnabled);
	bool IsAngularBoneSpringName(const struct FName& InName);
	bool IsLinearBoneSpringName(const struct FName& InName);
	void SetLowerFixed();
	void DetachAttachments();
	bool IsLowerBodyName(const struct FName& InName);
	void SetBodiesFixed(bool InFixed);
	void EnableMotors(bool InEnabled);
	void OnSetPATAState(class USeqAct_SetPATAState* Action);
	void SetPATAState(TEnumAsByte<EPATAState> NewState);
	void EndGrab();
	bool PreGrab();
	bool PrePokeActor(const struct FVector& PokeDir);
	void PostBeginPlay();
};


// Class UTGame.SeqAct_SetPATAState
// 0x0001 (0x00E9 - 0x00E8)
class USeqAct_SetPATAState : public USequenceAction
{
public:
	TEnumAsByte<EPATAState>                            NewState;                                                 // 0x00E8(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.SeqAct_SetPATAState");
		return ptr;
	}

};


// Class UTGame.SeqAct_SetWheelParticles
// 0x0004 (0x00EC - 0x00E8)
class USeqAct_SetWheelParticles : public USequenceAction
{
public:
	class UParticleSystem*                             NewParticleSystem;                                        // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.SeqAct_SetWheelParticles");
		return ptr;
	}

};


// Class UTGame.SeqAct_UTCrowdSpawner
// 0x0000 (0x0150 - 0x0150)
class USeqAct_UTCrowdSpawner : public USeqAct_GameCrowdSpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.SeqAct_UTCrowdSpawner");
		return ptr;
	}

};


// Class UTGame.UTStatsReadAchievements
// 0x0000 (0x0088 - 0x0088)
class UUTStatsReadAchievements : public UOnlineStatsRead
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTStatsReadAchievements");
		return ptr;
	}

};


// Class UTGame.UTStatsWriteAchievements
// 0x0000 (0x0088 - 0x0088)
class UUTStatsWriteAchievements : public UOnlineStatsWrite
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTStatsWriteAchievements");
		return ptr;
	}

};


// Class UTGame.UTActorFactoryAI
// 0x0004 (0x0088 - 0x0084)
class UUTActorFactoryAI : public UActorFactoryAI
{
public:
	unsigned long                                      bForceDeathmatchAI : 1;                                   // 0x0084(0x0004) (Edit)
	unsigned long                                      bUseCompartment : 1;                                      // 0x0084(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTActorFactoryAI");
		return ptr;
	}


	void PostCreateActor(class AActor* NewActor);
};


// Class UTGame.UTSquadAI
// 0x0090 (0x02A0 - 0x0210)
class AUTSquadAI : public AUDKSquadAI
{
public:
	class AController*                                 SquadLeader;                                              // 0x0210(0x0004)
	class AUTPlayerReplicationInfo*                    LeaderPRI;                                                // 0x0214(0x0004) (Net)
	class AUTSquadAI*                                  NextSquad;                                                // 0x0218(0x0004)
	int                                                Size;                                                     // 0x021C(0x0004)
	class AUTBot*                                      SquadMembers;                                             // 0x0220(0x0004)
	struct FString                                     SupportString;                                            // 0x0224(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     DefendString;                                             // 0x0230(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     AttackString;                                             // 0x023C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     HoldString;                                               // 0x0248(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     FreelanceString;                                          // 0x0254(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     SupportStringTrailer;                                     // 0x0260(0x000C) (Const, Localized, NeedCtorLink)
	struct FName                                       CurrentOrders;                                            // 0x026C(0x0008) (Net)
	class APawn*                                       Enemies[0x8];                                             // 0x0274(0x0004)
	int                                                MaxSquadSize;                                             // 0x0294(0x0004)
	unsigned long                                      bFreelance : 1;                                           // 0x0298(0x0004) (Net)
	unsigned long                                      bFreelanceAttack : 1;                                     // 0x0298(0x0004)
	unsigned long                                      bFreelanceDefend : 1;                                     // 0x0298(0x0004)
	unsigned long                                      bRoamingSquad : 1;                                        // 0x0298(0x0004)
	unsigned long                                      bAddTransientCosts : 1;                                   // 0x0298(0x0004)
	unsigned long                                      bShouldUseGatherPoints : 1;                               // 0x0298(0x0004)
	float                                              FormationSize;                                            // 0x029C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSquadAI");
		return ptr;
	}


	bool HasOtherVisibleEnemy(class AUTBot* B);
	void ModifyAggression(class AUTBot* B, float* Aggression);
	void MarkHuntingSpots(class AUTBot* B);
	bool HandlePathObstruction(class AUTBot* B, class AActor* BlockedBy);
	bool AcceptableDefensivePosition(class ANavigationPoint* N, class AUTBot* B);
	float RateDefensivePosition(class ANavigationPoint* N, class AUTBot* CurrentBot, class AActor* Center);
	class ANavigationPoint* FindDefensivePositionFor(class AUTBot* B);
	float GetMaxDefenseDistanceFrom(class AActor* Center, class AUTBot* B);
	bool FriendlyToward(class APawn* Other);
	bool IsDefending(class AUTBot* B);
	bool ClearPathFor(class AController* C);
	bool PickRetreatDestination(class AUTBot* B);
	bool BeDevious(class APawn* Enemy);
	void DisplayDebug(class AHUD* HUD, float* YL, float* YPos);
	class AUTBot* PickBotToReassign();
	float BotSuitability(class AUTBot* B);
	bool CheckSquadObjectives(class AUTBot* B);
	bool CheckSuperItem(class AUTBot* B, float SuperDist);
	bool ShouldCheckSuperVehicle(class AUTBot* B);
	bool OverrideFollowPlayer(class AUTBot* B);
	float VehicleDesireability(class AUTVehicle* V, class AUTBot* B);
	bool ShouldUseHoverboard(class AUTBot* B);
	bool CheckHoverboard(class AUTBot* B);
	bool CheckVehicle(class AUTBot* B);
	bool GotoVehicle(class AUTVehicle* SquadVehicle, class AUTBot* B);
	bool EnterAndExitVehicle(class AUTBot* B);
	bool GetOnHoverboard(class AUTBot* B);
	bool IsOnPathToSquadObjective(class AActor* Goal);
	void BotEnteredVehicle(class AUTBot* B);
	bool NeverBail(class APawn* P);
	bool AllowContinueOnFoot(class AUTBot* B, class AUTVehicle* V);
	float MaxVehicleDist(class APawn* P);
	bool AssignSquadResponsibility(class AUTBot* B);
	void AddTransientCosts(class AUTBot* B, float F);
	bool AllowTaunt(class AUTBot* B);
	bool TellBotToFollow(class AUTBot* B, class AController* C);
	void PickNewLeader();
	int GetSize();
	struct FString GetShortOrderStringFor(class AUTPlayerReplicationInfo* PRI);
	struct FString GetOrderStringFor(class AUTPlayerReplicationInfo* PRI);
	struct FName GetOrders();
	void Retask(class AUTBot* B);
	void SetObjective(class AUTGameObjective* O, bool bForceUpdate);
	void SetDefenseScriptFor(class AUTBot* B);
	void AddBot(class AUTBot* B);
	void RemoveBot(class AUTBot* B);
	void RemovePlayer(class APlayerController* P);
	void SetLeader(class AController* C);
	bool FindPathToObjective(class AUTBot* B, class AActor* O);
	void LeaveVehicleAtParkingSpot(class AUTBot* B, class AActor* O);
	bool MustCompleteOnFoot(class AActor* O, class APawn* P);
	bool LeaveVehicleToReachObjective(class AUTBot* B, class AActor* O);
	bool CloseEnoughToObjective(class AUTBot* B, class AActor* O);
	bool TryToIntercept(class AUTBot* B, class APawn* P, class AActor* RouteGoal);
	void SetAlternatePathTo(class ANavigationPoint* NewRouteObjective, class AUTBot* RouteMaker);
	bool ShouldUseAlternatePaths();
	void Initialize(class AUTTeamInfo* T, class AUTGameObjective* O, class AController* C);
	void MergeWith(class AUTSquadAI* S);
	bool CloseToLeader(class APawn* P);
	bool NearFormationCenter(class APawn* P);
	bool WanderNearLeader(class AUTBot* B);
	bool WaitAtThisPosition(class APawn* P);
	bool ShouldDeferTo(class AController* C);
	float AssessThreat(class AUTBot* B, class APawn* NewThreat, bool bThreatVisible);
	bool UnderFire(class APawn* NewThreat, class AUTBot* Ignored);
	float ModifyThreat(float Current, class APawn* NewThreat, bool bThreatVisible, class AUTBot* B);
	bool FindNewEnemyFor(class AUTBot* B, bool bSeeEnemy);
	void NotifyKilled(class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType);
	void RemoveEnemy(class APawn* E);
	bool IsOnSquad(class AController* C);
	unsigned char PriorityObjective(class AUTBot* B);
	bool SetEnemy(class AUTBot* B, class APawn* NewEnemy);
	bool ValidEnemy(class APawn* NewEnemy);
	bool AddEnemy(class APawn* NewEnemy);
	bool MustKeepEnemy(class APawn* E);
	bool LostEnemy(class AUTBot* B);
	class AActor* FormationCenter(class AController* C);
	struct FRotator GetFacingRotation();
	class AUTVehicle* GetLinkVehicle(class AUTBot* B);
	class AActor* SetFacingActor(class AUTBot* B);
	bool AllowImpactJumpBy(class AUTBot* B);
	void Destroyed();
	bool AllowDetourTo(class AUTBot* B, class ANavigationPoint* N);
	bool ShouldSuppressEnemy(class AUTBot* B);
	void CriticalObjectiveWarning(class APawn* NewEnemy);
	void Reset();
};


// Class UTGame.UTActorFactoryPickup
// 0x0004 (0x0060 - 0x005C)
class UUTActorFactoryPickup : public UActorFactory
{
public:
	class UClass*                                      InventoryClass;                                           // 0x005C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTActorFactoryPickup");
		return ptr;
	}


	void PostCreateActor(class AActor* NewActor);
};


// Class UTGame.UTDroppedPickup
// 0x0014 (0x01F8 - 0x01E4)
class AUTDroppedPickup : public ADroppedPickup
{
public:
	class UPrimitiveComponent*                         PickupMesh;                                               // 0x01E4(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    PickupParticles;                                          // 0x01E8(0x0004) (ExportObject, Component, EditInline)
	float                                              StartScale;                                               // 0x01EC(0x0004)
	unsigned long                                      bPickupable : 1;                                          // 0x01F0(0x0004)
	class ULightEnvironmentComponent*                  MyLightEnvironment;                                       // 0x01F4(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDroppedPickup");
		return ptr;
	}


	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
	void SetPickupParticles(class UParticleSystemComponent* NewPickupParticles);
	void SetPickupMesh(class UPrimitiveComponent* NewPickupMesh);
	void PreBeginPlay();
};


// Class UTGame.UTActorFactoryTeamStaticMesh
// 0x0000 (0x006C - 0x006C)
class UUTActorFactoryTeamStaticMesh : public UActorFactoryStaticMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTActorFactoryTeamStaticMesh");
		return ptr;
	}

};


// Class UTGame.UTTeamStaticMesh
// 0x0010 (0x01EC - 0x01DC)
class AUTTeamStaticMesh : public AStaticMeshActor
{
public:
	TArray<class UMaterialInterface*>                  TeamMaterials;                                            // 0x01DC(0x000C) (Edit, NeedCtorLink)
	class UMaterial*                                   NeutralMaterial;                                          // 0x01E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeamStaticMesh");
		return ptr;
	}


	void SetTeamNum(unsigned char NewTeam);
	void PreBeginPlay();
};


// Class UTGame.UTActorFactoryUTKActor
// 0x0000 (0x0098 - 0x0098)
class UUTActorFactoryUTKActor : public UActorFactoryRigidBody
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTActorFactoryUTKActor");
		return ptr;
	}

};


// Class UTGame.UTKActor
// 0x0000 (0x0300 - 0x0300)
class AUTKActor : public AUDKKActorBreakable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTKActor");
		return ptr;
	}

};


// Class UTGame.UTActorFactoryVehicle
// 0x0005 (0x0065 - 0x0060)
class UUTActorFactoryVehicle : public UActorFactoryVehicle
{
public:
	unsigned long                                      bTeamLocked : 1;                                          // 0x0060(0x0004) (Edit)
	unsigned long                                      bKeyVehicle : 1;                                          // 0x0060(0x0004) (Edit)
	unsigned char                                      TeamNum;                                                  // 0x0064(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTActorFactoryVehicle");
		return ptr;
	}


	void PostCreateActor(class AActor* NewActor);
};


// Class UTGame.UTGib
// 0x0068 (0x023C - 0x01D4)
class AUTGib : public AActor
{
public:
	class UDynamicLightEnvironmentComponent*           GibLightEnvironment;                                      // 0x01D4(0x0004) (ExportObject, Component, EditInline)
	class USoundCue*                                   HitSound;                                                 // 0x01D8(0x0004)
	class UMeshComponent*                              GibMeshComp;                                              // 0x01DC(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   MIC_Gib;                                                  // 0x01E0(0x0004)
	class UMaterialInstance*                           MI_Decal;                                                 // 0x01E4(0x0004)
	class UMaterialInstanceTimeVarying*                MITV_DecalTemplate;                                       // 0x01E8(0x0004)
	struct FName                                       DecalDissolveParamName;                                   // 0x01EC(0x0008)
	float                                              DecalWaitTimeBeforeDissolve;                              // 0x01F4(0x0004)
	class UMaterialInstanceTimeVarying*                MITV_GibMeshTemplate;                                     // 0x01F8(0x0004)
	class UMaterialInstanceTimeVarying*                MITV_GibMeshTemplateSecondary;                            // 0x01FC(0x0004)
	struct FName                                       GibMeshDissolveParamName;                                 // 0x0200(0x0008)
	float                                              GibMeshWaitTimeBeforeDissolve;                            // 0x0208(0x0004)
	class UParticleSystemComponent*                    PSC_GibEffect;                                            // 0x020C(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystem*                             PS_CustomEffect;                                          // 0x0210(0x0004)
	unsigned long                                      bUseUnrealPhysics : 1;                                    // 0x0214(0x0004) (Config, GlobalConfig)
	unsigned long                                      bStopMovingCamera : 1;                                    // 0x0214(0x0004)
	TArray<struct FStaticMeshDatum>                    GibMeshesData;                                            // 0x0218(0x000C) (NeedCtorLink)
	struct FVector                                     OldCamLoc;                                                // 0x0224(0x000C)
	struct FRotator                                    OldCamRot;                                                // 0x0230(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib");
		return ptr;
	}


	void HitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
	void TurnOnCollision();
	void LeaveADecal(const struct FVector& HitLoc, const struct FVector& HitNorm);
	void RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData);
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void BecomeViewTarget(class APlayerController* PC);
	void Timer();
	void DoCustomGibEffects();
	void ChooseGib();
	void SetGibStaticMesh(class UStaticMesh* NewStaticMesh);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void SetTexturesToBeResident(float TimeToBeResident);
	void PreBeginPlay();
};


// Class UTGame.UTGib_Vehicle
// 0x0024 (0x0260 - 0x023C)
class AUTGib_Vehicle : public AUTGib
{
public:
	float                                              TimeBeforeGibExplosionEffect;                             // 0x023C(0x0004)
	class UParticleSystem*                             PS_GibExplosionEffect;                                    // 0x0240(0x0004)
	class UParticleSystem*                             PS_GibTrailEffect;                                        // 0x0244(0x0004)
	class USoundCue*                                   LoopedSound;                                              // 0x0248(0x0004)
	struct FName                                       BurnName;                                                 // 0x024C(0x0008)
	float                                              BurnDuration;                                             // 0x0254(0x0004)
	class UMaterialInstanceTimeVarying*                MITV;                                                     // 0x0258(0x0004)
	class UClass*                                      OwningClass;                                              // 0x025C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib_Vehicle");
		return ptr;
	}


	void ActivateGibExplosionEffect();
	void PostBeginPlay();
};


// Class UTGame.UTVehicleDeathPiece
// 0x0004 (0x0264 - 0x0260)
class AUTVehicleDeathPiece : public AUTGib_Vehicle
{
public:
	class UParticleSystemComponent*                    PSC;                                                      // 0x0260(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleDeathPiece");
		return ptr;
	}


	void PreBeginPlay();
};


// Class UTGame.UTVehicleFactory
// 0x0018 (0x02F0 - 0x02D8)
class AUTVehicleFactory : public AUDKVehicleFactory
{
public:
	float                                              SpawnZOffset;                                             // 0x02D8(0x0004)
	unsigned long                                      bMayReverseSpawnDirection : 1;                            // 0x02DC(0x0004) (Edit)
	unsigned long                                      bStartNeutral : 1;                                        // 0x02DC(0x0004) (Edit)
	unsigned long                                      bDisabled : 1;                                            // 0x02DC(0x0004) (Edit)
	unsigned long                                      bKeyVehicle : 1;                                          // 0x02DC(0x0004) (Edit)
	unsigned long                                      bForceAvoidReversing : 1;                                 // 0x02DC(0x0004) (Edit)
	class AUTGameObjective*                            ReverseObjective;                                         // 0x02E0(0x0004)
	TArray<struct FRotator>                            InitialGunRotations;                                      // 0x02E4(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleFactory");
		return ptr;
	}


	struct FRotator GetSpawnRotation();
	void OnToggle(class USeqAct_Toggle* Action);
	void TriggerSpawnedEvent();
	void VehicleDestroyed(class AUTVehicle* V);
	void VehicleTaken();
	void Deactivate();
	void Activate(unsigned char T);
	void RenderMapIcon(class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, const struct FLinearColor& FinalColor);
	void SetInitialState();
	void AddToClosestObjective();
	void PostBeginPlay();
};


// Class UTGame.UTConsolePlayerController
// 0x001C (0x08B8 - 0x089C)
class AUTConsolePlayerController : public AUTPlayerController
{
public:
	unsigned long                                      bTargetAdhesionEnabled : 1;                               // 0x089C(0x0004) (Edit, Config)
	unsigned long                                      bDebugTargetAdhesion : 1;                                 // 0x089C(0x0004) (Config)
	TArray<struct FProfileSettingToUE3BindingDatum>    ProfileSettingToUE3BindingMapping360;                     // 0x08A0(0x000C) (NeedCtorLink)
	TArray<struct FProfileSettingToUE3BindingDatum>    ProfileSettingToUE3BindingMappingPS3;                     // 0x08AC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTConsolePlayerController");
		return ptr;
	}


	void ResetPlayerMovementInput();
	void NextWeapon();
	void PrevWeapon();
	void ClientRestart(class APawn* NewPawn);
	void ClientSmartUse();
	bool PerformedUseAction();
	float AimHelpModifier();
	bool AimingHelp(bool bInstantHit);
	void UpdateRotation(float DeltaTime);
};


// Class UTGame.UTParticleSystemComponent
// 0x0000 (0x02E4 - 0x02E4)
class UUTParticleSystemComponent : public UUDKParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTParticleSystemComponent");
		return ptr;
	}

};


// Class UTGame.UTAnimNodeSequence
// 0x0000 (0x0150 - 0x0150)
class UUTAnimNodeSequence : public UUDKAnimNodeSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimNodeSequence");
		return ptr;
	}

};


// Class UTGame.UTVehicleMessage
// 0x0030 (0x0094 - 0x0064)
class UUTVehicleMessage : public UUTLocalMessage
{
public:
	TArray<struct FString>                             MessageText;                                              // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	TArray<struct FColor>                              DrawColors;                                               // 0x0070(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      MessageAnnouncements;                                     // 0x007C(0x000C) (NeedCtorLink)
	TArray<int>                                        CustomMessageArea;                                        // 0x0088(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleMessage");
		return ptr;
	}


	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	struct FColor GetColor(int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	unsigned char AnnouncementLevel(unsigned char MessageIndex);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTVehicleWeapon
// 0x00B4 (0x066C - 0x05B8)
class AUTVehicleWeapon : public AUTWeapon
{
public:
	int                                                SeatIndex;                                                // 0x05B8(0x0004) (Net)
	class AUTVehicle*                                  MyVehicle;                                                // 0x05BC(0x0004) (Net, RepNotify)
	TArray<struct FName>                               FireTriggerTags;                                          // 0x05C0(0x000C) (NeedCtorLink)
	TArray<struct FName>                               AltFireTriggerTags;                                       // 0x05CC(0x000C) (NeedCtorLink)
	TArray<struct FMaterialImpactEffect>               ImpactEffects;                                            // 0x05D8(0x000C) (NeedCtorLink)
	TArray<struct FMaterialImpactEffect>               AltImpactEffects;                                         // 0x05E4(0x000C) (NeedCtorLink)
	struct FMaterialImpactEffect                       DefaultImpactEffect;                                      // 0x05F0(0x0030) (NeedCtorLink)
	struct FMaterialImpactEffect                       DefaultAltImpactEffect;                                   // 0x0620(0x0030) (NeedCtorLink)
	class USoundCue*                                   BulletWhip;                                               // 0x0650(0x0004)
	float                                              LastCorrectAimTime;                                       // 0x0654(0x0004)
	float                                              LastInCorrectAimTime;                                     // 0x0658(0x0004)
	float                                              CurrentCrosshairScaling;                                  // 0x065C(0x0004)
	float                                              MaxFinalAimAdjustment;                                    // 0x0660(0x0004)
	unsigned long                                      bPlaySoundFromSocket : 1;                                 // 0x0664(0x0004)
	unsigned long                                      bCurrentlyZoomed : 1;                                     // 0x0664(0x0004)
	unsigned long                                      bIgnoreSocketPitchRotation : 1;                           // 0x0664(0x0004)
	unsigned long                                      bIgnoreDownwardPitch : 1;                                 // 0x0664(0x0004)
	unsigned long                                      bDebugTurret : 1;                                         // 0x0664(0x0004)
	class UClass*                                      VehicleClass;                                             // 0x0668(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleWeapon");
		return ptr;
	}


	void EndZoom(class AUTPlayerController* PC);
	void StartZoom(class AUTPlayerController* PC);
	void ServerSetZoom(bool bNowZoomed);
	TEnumAsByte<EZoomState> GetZoomedState();
	void WeaponPlaySound(class USoundCue* Sound, float NoiseLoudness);
	void NotifyVehicleUndeployed();
	void NotifyVehicleDeployed();
	float GetMaxFinalAimAdjustment();
	class AActor* GetTraceOwner();
	struct FVector InstantFireEndTrace(const struct FVector& StartTrace);
	struct FVector InstantFireStartTrace();
	class AProjectile* ProjectileFire();
	struct FRotator GetAdjustedAim(const struct FVector& StartFireLoc);
	void EndFire(unsigned char FireModeNum);
	void BeginFire(unsigned char FireModeNum);
	struct FVector GetPhysicalFireStartLoc(const struct FVector& AimDir);
	void PutDownWeapon();
	void Activate();
	void DetachWeapon();
	void AttachWeaponTo(class USkeletalMeshComponent* MeshCpnt, const struct FName& SocketName);
	struct FMaterialImpactEffect GetImpactEffect(class AActor* HitActor, class UPhysicalMaterial* HitMaterial, unsigned char FireModeNum);
	float GetFireInterval(unsigned char FireModeNum);
	struct FName GetFireTriggerTag(int BarrelIndex, int FireMode);
	bool IsAimCorrect();
	void GetFireStartLocationAndRotation(struct FVector* StartLocation, struct FRotator* StartRotation);
	struct FVector GetDesiredAimPoint(class AActor** TargetActor);
	void DrawWeaponCrosshair(class AHUD* HUD);
	void GetCrosshairScaling(class AHUD* HUD);
	void DrawKillIcon(class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY);
	bool CanHitDesiredTarget(const struct FVector& SocketLocation, const struct FRotator& SocketRotation, const struct FVector& DesiredAimPoint, class AActor* TargetActor, struct FVector* RealAimPoint);
};


// Class UTGame.UTLockWarningMessage
// 0x0020 (0x0084 - 0x0064)
class UUTLockWarningMessage : public UUTLocalMessage
{
public:
	struct FString                                     MissileLockOnString;                                      // 0x0064(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     RadarLockString;                                          // 0x0070(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FColor                                      RedColor;                                                 // 0x007C(0x0004)
	struct FColor                                      YellowColor;                                              // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTLockWarningMessage");
		return ptr;
	}


	struct FColor GetColor(int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	unsigned char AnnouncementLevel(unsigned char MessageIndex);
};


// Class UTGame.UTSeqEvent_VehicleFactory
// 0x0004 (0x0104 - 0x0100)
class UUTSeqEvent_VehicleFactory : public USequenceEvent
{
public:
	class AUTVehicle*                                  SpawnedVehicle;                                           // 0x0100(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqEvent_VehicleFactory");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTDmgType_Burning
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_Burning : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_Burning");
		return ptr;
	}


	float GetHitEffectDuration(class APawn* P, float Damage);
	void SpawnHitEffect(class APawn* P, float Damage, const struct FVector& Momentum, const struct FName& BoneName, const struct FVector& HitLocation);
};


// Class UTGame.UTDmgType_ScorpionSelfDestruct
// 0x0004 (0x0130 - 0x012C)
class UUTDmgType_ScorpionSelfDestruct : public UUTDmgType_Burning
{
public:
	int                                                DamageGivenForSelfDestruct;                               // 0x012C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_ScorpionSelfDestruct");
		return ptr;
	}


	int IncrementKills(class AUTPlayerReplicationInfo* KillerPRI);
};


// Class UTGame.UTProjectile
// 0x004C (0x0298 - 0x024C)
class AUTProjectile : public AUDKProjectile
{
public:
	unsigned long                                      bSuppressSounds : 1;                                      // 0x024C(0x0004)
	unsigned long                                      bImportantAmbientSound : 1;                               // 0x024C(0x0004)
	unsigned long                                      bAdvanceExplosionEffect : 1;                              // 0x024C(0x0004)
	unsigned long                                      bSuppressExplosionFX : 1;                                 // 0x024C(0x0004)
	unsigned long                                      bWaitForEffects : 1;                                      // 0x024C(0x0004)
	unsigned long                                      bAttachExplosionToVehicles : 1;                           // 0x024C(0x0004)
	class USoundCue*                                   AmbientSound;                                             // 0x0250(0x0004)
	class USoundCue*                                   ExplosionSound;                                           // 0x0254(0x0004)
	class UParticleSystemComponent*                    ProjEffects;                                              // 0x0258(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystem*                             ProjFlightTemplate;                                       // 0x025C(0x0004)
	class UParticleSystem*                             ProjExplosionTemplate;                                    // 0x0260(0x0004)
	class UMaterialInterface*                          ExplosionDecal;                                           // 0x0264(0x0004)
	float                                              DecalWidth;                                               // 0x0268(0x0004)
	float                                              DecalHeight;                                              // 0x026C(0x0004)
	float                                              DurationOfDecal;                                          // 0x0270(0x0004)
	struct FName                                       DecalDissolveParamName;                                   // 0x0274(0x0008)
	float                                              MaxEffectDistance;                                        // 0x027C(0x0004)
	float                                              TossZ;                                                    // 0x0280(0x0004)
	float                                              GlobalCheckRadiusTweak;                                   // 0x0284(0x0004)
	class UClass*                                      ProjectileLightClass;                                     // 0x0288(0x0004)
	class UPointLightComponent*                        ProjectileLight;                                          // 0x028C(0x0004) (ExportObject, Component, EditInline)
	class UClass*                                      ExplosionLightClass;                                      // 0x0290(0x0004)
	float                                              MaxExplosionLightDistance;                                // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTProjectile");
		return ptr;
	}


	float GetRange();
	float GetTimeToLocation(const struct FVector& TargetLoc);
	float StaticGetTimeToLocation(const struct FVector& TargetLoc, const struct FVector& StartLoc, class AController* RequestedBy);
	float CalculateTravelTime(float Dist, float MoveSpeed, float MaxMoveSpeed, float AccelMag);
	class APawn* GetPawnOwner();
	class AActor* GetHomingTarget(class AUTProjectile* Seeker, class AController* InstigatedBy);
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void MyOnParticleSystemFinished(class UParticleSystemComponent* PSC);
	void Destroyed();
	void HideProjectile();
	void TornOff();
	void ShutDown();
	bool ShouldSpawnExplosionLight(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SpawnExplosionEffects(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SetExplosionEffectParameters(class UParticleSystemComponent* ProjExplosion);
	void SpawnFlightEffects();
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Init(const struct FVector& Direction);
	void SetInitialState();
	void PostBeginPlay();
	void PreBeginPlay();
	bool CanSplash();
	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
	void CreateProjectileLight();
};


// Class UTGame.UTSkelControl_TurretConstrained
// 0x0000 (0x0144 - 0x0144)
class UUTSkelControl_TurretConstrained : public UUDKSkelControl_TurretConstrained
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_TurretConstrained");
		return ptr;
	}

};


// Class UTGame.UTDmgType_VehicleCollision
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_VehicleCollision : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_VehicleCollision");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_Damage
// 0x0000 (0x0178 - 0x0178)
class UUTSkelControl_Damage : public UUDKSkelControl_Damage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_Damage");
		return ptr;
	}


	void BreakApartOnDeath(const struct FVector& PartLocation, bool bIsVisible);
	void BreakApart(const struct FVector& PartLocation, bool bIsVisible);
};


// Class UTGame.UTDmgType_VehicleExplosion
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_VehicleExplosion : public UUTDmgType_Burning
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_VehicleExplosion");
		return ptr;
	}

};


// Class UTGame.UTSeqAct_ExitVehicle
// 0x0000 (0x00E8 - 0x00E8)
class UUTSeqAct_ExitVehicle : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_ExitVehicle");
		return ptr;
	}

};


// Class UTGame.VehicleMovementEffect
// 0x0000 (0x01F0 - 0x01F0)
class AVehicleMovementEffect : public AUDKVehicleMovementEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.VehicleMovementEffect");
		return ptr;
	}

};


// Class UTGame.UTDmgType_RanOver
// 0x0004 (0x0130 - 0x012C)
class UUTDmgType_RanOver : public UUTDamageType
{
public:
	int                                                NumMessages;                                              // 0x012C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_RanOver");
		return ptr;
	}


	void SpawnHitEffect(class APawn* P, float Damage, const struct FVector& Momentum, const struct FName& BoneName, const struct FVector& HitLocation);
	void SmallReward(class AUTPlayerController* Killer, int KillCount);
	int IncrementKills(class AUTPlayerReplicationInfo* KillerPRI);
};


// Class UTGame.UTDmgType_Drowned
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_Drowned : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_Drowned");
		return ptr;
	}

};


// Class UTGame.UTRocketExplosionLight
// 0x0000 (0x0260 - 0x0260)
class UUTRocketExplosionLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTRocketExplosionLight");
		return ptr;
	}

};


// Class UTGame.UTGib_VehiclePiece
// 0x0000 (0x0260 - 0x0260)
class AUTGib_VehiclePiece : public AUTGib_Vehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib_VehiclePiece");
		return ptr;
	}


	void PreBeginPlay();
};


// Class UTGame.UTDmgType_Pancake
// 0x0000 (0x0130 - 0x0130)
class UUTDmgType_Pancake : public UUTDmgType_RanOver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_Pancake");
		return ptr;
	}


	void SmallReward(class AUTPlayerController* Killer, int KillCount);
};


// Class UTGame.UTAirVehicle
// 0x0018 (0x0AB8 - 0x0AA0)
class AUTAirVehicle : public AUTVehicle
{
public:
	unsigned long                                      bAutoLand : 1;                                            // 0x0AA0(0x0004)
	float                                              PushForce;                                                // 0x0AA4(0x0004)
	struct FString                                     RadarLockMessage;                                         // 0x0AA8(0x000C) (Const, Localized, NeedCtorLink)
	float                                              LastRadarLockWarnTime;                                    // 0x0AB4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAirVehicle");
		return ptr;
	}


	bool Dodge(TEnumAsByte<EDoubleClickDir> DoubleClickMove);
	bool RecommendLongRangedAttack();
	void SetDriving(bool bNewDriving);
	void LockOnWarning(class AUDKProjectile* IncomingMissile);
};


// Class UTGame.UTAmbientSoundComponent
// 0x0000 (0x0218 - 0x0218)
class UUTAmbientSoundComponent : public UAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAmbientSoundComponent");
		return ptr;
	}


	void OcclusionChanged(bool bNowOccluded);
};


// Class UTGame.UTInventory
// 0x0004 (0x0224 - 0x0220)
class AUTInventory : public AInventory
{
public:
	unsigned long                                      bReceiveOwnerEvents : 1;                                  // 0x0220(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTInventory");
		return ptr;
	}


	void OwnerEvent(const struct FName& EventName);
	void DropFrom(const struct FVector& StartLocation, const struct FVector& StartVelocity);
	void Destroyed();
	void ClientLostItem();
	void AddWeaponOverlay(class AUTGameReplicationInfo* GRI);
};


// Class UTGame.UTPickupInventory
// 0x0000 (0x0224 - 0x0224)
class AUTPickupInventory : public AUTInventory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPickupInventory");
		return ptr;
	}


	float BotDesireability(class AActor* PickupHolder, class APawn* P, class AController* C);
};


// Class UTGame.UTPickupMessage
// 0x0000 (0x0064 - 0x0064)
class UUTPickupMessage : public UUTLocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPickupMessage");
		return ptr;
	}


	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTAmmoPickupFactory
// 0x0008 (0x03D0 - 0x03C8)
class AUTAmmoPickupFactory : public AUTItemPickupFactory
{
public:
	int                                                AmmoAmount;                                               // 0x03C8(0x0004)
	class UClass*                                      TargetWeapon;                                             // 0x03CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAmmoPickupFactory");
		return ptr;
	}


	float BotDesireability(class APawn* P, class AController* C);
	void UpdateHUD(class AUTHUD* H);
	void SpawnCopyFor(class APawn* Recipient);
};


// Class UTGame.UTAmmo_LinkGun
// 0x0000 (0x03D0 - 0x03D0)
class AUTAmmo_LinkGun : public AUTAmmoPickupFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAmmo_LinkGun");
		return ptr;
	}

};


// Class UTGame.UTAmmo_RocketLauncher
// 0x0000 (0x03D0 - 0x03D0)
class AUTAmmo_RocketLauncher : public AUTAmmoPickupFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAmmo_RocketLauncher");
		return ptr;
	}

};


// Class UTGame.UTAmmo_ShockRifle
// 0x0000 (0x03D0 - 0x03D0)
class AUTAmmo_ShockRifle : public AUTAmmoPickupFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAmmo_ShockRifle");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendBase
// 0x0000 (0x0128 - 0x0128)
class UUTAnimBlendBase : public UUDKAnimBlendBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendBase");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByDriving
// 0x0000 (0x0104 - 0x0104)
class UUTAnimBlendByDriving : public UUDKAnimBlendByDriving
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByDriving");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByFall
// 0x0000 (0x0144 - 0x0144)
class UUTAnimBlendByFall : public UUDKAnimBlendByFall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByFall");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByFlying
// 0x0000 (0x014C - 0x014C)
class UUTAnimBlendByFlying : public UUDKAnimBlendByFlying
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByFlying");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByHoverboarding
// 0x0000 (0x0134 - 0x0134)
class UUTAnimBlendByHoverboarding : public UUDKAnimBlendByHoverboarding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByHoverboarding");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByHoverboardTilt
// 0x0000 (0x0114 - 0x0114)
class UUTAnimBlendByHoverboardTilt : public UUDKAnimBlendByHoverboardTilt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByHoverboardTilt");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByHoverboardTurn
// 0x0000 (0x0100 - 0x0100)
class UUTAnimBlendByHoverboardTurn : public UUDKAnimBlendByHoverboardTurn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByHoverboardTurn");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByHoverJump
// 0x0000 (0x0144 - 0x0144)
class UUTAnimBlendByHoverJump : public UUTAnimBlendByFall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByHoverJump");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByIdle
// 0x0000 (0x0128 - 0x0128)
class UUTAnimBlendByIdle : public UUDKAnimBlendByIdle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByIdle");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByPhysics
// 0x0000 (0x0168 - 0x0168)
class UUTAnimBlendByPhysics : public UUDKAnimBlendByPhysics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByPhysics");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByPhysicsVolume
// 0x0000 (0x0138 - 0x0138)
class UUTAnimBlendByPhysicsVolume : public UUDKAnimBlendByPhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByPhysicsVolume");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByPosture
// 0x0000 (0x0128 - 0x0128)
class UUTAnimBlendByPosture : public UUDKAnimBlendByPosture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByPosture");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendBySlotActive
// 0x0000 (0x0130 - 0x0130)
class UUTAnimBlendBySlotActive : public UUDKAnimBlendBySlotActive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendBySlotActive");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendBySpeed
// 0x0000 (0x010C - 0x010C)
class UUTAnimBlendBySpeed : public UUDKAnimBlendBySpeed
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendBySpeed");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByTurnInPlace
// 0x0000 (0x0134 - 0x0134)
class UUTAnimBlendByTurnInPlace : public UUDKAnimBlendByTurnInPlace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByTurnInPlace");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByVehicle
// 0x0000 (0x0130 - 0x0130)
class UUTAnimBlendByVehicle : public UUDKAnimBlendByVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByVehicle");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByWeapon
// 0x0000 (0x013C - 0x013C)
class UUTAnimBlendByWeapon : public UUDKAnimBlendByWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByWeapon");
		return ptr;
	}

};


// Class UTGame.UTAnimBlendByWeapType
// 0x0000 (0x012C - 0x012C)
class UUTAnimBlendByWeapType : public UUDKAnimBlendByWeapType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimBlendByWeapType");
		return ptr;
	}

};


// Class UTGame.UTAnimNodeCopyBoneTranslation
// 0x0000 (0x0148 - 0x0148)
class UUTAnimNodeCopyBoneTranslation : public UUDKAnimNodeCopyBoneTranslation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimNodeCopyBoneTranslation");
		return ptr;
	}

};


// Class UTGame.UTAnimNodeFramePlayer
// 0x0000 (0x0140 - 0x0140)
class UUTAnimNodeFramePlayer : public UUDKAnimNodeFramePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimNodeFramePlayer");
		return ptr;
	}

};


// Class UTGame.UTAnimNodeJumpLeanOffset
// 0x0000 (0x0168 - 0x0168)
class UUTAnimNodeJumpLeanOffset : public UUDKAnimNodeJumpLeanOffset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimNodeJumpLeanOffset");
		return ptr;
	}

};


// Class UTGame.UTAnimNodeSequenceByBoneRotation
// 0x0000 (0x0158 - 0x0158)
class UUTAnimNodeSequenceByBoneRotation : public UUDKAnimNodeSequenceByBoneRotation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimNodeSequenceByBoneRotation");
		return ptr;
	}

};


// Class UTGame.UTAnimNodeSeqWeap
// 0x0000 (0x0178 - 0x0178)
class UUTAnimNodeSeqWeap : public UUDKAnimNodeSeqWeap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAnimNodeSeqWeap");
		return ptr;
	}

};


// Class UTGame.UTQueuedAnnouncement
// 0x0014 (0x01E8 - 0x01D4)
class AUTQueuedAnnouncement : public AInfo
{
public:
	class AUTQueuedAnnouncement*                       nextAnnouncement;                                         // 0x01D4(0x0004)
	class UClass*                                      AnnouncementClass;                                        // 0x01D8(0x0004)
	int                                                MessageIndex;                                             // 0x01DC(0x0004)
	class APlayerReplicationInfo*                      PRI;                                                      // 0x01E0(0x0004)
	class UObject*                                     OptionalObject;                                           // 0x01E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTQueuedAnnouncement");
		return ptr;
	}

};


// Class UTGame.UTVoice
// 0x0080 (0x00E4 - 0x0064)
class UUTVoice : public UUTLocalMessage
{
public:
	TArray<class USoundNodeWave*>                      AckSounds;                                                // 0x0064(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      FriendlyFireSounds;                                       // 0x0070(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      GotYourBackSounds;                                        // 0x007C(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      NeedOurFlagSounds;                                        // 0x0088(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      SniperSounds;                                             // 0x0094(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      InPositionSounds;                                         // 0x00A0(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      HaveFlagSounds;                                           // 0x00AC(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      AreaSecureSounds;                                         // 0x00B8(0x000C) (NeedCtorLink)
	class USoundNodeWave*                              IncomingSound;                                            // 0x00C4(0x0004)
	class USoundNodeWave*                              EnemyFlagCarrierSound;                                    // 0x00C8(0x0004)
	class USoundNodeWave*                              EnemyFlagCarrierHereSound;                                // 0x00CC(0x0004)
	class USoundNodeWave*                              EnemyFlagCarrierHighSound;                                // 0x00D0(0x0004)
	class USoundNodeWave*                              EnemyFlagCarrierLowSound;                                 // 0x00D4(0x0004)
	class USoundNodeWave*                              MidfieldSound;                                            // 0x00D8(0x0004)
	class USoundNodeWave*                              GotOurFlagSound;                                          // 0x00DC(0x0004)
	int                                                LocationSpeechOffset;                                     // 0x00E0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVoice");
		return ptr;
	}


	bool AddAnnouncement(class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	bool ShouldBeRemoved(class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex);
	void SendInPositionMessage(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	bool SendLocationUpdate(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType, class AUTGame* G, class APawn* StatusPawn, bool bDontSendMidfield);
	class USoundNodeWave* KilledVehicleSound(class APlayerController* PC, class UObject* OptionalObject);
	void SendKilledVehicleMessage(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	void SendEnemyStatusUpdate(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	void InitSniperUpdate(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	void SendEnemyFlagCarrierHereUpdate(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	void SendLocalizedMessage(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType, int MessageIndex, class UObject* LocationObject);
	void SetHoldingFlagUpdate(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	void InitCombatUpdate(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	void InitStatusUpdate(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	int GetMessageIndex(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType, class UClass* DamageType);
	void SendVoiceMessage(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType, class UClass* DamageType);
	bool AllowVoiceMessage(const struct FName& MessageType, class AUTPlayerController* PC, class APlayerController* Recipient);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	class USoundNodeWave* EnemySound(class APlayerController* PC, class UObject* OptionalObject);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	int GetNeedOurFlagMessageIndex(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	int GetGotYourBackMessageIndex(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	int GetFriendlyFireMessageIndex(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
	int GetAckMessageIndex(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType);
};


// Class UTGame.UTScriptedVoiceMessage
// 0x0000 (0x0064 - 0x0064)
class UUTScriptedVoiceMessage : public UUTLocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTScriptedVoiceMessage");
		return ptr;
	}


	unsigned char AnnouncementLevel(unsigned char MessageIndex);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
};


// Class UTGame.UTAreaNamingVolume
// 0x0000 (0x0200 - 0x0200)
class AUTAreaNamingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAreaNamingVolume");
		return ptr;
	}

};


// Class UTGame.UTArmorPickupLight
// 0x0000 (0x01DC - 0x01DC)
class AUTArmorPickupLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTArmorPickupLight");
		return ptr;
	}

};


// Class UTGame.UTSeqAct_PlayAnim
// 0x000C (0x00F4 - 0x00E8)
class UUTSeqAct_PlayAnim : public USequenceAction
{
public:
	struct FName                                       AnimName;                                                 // 0x00E8(0x0008) (Edit)
	unsigned long                                      bLooping : 1;                                             // 0x00F0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_PlayAnim");
		return ptr;
	}

};


// Class UTGame.UTDmgType_Encroached
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_Encroached : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_Encroached");
		return ptr;
	}

};


// Class UTGame.UTPawnSoundGroup
// 0x006C (0x00A8 - 0x003C)
class UUTPawnSoundGroup : public UObject
{
public:
	class USoundCue*                                   DodgeSound;                                               // 0x003C(0x0004)
	class USoundCue*                                   DoubleJumpSound;                                          // 0x0040(0x0004)
	class USoundCue*                                   DefaultJumpingSound;                                      // 0x0044(0x0004)
	class USoundCue*                                   LandSound;                                                // 0x0048(0x0004)
	class USoundCue*                                   FallingDamageLandSound;                                   // 0x004C(0x0004)
	class USoundCue*                                   DyingSound;                                               // 0x0050(0x0004)
	class USoundCue*                                   HitSounds[0x3];                                           // 0x0054(0x0004)
	class USoundCue*                                   GibSound;                                                 // 0x0060(0x0004)
	class USoundCue*                                   DrownSound;                                               // 0x0064(0x0004)
	class USoundCue*                                   GaspSound;                                                // 0x0068(0x0004)
	TArray<struct UUTPawnSoundGroup_FFootstepSoundInfo> FootstepSounds;                                           // 0x006C(0x000C) (NeedCtorLink)
	class USoundCue*                                   DefaultFootstepSound;                                     // 0x0078(0x0004)
	TArray<struct UUTPawnSoundGroup_FFootstepSoundInfo> JumpingSounds;                                            // 0x007C(0x000C) (NeedCtorLink)
	TArray<struct UUTPawnSoundGroup_FFootstepSoundInfo> LandingSounds;                                            // 0x0088(0x000C) (NeedCtorLink)
	class USoundCue*                                   DefaultLandingSound;                                      // 0x0094(0x0004)
	class USoundCue*                                   BulletImpactSound;                                        // 0x0098(0x0004)
	class USoundCue*                                   CrushedSound;                                             // 0x009C(0x0004)
	class USoundCue*                                   BodyExplosionSound;                                       // 0x00A0(0x0004)
	class USoundCue*                                   InstagibSound;                                            // 0x00A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPawnSoundGroup");
		return ptr;
	}


	void PlayDrownSound(class APawn* P);
	void PlayGaspSound(class APawn* P);
	void PlayGibSound(class APawn* P);
	void PlayTakeHitSound(class APawn* P, int Damage);
	void PlayDyingSound(class APawn* P);
	class USoundCue* GetLandSound(const struct FName& MaterialType);
	class USoundCue* GetJumpSound(const struct FName& MaterialType);
	class USoundCue* GetFootstepSound(int FootDown, const struct FName& MaterialType);
	void PlayFallingDamageLandSound(class APawn* P);
	void PlayLandSound(class APawn* P);
	void PlayJumpSound(class APawn* P);
	void PlayDoubleJumpSound(class APawn* P);
	void PlayDodgeSound(class APawn* P);
	void PlayBodyExplosion(class APawn* P);
	void PlayCrushedSound(class APawn* P);
	void PlayBulletImpact(class APawn* P);
	void PlayInstagibSound(class APawn* P);
};


// Class UTGame.UTPhysicalMaterialProperty
// 0x0008 (0x0044 - 0x003C)
class UUTPhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       MaterialType;                                             // 0x003C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPhysicalMaterialProperty");
		return ptr;
	}

};


// Class UTGame.UTClientSideWeaponPawn
// 0x0000 (0x0608 - 0x0608)
class AUTClientSideWeaponPawn : public AUTWeaponPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTClientSideWeaponPawn");
		return ptr;
	}


	void Tick(float DeltaTime);
	void DetachDriver(class APawn* P);
	void AttachDriver(class APawn* P);
	void PreBeginPlay();
};


// Class UTGame.UTWeaponAttachment
// 0x00E1 (0x02B5 - 0x01D4)
class AUTWeaponAttachment : public AActor
{
public:
	class UClass*                                      SplashEffect;                                             // 0x01D4(0x0004)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x01D8(0x0004) (ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      OverlayMesh;                                              // 0x01DC(0x0004) (ExportObject, Component, EditInline)
	struct FName                                       MuzzleFlashSocket;                                        // 0x01E0(0x0008)
	class UParticleSystemComponent*                    MuzzleFlashPSC;                                           // 0x01E8(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystem*                             MuzzleFlashPSCTemplate;                                   // 0x01EC(0x0004)
	class UParticleSystem*                             MuzzleFlashAltPSCTemplate;                                // 0x01F0(0x0004)
	struct FColor                                      MuzzleFlashColor;                                         // 0x01F4(0x0004)
	unsigned long                                      bMuzzleFlashPSCLoops : 1;                                 // 0x01F8(0x0004)
	unsigned long                                      bAlignToSurfaceNormal : 1;                                // 0x01F8(0x0004)
	unsigned long                                      bSuppressSounds : 1;                                      // 0x01F8(0x0004)
	unsigned long                                      bMakeSplash : 1;                                          // 0x01F8(0x0004)
	class UClass*                                      MuzzleFlashLightClass;                                    // 0x01FC(0x0004)
	class UUDKExplosionLight*                          MuzzleFlashLight;                                         // 0x0200(0x0004) (ExportObject, Component, EditInline)
	float                                              MuzzleFlashDuration;                                      // 0x0204(0x0004)
	class USkeletalMeshComponent*                      OwnerMesh;                                                // 0x0208(0x0004) (ExportObject, Component, EditInline)
	struct FName                                       AttachmentSocket;                                         // 0x020C(0x0008)
	TArray<struct FMaterialImpactEffect>               ImpactEffects;                                            // 0x0214(0x000C) (NeedCtorLink)
	TArray<struct FMaterialImpactEffect>               AltImpactEffects;                                         // 0x0220(0x000C) (NeedCtorLink)
	struct FMaterialImpactEffect                       DefaultImpactEffect;                                      // 0x022C(0x0030) (NeedCtorLink)
	struct FMaterialImpactEffect                       DefaultAltImpactEffect;                                   // 0x025C(0x0030) (NeedCtorLink)
	class USoundCue*                                   BulletWhip;                                               // 0x028C(0x0004)
	float                                              MaxImpactEffectDistance;                                  // 0x0290(0x0004)
	float                                              MaxFireEffectDistance;                                    // 0x0294(0x0004)
	class UClass*                                      WeaponClass;                                              // 0x0298(0x0004)
	float                                              MaxDecalRangeSq;                                          // 0x029C(0x0004)
	float                                              DistFactorForRefPose;                                     // 0x02A0(0x0004)
	struct FName                                       FireAnim;                                                 // 0x02A4(0x0008)
	struct FName                                       AltFireAnim;                                              // 0x02AC(0x0008)
	TEnumAsByte<EWeapAnimType>                         WeapAnimType;                                             // 0x02B4(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponAttachment");
		return ptr;
	}


	struct FVector GetEffectLocation();
	void FireModeUpdated(unsigned char FiringMode, bool bViaReplication);
	void ChangeVisibility(bool bIsVisible);
	void SetWeaponOverlayFlags(class AUTPawn* OwnerPawn);
	void CheckBulletWhip(const struct FVector& FireDir, const struct FVector& HitLocation);
	void PlayImpactEffects(const struct FVector& HitLocation);
	void SetImpactedActor(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo);
	bool AllowImpactEffects(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal);
	struct FMaterialImpactEffect GetImpactEffect(class UPhysicalMaterial* HitMaterial);
	void StopThirdPersonFireEffects();
	void ThirdPersonFireEffects(const struct FVector& HitLocation);
	void StopFirstPersonFireEffects(class AWeapon* PawnWeapon);
	void FirstPersonFireEffects(class AWeapon* PawnWeapon, const struct FVector& HitLocation);
	void StopMuzzleFlash();
	void CauseMuzzleFlash();
	void MuzzleFlashTimer();
	void DetachFrom(class USkeletalMeshComponent* MeshCpnt);
	void SetPuttingDownWeapon(bool bNowPuttingDown);
	void AttachTo(class AUTPawn* OwnerPawn);
	void SetMuzzleFlashParams(class UParticleSystemComponent* PSC);
	void SetSkin(class UMaterial* NewMaterial);
	void CreateOverlayMesh();
	void CheckToForceRefPose();
	void PostBeginPlay();
};


// Class UTGame.UTEmit_HitEffect
// 0x0000 (0x01E0 - 0x01E0)
class AUTEmit_HitEffect : public AUTEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmit_HitEffect");
		return ptr;
	}


	void PawnBaseDied();
	void AttachTo(class APawn* P, const struct FName& NewBoneName);
};


// Class UTGame.UTSeqAct_UseHoverboard
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_UseHoverboard : public USequenceAction
{
public:
	class AUTVehicle*                                  Hoverboard;                                               // 0x00E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_UseHoverboard");
		return ptr;
	}


	int GetObjClassVersion();
};


// Class UTGame.UTSeqAct_InfiniteAmmo
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_InfiniteAmmo : public USequenceAction
{
public:
	unsigned long                                      bInfiniteAmmo : 1;                                        // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_InfiniteAmmo");
		return ptr;
	}

};


// Class UTGame.UTEmit_TransLocateOut
// 0x0008 (0x01F0 - 0x01E8)
class AUTEmit_TransLocateOut : public AUTReplicatedEmitter
{
public:
	float                                              TLTrailKillWindow;                                        // 0x01E8(0x0004)
	class UParticleSystem*                             FirstPersonTemplate;                                      // 0x01EC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmit_TransLocateOut");
		return ptr;
	}


	void Timer();
	void PostBeginPlay();
	void TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
};


// Class UTGame.UTEmit_TransLocateOutRed
// 0x0000 (0x01F0 - 0x01F0)
class AUTEmit_TransLocateOutRed : public AUTEmit_TransLocateOut
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmit_TransLocateOutRed");
		return ptr;
	}

};


// Class UTGame.UTWaterVolume
// 0x000C (0x025C - 0x0250)
class AUTWaterVolume : public AWaterVolume
{
public:
	class UParticleSystem*                             PS_EnterWaterEffect_Pawn;                                 // 0x0250(0x0004)
	class UParticleSystem*                             PS_EnterWaterEffect_Vehicle;                              // 0x0254(0x0004)
	class UParticleSystem*                             ProjectileEntryEffect;                                    // 0x0258(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWaterVolume");
		return ptr;
	}


	void PlayEntrySplash(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class UTGame.UTBeamWeaponAttachment
// 0x002F (0x02E4 - 0x02B5)
class AUTBeamWeaponAttachment : public AUTWeaponAttachment
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	class UParticleSystem*                             BeamTemplate[0x2];                                        // 0x02B8(0x0004)
	class UParticleSystemComponent*                    BeamEmitter[0x2];                                         // 0x02C0(0x0004) (ExportObject, Component, EditInline)
	struct FName                                       BeamSockets[0x2];                                         // 0x02C8(0x0008)
	class AUTPawn*                                     PawnOwner;                                                // 0x02D8(0x0004)
	struct FName                                       EndPointParamName;                                        // 0x02DC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTBeamWeaponAttachment");
		return ptr;
	}


	void UpdateBeam(unsigned char FireModeNum);
	void HideEmitter(int Index, bool bHide);
	void AddBeamEmitter();
};


// Class UTGame.UTAttachment_LinkGun
// 0x0094 (0x0378 - 0x02E4)
class AUTAttachment_LinkGun : public AUTBeamWeaponAttachment
{
public:
	struct FColor                                      LinkBeamColors[0x3];                                      // 0x02E4(0x0004)
	class UParticleSystem*                             LinkBeamSystems[0x3];                                     // 0x02F0(0x0004)
	struct FColor                                      HighPowerBeamColor;                                       // 0x02FC(0x0004)
	class UParticleSystem*                             HighPowerSystem;                                          // 0x0300(0x0004)
	class UMaterialInstanceConstant*                   WeaponMaterialInstance;                                   // 0x0304(0x0004)
	class UAudioComponent*                             LinkHitSound;                                             // 0x0308(0x0004) (ExportObject, Component, EditInline)
	unsigned long                                      bHittingWall : 1;                                         // 0x030C(0x0004)
	class UParticleSystem*                             WallHitTemplate;                                          // 0x0310(0x0004)
	class AUTEmitter*                                  HitWallEffect;                                            // 0x0314(0x0004)
	class UParticleSystem*                             TeamBeamEndpointTemplates[0x3];                           // 0x0318(0x0004)
	class UParticleSystem*                             HighPowerBeamEndpointTemplate;                            // 0x0324(0x0004)
	class AUTEmitter*                                  BeamEndpointEffect;                                       // 0x0328(0x0004)
	class UMaterialInterface*                          BeamDecal;                                                // 0x032C(0x0004)
	float                                              DecalWidth;                                               // 0x0330(0x0004)
	float                                              DecalHeight;                                              // 0x0334(0x0004)
	float                                              DurationOfDecal;                                          // 0x0338(0x0004)
	struct FName                                       DecalDissolveParamName;                                   // 0x033C(0x0008)
	int                                                TicksBetweenDecals;                                       // 0x0344(0x0004) (Edit)
	int                                                TicksSinceLastDecal;                                      // 0x0348(0x0004)
	class UParticleSystem*                             TeamMuzzleFlashTemplates[0x3];                            // 0x034C(0x0004)
	class UParticleSystem*                             HighPowerMuzzleFlashTemplate;                             // 0x0358(0x0004)
	class UParticleSystemComponent*                    PoweredUpEffect;                                          // 0x035C(0x0004) (ExportObject, Component, EditInline)
	struct FName                                       PoweredUpEffectSocket;                                    // 0x0360(0x0008)
	TArray<struct FLinkConnection>                     Connections;                                              // 0x0368(0x000C) (Component, NeedCtorLink)
	class UParticleSystem*                             ConnectionEffectTemplate;                                 // 0x0374(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAttachment_LinkGun");
		return ptr;
	}


	void ChangeVisibility(bool bIsVisible);
	void CheckPoweredUp();
	void HideEmitter(int Index, bool bHide);
	void KillEndpointEffect();
	void UpdateBeam(unsigned char FireModeNum);
	void Destroyed();
	void StopThirdPersonFireEffects();
	void StopMuzzleFlash();
	void SetImpactedActor(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo);
	void SetSkin(class UMaterial* NewMaterial);
	void PostBeginPlay();
	class UParticleSystem* GetTeamMuzzleFlashTemplate(unsigned char TeamNum);
	void GetTeamBeamInfo(unsigned char TeamNum, struct FColor* BeamColor, class UParticleSystem** BeamSystem, class UParticleSystem** BeamEndpointTemplate);
};


// Class UTGame.UTLinkGunMuzzleFlashLight
// 0x0018 (0x0278 - 0x0260)
class UUTLinkGunMuzzleFlashLight : public UUDKExplosionLight
{
public:
	TArray<struct FLightValues>                        RedTeamTimeShift;                                         // 0x0260(0x000C) (NeedCtorLink)
	TArray<struct FLightValues>                        BlueTeamTimeShift;                                        // 0x026C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTLinkGunMuzzleFlashLight");
		return ptr;
	}


	void SetTeam(unsigned char NewTeam);
};


// Class UTGame.UTAutoCrouchVolume
// 0x0000 (0x0200 - 0x0200)
class AUTAutoCrouchVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAutoCrouchVolume");
		return ptr;
	}


	void CrouchTimer();
	void UnTouch(class AActor* Other);
	void SetCrouch(class APawn* P, unsigned char bCrouch);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class UTGame.UTAvoidMarker
// 0x0004 (0x01D8 - 0x01D4)
class AUTAvoidMarker : public AActor
{
public:
	class UCylinderComponent*                          CollisionCylinder;                                        // 0x01D4(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTAvoidMarker");
		return ptr;
	}


	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class UTGame.UTDefensePoint
// 0x002C (0x02DC - 0x02B0)
class AUTDefensePoint : public AUDKScriptedNavigationPoint
{
public:
	class AController*                                 CurrentUser;                                              // 0x02B0(0x0004)
	class AUTDefensePoint*                             NextDefensePoint;                                         // 0x02B4(0x0004)
	class AUDKGameObjective*                           DefendedObjective;                                        // 0x02B8(0x0004) (Edit)
	unsigned long                                      bFirstScript : 1;                                         // 0x02BC(0x0004)
	unsigned long                                      bSniping : 1;                                             // 0x02BC(0x0004) (Edit)
	unsigned long                                      bOnlyOnFoot : 1;                                          // 0x02BC(0x0004) (Edit)
	unsigned long                                      bOnlySkilled : 1;                                         // 0x02BC(0x0004) (Edit)
	class UClass*                                      WeaponPreference;                                         // 0x02C0(0x0004) (Edit)
	struct FName                                       DefenseGroup;                                             // 0x02C4(0x0008) (Edit)
	TEnumAsByte<EDefensePriority>                      DefensePriority;                                          // 0x02CC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
	TArray<class UTexture2D*>                          TeamSprites;                                              // 0x02D0(0x000C) (NeedCtorLink, EditorOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDefensePoint");
		return ptr;
	}


	class AActor* GetMoveTarget();
	bool HigherPriorityThan(class AUTDefensePoint* S, class AUTBot* B, bool bAutoPointsInUse, bool bPrioritizeSameGroup, int* NumChecked);
	void PreBeginPlay();
	bool CheckForErrors();
	void FreePoint();
	void Reset();
};


// Class UTGame.UTTimedPowerup
// 0x0040 (0x0264 - 0x0224)
class AUTTimedPowerup : public AUTInventory
{
public:
	float                                              TimeRemaining;                                            // 0x0224(0x0004)
	int                                                HudIndex;                                                 // 0x0228(0x0004)
	class USoundCue*                                   PowerupOverSound;                                         // 0x022C(0x0004)
	struct FName                                       PowerupStatName;                                          // 0x0230(0x0008)
	struct FTextureCoordinates                         IconCoords;                                               // 0x0238(0x0010)
	float                                              TransitionTime;                                           // 0x0248(0x0004)
	float                                              TransitionDuration;                                       // 0x024C(0x0004)
	float                                              WarningTime;                                              // 0x0250(0x0004)
	struct FVector                                     PP_Scene_HighLights;                                      // 0x0254(0x000C)
	float                                              PP_Scene_Desaturation;                                    // 0x0260(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTimedPowerup");
		return ptr;
	}


	struct FName GetPowerupStatName();
	float DetourWeight(class APawn* Other, float PathWeight);
	float BotDesireability(class AActor* PickupHolder, class APawn* P, class AController* C);
	void TimeExpired();
	bool DenyPickupQuery(class UClass* ItemClass, class AActor* Pickup);
	void DisplayPowerup(class UCanvas* Canvas, class AUTHUD* HUD, float ResolutionScale, float* YPos);
	void TimeRemaingUpdated();
	void ClientSetTimeRemaining(float NewTimeRemaining);
	void ClientLostItem();
	void AdjustPPEffects(class APawn* P, bool bRemove);
	void ClientGivenTo(class APawn* NewOwner, bool bDoNotActivate);
	void GivenTo(class APawn* NewOwner, bool bDoNotActivate);
	void Tick(float DeltaTime);
};


// Class UTGame.UTSeqAct_AIStartFireAt
// 0x0001 (0x00E9 - 0x00E8)
class UUTSeqAct_AIStartFireAt : public USequenceAction
{
public:
	unsigned char                                      ForcedFireMode;                                           // 0x00E8(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_AIStartFireAt");
		return ptr;
	}

};


// Class UTGame.UTSeqAct_AIStopFire
// 0x0000 (0x00E8 - 0x00E8)
class UUTSeqAct_AIStopFire : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_AIStopFire");
		return ptr;
	}

};


// Class UTGame.UTHoldSpot
// 0x0008 (0x02E4 - 0x02DC)
class AUTHoldSpot : public AUTDefensePoint
{
public:
	class AUTVehicle*                                  HoldVehicle;                                              // 0x02DC(0x0004)
	class ANavigationPoint*                            LastAnchor;                                               // 0x02E0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTHoldSpot");
		return ptr;
	}


	void NotifyAnchorFindingResult(class ANavigationPoint* EndAnchor, class APawn* RouteFinder);
	class ANavigationPoint* SpecifyEndAnchor(class APawn* RouteFinder);
	void FreePoint();
	class AActor* GetMoveTarget();
	void PreBeginPlay();
};


// Class UTGame.UTDeathmatch
// 0x0000 (0x04F0 - 0x04F0)
class AUTDeathmatch : public AUTGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDeathmatch");
		return ptr;
	}


	void CheckSpiceOfLifeAchievement();
	void CheckAchievements();
	void WriteOnlineStats();
	int GetHandicapNeed(class APawn* Other);
	bool WantsPickups(class AUTBot* B);
};


// Class UTGame.UTSeqAct_AIFreeze
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_AIFreeze : public USequenceAction
{
public:
	unsigned long                                      bAllowWeaponFiring : 1;                                   // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_AIFreeze");
		return ptr;
	}

};


// Class UTGame.UTLastSecondMessage
// 0x0018 (0x007C - 0x0064)
class UUTLastSecondMessage : public UUTLocalMessage
{
public:
	struct FString                                     LastSecondRed;                                            // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     LastSecondBlue;                                           // 0x0070(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTLastSecondMessage");
		return ptr;
	}


	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTCarriedObjectMessage
// 0x00A8 (0x010C - 0x0064)
class UUTCarriedObjectMessage : public UUTLocalMessage
{
public:
	struct FString                                     ReturnBlue;                                               // 0x0064(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     ReturnRed;                                                // 0x0070(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     ReturnedBlue;                                             // 0x007C(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     ReturnedRed;                                              // 0x0088(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     CaptureBlue;                                              // 0x0094(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     CaptureRed;                                               // 0x00A0(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     DroppedBlue;                                              // 0x00AC(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     DroppedRed;                                               // 0x00B8(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     HasBlue;                                                  // 0x00C4(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     HasRed;                                                   // 0x00D0(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     KilledBlue;                                               // 0x00DC(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     KilledRed;                                                // 0x00E8(0x000C) (Edit, Const, Localized, NeedCtorLink)
	class USoundNodeWave*                              ReturnSounds[0x2];                                        // 0x00F4(0x0004)
	class USoundNodeWave*                              DroppedSounds[0x2];                                       // 0x00FC(0x0004)
	class USoundNodeWave*                              TakenSounds[0x2];                                         // 0x0104(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCarriedObjectMessage");
		return ptr;
	}


	bool PartiallyDuplicates(int Switch1, int Switch2, class UObject* OptionalObject1, class UObject* OptionalObject2);
	bool AddAnnouncement(class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	bool ShouldRemoveFlagAnnouncement(int MyMessageIndex, class UClass* NewAnnouncementClass, int NewMessageIndex);
	bool ShouldBeRemoved(class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	unsigned char AnnouncementLevel(unsigned char MessageIndex);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTFamilyInfo_Liandri
// 0x0000 (0x019C - 0x019C)
class UUTFamilyInfo_Liandri : public UUTFamilyInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTFamilyInfo_Liandri");
		return ptr;
	}

};


// Class UTGame.UTFamilyInfo_Liandri_Male
// 0x0000 (0x019C - 0x019C)
class UUTFamilyInfo_Liandri_Male : public UUTFamilyInfo_Liandri
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTFamilyInfo_Liandri_Male");
		return ptr;
	}

};


// Class UTGame.UTDmgType_Rocket
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_Rocket : public UUTDmgType_Burning
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_Rocket");
		return ptr;
	}


	void SpawnHitEffect(class APawn* P, float Damage, const struct FVector& Momentum, const struct FName& BoneName, const struct FVector& HitLocation);
};


// Class UTGame.UTCicadaRocketExplosionLight
// 0x0000 (0x0260 - 0x0260)
class UUTCicadaRocketExplosionLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCicadaRocketExplosionLight");
		return ptr;
	}

};


// Class UTGame.UTConsole
// 0x0004 (0x01C8 - 0x01C4)
class UUTConsole : public UConsole
{
public:
	int                                                TextCount;                                                // 0x01C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTConsole");
		return ptr;
	}


	void OutputTextLine(const struct FString& Text);
	bool InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad);
};


// Class UTGame.UTConsolePlayerInput
// 0x00C7 (0x04B4 - 0x03ED)
class UUTConsolePlayerInput : public UUTPlayerInput
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	float                                              SensitivityMultiplier;                                    // 0x03F0(0x0004)
	float                                              TurningAccelerationMultiplier;                            // 0x03F4(0x0004)
	unsigned long                                      bAutoCenterPitch : 1;                                     // 0x03F8(0x0004) (Config)
	unsigned long                                      bAutoCenterVehiclePitch : 1;                              // 0x03F8(0x0004) (Config)
	unsigned long                                      bViewAccelerationEnabled : 1;                             // 0x03F8(0x0004) (Edit, Config)
	unsigned long                                      bDebugViewAcceleration : 1;                               // 0x03F8(0x0004) (Config)
	unsigned long                                      bTargetFrictionEnabled : 1;                               // 0x03F8(0x0004) (Edit, Config)
	unsigned long                                      bDebugTargetFriction : 1;                                 // 0x03F8(0x0004) (Config)
	unsigned long                                      bAppliedTargetFriction : 1;                               // 0x03F8(0x0004)
	unsigned long                                      bIsLookingUp : 1;                                         // 0x03F8(0x0004)
	unsigned long                                      bIsLookingDown : 1;                                       // 0x03F8(0x0004)
	float                                              LastTurnTime;                                             // 0x03FC(0x0004)
	float                                              AutoCenterDelay;                                          // 0x0400(0x0004) (Config, GlobalConfig)
	float                                              AutoVehicleCenterSpeed;                                   // 0x0404(0x0004) (Config, GlobalConfig)
	float                                              SlowTurnScaling;                                          // 0x0408(0x0004) (Config, GlobalConfig)
	float                                              ViewAccel_YawThreshold;                                   // 0x040C(0x0004) (Edit, Config)
	float                                              ViewAccel_DiagonalThreshold;                              // 0x0410(0x0004) (Edit, Config)
	float                                              ViewAccel_BaseMultiplier;                                 // 0x0414(0x0004) (Edit, Config)
	float                                              ViewAccel_CurrMutliplier;                                 // 0x0418(0x0004) (Edit)
	float                                              ViewAccel_TimeToHoldBeforeFastAcceleration;               // 0x041C(0x0004) (Edit, Config)
	float                                              ViewAccel_TimeHeld;                                       // 0x0420(0x0004)
	float                                              ViewAccel_Twitchy;                                        // 0x0424(0x0004) (Edit, Config)
	float                                              Dodge_Threshold;                                          // 0x0428(0x0004) (Edit, Config)
	class APawn*                                       LastFrictionTarget;                                       // 0x042C(0x0004)
	float                                              LastFrictionTargetTime;                                   // 0x0430(0x0004)
	float                                              LastDistToTarget;                                         // 0x0434(0x0004)
	float                                              LastDistMultiplier;                                       // 0x0438(0x0004)
	float                                              LastDistFromAimZ;                                         // 0x043C(0x0004)
	float                                              LastDistFromAimY;                                         // 0x0440(0x0004)
	float                                              LastFrictionMultiplier;                                   // 0x0444(0x0004)
	float                                              LastAdhesionAmtY;                                         // 0x0448(0x0004)
	float                                              LastAdhesionAmtZ;                                         // 0x044C(0x0004)
	float                                              LastTargetRadius;                                         // 0x0450(0x0004)
	float                                              LastTargetHeight;                                         // 0x0454(0x0004)
	float                                              LastDistFromAimYa;                                        // 0x0458(0x0004)
	float                                              LastDistFromAimZa;                                        // 0x045C(0x0004)
	float                                              LastAdjustY;                                              // 0x0460(0x0004)
	float                                              LastAdjustZ;                                              // 0x0464(0x0004)
	struct FVector                                     LastCamLoc;                                               // 0x0468(0x000C)
	struct FRotator                                    LastDeltaRot;                                             // 0x0474(0x000C)
	float                                              LeftThumbStickDeadZoneThreshold;                          // 0x0480(0x0004) (Config)
	float                                              RightThumbStickDeadZoneThreshold;                         // 0x0484(0x0004) (Config)
	float                                              MagicScaleForSensitivityMiddle;                           // 0x0488(0x0004) (Config)
	float                                              MagicScaleForSensitivityEdge;                             // 0x048C(0x0004) (Config)
	float                                              ViewAccel_RampSpeed;                                      // 0x0490(0x0004) (Config)
	float                                              ViewAccel_MaxTurnSpeed;                                   // 0x0494(0x0004) (Config)
	float                                              ViewAccel_PitchThreshold;                                 // 0x0498(0x0004) (Config)
	float                                              ViewAccel_LookingUpOrDownBoundary;                        // 0x049C(0x0004) (Config)
	float                                              ViewAccel_BackToCenterBoundary;                           // 0x04A0(0x0004) (Config)
	float                                              ViewAccel_BackToCenterSpeed;                              // 0x04A4(0x0004) (Config)
	float                                              AutoPitchCenterSpeed;                                     // 0x04A8(0x0004) (Config)
	float                                              AutoPitchStopAdjustingValue;                              // 0x04AC(0x0004) (Config)
	float                                              HoverBoardPitchMultiplier;                                // 0x04B0(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTConsolePlayerInput");
		return ptr;
	}


	TEnumAsByte<EDoubleClickDir> CheckForDoubleClickMove(float DeltaTime);
	void Jump();
	void SmartJump();
	void DebugTargetFriction();
	void DebugTargetAdhesion();
	void DebugViewAcceleration();
	void ApplyTargetFriction(float DeltaTime, class AUTWeapon* W);
	void AdjustMouseSensitivity(float FOVScale);
	void ApplyTargetAdhesion(float DeltaTime, class AUTWeapon* W, int* out_YawRot, int* out_PitchRot);
	void ApplyViewAcceleration(float DeltaTime);
	void ApplyViewAutoVehiclePitchCentering(float DeltaTime);
	void ApplyViewAutoPitchCentering(float DeltaTime);
	void PreProcessInput(float DeltaTime);
	void PostBeginPlay();
};


// Class UTGame.UTSeqEvent_FlagEvent
// 0x0000 (0x0100 - 0x0100)
class UUTSeqEvent_FlagEvent : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqEvent_FlagEvent");
		return ptr;
	}


	int GetObjClassVersion();
	void Trigger(const struct FName& EventType, class AController* EventInstigator);
};


// Class UTGame.UTCTFBase
// 0x0054 (0x0450 - 0x03FC)
class AUTCTFBase : public AUTGameObjective
{
public:
	class UAudioComponent*                             TakenSound;                                               // 0x03FC(0x0004) (Edit, ExportObject, Component, EditInline)
	class AUTCTFFlag*                                  myFlag;                                                   // 0x0400(0x0004)
	class UClass*                                      FlagType;                                                 // 0x0404(0x0004)
	float                                              MidFieldHighZOffset;                                      // 0x0408(0x0004) (Edit)
	float                                              MidFieldLowZOffset;                                       // 0x040C(0x0004) (Edit)
	float                                              NearBaseRadius;                                           // 0x0410(0x0004) (Edit)
	float                                              BaseExitTime;                                             // 0x0414(0x0004) (Edit)
	class UParticleSystemComponent*                    FlagEmptyParticles;                                       // 0x0418(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   FlagBaseMaterial;                                         // 0x041C(0x0004)
	class UMaterialInstanceConstant*                   MIC_FlagBaseColor;                                        // 0x0420(0x0004)
	class UStaticMeshComponent*                        FlagBaseMesh;                                             // 0x0424(0x0004) (ExportObject, Component, EditInline)
	class UClass*                                      CTFAnnouncerMessagesClass;                                // 0x0428(0x0004)
	TArray<class USoundNodeWave*>                      NearLocationSpeech;                                       // 0x042C(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      MidfieldHighSpeech;                                       // 0x0438(0x000C) (NeedCtorLink)
	TArray<class USoundNodeWave*>                      MidfieldLowSpeech;                                        // 0x0444(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCTFBase");
		return ptr;
	}


	bool IsActive();
	void ReplicatedEvent(const struct FName& VarName);
	void SetAlarm(bool bNowOn);
	class AUTCarriedObject* GetFlag();
	void ObjectiveChanged();
	class USoundNodeWave* GetLocationSpeechFor(class APlayerController* PC, int LocationSpeechOffset, int MessageIndex);
	int GetLocationMessageIndex(class AUTBot* B, class APawn* StatusPawn);
	class AActor* GetBestViewTarget();
	void PostBeginPlay();
};


// Class UTGame.UTCTFFlag
// 0x0038 (0x0330 - 0x02F8)
class AUTCTFFlag : public AUTCarriedObject
{
public:
	class UParticleSystem*                             RespawnEffect;                                            // 0x02F8(0x0004)
	unsigned long                                      bBringUpBright : 1;                                       // 0x02FC(0x0004)
	unsigned long                                      bBringDownFromBright : 1;                                 // 0x02FC(0x0004)
	unsigned long                                      bFadingOut : 1;                                           // 0x02FC(0x0004) (Net, RepNotify)
	unsigned long                                      bRespawning : 1;                                          // 0x02FC(0x0004) (Net, RepNotify)
	unsigned long                                      bWasClothEnabled : 1;                                     // 0x02FC(0x0004)
	TArray<class UMaterialInstanceConstant*>           MICArray;                                                 // 0x0300(0x000C) (NeedCtorLink)
	struct FVector                                     RunningClothVelClamp;                                     // 0x030C(0x000C)
	struct FVector                                     HoverboardingClothVelClamp;                               // 0x0318(0x000C)
	class UParticleSystemComponent*                    SuccessfulCaptureSystem;                                  // 0x0324(0x0004) (ExportObject, Component, EditInline)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0328(0x0004) (ExportObject, Component, EditInline)
	float                                              LastLocationPingTime;                                     // 0x032C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCTFFlag");
		return ptr;
	}


	void SetFlagDynamicLightToNotBeDynamic();
	void SetFlagPropertiesToStationaryFlagState();
	void Drop(class AController* Killer);
	void CustomFadeOutEffects();
	void bringUpBrightOff();
	void CustomRespawnEffects();
	void SameTeamTouch(class AController* C);
	bool ValidHolder(class AActor* Other);
	void SetHolder(class AController* C);
	void ClientReturnedHome();
	bool ShouldMinimapRenderFor(class APlayerController* PC);
	void OnBaseChainChanged();
	void Tick(float DeltaTime);
	void PostBeginPlay();
	void ReplicatedEvent(const struct FName& VarName);
};


// Class UTGame.UTTeamGame
// 0x0048 (0x0538 - 0x04F0)
class AUTTeamGame : public AUTDeathmatch
{
public:
	unsigned long                                      bPlayersBalanceTeams : 1;                                 // 0x04F0(0x0004) (Config, GlobalConfig)
	unsigned long                                      bAllowNonTeamChat : 1;                                    // 0x04F0(0x0004) (Config)
	unsigned long                                      bScoreTeamKills : 1;                                      // 0x04F0(0x0004)
	unsigned long                                      bSpawnInTeamArea : 1;                                     // 0x04F0(0x0004)
	unsigned long                                      bScoreVictimsTarget : 1;                                  // 0x04F0(0x0004)
	unsigned long                                      bForceAllRed : 1;                                         // 0x04F0(0x0004)
	float                                              FriendlyFireScale;                                        // 0x04F4(0x0004)
	float                                              TeammateBoost;                                            // 0x04F8(0x0004)
	class AUTTeamInfo*                                 Teams[0x2];                                               // 0x04FC(0x0004)
	class UClass*                                      TeamAIType[0x2];                                          // 0x0504(0x0004)
	struct FString                                     TeamFactions[0x2];                                        // 0x050C(0x000C) (NeedCtorLink)
	class UClass*                                      TeamScoreMessageClass;                                    // 0x0524(0x0004)
	class APlayerController*                           PendingTeamSwap;                                          // 0x0528(0x0004)
	float                                              SwapRequestTime;                                          // 0x052C(0x0004)
	struct FName                                       FlagKillMessageName;                                      // 0x0530(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeamGame");
		return ptr;
	}


	void ProcessSpeechRecognition(class AUTPlayerController* Speaker, TArray<struct FSpeechRecognizedWord>* Words);
	void ProcessSpeechOrders(class AUTPlayerController* Speaker, TArray<struct FSpeechRecognizedWord>* Words, TArray<class AUTBot*>* Recipients);
	void ParseSpeechRecipients(class AUTPlayerController* Speaker, TArray<struct FSpeechRecognizedWord>* Words, TArray<class AUTBot*>* Recipients);
	void HandleSeamlessTravelPlayer(class AController** C);
	void Logout(class AController* Exiting);
	void GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList);
	void ShowPathTo(class APlayerController* P, int TeamNum);
	bool AllowClientToTeleport(class AUTPlayerReplicationInfo* ClientPRI, class AActor* DestinationActor);
	void OverridePRI(class APlayerController* PC, class APlayerReplicationInfo* OldPRI);
	void AnnounceScore(int ScoringTeam);
	void PlayRegularEndOfMatchMessage();
	bool IsWinningTeam(class ATeamInfo* T);
	bool IsAWinner(class APlayerController* C);
	bool DominatingVictory();
	void ReduceDamage(class APawn* injured, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum);
	void SendFlagKillMessage(class AController* Killer, class AUTPlayerReplicationInfo* KillerPRI);
	void AdjustSkill(class AAIController* B, class APlayerController* P, bool bWinner);
	void CampaignSkillAdjust(class AUTBot* aBot);
	void ScoreKill(class AController* Killer, class AController* Other);
	bool NearGoal(class AController* C);
	class APawn* FindVictimsTarget(class AController* Other);
	bool CheckScore(class APlayerReplicationInfo* Scorer);
	float RatePlayerStart(class APlayerStart* P, unsigned char Team, class AController* Player);
	void SetTeam(class AController* Other, class AUTTeamInfo* NewTeam, bool bNewTeam);
	bool ChangeTeam(class AController* Other, int Num, bool bNewTeam);
	unsigned char PickTeam(unsigned char Num, class AController* C);
	void RestartGame();
	bool CanSpectate(class APlayerController* Viewer, class APlayerReplicationInfo* ViewTarget);
	void SetEndGameFocus(class APlayerReplicationInfo* Winner);
	bool CheckEndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason);
	void NotifyKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType);
	bool TooManyBots(class AController* botToRemove);
	void InitGame(const struct FString& Options, struct FString* ErrorMessage);
	bool CheckMaxLives(class APlayerReplicationInfo* Scorer);
	int LevelRecommendedPlayers();
	class AUTTeamInfo* GetBotTeam(int TeamBots, bool bUseTeamIndex, int TeamIndex);
	int GetHandicapNeed(class APawn* Other);
	void AddBlueBots(int Num);
	void AddRedBots(int Num);
	void CreateTeam(int TeamIndex);
	void FindNewObjectives(class AUTGameObjective* DisabledObjective);
	void PostLogin(class APlayerController* NewPlayer);
	void PreBeginPlay();
};


// Class UTGame.UTCTFGame
// 0x000C (0x0544 - 0x0538)
class AUTCTFGame : public AUTTeamGame
{
public:
	class AUTCTFFlag*                                  Flags[0x2];                                               // 0x0538(0x0004)
	class UClass*                                      AnnouncerMessageClass;                                    // 0x0540(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCTFGame");
		return ptr;
	}


	class AActor* GetAutoObjectiveFor(class AUTPlayerController* PC);
	void ViewObjective(class APlayerController* PC);
	void ScoreFlag(class AController* Scorer, class AUTCTFFlag* theFlag);
	bool CheckEndGame(class APlayerReplicationInfo* Winner, const struct FString& Reason);
	bool WantFastSpawnFor(class AAIController* B);
	bool NearGoal(class AController* C);
	void RegisterFlag(class AUTCTFFlag* F, int TeamIndex);
	bool GetLocationFor(class APawn* StatusPawn, int LocationSpeechOffset, class AActor** LocationObject, int* MessageIndex);
	int GetHandicapNeed(class APawn* Other);
	void SetEndGameFocus(class APlayerReplicationInfo* Winner);
	void PostBeginPlay();
};


// Class UTGame.UTCTFSquadAI
// 0x0028 (0x02C8 - 0x02A0)
class AUTCTFSquadAI : public AUTSquadAI
{
public:
	float                                              LastSeeFlagCarrier;                                       // 0x02A0(0x0004)
	class AUTCTFFlag*                                  FriendlyFlag;                                             // 0x02A4(0x0004)
	class AUTCTFFlag*                                  EnemyFlag;                                                // 0x02A8(0x0004)
	class ANavigationPoint*                            HidePath;                                                 // 0x02AC(0x0004)
	TArray<struct FAlternateRoute>                     EnemyFlagRoutes;                                          // 0x02B0(0x000C) (NeedCtorLink)
	TArray<struct FAlternateRoute>                     FriendlyFlagRoutes;                                       // 0x02BC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCTFSquadAI");
		return ptr;
	}


	void ModifyAggression(class AUTBot* B, float* Aggression);
	bool AllowContinueOnFoot(class AUTBot* B, class AUTVehicle* V);
	float ModifyThreat(float Current, class APawn* NewThreat, bool bThreatVisible, class AUTBot* B);
	unsigned char PriorityObjective(class AUTBot* B);
	bool ShouldDeferTo(class AController* C);
	bool AllowTaunt(class AUTBot* B);
	void EnemyFlagTakenBy(class AController* C);
	bool CheckSquadObjectives(class AUTBot* B);
	bool OverrideFollowPlayer(class AUTBot* B);
	bool FlagNearBase();
	bool NearHomeBase(class AUTBot* B);
	bool NearEnemyBase(class AUTBot* B);
	bool MustKeepEnemy(class APawn* E);
	bool OrdersForFlagCarrier(class AUTBot* B);
	bool CheckVehicle(class AUTBot* B);
	class ANavigationPoint* FindHidePathFor(class AUTBot* B);
	bool VisibleToEnemiesOf(class AActor* A, class AUTBot* B);
	class AActor* FormationCenter(class AController* C);
	bool GoPickupFlag(class AUTBot* B);
	bool FindPathToObjective(class AUTBot* B, class AActor* O);
	bool BeDevious(class APawn* Enemy);
	void SetAlternatePathTo(class ANavigationPoint* NewRouteObjective, class AUTBot* RouteMaker);
	bool ShouldUseAlternatePaths();
	bool AllowDetourTo(class AUTBot* B, class ANavigationPoint* N);
	void PostBeginPlay();
};


// Class UTGame.UTTeamAI
// 0x00BC (0x0294 - 0x01D8)
class AUTTeamAI : public AUDKTeamOwnedInfo
{
public:
	class AUTTeamInfo*                                 EnemyTeam;                                                // 0x01D8(0x0004)
	int                                                NumSupportingPlayer;                                      // 0x01DC(0x0004)
	class AUTGameObjective*                            Objectives;                                               // 0x01E0(0x0004)
	class AUTGameObjective*                            PickedObjective;                                          // 0x01E4(0x0004)
	class AUTGameObjective*                            PickedStandaloneObjective;                                // 0x01E8(0x0004)
	class AUTSquadAI*                                  Squads;                                                   // 0x01EC(0x0004)
	class AUTSquadAI*                                  AttackSquad;                                              // 0x01F0(0x0004)
	class AUTSquadAI*                                  FreelanceSquad;                                           // 0x01F4(0x0004)
	class UClass*                                      SquadType;                                                // 0x01F8(0x0004)
	int                                                OrderOffset;                                              // 0x01FC(0x0004)
	struct FName                                       OrderList[0x8];                                           // 0x0200(0x0008)
	class AUTPickupFactory*                            SuperPickups[0x10];                                       // 0x0240(0x0004)
	int                                                NumSuperPickups;                                          // 0x0280(0x0004)
	unsigned long                                      bFoundSuperItems : 1;                                     // 0x0284(0x0004)
	TArray<class AUTVehicleFactory*>                   ImportantVehicleFactories;                                // 0x0288(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeamAI");
		return ptr;
	}


	void RemoveFromTeam(class AController* Other);
	void SetOrders(class AUTBot* B, const struct FName& NewOrders, class AController* OrderGiver);
	void SetBotOrders(class AUTBot* NewBot);
	void PutOnFreelance(class AUTBot* B);
	void PutOnOffense(class AUTBot* B);
	bool PutOnDefense(class AUTBot* B);
	class AUTGameObjective* GetPriorityFreelanceObjectiveFor(class AUTSquadAI* InFreelanceSquad);
	class AUTGameObjective* GetPriorityStandaloneObjectiveFor(class AUTSquadAI* InAttackSquad, class AController* InController);
	class AUTGameObjective* GetPriorityAttackObjectiveFor(class AUTSquadAI* InAttackSquad, class AController* InController);
	class AUTGameObjective* GetLeastDefendedObjective(class AController* InController);
	class AUTSquadAI* AddSquadWithLeader(class AController* C, class AUTGameObjective* O);
	void PutBotOnSquadLedBy(class AController* C, class AUTBot* B);
	class AUTSquadAI* AddHumanSquad();
	class AUTSquadAI* FindHumanSquad();
	void SetObjectiveLists();
	bool FriendlyToward(class APawn* Other);
	void RemoveSquad(class AUTSquadAI* Squad);
	void FindNewObjectiveFor(class AUTSquadAI* S, bool bForceUpdate);
	void FindNewObjectives(class AUTGameObjective* DisabledObjective);
	void NotifyKilled(class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType);
	void ReAssessStrategy();
	void Reset();
	void FindSuperItems();
	void CriticalObjectiveWarning(class AUTGameObjective* G, class APawn* NewEnemy);
	void Timer();
	void PostBeginPlay();
};


// Class UTGame.UTEntryGame
// 0x0000 (0x0538 - 0x0538)
class AUTEntryGame : public AUTTeamGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEntryGame");
		return ptr;
	}


	void InitGame(const struct FString& Options, struct FString* ErrorMessage);
	void StartMatch();
	void AddBots(int Num);
	bool NeedPlayers();
};


// Class UTGame.UTFirstBloodMessage
// 0x000C (0x0070 - 0x0064)
class UUTFirstBloodMessage : public UUTLocalMessage
{
public:
	struct FString                                     FirstBloodString;                                         // 0x0064(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTFirstBloodMessage");
		return ptr;
	}


	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTWeap_Physicsgun
// 0x0038 (0x05F0 - 0x05B8)
class AUTWeap_Physicsgun : public AUTWeapon
{
public:
	float                                              WeaponImpulse;                                            // 0x05B8(0x0004) (Edit)
	float                                              HoldDistanceMin;                                          // 0x05BC(0x0004) (Edit)
	float                                              HoldDistanceMax;                                          // 0x05C0(0x0004) (Edit)
	float                                              ThrowImpulse;                                             // 0x05C4(0x0004) (Edit)
	float                                              ChangeHoldDistanceIncrement;                              // 0x05C8(0x0004) (Edit)
	class URB_Handle*                                  PhysicsGrabber;                                           // 0x05CC(0x0004) (ExportObject, Component, EditInline)
	float                                              HoldDistance;                                             // 0x05D0(0x0004)
	unsigned char                                      UnknownData00[0xC];                                       // 0x05D4(0x000C) MISSED OFFSET
	struct FQuat                                       HoldOrientation;                                          // 0x05E0(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeap_Physicsgun");
		return ptr;
	}


	void ConsumeAmmo(unsigned char FireModeNum);
	void Tick(float DeltaTime);
	bool DoOverrideNextWeapon();
	bool DoOverridePrevWeapon();
	void StopFire(unsigned char FireModeNum);
	void StartFire(unsigned char FireModeNum);
	void ChangeVisibility(bool bIsVisible);
	void PostBeginPlay();
};


// Class UTGame.UTDMRoster
// 0x0008 (0x0254 - 0x024C)
class AUTDMRoster : public AUTTeamInfo
{
public:
	int                                                Position;                                                 // 0x024C(0x0004)
	class UClass*                                      DMSquadClass;                                             // 0x0250(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDMRoster");
		return ptr;
	}


	bool AddToTeam(class AController* Other);
};


// Class UTGame.UTMutator
// 0x0000 (0x01E8 - 0x01E8)
class AUTMutator : public AMutator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator");
		return ptr;
	}


	void ProcessSpeechRecognition(class AUTPlayerController* Speaker, TArray<struct FSpeechRecognizedWord>* Words);
	bool ReplaceWith(class AActor* Other, const struct FString& aClassName);
	class AUTMutator* GetNextUTMutator();
	bool MutatorIsAllowed();
};


// Class UTGame.UTKillingSpreeMessage
// 0x00E4 (0x0148 - 0x0064)
class UUTKillingSpreeMessage : public UUTLocalMessage
{
public:
	struct FString                                     EndSpreeNote;                                             // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     EndSelfSpree;                                             // 0x0070(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     EndFemaleSpree;                                           // 0x007C(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     MultiKillString;                                          // 0x0088(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     SpreeNote[0x6];                                           // 0x0094(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     SelfSpreeNote[0x6];                                       // 0x00DC(0x000C) (Const, Localized, NeedCtorLink)
	class USoundNodeWave*                              SpreeSound[0x6];                                          // 0x0124(0x0004)
	struct FString                                     EndSpreeNoteTrailer;                                      // 0x013C(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTKillingSpreeMessage");
		return ptr;
	}


	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	int GetFontSize(int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer);
};


// Class UTGame.UTSeqEvent_GameEnded
// 0x0008 (0x0108 - 0x0100)
class UUTSeqEvent_GameEnded : public USequenceEvent
{
public:
	class AActor*                                      Winner;                                                   // 0x0100(0x0004)
	class AActor*                                      ActualWinner;                                             // 0x0104(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqEvent_GameEnded");
		return ptr;
	}


	int GetObjClassVersion();
	void Activated();
};


// Class UTGame.UTKillsRemainingMessage
// 0x0030 (0x0094 - 0x0064)
class UUTKillsRemainingMessage : public UUTLocalMessage
{
public:
	class USoundNodeWave*                              KillsRemainSounds[0x3];                                   // 0x0064(0x0004)
	struct FString                                     KillsRemainStrings[0x3];                                  // 0x0070(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTKillsRemainingMessage");
		return ptr;
	}


	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTDeathMessage
// 0x001C (0x0080 - 0x0064)
class UUTDeathMessage : public UUTLocalMessage
{
public:
	struct FString                                     KilledString;                                             // 0x0064(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     SomeoneString;                                            // 0x0070(0x000C) (Edit, Const, Localized, NeedCtorLink)
	unsigned long                                      bNoConsoleDeathMessages : 1;                              // 0x007C(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDeathMessage");
		return ptr;
	}


	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FColor GetConsoleColor(class APlayerReplicationInfo* RelatedPRI_2);
};


// Class UTGame.UTMutator_BigHead
// 0x0000 (0x01E8 - 0x01E8)
class AUTMutator_BigHead : public AUTMutator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_BigHead");
		return ptr;
	}


	void ModifyPlayer(class APawn* P);
};


// Class UTGame.UTMutator_Handicap
// 0x0000 (0x01E8 - 0x01E8)
class AUTMutator_Handicap : public AUTMutator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_Handicap");
		return ptr;
	}


	void ModifyPlayer(class APawn* P);
};


// Class UTGame.UTMutator_LowGrav
// 0x0004 (0x01EC - 0x01E8)
class AUTMutator_LowGrav : public AUTMutator
{
public:
	float                                              GravityZ;                                                 // 0x01E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_LowGrav");
		return ptr;
	}


	void InitMutator(const struct FString& Options, struct FString* ErrorMessage);
};


// Class UTGame.UTMutator_NoPowerups
// 0x0000 (0x01E8 - 0x01E8)
class AUTMutator_NoPowerups : public AUTMutator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_NoPowerups");
		return ptr;
	}


	bool CheckReplacement(class AActor* Other);
};


// Class UTGame.UTMutator_Slomo
// 0x0004 (0x01EC - 0x01E8)
class AUTMutator_Slomo : public AUTMutator
{
public:
	float                                              GameSpeed;                                                // 0x01E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_Slomo");
		return ptr;
	}


	void InitMutator(const struct FString& Options, struct FString* ErrorMessage);
};


// Class UTGame.UTMutator_SlowTimeKills
// 0x000C (0x01F4 - 0x01E8)
class AUTMutator_SlowTimeKills : public AUTMutator
{
public:
	float                                              SlowTime;                                                 // 0x01E8(0x0004)
	float                                              RampUpTime;                                               // 0x01EC(0x0004)
	float                                              SlowSpeed;                                                // 0x01F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_SlowTimeKills");
		return ptr;
	}


	void Timer();
	void ScoreKill(class AController* Killer, class AController* Killed);
	bool MutatorIsAllowed();
};


// Class UTGame.UTMutator_SpeedFreak
// 0x0004 (0x01EC - 0x01E8)
class AUTMutator_SpeedFreak : public AUTMutator
{
public:
	float                                              GameSpeed;                                                // 0x01E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_SpeedFreak");
		return ptr;
	}


	void InitMutator(const struct FString& Options, struct FString* ErrorMessage);
};


// Class UTGame.UTMutator_SuperBerserk
// 0x0000 (0x01E8 - 0x01E8)
class AUTMutator_SuperBerserk : public AUTMutator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_SuperBerserk");
		return ptr;
	}


	bool CheckReplacement(class AActor* Other);
	void ModifyPlayer(class APawn* Other);
};


// Class UTGame.UTMutator_WeaponsRespawn
// 0x0000 (0x01E8 - 0x01E8)
class AUTMutator_WeaponsRespawn : public AUTMutator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_WeaponsRespawn");
		return ptr;
	}


	void InitMutator(const struct FString& Options, struct FString* ErrorMessage);
};


// Class UTGame.UTStatsWriteDM
// 0x0000 (0x0088 - 0x0088)
class UUTStatsWriteDM : public UOnlineStatsWrite
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTStatsWriteDM");
		return ptr;
	}

};


// Class UTGame.UTGameSettingsDM
// 0x0000 (0x00B4 - 0x00B4)
class UUTGameSettingsDM : public UUTGameSettingsCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSettingsDM");
		return ptr;
	}

};


// Class UTGame.UTTeamPlayerStart
// 0x0000 (0x02C4 - 0x02C4)
class AUTTeamPlayerStart : public AUDKTeamPlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeamPlayerStart");
		return ptr;
	}

};


// Class UTGame.UTStatsWriteTDM
// 0x0000 (0x0088 - 0x0088)
class UUTStatsWriteTDM : public UUTStatsWriteDM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTStatsWriteTDM");
		return ptr;
	}

};


// Class UTGame.UTGameSettingsTDM
// 0x0000 (0x00B4 - 0x00B4)
class UUTGameSettingsTDM : public UUTGameSettingsCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSettingsTDM");
		return ptr;
	}

};


// Class UTGame.UTCTFTeamAI
// 0x000C (0x02A0 - 0x0294)
class AUTCTFTeamAI : public AUTTeamAI
{
public:
	class AUTCTFFlag*                                  FriendlyFlag;                                             // 0x0294(0x0004)
	class AUTCTFFlag*                                  EnemyFlag;                                                // 0x0298(0x0004)
	float                                              LastGotFlag;                                              // 0x029C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCTFTeamAI");
		return ptr;
	}


	class AUTGameObjective* GetPriorityFreelanceObjectiveFor(class AUTSquadAI* InFreelanceSquad);
	class AUTSquadAI* AddSquadWithLeader(class AController* C, class AUTGameObjective* O);
};


// Class UTGame.UTTeamDeathMessage
// 0x0000 (0x0080 - 0x0080)
class UUTTeamDeathMessage : public UUTDeathMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeamDeathMessage");
		return ptr;
	}

};


// Class UTGame.UTStatsWriteCTF
// 0x0000 (0x0088 - 0x0088)
class UUTStatsWriteCTF : public UUTStatsWriteDM
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTStatsWriteCTF");
		return ptr;
	}

};


// Class UTGame.UTGameSettingsCTF
// 0x0000 (0x00B4 - 0x00B4)
class UUTGameSettingsCTF : public UUTGameSettingsCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSettingsCTF");
		return ptr;
	}

};


// Class UTGame.UTSayMsg
// 0x0008 (0x006C - 0x0064)
class UUTSayMsg : public UUTLocalMessage
{
public:
	struct FColor                                      RedTeamColor;                                             // 0x0064(0x0004)
	struct FColor                                      BlueTeamColor;                                            // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSayMsg");
		return ptr;
	}


	struct FColor GetConsoleColor(class APlayerReplicationInfo* RelatedPRI_2);
};


// Class UTGame.UTTeamSayMsg
// 0x0000 (0x0064 - 0x0064)
class UUTTeamSayMsg : public UUTLocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeamSayMsg");
		return ptr;
	}

};


// Class UTGame.UTGameViewportClient
// 0x006C (0x01A0 - 0x0134)
class UUTGameViewportClient : public UUDKGameViewportClient
{
public:
	struct FString                                     LevelActionMessages[0x6];                                 // 0x0134(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     UTFrontEndString;                                         // 0x017C(0x000C) (Const, Localized, NeedCtorLink)
	class UFont*                                       LoadingScreenMapNameFont;                                 // 0x0188(0x0004)
	class UFont*                                       LoadingScreenGameTypeNameFont;                            // 0x018C(0x0004)
	class UFont*                                       LoadingScreenHintMessageFont;                             // 0x0190(0x0004)
	struct FString                                     ProgressMessageSceneClassName;                            // 0x0194(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameViewportClient");
		return ptr;
	}


	void NotifyConnectionError(TEnumAsByte<EProgressMessageType> MessageType, const struct FString& Message, const struct FString& Title);
	void SetProgressMessage(TEnumAsByte<EProgressMessageType> MessageType, const struct FString& Message, const struct FString& Title, bool bIgnoreFutureNetworkMessages);
	void UpdateActiveSplitscreenType();
	void RenderHeader(class UCanvas* Canvas);
	void DrawTransition(class UCanvas* Canvas);
	void PostRender(class UCanvas* Canvas);
};


// Class UTGame.UTWeaponSwitchMessage
// 0x0000 (0x0064 - 0x0064)
class UUTWeaponSwitchMessage : public UUTLocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponSwitchMessage");
		return ptr;
	}


	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTPowerupPickupFactory
// 0x0000 (0x03A8 - 0x03A8)
class AUTPowerupPickupFactory : public AUTPickupFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPowerupPickupFactory");
		return ptr;
	}


	void SpawnCopyFor(class APawn* Recipient);
	void AddWeaponOverlay(class AUTGameReplicationInfo* GRI);
};


// Class UTGame.UTCTFHUDMessage
// 0x002C (0x0090 - 0x0064)
class UUTCTFHUDMessage : public UUTLocalMessage
{
public:
	struct FString                                     YouHaveFlagString;                                        // 0x0064(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     EnemyHasFlagString;                                       // 0x0070(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     BothFlagsString;                                          // 0x007C(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FColor                                      RedColor;                                                 // 0x0088(0x0004) (Edit)
	struct FColor                                      YellowColor;                                              // 0x008C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTCTFHUDMessage");
		return ptr;
	}


	bool AddAnnouncement(class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FColor GetColor(int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTWeaponRewardMessage
// 0x00B0 (0x0114 - 0x0064)
class UUTWeaponRewardMessage : public UUTLocalMessage
{
public:
	struct FString                                     RewardString[0xB];                                        // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	class USoundNodeWave*                              RewardSounds[0xB];                                        // 0x00E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponRewardMessage");
		return ptr;
	}


	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTDataStore_GameSearchPersonal
// 0x00B8 (0x0164 - 0x00AC)
class UUTDataStore_GameSearchPersonal : public UUDKDataStore_GameSearchBase
{
public:
	class UUTDataStore_GameSearchDM*                   PrimaryGameSearchDataStore;                               // 0x00AC(0x0004) (Transient)
	struct FString                                     ServerUniqueId[0xF];                                      // 0x00B0(0x000C) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDataStore_GameSearchPersonal");
		return ptr;
	}


	void GetServerStringList(TArray<struct FString>* out_ServerList);
	void GetServerIdList(TArray<struct FUniqueNetId>* out_ServerList);
	bool RemoveServer(int ControllerId, const struct FUniqueNetId& IdToRemove);
	bool AddServer(int ControllerId, const struct FUniqueNetId& IdToAdd);
	int FindServerIndexById(int ControllerId, struct FUniqueNetId* IdToFind);
	int FindServerIndexByString(int ControllerId, const struct FString& IdToFind);
	bool GetPlayerNetId(int ControllerId, struct FUniqueNetId* out_PlayerId);
	struct FString GetPlayerName(int ControllerId);
	bool OverrideQuerySubmission(unsigned char ControllerId, class UOnlineGameSearch* Search);
	bool HasOutstandingQueries(bool bRestrictCheckToSelf);
};


// Class UTGame.UTDataStore_GameSearchHistory
// 0x0008 (0x016C - 0x0164)
class UUTDataStore_GameSearchHistory : public UUTDataStore_GameSearchPersonal
{
public:
	class UClass*                                      FavoritesGameSearchDataStoreClass;                        // 0x0164(0x0004)
	class UUTDataStore_GameSearchFavorites*            FavoritesGameSearchDataStore;                             // 0x0168(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDataStore_GameSearchHistory");
		return ptr;
	}


	bool HasOutstandingQueries(bool bRestrictCheckToSelf);
	void Registered(class ULocalPlayer* PlayerOwner);
};


// Class UTGame.UTDataStore_GameSearchFavorites
// 0x0004 (0x0168 - 0x0164)
class UUTDataStore_GameSearchFavorites : public UUTDataStore_GameSearchPersonal
{
public:
	class UUTDataStore_GameSearchHistory*              HistoryGameSearchDataStore;                               // 0x0164(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDataStore_GameSearchFavorites");
		return ptr;
	}


	bool HasOutstandingQueries(bool bRestrictCheckToSelf);
};


// Class UTGame.UTGameSearchCommon
// 0x0000 (0x00EC - 0x00EC)
class UUTGameSearchCommon : public UOnlineGameSearch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSearchCommon");
		return ptr;
	}

};


// Class UTGame.UTGameSearchDM
// 0x0000 (0x00EC - 0x00EC)
class UUTGameSearchDM : public UUTGameSearchCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSearchDM");
		return ptr;
	}

};


// Class UTGame.UTGameSearchTDM
// 0x0000 (0x00EC - 0x00EC)
class UUTGameSearchTDM : public UUTGameSearchCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSearchTDM");
		return ptr;
	}

};


// Class UTGame.UTGameSearchCTF
// 0x0000 (0x00EC - 0x00EC)
class UUTGameSearchCTF : public UUTGameSearchCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSearchCTF");
		return ptr;
	}

};


// Class UTGame.UTGameSearchVCTF
// 0x0000 (0x00EC - 0x00EC)
class UUTGameSearchVCTF : public UUTGameSearchCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSearchVCTF");
		return ptr;
	}

};


// Class UTGame.UTGameSettingsVCTF
// 0x0000 (0x00B4 - 0x00B4)
class UUTGameSettingsVCTF : public UUTGameSettingsCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSettingsVCTF");
		return ptr;
	}

};


// Class UTGame.UTGameSearchPersonal
// 0x0000 (0x00EC - 0x00EC)
class UUTGameSearchPersonal : public UUTGameSearchCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSearchPersonal");
		return ptr;
	}

};


// Class UTGame.UTGameSettingsPersonal
// 0x0000 (0x00B4 - 0x00B4)
class UUTGameSettingsPersonal : public UUTGameSettingsCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameSettingsPersonal");
		return ptr;
	}

};


// Class UTGame.UTDataStore_GameSettingsDM
// 0x0000 (0x008C - 0x008C)
class UUTDataStore_GameSettingsDM : public UUIDataStore_OnlineGameSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDataStore_GameSettingsDM");
		return ptr;
	}

};


// Class UTGame.UTWeaponKillMessage
// 0x0000 (0x0064 - 0x0064)
class UUTWeaponKillMessage : public UUTLocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponKillMessage");
		return ptr;
	}

};


// Class UTGame.UTKillerMessage
// 0x0054 (0x00B8 - 0x0064)
class UUTKillerMessage : public UUTWeaponKillMessage
{
public:
	struct FString                                     YouKilled;                                                // 0x0064(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     YouKilledTrailer;                                         // 0x0070(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     YouTeamKilled;                                            // 0x007C(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     YouTeamKilledTrailer;                                     // 0x0088(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     OtherKilledPrefix;                                        // 0x0094(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     OtherKilled;                                              // 0x00A0(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     OtherKilledTrailer;                                       // 0x00AC(0x000C) (Edit, Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTKillerMessage");
		return ptr;
	}


	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTMultiKillMessage
// 0x0050 (0x00B4 - 0x0064)
class UUTMultiKillMessage : public UUTLocalMessage
{
public:
	struct FString                                     KillString[0x5];                                          // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	class USoundNodeWave*                              KillSound[0x5];                                           // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMultiKillMessage");
		return ptr;
	}


	bool AddAnnouncement(class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject);
	bool ShouldBeRemoved(class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex);
	int GetFontSize(int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer);
	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTVictimMessage
// 0x0060 (0x00C4 - 0x0064)
class UUTVictimMessage : public UUTWeaponKillMessage
{
public:
	struct FString                                     YouWereKilledBy;                                          // 0x0064(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     KilledByTrailer;                                          // 0x0070(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     OrbSuicideString;                                         // 0x007C(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     RunOverString;                                            // 0x0088(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     SpiderMineString;                                         // 0x0094(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     ScorpionKamikazeString;                                   // 0x00A0(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     ViperKamikazeString;                                      // 0x00AC(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     TelefragString;                                           // 0x00B8(0x000C) (Edit, Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVictimMessage");
		return ptr;
	}


	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTDecalManager
// 0x0000 (0x0204 - 0x0204)
class AUTDecalManager : public ADecalManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDecalManager");
		return ptr;
	}


	bool CanSpawnDecals();
};


// Class UTGame.UTEmit_BodyFlame
// 0x0000 (0x01E0 - 0x01E0)
class AUTEmit_BodyFlame : public AUTEmit_HitEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmit_BodyFlame");
		return ptr;
	}

};


// Class UTGame.UTEmit_VehicleHit
// 0x0000 (0x01E0 - 0x01E0)
class AUTEmit_VehicleHit : public AUTEmit_HitEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmit_VehicleHit");
		return ptr;
	}

};


// Class UTGame.UTDmgType_Grenade
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_Grenade : public UUTDmgType_Rocket
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_Grenade");
		return ptr;
	}

};


// Class UTGame.UTDmgType_Instagib
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_Instagib : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_Instagib");
		return ptr;
	}


	void SpawnHitEffect(class APawn* P, float Damage, const struct FVector& Momentum, const struct FName& BoneName, const struct FVector& HitLocation);
};


// Class UTGame.UTDmgType_Lava
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_Lava : public UUTDmgType_Burning
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_Lava");
		return ptr;
	}

};


// Class UTGame.UTDmgType_LinkBeam
// 0x0010 (0x013C - 0x012C)
class UUTDmgType_LinkBeam : public UUTDamageType
{
public:
	class UParticleSystem*                             PS_AttachToGib;                                           // 0x012C(0x0004)
	struct FName                                       BoneToAttach;                                             // 0x0130(0x0008)
	class UParticleSystem*                             PS_AttachToBody;                                          // 0x0138(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_LinkBeam");
		return ptr;
	}


	void SpawnExtraGibEffects(class AUTGib* TheGib);
	void DoCustomDamageEffects(class AUTPawn* ThePawn, class UClass* TheDamageType, const struct FVector& HitLocation, struct FTraceHitInfo* HitInfo);
};


// Class UTGame.UTDmgType_LinkPlasma
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_LinkPlasma : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_LinkPlasma");
		return ptr;
	}

};


// Class UTGame.UTVehicleKillMessage
// 0x0080 (0x00E4 - 0x0064)
class UUTVehicleKillMessage : public UUTLocalMessage
{
public:
	struct FString                                     KillString[0x8];                                          // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	class USoundNodeWave*                              KillSounds[0x8];                                          // 0x00C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleKillMessage");
		return ptr;
	}


	class USoundNodeWave* AnnouncementSound(int MessageIndex, class UObject* OptionalObject, class APlayerController* PC);
	void ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTDmgType_SeekingRocket
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_SeekingRocket : public UUTDmgType_Rocket
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_SeekingRocket");
		return ptr;
	}

};


// Class UTGame.UTDmgType_ShockBall
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_ShockBall : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_ShockBall");
		return ptr;
	}

};


// Class UTGame.UTDmgType_ShockCombo
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_ShockCombo : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_ShockCombo");
		return ptr;
	}

};


// Class UTGame.UTDmgType_ShockPrimary
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_ShockPrimary : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_ShockPrimary");
		return ptr;
	}

};


// Class UTGame.UTDmgType_SpaceDeath
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_SpaceDeath : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_SpaceDeath");
		return ptr;
	}

};


// Class UTGame.UTDmgType_Telefrag
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_Telefrag : public UUTDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDmgType_Telefrag");
		return ptr;
	}

};


// Class UTGame.UTDMSquad
// 0x0000 (0x02A0 - 0x02A0)
class AUTDMSquad : public AUTSquadAI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDMSquad");
		return ptr;
	}


	bool AssignSquadResponsibility(class AUTBot* B);
	float VehicleDesireability(class AUTVehicle* V, class AUTBot* B);
	bool AllowContinueOnFoot(class AUTBot* B, class AUTVehicle* V);
	bool FriendlyToward(class APawn* Other);
	bool SetEnemy(class AUTBot* B, class APawn* NewEnemy);
	struct FName GetOrders();
	bool BeDevious(class APawn* Enemy);
	bool NearFormationCenter(class APawn* P);
	bool WaitAtThisPosition(class APawn* P);
	bool CheckSquadObjectives(class AUTBot* B);
	bool ShouldDeferTo(class AController* C);
	void RemoveBot(class AUTBot* B);
	void AddBot(class AUTBot* B);
	bool IsDefending(class AUTBot* B);
	void DisplayDebug(class AHUD* HUD, float* YL, float* YPos);
};


// Class UTGame.UTDroppedItemPickup
// 0x0008 (0x0200 - 0x01F8)
class AUTDroppedItemPickup : public AUTDroppedPickup
{
public:
	float                                              MaxDesireability;                                         // 0x01F8(0x0004)
	class USoundCue*                                   PickupSound;                                              // 0x01FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDroppedItemPickup");
		return ptr;
	}


	void PickedUpBy(class APawn* P);
	void DroppedFrom(class APawn* P);
	void Destroyed();
	void PostBeginPlay();
	void SetPickupMesh(class UPrimitiveComponent* NewPickupMesh);
	float BotDesireability(class APawn* Bot, class AController* C);
};


// Class UTGame.UTDummyPawn
// 0x0004 (0x0880 - 0x087C)
class AUTDummyPawn : public AUTPawn
{
public:
	class UUTSeqAct_DummyWeaponFire*                   FireAction;                                               // 0x087C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDummyPawn");
		return ptr;
	}


	void Tick(float DeltaTime);
	struct FVector GetPawnViewLocation();
	struct FVector GetWeaponStartTraceLocation(class AWeapon* CurrentWeapon);
	void WeaponAttachmentChanged();
	struct FRotator GetAdjustedAimFor(class AWeapon* InWeapon, const struct FVector& projStart);
	void SetWeaponAmbientSound(class USoundCue* NewAmbientSound);
	void SetPawnAmbientSound(class USoundCue* NewAmbientSound);
	void WeaponFired(class AWeapon* InWeapon, bool bViaReplication, const struct FVector& HitLocation);
	void PostBeginPlay();
};


// Class UTGame.UTSeqAct_DummyWeaponFire
// 0x002C (0x0124 - 0x00F8)
class UUTSeqAct_DummyWeaponFire : public USeqAct_Latent
{
public:
	class AUTDummyPawn*                                DummyPawn;                                                // 0x00F8(0x0004)
	int                                                ShotsToFire;                                              // 0x00FC(0x0004) (Edit)
	class UClass*                                      WeaponClass;                                              // 0x0100(0x0004) (Edit)
	unsigned char                                      FireMode;                                                 // 0x0104(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	class AActor*                                      Origin;                                                   // 0x0108(0x0004) (Edit)
	class AActor*                                      Target;                                                   // 0x010C(0x0004) (Edit)
	struct FRotator                                    MaxSpread;                                                // 0x0110(0x000C) (Edit)
	unsigned long                                      bSuppressSounds : 1;                                      // 0x011C(0x0004) (Edit)
	int                                                ShotsFired;                                               // 0x0120(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_DummyWeaponFire");
		return ptr;
	}


	bool Update(float DeltaTime);
	void NotifyDummyFire();
	void Activated();
};


// Class UTGame.UTDynamicWaterVolume
// 0x0000 (0x025C - 0x025C)
class AUTDynamicWaterVolume : public AUTWaterVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTDynamicWaterVolume");
		return ptr;
	}

};


// Class UTGame.UTEmit_BloodSpray
// 0x0000 (0x01E0 - 0x01E0)
class AUTEmit_BloodSpray : public AUTEmit_HitEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmit_BloodSpray");
		return ptr;
	}

};


// Class UTGame.UTEmit_HeadShotHelmet
// 0x0000 (0x01E8 - 0x01E8)
class AUTEmit_HeadShotHelmet : public AUTReplicatedEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmit_HeadShotHelmet");
		return ptr;
	}

};


// Class UTGame.UTEmit_ShockCombo
// 0x0014 (0x01FC - 0x01E8)
class AUTEmit_ShockCombo : public AUTReplicatedEmitter
{
public:
	class UClass*                                      ExplosionLightClass;                                      // 0x01E8(0x0004)
	float                                              VortexForcePerSecond;                                     // 0x01EC(0x0004)
	float                                              VortexRadius;                                             // 0x01F0(0x0004)
	float                                              VortexDuration;                                           // 0x01F4(0x0004)
	class UClass*                                      VortexDamageType;                                         // 0x01F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmit_ShockCombo");
		return ptr;
	}


	void SetInitialState();
};


// Class UTGame.UTShockComboExplosionLight
// 0x0000 (0x0260 - 0x0260)
class UUTShockComboExplosionLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTShockComboExplosionLight");
		return ptr;
	}

};


// Class UTGame.UTEmitCameraEffect
// 0x0000 (0x01E8 - 0x01E8)
class AUTEmitCameraEffect : public AUDKEmitCameraEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEmitCameraEffect");
		return ptr;
	}

};


// Class UTGame.UTEntryPlayerController
// 0x0014 (0x08B0 - 0x089C)
class AUTEntryPlayerController : public AUTPlayerController
{
public:
	class UPostProcessChain*                           EntryPostProcessChain;                                    // 0x089C(0x0004)
	TArray<class UPostProcessChain*>                   OldPostProcessChain;                                      // 0x08A0(0x000C) (NeedCtorLink)
	class ULocalPlayer*                                OldPlayer;                                                // 0x08AC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEntryPlayerController");
		return ptr;
	}


	void ShowScoreboard();
	void ShowMidGameMenu(const struct FName& TabTag, bool bEnableInput);
	void SetPawnConstructionScene(bool bShow);
	void QuitToMainMenu();
	void OnLinkStatusChanged(bool bConnected);
	void OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	void OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	void OnGameInviteReceived(unsigned char LocalUserNum, const struct FString& RequestingNick);
	void OnControllerChanged(int ControllerId, bool bIsConnected);
	void Destroyed();
	void RestorePostProcessing();
	void InitInputSystem();
};


// Class UTGame.UTEntryHUD
// 0x0000 (0x045C - 0x045C)
class AUTEntryHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTEntryHUD");
		return ptr;
	}


	void PostRender();
};


// Class UTGame.UTPawnSoundGroup_Liandri
// 0x0000 (0x00A8 - 0x00A8)
class UUTPawnSoundGroup_Liandri : public UUTPawnSoundGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPawnSoundGroup_Liandri");
		return ptr;
	}

};


// Class UTGame.UTVoice_Robot
// 0x0000 (0x00E4 - 0x00E4)
class UUTVoice_Robot : public UUTVoice
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVoice_Robot");
		return ptr;
	}


	bool SendLocationUpdate(class AController* Sender, class APlayerReplicationInfo* Recipient, const struct FName& MessageType, class AUTGame* G, class APawn* StatusPawn, bool bDontSendMidfield);
};


// Class UTGame.UTGib_Robot
// 0x0008 (0x0244 - 0x023C)
class AUTGib_Robot : public AUTGib
{
public:
	struct FName                                       CustomGibSocketName;                                      // 0x023C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib_Robot");
		return ptr;
	}


	void DoCustomGibEffects();
};


// Class UTGame.UTGib_RobotArm
// 0x0000 (0x0244 - 0x0244)
class AUTGib_RobotArm : public AUTGib_Robot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib_RobotArm");
		return ptr;
	}

};


// Class UTGame.UTGib_RobotHand
// 0x0000 (0x0244 - 0x0244)
class AUTGib_RobotHand : public AUTGib_Robot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib_RobotHand");
		return ptr;
	}

};


// Class UTGame.UTGib_RobotLeg
// 0x0000 (0x0244 - 0x0244)
class AUTGib_RobotLeg : public AUTGib_Robot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib_RobotLeg");
		return ptr;
	}

};


// Class UTGame.UTGib_RobotTorso
// 0x0000 (0x0244 - 0x0244)
class AUTGib_RobotTorso : public AUTGib_Robot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib_RobotTorso");
		return ptr;
	}

};


// Class UTGame.UTGib_RobotChunk
// 0x0000 (0x0244 - 0x0244)
class AUTGib_RobotChunk : public AUTGib_Robot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib_RobotChunk");
		return ptr;
	}

};


// Class UTGame.UTGib_RobotHead
// 0x0000 (0x0244 - 0x0244)
class AUTGib_RobotHead : public AUTGib_Robot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGib_RobotHead");
		return ptr;
	}

};


// Class UTGame.UTGameInteraction
// 0x0000 (0x0160 - 0x0160)
class UUTGameInteraction : public UUDKGameInteraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGameInteraction");
		return ptr;
	}

};


// Class UTGame.UTGibStaticMeshComponent
// 0x0000 (0x0250 - 0x0250)
class UUTGibStaticMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGibStaticMeshComponent");
		return ptr;
	}

};


// Class UTGame.UTGibSkeletalMeshComponent
// 0x0000 (0x05D5 - 0x05D5)
class UUTGibSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGibSkeletalMeshComponent");
		return ptr;
	}

};


// Class UTGame.UTGreenMuzzleFlashLight
// 0x0000 (0x0260 - 0x0260)
class UUTGreenMuzzleFlashLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTGreenMuzzleFlashLight");
		return ptr;
	}

};


// Class UTGame.UTHealthPickupLight
// 0x0000 (0x01DC - 0x01DC)
class AUTHealthPickupLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTHealthPickupLight");
		return ptr;
	}

};


// Class UTGame.UTHoverWheel
// 0x0000 (0x0120 - 0x0120)
class UUTHoverWheel : public UUDKVehicleWheel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTHoverWheel");
		return ptr;
	}

};


// Class UTGame.UTHugeExplosionLight
// 0x0000 (0x0260 - 0x0260)
class UUTHugeExplosionLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTHugeExplosionLight");
		return ptr;
	}

};


// Class UTGame.UTRotatingDroppedPickup
// 0x0004 (0x01FC - 0x01F8)
class AUTRotatingDroppedPickup : public AUTDroppedPickup
{
public:
	float                                              YawRotationRate;                                          // 0x01F8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTRotatingDroppedPickup");
		return ptr;
	}


	void Tick(float DeltaTime);
};


// Class UTGame.UTJumpLiftExit
// 0x0000 (0x02B4 - 0x02B4)
class AUTJumpLiftExit : public ALiftExit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTJumpLiftExit");
		return ptr;
	}


	bool CanBeReachedFromLiftBy(class APawn* Other);
	void WaitForLift(class APawn* Other);
	void PostBeginPlay();
};


// Class UTGame.UTJumpPad
// 0x0000 (0x02CC - 0x02CC)
class AUTJumpPad : public AUDKJumpPad
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTJumpPad");
		return ptr;
	}

};


// Class UTGame.UTJumpPadReachSpec
// 0x0000 (0x0090 - 0x0090)
class UUTJumpPadReachSpec : public UUDKJumpPadReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTJumpPadReachSpec");
		return ptr;
	}

};


// Class UTGame.UTKillZVolume
// 0x0004 (0x0244 - 0x0240)
class AUTKillZVolume : public APhysicsVolume
{
public:
	class UClass*                                      KillZDamageType;                                          // 0x0240(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTKillZVolume");
		return ptr;
	}


	void KillActor(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PawnEnteredVolume(class APawn* Other);
	void ActorEnteredVolume(class AActor* Other);
};


// Class UTGame.UTKismetAnnouncement
// 0x0000 (0x0064 - 0x0064)
class UUTKismetAnnouncement : public UUTObjectiveSpecificMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTKismetAnnouncement");
		return ptr;
	}


	unsigned char AnnouncementLevel(unsigned char MessageIndex);
	struct FObjectiveAnnouncementInfo GetObjectiveAnnouncement(unsigned char MessageIndex, class UObject* Objective, class APlayerController* PC);
};


// Class UTGame.UTSeqAct_PlayAnnouncement
// 0x0010 (0x00F8 - 0x00E8)
class UUTSeqAct_PlayAnnouncement : public USequenceAction
{
public:
	struct FObjectiveAnnouncementInfo                  Announcement;                                             // 0x00E8(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_PlayAnnouncement");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTLavaVolume
// 0x0000 (0x0250 - 0x0250)
class AUTLavaVolume : public AWaterVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTLavaVolume");
		return ptr;
	}

};


// Class UTGame.UTLeviathanMuzzleFlashLight
// 0x0000 (0x0260 - 0x0260)
class UUTLeviathanMuzzleFlashLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTLeviathanMuzzleFlashLight");
		return ptr;
	}

};


// Class UTGame.UTLinkBeamLight
// 0x0004 (0x01D8 - 0x01D4)
class AUTLinkBeamLight : public AActor
{
public:
	class UPointLightComponent*                        BeamLight;                                                // 0x01D4(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTLinkBeamLight");
		return ptr;
	}

};


// Class UTGame.UTMapMusicInfo
// 0x0000 (0x00DC - 0x00DC)
class UUTMapMusicInfo : public UUDKMapMusicInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMapMusicInfo");
		return ptr;
	}

};


// Class UTGame.UTMutator_Arena
// 0x000C (0x01F4 - 0x01E8)
class AUTMutator_Arena : public AUTMutator
{
public:
	struct FString                                     ArenaWeaponClassPath;                                     // 0x01E8(0x000C) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_Arena");
		return ptr;
	}


	void ModifyPlayer(class APawn* Other);
	bool CheckReplacement(class AActor* Other);
	void PostBeginPlay();
};


// Class UTGame.UTMutator_FriendlyFire
// 0x0004 (0x01EC - 0x01E8)
class AUTMutator_FriendlyFire : public AUTMutator
{
public:
	float                                              FriendlyFireScale;                                        // 0x01E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_FriendlyFire");
		return ptr;
	}


	void InitMutator(const struct FString& Options, struct FString* ErrorMessage);
	bool MutatorIsAllowed();
};


// Class UTGame.UTMutator_NoHoverboard
// 0x0000 (0x01E8 - 0x01E8)
class AUTMutator_NoHoverboard : public AUTMutator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTMutator_NoHoverboard");
		return ptr;
	}


	void InitMutator(const struct FString& Options, struct FString* ErrorMessage);
};


// Class UTGame.UTPickupFactory_HealthVial
// 0x000C (0x03DC - 0x03D0)
class AUTPickupFactory_HealthVial : public AUTHealthPickupFactory
{
public:
	TArray<class AUTPickupFactory_HealthVial*>         AdjacentVials;                                            // 0x03D0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPickupFactory_HealthVial");
		return ptr;
	}


	float BotDesireability(class APawn* P, class AController* C);
	void SpawnCopyFor(class APawn* Recipient);
	void FindAdjacentVials(class AUTPickupFactory_HealthVial* InitialCaller, TArray<class AUTPickupFactory_HealthVial*>* InAdjacentVials);
	void PostBeginPlay();
};


// Class UTGame.UTPortal
// 0x0000 (0x01F4 - 0x01F4)
class AUTPortal : public APortalTeleporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTPortal");
		return ptr;
	}

};


// Class UTGame.UTProj_Grenade
// 0x0000 (0x0298 - 0x0298)
class AUTProj_Grenade : public AUTProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTProj_Grenade");
		return ptr;
	}


	void PhysicsVolumeChange(class APhysicsVolume* NewVolume);
	void HitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void Timer();
	void Init(const struct FVector& Direction);
	void PostBeginPlay();
};


// Class UTGame.UTProj_LinkPlasma
// 0x0018 (0x02B0 - 0x0298)
class AUTProj_LinkPlasma : public AUTProjectile
{
public:
	struct FVector                                     ColorLevel;                                               // 0x0298(0x000C)
	struct FVector                                     ExplosionColor;                                           // 0x02A4(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTProj_LinkPlasma");
		return ptr;
	}


	void SetExplosionEffectParameters(class UParticleSystemComponent* ProjExplosion);
	void SpawnFlightEffects();
	void HitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class UTGame.UTProj_LinkPowerPlasma
// 0x0000 (0x02B0 - 0x02B0)
class AUTProj_LinkPowerPlasma : public AUTProj_LinkPlasma
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTProj_LinkPowerPlasma");
		return ptr;
	}

};


// Class UTGame.UTProj_Rocket
// 0x0000 (0x0298 - 0x0298)
class AUTProj_Rocket : public AUTProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTProj_Rocket");
		return ptr;
	}


	void PostBeginPlay();
};


// Class UTGame.UTRocketLight
// 0x0000 (0x0260 - 0x0260)
class UUTRocketLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTRocketLight");
		return ptr;
	}

};


// Class UTGame.UTProj_LoadedRocket
// 0x002C (0x02C4 - 0x0298)
class AUTProj_LoadedRocket : public AUTProj_Rocket
{
public:
	unsigned char                                      FlockIndex;                                               // 0x0298(0x0001) (Net, RepNotify)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	class AUTProj_LoadedRocket*                        Flock[0x2];                                               // 0x029C(0x0004)
	float                                              FlockRadius;                                              // 0x02A4(0x0004) (Edit)
	float                                              FlockStiffness;                                           // 0x02A8(0x0004) (Edit)
	float                                              FlockMaxForce;                                            // 0x02AC(0x0004) (Edit)
	float                                              FlockCurlForce;                                           // 0x02B0(0x0004) (Edit)
	unsigned long                                      bCurl : 1;                                                // 0x02B4(0x0004) (Net)
	struct FVector                                     Dir;                                                      // 0x02B8(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTProj_LoadedRocket");
		return ptr;
	}


	void FlockTimer();
	void ReplicatedEvent(const struct FName& VarName);
	void Destroyed();
};


// Class UTGame.UTProj_ScorpionGlob_Base
// 0x0004 (0x029C - 0x0298)
class AUTProj_ScorpionGlob_Base : public AUTProjectile
{
public:
	class AUTAvoidMarker*                              FearSpot;                                                 // 0x0298(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTProj_ScorpionGlob_Base");
		return ptr;
	}


	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PhysicsVolumeChange(class APhysicsVolume* NewVolume);
	void ShutDown();
	void Destroyed();
};


// Class UTGame.UTProj_SeekingRocket
// 0x0000 (0x0298 - 0x0298)
class AUTProj_SeekingRocket : public AUTProj_Rocket
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTProj_SeekingRocket");
		return ptr;
	}

};


// Class UTGame.UTRocketMuzzleFlashLight
// 0x0000 (0x0260 - 0x0260)
class UUTRocketMuzzleFlashLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTRocketMuzzleFlashLight");
		return ptr;
	}

};


// Class UTGame.UTScavengerMessage
// 0x000C (0x0070 - 0x0064)
class UUTScavengerMessage : public UUTLocalMessage
{
public:
	TArray<struct FString>                             MessageText;                                              // 0x0064(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTScavengerMessage");
		return ptr;
	}


	struct FString GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


// Class UTGame.UTScout
// 0x0000 (0x04FC - 0x04FC)
class AUTScout : public AUDKScout
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTScout");
		return ptr;
	}

};


// Class UTGame.UTScriptedBotVolume
// 0x0000 (0x0240 - 0x0240)
class AUTScriptedBotVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTScriptedBotVolume");
		return ptr;
	}


	void PawnLeavingVolume(class APawn* Other);
};


// Class UTGame.UTSD_SpawnedKActor
// 0x0000 (0x02C8 - 0x02C8)
class AUTSD_SpawnedKActor : public AKActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSD_SpawnedKActor");
		return ptr;
	}

};


// Class UTGame.UTSeqAct_ActivateRocketBoosters
// 0x0000 (0x00E8 - 0x00E8)
class UUTSeqAct_ActivateRocketBoosters : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_ActivateRocketBoosters");
		return ptr;
	}

};


// Class UTGame.UTSeqAct_AddNamedBot
// 0x001C (0x0104 - 0x00E8)
class UUTSeqAct_AddNamedBot : public USequenceAction
{
public:
	struct FString                                     BotName;                                                  // 0x00E8(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bForceTeam : 1;                                           // 0x00F4(0x0004) (Edit)
	int                                                TeamIndex;                                                // 0x00F8(0x0004) (Edit)
	class ANavigationPoint*                            StartSpot;                                                // 0x00FC(0x0004) (Edit)
	class AUTBot*                                      SpawnedBot;                                               // 0x0100(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_AddNamedBot");
		return ptr;
	}


	int GetObjClassVersion();
	void Activated();
};


// Class UTGame.UTSeqAct_ChangeTeam
// 0x0001 (0x00E9 - 0x00E8)
class UUTSeqAct_ChangeTeam : public USequenceAction
{
public:
	unsigned char                                      NewTeamNum;                                               // 0x00E8(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_ChangeTeam");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqAct_EnterVehicle
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_EnterVehicle : public USequenceAction
{
public:
	int                                                SeatIndex;                                                // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_EnterVehicle");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqAct_GetTeamNum
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_GetTeamNum : public USequenceAction
{
public:
	int                                                TeamNum;                                                  // 0x00E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_GetTeamNum");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqAct_HoverboardSpinJump
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_HoverboardSpinJump : public USequenceAction
{
public:
	float                                              WarmupTime;                                               // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_HoverboardSpinJump");
		return ptr;
	}

};


// Class UTGame.UTSeqAct_ReturnCTFFlag
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_ReturnCTFFlag : public USequenceAction
{
public:
	int                                                TeamIndex;                                                // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_ReturnCTFFlag");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqAct_ScriptedVoiceMessage
// 0x0010 (0x00F8 - 0x00E8)
class UUTSeqAct_ScriptedVoiceMessage : public USequenceAction
{
public:
	class USoundNodeWave*                              VoiceToPlay;                                              // 0x00E8(0x0004) (Edit)
	struct FString                                     SpeakingCharacterName;                                    // 0x00EC(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_ScriptedVoiceMessage");
		return ptr;
	}


	int GetObjClassVersion();
	void Activated();
};


// Class UTGame.UTSeqAct_SelfDestruct
// 0x0000 (0x00E8 - 0x00E8)
class UUTSeqAct_SelfDestruct : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_SelfDestruct");
		return ptr;
	}

};


// Class UTGame.UTSeqAct_SetBotsMustComplete
// 0x0000 (0x00E8 - 0x00E8)
class UUTSeqAct_SetBotsMustComplete : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_SetBotsMustComplete");
		return ptr;
	}

};


// Class UTGame.UTSeqAct_SetVisibilityModifier
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_SetVisibilityModifier : public USequenceAction
{
public:
	float                                              NewVisibilityModifier;                                    // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_SetVisibilityModifier");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqAct_SpawnProjectile
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_SpawnProjectile : public USequenceAction
{
public:
	class UClass*                                      ProjectileClass;                                          // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_SpawnProjectile");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqAct_ToggleAnnouncements
// 0x0000 (0x00E8 - 0x00E8)
class UUTSeqAct_ToggleAnnouncements : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqAct_ToggleAnnouncements");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqCond_CheckWeapon
// 0x0008 (0x00D8 - 0x00D0)
class UUTSeqCond_CheckWeapon : public USequenceCondition
{
public:
	class AActor*                                      Target;                                                   // 0x00D0(0x0004)
	class UClass*                                      TestForWeaponClass;                                       // 0x00D4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqCond_CheckWeapon");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqCond_DoTutorial
// 0x0000 (0x00D0 - 0x00D0)
class UUTSeqCond_DoTutorial : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqCond_DoTutorial");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqCond_HasInventory
// 0x000C (0x00DC - 0x00D0)
class UUTSeqCond_HasInventory : public USequenceCondition
{
public:
	class AActor*                                      Target;                                                   // 0x00D0(0x0004)
	class UClass*                                      RequiredInventory;                                        // 0x00D4(0x0004) (Edit)
	unsigned long                                      bAllowSubclass : 1;                                       // 0x00D8(0x0004) (Edit)
	unsigned long                                      bCheckVehicleDriver : 1;                                  // 0x00D8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqCond_HasInventory");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqCond_IsCarryingFlag
// 0x0008 (0x00D8 - 0x00D0)
class UUTSeqCond_IsCarryingFlag : public USequenceCondition
{
public:
	class AActor*                                      Target;                                                   // 0x00D0(0x0004)
	class AUTGameObjective*                            FlagBase;                                                 // 0x00D4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqCond_IsCarryingFlag");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqCond_IsConsole
// 0x0000 (0x00D0 - 0x00D0)
class UUTSeqCond_IsConsole : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqCond_IsConsole");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqCond_IsUsingWeapon
// 0x000C (0x00DC - 0x00D0)
class UUTSeqCond_IsUsingWeapon : public USequenceCondition
{
public:
	class AActor*                                      Target;                                                   // 0x00D0(0x0004)
	class UClass*                                      RequiredWeapon;                                           // 0x00D4(0x0004) (Edit)
	unsigned long                                      bAllowSubclass : 1;                                       // 0x00D8(0x0004) (Edit)
	unsigned long                                      bMustBeImpactHammer : 1;                                  // 0x00D8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqCond_IsUsingWeapon");
		return ptr;
	}


	void Activated();
};


// Class UTGame.UTSeqEvent_ObjectiveCompleted
// 0x0000 (0x0100 - 0x0100)
class UUTSeqEvent_ObjectiveCompleted : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqEvent_ObjectiveCompleted");
		return ptr;
	}

};


// Class UTGame.UTSeqEvent_SkipCinematic
// 0x0000 (0x0100 - 0x0100)
class UUTSeqEvent_SkipCinematic : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSeqEvent_SkipCinematic");
		return ptr;
	}

};


// Class UTGame.UTShockBallLight
// 0x0000 (0x0238 - 0x0238)
class UUTShockBallLight : public UPointLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTShockBallLight");
		return ptr;
	}

};


// Class UTGame.UTShockImpactLight
// 0x0000 (0x0260 - 0x0260)
class UUTShockImpactLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTShockImpactLight");
		return ptr;
	}

};


// Class UTGame.UTShockMuzzleFlashLight
// 0x0000 (0x0260 - 0x0260)
class UUTShockMuzzleFlashLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTShockMuzzleFlashLight");
		return ptr;
	}

};


// Class UTGame.UTSimpleDestroyable
// 0x003C (0x024C - 0x0210)
class AUTSimpleDestroyable : public ADynamicSMActor
{
public:
	unsigned long                                      bDestroyOnDamage : 1;                                     // 0x0210(0x0004) (Edit)
	unsigned long                                      bDestroyOnPlayerTouch : 1;                                // 0x0210(0x0004) (Edit)
	unsigned long                                      bDestroyOnVehicleTouch : 1;                               // 0x0210(0x0004) (Edit)
	unsigned long                                      bDestroyed : 1;                                           // 0x0210(0x0004)
	class UStaticMesh*                                 MeshOnDestroy;                                            // 0x0214(0x0004) (Edit)
	class USoundCue*                                   SoundOnDestroy;                                           // 0x0218(0x0004) (Edit)
	class UParticleSystem*                             ParticlesOnDestroy;                                       // 0x021C(0x0004) (Edit)
	class UStaticMesh*                                 SpawnPhysMesh;                                            // 0x0220(0x0004) (Edit)
	float                                              SpawnPhysMeshLifeSpan;                                    // 0x0224(0x0004) (Edit)
	struct FVector                                     SpawnPhysMeshLinearVel;                                   // 0x0228(0x000C) (Edit)
	struct FVector                                     SpawnPhysMeshAngularVel;                                  // 0x0234(0x000C) (Edit)
	float                                              RespawnTime;                                              // 0x0240(0x0004) (Edit)
	class UStaticMesh*                                 RespawnStaticMesh;                                        // 0x0244(0x0004)
	float                                              TimeToRespawn;                                            // 0x0248(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSimpleDestroyable");
		return ptr;
	}


	void CheckRespawn();
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void RespawnDestructible();
	void GoBoom();
	void PostBeginPlay();
};


// Class UTGame.UTSkelControl_CantileverBeam
// 0x0000 (0x017C - 0x017C)
class UUTSkelControl_CantileverBeam : public UUDKSkelControl_CantileverBeam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_CantileverBeam");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_CicadaEngine
// 0x0024 (0x0110 - 0x00EC)
class UUTSkelControl_CicadaEngine : public USkelControlSingleBone
{
public:
	float                                              ForwardPitch;                                             // 0x00EC(0x0004) (Edit)
	float                                              BackPitch;                                                // 0x00F0(0x0004) (Edit)
	float                                              PitchRate;                                                // 0x00F4(0x0004) (Edit)
	float                                              MaxVelocity;                                              // 0x00F8(0x0004) (Edit)
	float                                              MinVelocity;                                              // 0x00FC(0x0004) (Edit)
	float                                              MaxVelocityPitchRateMultiplier;                           // 0x0100(0x0004) (Edit)
	float                                              PitchTime;                                                // 0x0104(0x0004) (Transient)
	float                                              LastThrust;                                               // 0x0108(0x0004) (Transient)
	int                                                DesiredPitch;                                             // 0x010C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_CicadaEngine");
		return ptr;
	}


	void TickSkelControl(float DeltaTime, class USkeletalMeshComponent* SkelComp);
};


// Class UTGame.UTSkelControl_DamageHinge
// 0x0000 (0x018C - 0x018C)
class UUTSkelControl_DamageHinge : public UUDKSkelControl_DamageHinge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_DamageHinge");
		return ptr;
	}


	void BreakApartOnDeath(const struct FVector& PartLocation, bool bIsVisible);
	void BreakApart(const struct FVector& PartLocation, bool bIsVisible);
};


// Class UTGame.UTSkelControl_DamageSpring
// 0x0000 (0x01C0 - 0x01C0)
class UUTSkelControl_DamageSpring : public UUDKSkelControl_DamageSpring
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_DamageSpring");
		return ptr;
	}


	void BreakApartOnDeath(const struct FVector& PartLocation, bool bIsVisible);
	void BreakApart(const struct FVector& PartLocation, bool bIsVisible);
};


// Class UTGame.UTSkelControl_HoverboardSuspension
// 0x0000 (0x0110 - 0x0110)
class UUTSkelControl_HoverboardSuspension : public UUDKSkelControl_HoverboardSuspension
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_HoverboardSuspension");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_HoverboardSwing
// 0x0000 (0x0110 - 0x0110)
class UUTSkelControl_HoverboardSwing : public UUDKSkelControl_HoverboardSwing
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_HoverboardSwing");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_HoverboardVibration
// 0x0000 (0x0100 - 0x0100)
class UUTSkelControl_HoverboardVibration : public UUDKSkelControl_HoverboardVibration
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_HoverboardVibration");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_HugGround
// 0x0000 (0x0110 - 0x0110)
class UUTSkelControl_HugGround : public UUDKSkelControl_HugGround
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_HugGround");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_JetThruster
// 0x000C (0x00F8 - 0x00EC)
class UUTSkelControl_JetThruster : public USkelControlSingleBone
{
public:
	float                                              MaxForwardVelocity;                                       // 0x00EC(0x0004) (Edit)
	float                                              BlendRate;                                                // 0x00F0(0x0004) (Edit)
	float                                              DesiredStrength;                                          // 0x00F4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_JetThruster");
		return ptr;
	}


	void TickSkelControl(float DeltaTime, class USkeletalMeshComponent* SkelComp);
};


// Class UTGame.UTSkelControl_LockRotation
// 0x0000 (0x00E4 - 0x00E4)
class UUTSkelControl_LockRotation : public UUDKSkelControl_LockRotation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_LockRotation");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_LookAt
// 0x0000 (0x0150 - 0x0150)
class UUTSkelControl_LookAt : public UUDKSkelControl_LookAt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_LookAt");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_MantaBlade
// 0x0000 (0x0100 - 0x0100)
class UUTSkelControl_MantaBlade : public UUDKSkelControl_PropellerBlade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_MantaBlade");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_MantaFlaps
// 0x0000 (0x010C - 0x010C)
class UUTSkelControl_MantaFlaps : public UUDKSkelControl_VehicleFlap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_MantaFlaps");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_MassBoneScaling
// 0x0000 (0x00C8 - 0x00C8)
class UUTSkelControl_MassBoneScaling : public UUDKSkelControl_MassBoneScaling
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_MassBoneScaling");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_Oscillate
// 0x0018 (0x0104 - 0x00EC)
class UUTSkelControl_Oscillate : public USkelControlSingleBone
{
public:
	struct FVector                                     MaxDelta;                                                 // 0x00EC(0x000C) (Edit)
	float                                              Period;                                                   // 0x00F8(0x0004) (Edit)
	float                                              CurrentTime;                                              // 0x00FC(0x0004) (Edit)
	unsigned long                                      bReverseDirection : 1;                                    // 0x0100(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_Oscillate");
		return ptr;
	}


	void TickSkelControl(float DeltaTime, class USkeletalMeshComponent* SkelComp);
};


// Class UTGame.UTSkelControl_Rotate
// 0x0000 (0x0104 - 0x0104)
class UUTSkelControl_Rotate : public UUDKSkelControl_Rotate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_Rotate");
		return ptr;
	}

};


// Class UTGame.UTSkelControl_SpinControl
// 0x0000 (0x00FC - 0x00FC)
class UUTSkelControl_SpinControl : public UUDKSkelControl_SpinControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSkelControl_SpinControl");
		return ptr;
	}

};


// Class UTGame.UTSlimeVolume
// 0x0000 (0x0250 - 0x0250)
class AUTSlimeVolume : public AWaterVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTSlimeVolume");
		return ptr;
	}

};


// Class UTGame.UTStingerMuzzleFlashLight
// 0x0000 (0x0260 - 0x0260)
class UUTStingerMuzzleFlashLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTStingerMuzzleFlashLight");
		return ptr;
	}

};


// Class UTGame.UTTeleporterCustomMesh
// 0x0010 (0x02E4 - 0x02D4)
class AUTTeleporterCustomMesh : public ATeleporter
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x02D4(0x0004) (Edit, ExportObject, Component, EditInline)
	class USoundCue*                                   TeleportingSound;                                         // 0x02D8(0x0004)
	class AUTPawn*                                     LastPawn;                                                 // 0x02DC(0x0004)
	float                                              LastTime;                                                 // 0x02E0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTeleporterCustomMesh");
		return ptr;
	}


	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	bool Accept(class AActor* Incoming, class AActor* Source);
};


// Class UTGame.UTTrajectoryReachSpec
// 0x0000 (0x0090 - 0x0090)
class UUTTrajectoryReachSpec : public UUDKTrajectoryReachSpec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTrajectoryReachSpec");
		return ptr;
	}

};


// Class UTGame.UTTurretMuzzleFlashLight
// 0x0000 (0x0260 - 0x0260)
class UUTTurretMuzzleFlashLight : public UUDKExplosionLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTTurretMuzzleFlashLight");
		return ptr;
	}

};


// Class UTGame.UTUIDataProvider_KeyBinding
// 0x0010 (0x00A8 - 0x0098)
class UUTUIDataProvider_KeyBinding : public UUTUIResourceDataProvider
{
public:
	struct FString                                     Command;                                                  // 0x0098(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bIsCrucialBind : 1;                                       // 0x00A4(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_KeyBinding");
		return ptr;
	}

};


// Class UTGame.UTUIDataProvider_MultiplayerMenuItem
// 0x0010 (0x00A8 - 0x0098)
class UUTUIDataProvider_MultiplayerMenuItem : public UUTUIResourceDataProvider
{
public:
	struct FString                                     Description;                                              // 0x0098(0x000C) (Const, Config, Localized, NeedCtorLink)
	unsigned long                                      bRequiresOnlineAccess : 1;                                // 0x00A4(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_MultiplayerMenuItem");
		return ptr;
	}


	bool ShouldBeFiltered();
};


// Class UTGame.UTUIDataProvider_ServerDetails
// 0x0000 (0x0060 - 0x0060)
class UUTUIDataProvider_ServerDetails : public UUDKUIDataProvider_ServerDetails
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_ServerDetails");
		return ptr;
	}

};


// Class UTGame.UTUIDataProvider_SettingsMenuItem
// 0x0010 (0x00A8 - 0x0098)
class UUTUIDataProvider_SettingsMenuItem : public UUTUIResourceDataProvider
{
public:
	struct FString                                     Description;                                              // 0x0098(0x000C) (Const, Localized, NeedCtorLink)
	unsigned long                                      bFrontEndOnly : 1;                                        // 0x00A4(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_SettingsMenuItem");
		return ptr;
	}


	bool ShouldBeFiltered();
};


// Class UTGame.UTUIDataProvider_SimpleElementProvider
// 0x0000 (0x005C - 0x005C)
class UUTUIDataProvider_SimpleElementProvider : public UUDKUIDataProvider_SimpleElementProvider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_SimpleElementProvider");
		return ptr;
	}

};


// Class UTGame.UTUIDataProvider_StringArray
// 0x0000 (0x0068 - 0x0068)
class UUTUIDataProvider_StringArray : public UUDKUIDataProvider_StringArray
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_StringArray");
		return ptr;
	}

};


// Class UTGame.UTUIDataProvider_Weapon
// 0x0030 (0x00C8 - 0x0098)
class UUTUIDataProvider_Weapon : public UUTUIResourceDataProvider
{
public:
	struct FString                                     ClassName;                                                // 0x0098(0x000C) (Config, NeedCtorLink)
	struct FString                                     AmmoClassPath;                                            // 0x00A4(0x000C) (Config, NeedCtorLink)
	struct FString                                     Flags;                                                    // 0x00B0(0x000C) (Config, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00BC(0x000C) (Const, Config, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataProvider_Weapon");
		return ptr;
	}

};


// Class UTGame.UTUIDataStore_Options
// 0x0000 (0x010C - 0x010C)
class UUTUIDataStore_Options : public UUDKUIDataStore_Options
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataStore_Options");
		return ptr;
	}

};


// Class UTGame.UTUIDataStore_StringAliasMap
// 0x0000 (0x00C8 - 0x00C8)
class UUTUIDataStore_StringAliasMap : public UUDKUIDataStore_StringAliasMap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTUIDataStore_StringAliasMap");
		return ptr;
	}

};


// Class UTGame.UTVehicle_Cicada
// 0x003C (0x0AF4 - 0x0AB8)
class AUTVehicle_Cicada : public AUTAirVehicle
{
public:
	struct FVector                                     TurretFlashLocation;                                      // 0x0AB8(0x000C) (Net, RepNotify)
	struct FRotator                                    TurretWeaponRotation;                                     // 0x0AC4(0x000C) (Net, RepNotify)
	unsigned char                                      TurretFlashCount;                                         // 0x0AD0(0x0001) (Net, RepNotify)
	unsigned char                                      TurretFiringMode;                                         // 0x0AD1(0x0001) (Net, RepNotify)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0AD2(0x0002) MISSED OFFSET
	unsigned long                                      bFreelanceStart : 1;                                      // 0x0AD4(0x0004)
	TArray<int>                                        JetEffectIndices;                                         // 0x0AD8(0x000C) (NeedCtorLink)
	class UParticleSystem*                             TurretBeamTemplate;                                       // 0x0AE4(0x0004)
	class UUTSkelControl_JetThruster*                  JetControl;                                               // 0x0AE8(0x0004)
	struct FName                                       JetScalingParam;                                          // 0x0AEC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicle_Cicada");
		return ptr;
	}


	bool ShouldClamp();
	void VehicleCalcCamera(float DeltaTime, int SeatIndex, bool bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart);
	struct FVector GetCameraStart(int SeatIndex);
	void VehicleWeaponImpactEffects(const struct FVector& HitLocation, int SeatIndex);
	bool RecommendLongRangedAttack();
	void SitDriver(class AUTPawn* UTP, int SeatIndex);
	bool PassengerEnter(class APawn* P, int SeatIndex);
	void PassengerLeave(int SeatIndex);
	void DriverLeft();
	bool DriverEnter(class APawn* P);
	bool ImportantVehicle();
	void ResetTurningSpeed();
	void RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData);
	void Tick(float DeltaTime);
};


// Class UTGame.UTVWeap_TowCable
// 0x0014 (0x0680 - 0x066C)
class AUTVWeap_TowCable : public AUTVehicleWeapon
{
public:
	class AUTVehicle_Hoverboard*                       MyHoverboard;                                             // 0x066C(0x0004) (Net)
	float                                              MaxAttachRange;                                           // 0x0670(0x0004)
	float                                              CrossScaler;                                              // 0x0674(0x0004)
	float                                              CrossScaleTime;                                           // 0x0678(0x0004)
	class UTexture2D*                                  CrossHairTexture;                                         // 0x067C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVWeap_TowCable");
		return ptr;
	}


	void ResetCrosshair(class UCanvas* Canvas);
	void DrawWeaponCrosshair(class AHUD* HUD);
	void BeginFire(unsigned char FireModeNum);
	void CustomFire();
	void EndFire(unsigned char FireModeNum);
	unsigned char BestMode();
	float MaxRange();
	void PostBeginPlay();
};


// Class UTGame.UTVehicle_Manta
// 0x0068 (0x0B08 - 0x0AA0)
class AUTVehicle_Manta : public AUTVehicle
{
public:
	float                                              JumpForceMag;                                             // 0x0AA0(0x0004) (Edit)
	float                                              MaxJumpZVel;                                              // 0x0AA4(0x0004) (Edit)
	float                                              JumpCheckTraceDist;                                       // 0x0AA8(0x0004) (Edit)
	float                                              JumpDelay;                                                // 0x0AAC(0x0004)
	float                                              LastJumpTime;                                             // 0x0AB0(0x0004)
	float                                              DuckForceMag;                                             // 0x0AB4(0x0004) (Edit)
	unsigned long                                      bDoBikeJump : 1;                                          // 0x0AB8(0x0004) (Net, RepNotify)
	unsigned long                                      bHoldingDuck : 1;                                         // 0x0AB8(0x0004) (Net, RepNotify)
	unsigned long                                      bPressingAltFire : 1;                                     // 0x0AB8(0x0004)
	class USoundCue*                                   JumpSound;                                                // 0x0ABC(0x0004)
	class USoundCue*                                   DuckSound;                                                // 0x0AC0(0x0004)
	float                                              BladeBlur;                                                // 0x0AC4(0x0004)
	float                                              DesiredBladeBlur;                                         // 0x0AC8(0x0004)
	int                                                FanEffectIndex;                                           // 0x0ACC(0x0004)
	struct FName                                       FanEffectParameterName;                                   // 0x0AD0(0x0008)
	struct FName                                       FlameJetEffectParameterName;                              // 0x0AD8(0x0008)
	float                                              FlameJetValue;                                            // 0x0AE0(0x0004)
	float                                              DesiredFlameJetValue;                                     // 0x0AE4(0x0004)
	float                                              FullWheelSuspensionTravel;                                // 0x0AE8(0x0004) (Edit)
	float                                              CrouchedWheelSuspensionTravel;                            // 0x0AEC(0x0004) (Edit)
	float                                              SuspensionTravelAdjustSpeed;                              // 0x0AF0(0x0004) (Edit)
	float                                              FullWheelSuspensionStiffness;                             // 0x0AF4(0x0004) (Edit)
	float                                              CrouchedWheelSuspensionStiffness;                         // 0x0AF8(0x0004) (Edit)
	float                                              BoneOffsetZAdjust;                                        // 0x0AFC(0x0004)
	float                                              CrouchedAirSpeed;                                         // 0x0B00(0x0004) (Edit)
	float                                              FullAirSpeed;                                             // 0x0B04(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicle_Manta");
		return ptr;
	}


	bool RecommendCharge(class AUTBot* B, class APawn* Enemy);
	bool TooCloseToAttack(class AActor* Other);
	bool ShouldClamp();
	void RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData);
	float GetChargePower();
	void ReplicatedEvent(const struct FName& VarName);
	void DrivingStatusChanged();
	void IncomingMissile(class AProjectile* P);
	bool Dodge(TEnumAsByte<EDoubleClickDir> DoubleClickMove);
	unsigned char ChooseFireMode();
	void MantaDuckEffect();
	void MantaJumpEffect();
	void PossessedBy(class AController* C, bool bVehicleTransition);
	bool OverrideEndFire(unsigned char FireModeNum);
	bool OverrideBeginFire(unsigned char FireModeNum);
	bool DriverEnter(class APawn* P);
	bool CanBeBaseForPawn(class APawn* aPawn);
	void Tick(float DeltaSeconds);
};


// Class UTGame.UTVehicleScorpionWheel
// 0x0000 (0x0120 - 0x0120)
class UUTVehicleScorpionWheel : public UUDKVehicleWheel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleScorpionWheel");
		return ptr;
	}

};


// Class UTGame.UTVehicle_Scorpion
// 0x0130 (0x0BD0 - 0x0AA0)
class AUTVehicle_Scorpion : public AUTVehicle
{
public:
	class UUTAnimBlendByWeapon*                        BladeBlend;                                               // 0x0AA0(0x0004)
	unsigned long                                      bBrakeLightOn : 1;                                        // 0x0AA4(0x0004)
	unsigned long                                      bReverseLightOn : 1;                                      // 0x0AA4(0x0004)
	unsigned long                                      bHeadlightsOn : 1;                                        // 0x0AA4(0x0004)
	unsigned long                                      bBladesExtended : 1;                                      // 0x0AA4(0x0004) (Net, RepNotify)
	unsigned long                                      bLeftBladeBroken : 1;                                     // 0x0AA4(0x0004) (Net, RepNotify)
	unsigned long                                      bRightBladeBroken : 1;                                    // 0x0AA4(0x0004) (Net, RepNotify)
	unsigned long                                      bBoostersActivated : 1;                                   // 0x0AA4(0x0004) (Net, RepNotify)
	unsigned long                                      bSteeringLimited : 1;                                     // 0x0AA4(0x0004)
	unsigned long                                      bScriptedBoosters : 1;                                    // 0x0AA4(0x0004)
	unsigned long                                      bSelfDestructArmed : 1;                                   // 0x0AA4(0x0004) (Net, RepNotify)
	unsigned long                                      bTryToBoost : 1;                                          // 0x0AA4(0x0004)
	unsigned long                                      bWasThrottle : 1;                                         // 0x0AA4(0x0004)
	unsigned long                                      bAISelfDestruct : 1;                                      // 0x0AA4(0x0004)
	float                                              BladeBreakPoint;                                          // 0x0AA8(0x0004)
	struct FName                                       BrakeLightParameterName;                                  // 0x0AAC(0x0008)
	struct FName                                       ReverseLightParameterName;                                // 0x0AB4(0x0008)
	struct FName                                       HeadLightParameterName;                                   // 0x0ABC(0x0008)
	struct FName                                       RightBladeStartSocket;                                    // 0x0AC4(0x0008)
	struct FName                                       RightBladeEndSocket;                                      // 0x0ACC(0x0008)
	struct FName                                       LeftBladeStartSocket;                                     // 0x0AD4(0x0008)
	struct FName                                       LeftBladeEndSocket;                                       // 0x0ADC(0x0008)
	class UClass*                                      BladeDamageType;                                          // 0x0AE4(0x0004)
	class USoundCue*                                   BladeBreakSound;                                          // 0x0AE8(0x0004)
	class USoundCue*                                   BladeExtendSound;                                         // 0x0AEC(0x0004)
	class USoundCue*                                   BladeRetractSound;                                        // 0x0AF0(0x0004)
	float                                              BoosterForceMagnitude;                                    // 0x0AF4(0x0004)
	class AController*                                 SelfDestructInstigator;                                   // 0x0AF8(0x0004)
	float                                              BoosterCheckRadius;                                       // 0x0AFC(0x0004)
	float                                              MaxBoostDuration;                                         // 0x0B00(0x0004)
	float                                              BoostStartTime;                                           // 0x0B04(0x0004)
	float                                              BoostChargeDuration;                                      // 0x0B08(0x0004)
	float                                              BoostChargeTime;                                          // 0x0B0C(0x0004)
	class UAudioComponent*                             BoosterSound;                                             // 0x0B10(0x0004) (ExportObject, Component, EditInline)
	struct FTextureCoordinates                         BoostToolTipIconCoords;                                   // 0x0B14(0x0010)
	struct FTextureCoordinates                         EjectToolTipIconCoords;                                   // 0x0B24(0x0010)
	class UClass*                                      SelfDestructDamageType;                                   // 0x0B34(0x0004)
	float                                              BoostPowerSpeed;                                          // 0x0B38(0x0004)
	float                                              BoostReleaseTime;                                         // 0x0B3C(0x0004)
	float                                              BoostReleaseDelay;                                        // 0x0B40(0x0004)
	class USoundCue*                                   SelfDestructSoundCue;                                     // 0x0B44(0x0004)
	class USoundCue*                                   SelfDestructReadyCue;                                     // 0x0B48(0x0004)
	class USoundCue*                                   SelfDestructWarningSound;                                 // 0x0B4C(0x0004)
	class USoundCue*                                   SelfDestructEnabledSound;                                 // 0x0B50(0x0004)
	class USoundCue*                                   SelfDestructEnabledLoop;                                  // 0x0B54(0x0004)
	class UCameraAnim*                                 RedBoostCamAnim;                                          // 0x0B58(0x0004)
	class UCameraAnim*                                 BlueBoostCamAnim;                                         // 0x0B5C(0x0004)
	class USoundCue*                                   SuspensionShiftSound;                                     // 0x0B60(0x0004)
	class UAudioComponent*                             SelfDestructEnabledComponent;                             // 0x0B64(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             SelfDestructWarningComponent;                             // 0x0B68(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             SelfDestructReadyComponent;                               // 0x0B6C(0x0004) (ExportObject, Component, EditInline)
	class USoundCue*                                   EjectSoundCue;                                            // 0x0B70(0x0004)
	float                                              BoosterFOVAngle;                                          // 0x0B74(0x0004)
	class UUTAnimBlendByWeapon*                        BoosterBlend;                                             // 0x0B78(0x0004)
	float                                              ThrottleStartTime;                                        // 0x0B7C(0x0004)
	float                                              BoostUprightTorqueFactor;                                 // 0x0B80(0x0004) (Edit)
	float                                              BoostUprightMaxTorque;                                    // 0x0B84(0x0004) (Edit)
	float                                              DefaultUprightTorqueFactor;                               // 0x0B88(0x0004)
	float                                              DefaultUprightMaxTorque;                                  // 0x0B8C(0x0004)
	class UPointLightComponent*                        LeftBoosterLight;                                         // 0x0B90(0x0004) (ExportObject, Component, EditInline)
	class UPointLightComponent*                        RightBoosterLight;                                        // 0x0B94(0x0004) (ExportObject, Component, EditInline)
	class ARB_ConstraintActor*                         BladeVictimConstraint[0x2];                               // 0x0B98(0x0004)
	class UStaticMesh*                                 ScorpionHood;                                             // 0x0BA0(0x0004)
	float                                              RocketSpeed;                                              // 0x0BA4(0x0004)
	float                                              SelfDestructSpeedSquared;                                 // 0x0BA8(0x0004)
	float                                              LockSuspensionTravel;                                     // 0x0BAC(0x0004) (Edit)
	float                                              LockSuspensionStiffness;                                  // 0x0BB0(0x0004) (Edit)
	float                                              BoostSteerFactors[0x3];                                   // 0x0BB4(0x0004) (Edit)
	class UParticleSystem*                             SelfDestructExplosionTemplate;                            // 0x0BC0(0x0004)
	class UClass*                                      HatchGibClass;                                            // 0x0BC4(0x0004)
	class UStaticMesh*                                 BrokenBladeMesh;                                          // 0x0BC8(0x0004)
	float                                              LastBladeBoostTime;                                       // 0x0BCC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicle_Scorpion");
		return ptr;
	}


	bool CriticalChargeAttack(class AUTBot* B);
	bool RecommendCharge(class AUTBot* B, class APawn* Enemy);
	void SetBurnOut();
	void CauseMuzzleFlashLight(int SeatIndex);
	void BreakOffBlade(bool bLeftBlade);
	void RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData);
	void CheckScriptedSelfDestruct();
	void OnSelfDestruct(class UUTSeqAct_SelfDestruct* Action);
	void TeamChanged();
	void IncomingMissile(class AProjectile* P);
	bool TooCloseToAttack(class AActor* Other);
	unsigned char ChooseFireMode();
	bool FindAutoExit(class APawn* ExitingDriver);
	void BladeHit(class AActor* HitActor, const struct FVector& HitLocation, bool bLeftBlade);
	void TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void DriverLeft();
	void DisplayHud(class AUTHUD* HUD, class UCanvas* Canvas, const struct FVector2D& HudPOS, int SeatIndex);
	void PlaySelfDestruct();
	void SetBladesExtended(bool bExtended);
	bool OverrideEndFire(unsigned char FireModeNum);
	bool OverrideBeginFire(unsigned char FireModeNum);
	void ReplicatedEvent(const struct FName& VarName);
	bool TryToDrive(class APawn* P);
	void SelfDestruct(class AActor* ImpactedActor);
	void BlowupVehicle();
	bool DisableVehicle();
	void ServerBoost();
	void OnActivateRocketBoosters(class UUTSeqAct_ActivateRocketBoosters* BoosterAction);
	void DeactivateRocketBoosters();
	void EnableFullSteering();
	void DeactivateHandbrake();
	void ActivateRocketBoosters();
	void UnlockWheels();
	void LockWheels();
	void SuspensionHeavyShift(float Delta);
	void StopVehicleSounds();
	void SetInputs(float InForward, float InStrafe, float InUp);
	bool DriverEnter(class APawn* P);
	bool CanBeBaseForPawn(class APawn* aPawn);
	void PancakeOther(class APawn* Other);
	void RanInto(class AActor* Other);
	void PostBeginPlay();
	void Tick(float DeltaSeconds);
	bool ReadyToSelfDestruct();
};


// Class UTGame.UTVehicleBoostPad
// 0x0024 (0x01F8 - 0x01D4)
class AUTVehicleBoostPad : public AActor
{
public:
	unsigned long                                      bInitiallyOn : 1;                                         // 0x01D4(0x0004) (Edit)
	unsigned long                                      bCurrentlyActive : 1;                                     // 0x01D4(0x0004)
	float                                              BoostPower;                                               // 0x01D8(0x0004) (Edit)
	float                                              BoostDamping;                                             // 0x01DC(0x0004) (Edit)
	TArray<class UClass*>                              AffectedVehicles;                                         // 0x01E0(0x000C) (Edit, NeedCtorLink)
	TArray<class AUTVehicle*>                          VehicleList;                                              // 0x01EC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleBoostPad");
		return ptr;
	}


	void Tick(float DT);
	struct FVector CalculateForce(const struct FVector& CarLocation, const struct FVector& CarVelocity);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Trigger(class AActor* Other, class APawn* EventInstigator);
	void PostBeginPlay();
};


// Class UTGame.UTVehicleCTFGame
// 0x0000 (0x0544 - 0x0544)
class AUTVehicleCTFGame : public AUTCTFGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleCTFGame");
		return ptr;
	}


	bool AllowMutator(const struct FString& MutatorClassName);
};


// Class UTGame.UTVehicleCTFHUD
// 0x0000 (0x0ABE - 0x0ABE)
class AUTVehicleCTFHUD : public AUTCTFHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleCTFHUD");
		return ptr;
	}

};


// Class UTGame.UTVehicleShield
// 0x0018 (0x01F0 - 0x01D8)
class AUTVehicleShield : public AUDKWeaponShield
{
public:
	class USoundCue*                                   ActivatedSound;                                           // 0x01D8(0x0004)
	class USoundCue*                                   DeactivatedSound;                                         // 0x01DC(0x0004)
	class UAudioComponent*                             AmbientComponent;                                         // 0x01E0(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    ShieldEffectComponent;                                    // 0x01E4(0x0004) (ExportObject, Component, EditInline)
	float                                              ShieldActivatedTime;                                      // 0x01E8(0x0004)
	unsigned long                                      bFullyActive : 1;                                         // 0x01EC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTVehicleShield");
		return ptr;
	}


	void TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void ShieldFullyOnline();
	void SetActive(bool bNowActive);
};


// Class UTGame.UTWeaponLockerPickupLight
// 0x0000 (0x01DC - 0x01DC)
class AUTWeaponLockerPickupLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponLockerPickupLight");
		return ptr;
	}

};


// Class UTGame.UTWeaponPickupLight
// 0x0000 (0x01DC - 0x01DC)
class AUTWeaponPickupLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UTGame.UTWeaponPickupLight");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
