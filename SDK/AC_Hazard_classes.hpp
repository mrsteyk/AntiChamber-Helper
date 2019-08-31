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

// Class Hazard.HazardGlassPanel
// 0x0010 (0x01E4 - 0x01D4)
class AHazardGlassPanel : public AActor
{
public:
	class UStaticMeshComponent*                        GlassMesh;                                                // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        GlassMesh2;                                               // 0x01D8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   GlassMaterial;                                            // 0x01DC(0x0004)
	unsigned long                                      bBlockSnakeBeam : 1;                                      // 0x01E0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardGlassPanel");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Hazard.HazardAmbientSoundMovable
// 0x0028 (0x0208 - 0x01E0)
class AHazardAmbientSoundMovable : public AAmbientSoundMovable
{
public:
	TArray<class AHazardAmbientSoundMovable*>          DuplicatedSounds;                                         // 0x01E0(0x000C) (Edit, NeedCtorLink)
	float                                              MaxDistance;                                              // 0x01EC(0x0004) (Edit)
	float                                              OriginalMaxDistance;                                      // 0x01F0(0x0004)
	struct FVector                                     OriginalLocation;                                         // 0x01F4(0x000C)
	unsigned long                                      bOriginalCanTeleport : 1;                                 // 0x0200(0x0004)
	unsigned long                                      bCanTeleport : 1;                                         // 0x0200(0x0004)
	unsigned long                                      bTeleported : 1;                                          // 0x0200(0x0004)
	unsigned long                                      bKicked : 1;                                              // 0x0200(0x0004)
	unsigned long                                      bStored : 1;                                              // 0x0200(0x0004)
	unsigned long                                      bTicking : 1;                                             // 0x0200(0x0004)
	class AHazardPawn*                                 PlayerPawn;                                               // 0x0204(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardAmbientSoundMovable");
		return ptr;
	}


	void RestoreDuplicatedSounds();
	void KickDuplicatedSounds();
	void Tick(float DeltaTime);
	void UpdateAmbientSound();
	void ResetHASM(bool bResetLocation, bool bResetMaxDistance, bool bResetCanTeleport);
	void PostBeginPlay();
};


// Class Hazard.HazardGame
// 0x02D0 (0x064C - 0x037C)
class AHazardGame : public AUDKGame
{
public:
	float                                              HackTealTileTakeTime;                                     // 0x037C(0x0004)
	class AHazardRecursiveCylinder*                    RecursiveCylinder;                                        // 0x0380(0x0004)
	unsigned long                                      bRetryFailedSnake : 1;                                    // 0x0384(0x0004)
	unsigned long                                      bSnakeStopHack : 1;                                       // 0x0384(0x0004)
	unsigned long                                      bBreakSearch : 1;                                         // 0x0384(0x0004)
	unsigned long                                      bLastDirection : 1;                                       // 0x0384(0x0004)
	unsigned long                                      bAutoRotated : 1;                                         // 0x0384(0x0004)
	unsigned long                                      bHiddenSignHints : 1;                                     // 0x0384(0x0004)
	unsigned long                                      bShowSignClickHelp : 1;                                   // 0x0384(0x0004)
	unsigned long                                      bTriggeredIconThreshold : 1;                              // 0x0384(0x0004)
	unsigned long                                      bGameLoaded : 1;                                          // 0x0384(0x0004)
	unsigned long                                      bTimerActive : 1;                                         // 0x0384(0x0004)
	unsigned long                                      bAlgorithmTimerActive : 1;                                // 0x0384(0x0004)
	unsigned long                                      bSaveConfig : 1;                                          // 0x0384(0x0004)
	unsigned long                                      bFadingSnake : 1;                                         // 0x0384(0x0004)
	unsigned long                                      bFadingMaterialize : 1;                                   // 0x0384(0x0004)
	unsigned long                                      bFadingAppear : 1;                                        // 0x0384(0x0004)
	unsigned long                                      bFadingDisappear : 1;                                     // 0x0384(0x0004)
	unsigned long                                      bFadingDisintegrate : 1;                                  // 0x0384(0x0004)
	unsigned long                                      bFadingWhite : 1;                                         // 0x0384(0x0004)
	unsigned long                                      bFadingWhite1 : 1;                                        // 0x0384(0x0004)
	unsigned long                                      bFadingWhite2 : 1;                                        // 0x0384(0x0004)
	unsigned long                                      bCalcMouseSensitivity : 1;                                // 0x0384(0x0004)
	float                                              RefindTime;                                               // 0x0388(0x0004)
	float                                              LastHoverTime;                                            // 0x038C(0x0004)
	class USoundCue*                                   HoverSound;                                               // 0x0390(0x0004)
	class USoundCue*                                   ClickSound;                                               // 0x0394(0x0004)
	float                                              LoopDelayTimer;                                           // 0x0398(0x0004)
	float                                              LoopSpawnTimer;                                           // 0x039C(0x0004)
	int                                                GrowingComponents;                                        // 0x03A0(0x0004)
	int                                                ShrinkingComponents;                                      // 0x03A4(0x0004)
	int                                                LoopingComponents;                                        // 0x03A8(0x0004)
	TArray<struct FString>                             LoopKeys;                                                 // 0x03AC(0x000C) (NeedCtorLink)
	TArray<struct FLoopBox>                            LoopBoxPoints;                                            // 0x03B8(0x000C) (Component, NeedCtorLink)
	TArray<struct FFurthestPoint>                      FurthestPoints;                                           // 0x03C4(0x000C) (Component, NeedCtorLink)
	int                                                FurthestDistance;                                         // 0x03D0(0x0004)
	TArray<struct FRecursePoint>                       RecursePoints;                                            // 0x03D4(0x000C) (Component, NeedCtorLink)
	int                                                ClosestRecurseDistance;                                   // 0x03E0(0x0004)
	float                                              TileSize;                                                 // 0x03E4(0x0004)
	float                                              HalfTileSize;                                             // 0x03E8(0x0004)
	float                                              SnakeDelayTime;                                           // 0x03EC(0x0004)
	float                                              ConstructDelayTime;                                       // 0x03F0(0x0004)
	TArray<class UHazardTileComponent*>                RegeneratingComponents;                                   // 0x03F4(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TEnumAsByte<ECurrentAxis>                          CurrentAxis;                                              // 0x0400(0x0001)
	unsigned char                                      UnlockedTowers[0x9];                                      // 0x0401(0x0001)
	TEnumAsByte<EHazardGame_ENeighbourDir>             NeighbourDir;                                             // 0x040A(0x0001) (Const)
	unsigned char                                      UnknownData00[0x1];                                       // 0x040B(0x0001) MISSED OFFSET
	struct FVector                                     LastTracePoint;                                           // 0x040C(0x000C)
	struct FVector                                     BuildEndPoint;                                            // 0x0418(0x000C)
	struct FVector                                     BuildStartPoint;                                          // 0x0424(0x000C)
	struct FVector                                     SnakeHeadLocation;                                        // 0x0430(0x000C)
	float                                              LastSnakeTime;                                            // 0x043C(0x0004)
	class AHazardMapPreview*                           MapPreview;                                               // 0x0440(0x0004)
	class AHazardIconPreview*                          IconPreview;                                              // 0x0444(0x0004)
	TArray<class AHazardStepTile*>                     StepTiles;                                                // 0x0448(0x000C) (NeedCtorLink)
	class AHazardTile*                                 BlueTile;                                                 // 0x0454(0x0004)
	class AHazardTile*                                 GreenTile;                                                // 0x0458(0x0004)
	class AHazardTile*                                 YellowTile;                                               // 0x045C(0x0004)
	class AHazardTile*                                 RedTile;                                                  // 0x0460(0x0004)
	class AHazardTile*                                 BlackTile;                                                // 0x0464(0x0004)
	class UMaterialInterface*                          BlueTileMaterial;                                         // 0x0468(0x0004)
	class UMaterialInterface*                          GreenTileMaterial;                                        // 0x046C(0x0004)
	class UMaterialInterface*                          YellowTileMaterial;                                       // 0x0470(0x0004)
	class UMaterialInterface*                          RedTileMaterial;                                          // 0x0474(0x0004)
	class UMaterialInterface*                          BlackTileMaterial;                                        // 0x0478(0x0004)
	int                                                NumSignsClicked;                                          // 0x047C(0x0004)
	int                                                NumIconsFound;                                            // 0x0480(0x0004)
	int                                                IconThreshold;                                            // 0x0484(0x0004)
	TArray<class UClass*>                              DefaultInventory;                                         // 0x0488(0x000C) (NeedCtorLink)
	class UHazardSaveGame*                             SavedGame;                                                // 0x0494(0x0004)
	float                                              PlayTime;                                                 // 0x0498(0x0004)
	TArray<class AHazardTrigger*>                      SavedTriggers;                                            // 0x049C(0x000C) (NeedCtorLink)
	TArray<class AHazardPickupFactory*>                SavedPickups;                                             // 0x04A8(0x000C) (NeedCtorLink)
	TArray<class AHazardOptionsButton*>                SavedOptions;                                             // 0x04B4(0x000C) (NeedCtorLink)
	TArray<class AHazardSecretTile*>                   SavedSecrets;                                             // 0x04C0(0x000C) (NeedCtorLink)
	TArray<class AActor*>                              SavedActors;                                              // 0x04CC(0x000C) (NeedCtorLink)
	TArray<class AActor*>                              FoundActors;                                              // 0x04D8(0x000C) (NeedCtorLink)
	TArray<class AHazardLaser*>                        FoundLasers;                                              // 0x04E4(0x000C) (NeedCtorLink)
	TArray<class AHazardTriggerMap*>                   FoundMap;                                                 // 0x04F0(0x000C) (NeedCtorLink)
	TArray<class AHazardOptionsButton*>                FoundOptions;                                             // 0x04FC(0x000C) (NeedCtorLink)
	class AHazardPawn*                                 PlayerPawn;                                               // 0x0508(0x0004)
	float                                              UnlockDelay;                                              // 0x050C(0x0004)
	float                                              LastUnlockTime;                                           // 0x0510(0x0004)
	class UMaterialInterface*                          BaseMaterial;                                             // 0x0514(0x0004)
	class AHazardPlayerController*                     ThePlayer;                                                // 0x0518(0x0004)
	class ADynamicSMActor*                             MapWall;                                                  // 0x051C(0x0004)
	class ADynamicSMActor*                             IconWall;                                                 // 0x0520(0x0004)
	class AStaticMeshActor*                            ChamberMesh;                                              // 0x0524(0x0004)
	class ADynamicSMActor*                             IconPictureSheet;                                         // 0x0528(0x0004)
	class ADynamicSMActor*                             IconMessageSheet;                                         // 0x052C(0x0004)
	class ADynamicSMActor*                             IconTitleSheet;                                           // 0x0530(0x0004)
	class ASceneCapture2DActor*                        LevelCapture;                                             // 0x0534(0x0004)
	class AActor*                                      JumpLocation;                                             // 0x0538(0x0004)
	TArray<class AHazardTriggerMap*>                   MapArray;                                                 // 0x053C(0x000C) (NeedCtorLink)
	TArray<class AHazardTriggerMap*>                   TempMapArray;                                             // 0x0548(0x000C) (NeedCtorLink)
	class UParticleSystem*                             MapStartTemplate;                                         // 0x0554(0x0004)
	class AEmitterSpawnable*                           MapStartEmitter;                                          // 0x0558(0x0004)
	class UParticleSystem*                             MapEndTemplate;                                           // 0x055C(0x0004)
	class AEmitterSpawnable*                           MapEndEmitter;                                            // 0x0560(0x0004)
	TArray<class UDecalComponent*>                     StaticDecals;                                             // 0x0564(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class AHazardAmbientSoundMovable*>          MovableSounds;                                            // 0x0570(0x000C) (NeedCtorLink)
	TArray<class AHazardTowerMesh*>                    TowerActors;                                              // 0x057C(0x000C) (NeedCtorLink)
	float                                              AppearSoundTime;                                          // 0x0588(0x0004)
	float                                              DisappearSoundTime;                                       // 0x058C(0x0004)
	class UAudioComponent*                             AppearSound;                                              // 0x0590(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             DisappearSound;                                           // 0x0594(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             DisintegrateSound;                                        // 0x0598(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             SnakeSound;                                               // 0x059C(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             MaterializeSound;                                         // 0x05A0(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             WhiteSound;                                               // 0x05A4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             WhiteSound1;                                              // 0x05A8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             WhiteSound2;                                              // 0x05AC(0x0004) (ExportObject, Component, EditInline)
	float                                              SnakeSoundTime;                                           // 0x05B0(0x0004)
	float                                              MaterializeSoundTime;                                     // 0x05B4(0x0004)
	float                                              DisintegrateSoundTime;                                    // 0x05B8(0x0004)
	float                                              WhiteSoundTime;                                           // 0x05BC(0x0004)
	float                                              WhiteSoundStartTime;                                      // 0x05C0(0x0004)
	struct FVector                                     ClosestAppearLocation;                                    // 0x05C4(0x000C)
	struct FVector                                     ClosestDisappearLocation;                                 // 0x05D0(0x000C)
	struct FVector                                     ClosestDisintegrateLocation;                              // 0x05DC(0x000C)
	struct FVector                                     ClosestSnakeLocation;                                     // 0x05E8(0x000C)
	struct FVector                                     ClosestMaterializeLocation;                               // 0x05F4(0x000C)
	struct FVector                                     ClosestWhiteLocation;                                     // 0x0600(0x000C)
	struct FName                                       PersistentLevel;                                          // 0x060C(0x0008)
	class AHazardIcon*                                 FirstIcon;                                                // 0x0614(0x0004)
	float                                              DefaultMouseSensitivity;                                  // 0x0618(0x0004)
	struct FVector                                     LinkedLocation;                                           // 0x061C(0x000C)
	struct FVector                                     LinkStartTrace;                                           // 0x0628(0x000C)
	struct FVector                                     LinkAimDir;                                               // 0x0634(0x000C)
	class UParticleSystem*                             ProjExplosionTemplate;                                    // 0x0640(0x0004)
	class USoundCue*                                   ExplodeSound;                                             // 0x0644(0x0004)
	class UAudioComponent*                             ExplodeSoundLoop;                                         // 0x0648(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardGame");
		return ptr;
	}


	void UpdateNumIconsFound();
	bool HitNoShootField(const struct FVector& SearchLocation);
	struct FVector GetAxisAsVector();
	void SetCurrentAxis(const struct FVector& HitLocation, const struct FVector& StartLocation);
	void AddDefaultInventory(class APawn* P);
	void SaveGame();
	void DeleteSaveGame();
	void HideSignHints();
	void UnsaveObject(class AActor* Other);
	void SaveObject(class AActor* Other);
	void Tick(float DeltaTime);
	void UpdateSounds(float DeltaTime);
	void SetWhiteSoundParameters(const struct FVector& UpdateLocation);
	void UpdateDecals();
	void AddDecal(class UDecalComponent* NewDecal);
	void SetupTile(class UMaterialInterface* SetupMaterial, bool bNewDestroyOnOpen, class AHazardTile** SetupTile);
	void SetupDefaultTiles();
	void LoadSavedGame(class AHazardPawn* Pawn);
	void InitializeGame();
	bool ShouldUpdate(class AActor* CheckActor, float UpdateDistance);
	void ResetGunTiles();
	void ResetGame();
	void KillMapEmitters();
	void SpawnMapEmitters(const struct FVector& SpawnLocation);
	void DeactivateMap();
	void DeactivateMapNode(class AHazardTriggerMap* TempNode);
	void SaveMap();
	void ActivateMap(class AHazardTriggerMap* MapTrigger);
	void UnlockTower(int TowerLevel);
	void RegisterTowerPiece(class AHazardTowerMesh* CurrentMesh);
	class UHazardTileComponent* FindTileComponent(const struct FVector& SearchLocation, class UHazardTileComponent* CallingComponent);
	void TestKillBlocking(class UHazardTileComponent* TestComponent, const struct FVector& TestLocation);
	void SpawnLoop();
	void CheckTimers();
	bool TimerFinished(float* Time);
	void PostLogin(class APlayerController* NewPlayer);
	class UClass* SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardConsole
// 0x0000 (0x01C8 - 0x01C8)
class UHazardConsole : public UUTConsole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardConsole");
		return ptr;
	}


	bool InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad);
};


// Class Hazard.HazardActor
// 0x0009 (0x01DD - 0x01D4)
class AHazardActor : public AActor
{
public:
	unsigned long                                      bShouldUpdate : 1;                                        // 0x01D4(0x0004)
	float                                              LastFoundTime;                                            // 0x01D8(0x0004)
	TEnumAsByte<EHazardActor_EGlobalCollision>         GlobalCollision;                                          // 0x01DC(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardActor");
		return ptr;
	}


	void EnableTick();
	void TestDisableTick();
	void Tick(float DeltaTime);
	bool ShouldUpdate();
};


// Class Hazard.HazardPawn
// 0x0111 (0x0741 - 0x0630)
class AHazardPawn : public AUDKPawn
{
public:
	struct FVector                                     OldLocation;                                              // 0x0630(0x000C)
	class UHazardSnakeFloorComponent*                  CurrentSnakePanel;                                        // 0x063C(0x0004) (ExportObject, Component, EditInline)
	unsigned long                                      bShouldCheckSnake : 1;                                    // 0x0640(0x0004)
	unsigned long                                      bUpdatePawnLocation : 1;                                  // 0x0640(0x0004)
	unsigned long                                      bStepFloorsActive : 1;                                    // 0x0640(0x0004)
	unsigned long                                      bBasedOnTile : 1;                                         // 0x0640(0x0004)
	unsigned long                                      bShouldRecheckStep : 1;                                   // 0x0640(0x0004)
	unsigned long                                      bWeaponBob : 1;                                           // 0x0640(0x0004)
	unsigned long                                      bJustLanded : 1;                                          // 0x0640(0x0004)
	unsigned long                                      bLandRecovery : 1;                                        // 0x0640(0x0004)
	unsigned long                                      bJumped : 1;                                              // 0x0640(0x0004)
	unsigned long                                      bPlayingNoAmmoNear : 1;                                   // 0x0640(0x0004)
	unsigned long                                      bPlayNoAmmoEnterSound : 1;                                // 0x0640(0x0004)
	unsigned long                                      bPlayNoAmmoExitSound : 1;                                 // 0x0640(0x0004)
	unsigned long                                      bFadingSlowFall : 1;                                      // 0x0640(0x0004)
	unsigned long                                      bFadingMedFall : 1;                                       // 0x0640(0x0004)
	unsigned long                                      bFadingFastFall : 1;                                      // 0x0640(0x0004)
	unsigned long                                      bFadingTerminalFall : 1;                                  // 0x0640(0x0004)
	float                                              MaxJumpThrowVelocity;                                     // 0x0644(0x0004)
	float                                              JumpDownStopTime;                                         // 0x0648(0x0004)
	float                                              JumpDownDelay;                                            // 0x064C(0x0004)
	struct FVector                                     UpdateForce;                                              // 0x0650(0x000C)
	float                                              LastStepTime;                                             // 0x065C(0x0004)
	float                                              LastOverlapCheckTime;                                     // 0x0660(0x0004)
	float                                              DefaultOverlapRadius;                                     // 0x0664(0x0004)
	float                                              OverlapRadius;                                            // 0x0668(0x0004)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x066C(0x0004) (ExportObject, Component, EditInline)
	float                                              DefaultAirControl;                                        // 0x0670(0x0004)
	float                                              Bob;                                                      // 0x0674(0x0004)
	float                                              LandBob;                                                  // 0x0678(0x0004)
	float                                              JumpBob;                                                  // 0x067C(0x0004)
	float                                              AppliedBob;                                               // 0x0680(0x0004)
	float                                              bobtime;                                                  // 0x0684(0x0004)
	struct FVector                                     WalkBob;                                                  // 0x0688(0x000C)
	class UForceFeedbackWaveform*                      FallingDamageWaveForm;                                    // 0x0694(0x0004)
	struct FName                                       PawnEffectSockets[0x2];                                   // 0x0698(0x0008)
	struct FVector                                     GridLocation;                                             // 0x06A8(0x000C)
	float                                              StoredZVelocity;                                          // 0x06B4(0x0004)
	float                                              FlingVelocity;                                            // 0x06B8(0x0004)
	class UClass*                                      SoundGroupClass;                                          // 0x06BC(0x0004)
	TArray<class AHazardFootstepVolume*>               FootstepVolumes;                                          // 0x06C0(0x000C) (NeedCtorLink)
	TArray<class AHazardFootstepVolume*>               PushVolumes;                                              // 0x06CC(0x000C) (NeedCtorLink)
	TArray<class AHazardDuplicateVolume*>              DuplicateVolumes;                                         // 0x06D8(0x000C) (NeedCtorLink)
	class UAudioComponent*                             LaserSound;                                               // 0x06E4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             NoShootSoundNear;                                         // 0x06E8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             NoShootSoundFar;                                          // 0x06EC(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             NoAmmoSoundNear;                                          // 0x06F0(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             NoAmmoSoundFar;                                           // 0x06F4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             NoAmmoEnterSound;                                         // 0x06F8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             NoAmmoExitSound;                                          // 0x06FC(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             NoAmmoLoseAmmoSound;                                      // 0x0700(0x0004) (ExportObject, Component, EditInline)
	float                                              ClosestNoShoot;                                           // 0x0704(0x0004)
	float                                              ClosestNoAmmo;                                            // 0x0708(0x0004)
	float                                              NoAmmoEntryTime;                                          // 0x070C(0x0004)
	struct FName                                       PreviousSoundMode;                                        // 0x0710(0x0008)
	struct FVector                                     LastLocation;                                             // 0x0718(0x000C)
	float                                              WallTolerance;                                            // 0x0724(0x0004)
	int                                                NumRetries;                                               // 0x0728(0x0004)
	int                                                MaxRetries;                                               // 0x072C(0x0004)
	class UAudioComponent*                             SlowFallingSound;                                         // 0x0730(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             MedFallingSound;                                          // 0x0734(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             FastFallingSound;                                         // 0x0738(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             TerminalFallingSound;                                     // 0x073C(0x0004) (ExportObject, Component, EditInline)
	TEnumAsByte<EHazardPawn_ENeighbourDir>             NeighbourDir;                                             // 0x0740(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardPawn");
		return ptr;
	}


	bool NeedToTurn(const struct FVector& targ);
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData);
	struct FRotator GetViewRotation();
	bool IsFirstPerson();
	bool GetPuttingDownWeapon();
	void SetPuttingDownWeapon(bool bNowPuttingDownWeapon);
	void FiringModeUpdated(class AWeapon* InWeapon, unsigned char InFiringMode, bool bViaReplication);
	class USoundCue* GetWeaponAmbientSound();
	void SetWeaponAmbientSound(class USoundCue* NewAmbientSound);
	class USoundCue* GetPawnAmbientSound();
	void SetPawnAmbientSound(class USoundCue* NewAmbientSound);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void StopFlying();
	void StartFlying();
	struct FVector GetWeaponStartTraceLocation(class AWeapon* CurrentWeapon);
	void AddDefaultInventory();
	void Destroyed();
	TEnumAsByte<EMaterialType> GetMaterialBelowFeet();
	class AHazardFootstepVolume* GetFootstepVolume();
	void PlayFootStepSound(int FootDown);
	struct FString GetDebugName();
	void ClientRestart();
	void EndViewTarget(class APlayerController* PC);
	struct FVector GetPawnViewLocation();
	void UpdateEyeHeight(float DeltaTime);
	void UpdatePushSounds();
	void FaceRotation(const struct FRotator& NewRotation, float DeltaTime);
	struct FString GetScreenName();
	float GetEyeHeight();
	bool StopWeaponFiring();
	bool StopFiring();
	void AddVelocity(const struct FVector& NewVelocity, const struct FVector& HitLocation, class UClass* DamageType, const struct FTraceHitInfo& HitInfo);
	void Falling();
	void TurnOff();
	struct FVector WeaponBob(float BobDamping, float JumpDamping);
	void SpawnDefaultController();
	void SetAnimRateScale(float RateScale);
	void ReattachMesh();
	void PostBeginPlay();
	void PlayFootSounds(class USoundCue* CurrentSound);
	void ActuallyPlayWalkingFootstepSound(int FootDown);
	void ActuallyPlayRunningFootstepSound(int FootDown);
	void PlayJumpingSound();
	void PlayLandingSound();
	bool DoJump(bool bUpdating);
	void DoDoubleJump(bool bUpdating);
	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
	void PlayTeleportEffect(bool bOut, bool bSound);
	bool CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void CheckRecurseStep();
	void FindRecurseFloor();
	void ActivateStepFloors(bool bActive);
	void BaseChange();
	void UpdateFallingSound();
	void UpdateNoAmmoSounds();
	void CheckSnakeStep();
	void FindSnakeFloor();
	void Tick(float DeltaTime);
	void HitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void Bump(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitNormal);
	bool CheatFly();
	bool CheatGhost();
	bool CheatWalk();
	void SetWalking(bool bNewIsWalking);
	void StartFire(unsigned char FireModeNum);
	void Interact();
	bool InteractTest(class AActor** InteractActor);
	void InteractGame();
	bool InteractTestGame(class AActor** InteractActor);
	void BecomeViewTarget(class APlayerController* PC);
	void UpdateGridLocation();
	void UntouchedNoAmmo();
	void TouchedNoAmmo();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardPlayerController
// 0x0218 (0x09CC - 0x07B4)
class AHazardPlayerController : public AUDKPlayerController
{
public:
	float                                              CreditsFOV;                                               // 0x07B4(0x0004)
	unsigned long                                      bShowingCredits : 1;                                      // 0x07B8(0x0004)
	unsigned long                                      bBlendingCredits : 1;                                     // 0x07B8(0x0004)
	unsigned long                                      bChangedTranslationThreshold : 1;                         // 0x07B8(0x0004)
	unsigned long                                      bNoCrosshair : 1;                                         // 0x07B8(0x0004)
	unsigned long                                      bSimpleCrosshair : 1;                                     // 0x07B8(0x0004)
	unsigned long                                      bCanReturn : 1;                                           // 0x07B8(0x0004)
	unsigned long                                      bExiting : 1;                                             // 0x07B8(0x0004)
	unsigned long                                      bScreenInitialized : 1;                                   // 0x07B8(0x0004)
	unsigned long                                      bInChamber : 1;                                           // 0x07B8(0x0004)
	unsigned long                                      bTransitioning : 1;                                       // 0x07B8(0x0004)
	unsigned long                                      bCapturing : 1;                                           // 0x07B8(0x0004)
	unsigned long                                      bAlternate : 1;                                           // 0x07B8(0x0004)
	unsigned long                                      bAboutToJump : 1;                                         // 0x07B8(0x0004)
	unsigned long                                      bCheckPortals : 1;                                        // 0x07B8(0x0004)
	float                                              CreditsFadeTime;                                          // 0x07BC(0x0004)
	float                                              CreditsBlendAmount;                                       // 0x07C0(0x0004)
	float                                              CreditsBlendTimeToGo;                                     // 0x07C4(0x0004)
	class ASceneCapture2DActor*                        CreditsCamera;                                            // 0x07C8(0x0004)
	class USoundCue*                                   UpgradeSound;                                             // 0x07CC(0x0004)
	float                                              LastUpgradeSoundTime;                                     // 0x07D0(0x0004)
	TEnumAsByte<EWeaponHand>                           WeaponHand;                                               // 0x07D4(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	class UMaterialEffect*                             Linework;                                                 // 0x07D8(0x0004)
	class UDrawFrustumComponent*                       DrawFrustum;                                              // 0x07DC(0x0004) (ExportObject, Component, EditInline)
	float                                              TransitionTime;                                           // 0x07E0(0x0004)
	float                                              ExitHoldTime;                                             // 0x07E4(0x0004)
	float                                              ExitPressTime;                                            // 0x07E8(0x0004)
	class UMaterialInstanceConstant*                   LineworkMaterialInstance;                                 // 0x07EC(0x0004) (Transient)
	float                                              BlendAmount;                                              // 0x07F0(0x0004)
	float                                              LastTeleportTime;                                         // 0x07F4(0x0004)
	float                                              LastCaptureTime;                                          // 0x07F8(0x0004)
	struct FRotator                                    InitialRotation;                                          // 0x07FC(0x000C)
	struct FVector                                     InitialLocation;                                          // 0x0808(0x000C)
	struct FVector                                     ChamberLocation;                                          // 0x0814(0x000C)
	struct FRotator                                    ChamberRotation;                                          // 0x0820(0x000C)
	class ASceneCapture2DActor*                        HoloCapture;                                              // 0x082C(0x0004)
	struct FVector2D                                   InitialTextureSize;                                       // 0x0830(0x0008)
	float                                              TextureScale;                                             // 0x0838(0x0004)
	class ASceneCapture2DActor*                        WorldCapture;                                             // 0x083C(0x0004)
	class ASceneCapture2DActor*                        UnlitCapture;                                             // 0x0840(0x0004)
	class ASceneCapture2DActor*                        WireframeCapture;                                         // 0x0844(0x0004)
	class UPostProcessChain*                           UnlitPostProcess;                                         // 0x0848(0x0004)
	class UPostProcessChain*                           WireframePostProcess;                                     // 0x084C(0x0004)
	float                                              UnlitFarPlane;                                            // 0x0850(0x0004)
	float                                              WireframeFarPlane;                                        // 0x0854(0x0004)
	float                                              CaptureRadius;                                            // 0x0858(0x0004)
	class AActor*                                      CurrentRoom;                                              // 0x085C(0x0004)
	class AActor*                                      OtherRoom;                                                // 0x0860(0x0004)
	class UMaterialInstanceConstant*                   WorldMaterial;                                            // 0x0864(0x0004)
	class UMaterialInstanceConstant*                   HolochamberMaterial;                                      // 0x0868(0x0004)
	class UMaterialInstanceConstant*                   UniverseMaterial;                                         // 0x086C(0x0004)
	float                                              HolochamberVolume;                                        // 0x0870(0x0004)
	class AHazardMapNode*                              LastMapNode;                                              // 0x0874(0x0004)
	float                                              JumpTime;                                                 // 0x0878(0x0004)
	struct FVector                                     CamLoc;                                                   // 0x087C(0x000C)
	struct FRotator                                    CamRot;                                                   // 0x0888(0x000C)
	struct FVector                                     Camntl;                                                   // 0x0894(0x000C)
	struct FVector                                     Camntr;                                                   // 0x08A0(0x000C)
	struct FVector                                     Camnbl;                                                   // 0x08AC(0x000C)
	struct FVector                                     Camnbr;                                                   // 0x08B8(0x000C)
	struct FVector                                     Camftl;                                                   // 0x08C4(0x000C)
	struct FVector                                     Camftr;                                                   // 0x08D0(0x000C)
	struct FVector                                     Camfbl;                                                   // 0x08DC(0x000C)
	struct FVector                                     Camfbr;                                                   // 0x08E8(0x000C)
	float                                              CamnearD;                                                 // 0x08F4(0x0004)
	float                                              CamfarD;                                                  // 0x08F8(0x0004)
	float                                              Camratio;                                                 // 0x08FC(0x0004)
	float                                              Camangle;                                                 // 0x0900(0x0004)
	float                                              Camtang;                                                  // 0x0904(0x0004)
	float                                              Camnw;                                                    // 0x0908(0x0004)
	float                                              Camnh;                                                    // 0x090C(0x0004)
	float                                              Camfw;                                                    // 0x0910(0x0004)
	float                                              Camfh;                                                    // 0x0914(0x0004)
	struct FVector                                     CamDir;                                                   // 0x0918(0x000C)
	struct FVector                                     Camnc;                                                    // 0x0924(0x000C)
	struct FVector                                     Camfc;                                                    // 0x0930(0x000C)
	struct FVector                                     CamX;                                                     // 0x093C(0x000C)
	struct FVector                                     CamY;                                                     // 0x0948(0x000C)
	struct FVector                                     CamZ;                                                     // 0x0954(0x000C)
	struct FVector2D                                   CamViewportSize;                                          // 0x0960(0x0008)
	struct FHazardPlane                                ViewFrustum[0x6];                                         // 0x0968(0x0010)
	class AHazardGame*                                 HazardGame;                                               // 0x09C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardPlayerController");
		return ptr;
	}


	void TeamTalk();
	void Talk();
	void DrawHUD(class AHUD* H);
	void UpdateMaterialResolutionsConsoles(class UMaterialInstanceConstant* CurrentMaterial, const struct FVector2D& ViewportSize);
	void UpdateMaterialResolutionsPC(class UMaterialInstanceConstant* CurrentMaterial, const struct FVector2D& ViewportSize, class UTexture* NewTexture);
	void UpdateResolutionsConsoles();
	void UpdateResolutionsPC();
	void UpdateScreenMaterialResolutions();
	struct FString ConsoleCommand(const struct FString& Command, bool bWriteToLog);
	void StopTriFire(unsigned char FireModeNum);
	void StartTriFire(unsigned char FireModeNum);
	void StopFire(unsigned char FireModeNum);
	void StartFire(unsigned char FireModeNum);
	void HandlePickup(class AInventory* Inv);
	void ShowMenu();
	void BlendCredits(float DeltaTime);
	void ShowCredits();
	void NotifyChamberTransition(bool bEnteringChamber);
	void SetFPS(float FrameRate);
	void CancelExit();
	void UpdateChamberCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV);
	void UpdateCreditsCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV);
	void UpdateWorldCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV);
	void DrawCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV);
	void CalculateViewFrustum(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float FOV);
	bool ObjectVisible(class AHazardPortal* TestObject);
	bool FacingPlayer(class AHazardPortal* TestObject);
	int TestIntersects(class AHazardPortal* TestObject);
	bool IntersectsPlane(const struct FVector& N, const struct FVector& P0, const struct FVector& P1, const struct FVector& V0, class AHazardPortal* TestObject);
	bool PointWithinFrustum(const struct FVector& Point);
	float DistanceToPlane(const struct FHazardPlane& TestPlane, const struct FVector& Point);
	struct FHazardPlane CreatePlane(const struct FVector& Point1, const struct FVector& Point2, const struct FVector& Point3);
	void ResetGame();
	void ToggleScreenShotMode();
	void PlayerTick(float DeltaTime);
	void HoloJump(const struct FVector& CurrentRoomLocation, const struct FRotator& CurrentRoomRotation, const struct FVector& OtherRoomLocation, const struct FRotator& OtherRoomRotation);
	void SetupScreen();
	void UpdateRotation(float DeltaTime);
	void OnSetSoundMode(class USeqAct_SetSoundMode* Action);
};


// Class Hazard.HazardBlackHole
// 0x00CD (0x02A1 - 0x01D4)
class AHazardBlackHole : public AActor
{
public:
	class AHazardBlackTileEnding*                      EndingTile;                                               // 0x01D4(0x0004)
	class UStaticMeshComponent*                        SpinningMesh;                                             // 0x01D8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        RingMesh;                                                 // 0x01DC(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        PenroseTriangle;                                          // 0x01E0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        StandardTriangle;                                         // 0x01E4(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<class UHazardBlackHoleSphereMesh*>          SphereMeshes;                                             // 0x01E8(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UHazardBlackHoleSphereMesh*>          ActiveMeshes;                                             // 0x01F4(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	class UStaticMeshComponent*                        GuideMesh;                                                // 0x0200(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        BlackHoleMesh;                                            // 0x0204(0x0004) (Edit, ExportObject, Component, EditInline)
	class UPointLightComponent*                        BlackHoleLight;                                           // 0x0208(0x0004) (ExportObject, Component, EditInline)
	class UPointLightComponent*                        BlackHoleExplosionLight;                                  // 0x020C(0x0004) (ExportObject, Component, EditInline)
	float                                              DefaultLightRadius;                                       // 0x0210(0x0004)
	class UStaticMeshComponent*                        BlackDome;                                                // 0x0214(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        CollisionRing;                                            // 0x0218(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        CollisionRing2;                                           // 0x021C(0x0004) (ExportObject, Component, EditInline)
	unsigned long                                      bActive : 1;                                              // 0x0220(0x0004)
	unsigned long                                      bShrinkingSpinningMesh : 1;                               // 0x0220(0x0004)
	unsigned long                                      bSpinning : 1;                                            // 0x0220(0x0004)
	unsigned long                                      bAccelerating : 1;                                        // 0x0220(0x0004)
	unsigned long                                      bSpawningSphere : 1;                                      // 0x0220(0x0004)
	unsigned long                                      bSpawnedSphere : 1;                                       // 0x0220(0x0004)
	float                                              DefaultSpinningMeshScale;                                 // 0x0224(0x0004)
	struct FRotator                                    DefaultRingRotation;                                      // 0x0228(0x000C)
	struct FRotator                                    DefaultTriangleRotation;                                  // 0x0234(0x000C)
	float                                              DefaultRingScale;                                         // 0x0240(0x0004)
	float                                              DefaultTriangleScale;                                     // 0x0244(0x0004)
	struct FVector                                     SphereTranslation;                                        // 0x0248(0x000C)
	float                                              DefaultBlackHoleScale;                                    // 0x0254(0x0004)
	int                                                NumUpdating;                                              // 0x0258(0x0004)
	int                                                CurrentUpdating;                                          // 0x025C(0x0004)
	float                                              LastUpdateTime;                                           // 0x0260(0x0004)
	float                                              InterpTime;                                               // 0x0264(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0268(0x0004)
	float                                              BlendAmount;                                              // 0x026C(0x0004)
	float                                              NumToKill;                                                // 0x0270(0x0004)
	float                                              KillDelay;                                                // 0x0274(0x0004)
	float                                              SpinExponent;                                             // 0x0278(0x0004)
	float                                              SpinAmount;                                               // 0x027C(0x0004)
	float                                              SpinBlendAmount;                                          // 0x0280(0x0004)
	float                                              SpinBlendTimeToGo;                                        // 0x0284(0x0004)
	float                                              SpinInterpTime;                                           // 0x0288(0x0004)
	float                                              ExplodeExponent;                                          // 0x028C(0x0004)
	float                                              ExplodeAmount;                                            // 0x0290(0x0004)
	float                                              ExplodeBlendAmount;                                       // 0x0294(0x0004)
	float                                              ExplodeBlendTimeToGo;                                     // 0x0298(0x0004)
	float                                              ExplodeInterpTime;                                        // 0x029C(0x0004)
	TEnumAsByte<EHazardBlackHole_EMode>                Mode;                                                     // 0x02A0(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardBlackHole");
		return ptr;
	}


	void SpinDown(bool bAccelerate, float newSpinInterpTime, float NumRotations, float Exponent);
	void SpinUp(bool bAccelerate, float newSpinInterpTime, float NumRotations, float Exponent);
	void UpdateSpin(float DeltaTime);
	void UpdateExplosion(float DeltaTime);
	void Explode();
	void Tick(float DeltaTime);
	void UpdateSpinningMesh(float DeltaTime);
	void UpdateOpening(float DeltaTime);
	void UpdateActive(float DeltaTime);
	void UpdateDying(float DeltaTime);
	void UpdateShrinkingSpinningMesh(float DeltaTime);
	void ActivateBlackHole();
	void ActivateBlackHoleSphere();
	void ShowRing();
	void TriggerFinalSequence();
	void PostBeginPlay();
};


// Class Hazard.HazardBlackHoleSphereMesh
// 0x0035 (0x0285 - 0x0250)
class UHazardBlackHoleSphereMesh : public UStaticMeshComponent
{
public:
	float                                              InterpTime;                                               // 0x0250(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0254(0x0004)
	float                                              BlendAmount;                                              // 0x0258(0x0004)
	struct FVector                                     DefaultScale3D;                                           // 0x025C(0x000C)
	struct FVector                                     DefaultLocation;                                          // 0x0268(0x000C)
	struct FRotator                                    DefaultRotation;                                          // 0x0274(0x000C)
	class AHazardBlackHole*                            Parent;                                                   // 0x0280(0x0004)
	TEnumAsByte<EHazardBlackHoleSphereMesh_EMode>      Mode;                                                     // 0x0284(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardBlackHoleSphereMesh");
		return ptr;
	}


	void Tick(float DeltaTime);
	void UpdateDying(float DeltaTime);
	void Kill();
	void UpdateActivating(float DeltaTime);
	void Activate();
	void Initialize();
};


// Class Hazard.HazardBlackTileEnding
// 0x00B8 (0x028C - 0x01D4)
class AHazardBlackTileEnding : public AActor
{
public:
	struct FVector                                     ClosestDuplicate;                                         // 0x01D4(0x000C)
	class UStaticMeshComponent*                        BlackMesh;                                                // 0x01E0(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<class UStaticMeshComponent*>                TrailMeshes;                                              // 0x01E4(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UStaticMeshComponent*>                Duplicates;                                               // 0x01F0(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UStaticMeshComponent*>                DuplicateTrailMeshes;                                     // 0x01FC(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UHazardEndingLightComponent*>         DuplicateLightShafts;                                     // 0x0208(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	unsigned long                                      bDuplicatesSetup : 1;                                     // 0x0214(0x0004)
	unsigned long                                      bDisableWhispers : 1;                                     // 0x0214(0x0004) (Edit)
	unsigned long                                      bDisableLightShafts : 1;                                  // 0x0214(0x0004) (Edit)
	unsigned long                                      bGlobalScale : 1;                                         // 0x0214(0x0004) (Edit)
	unsigned long                                      bOpen : 1;                                                // 0x0214(0x0004)
	unsigned long                                      bFading : 1;                                              // 0x0214(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x0214(0x0004)
	unsigned long                                      bTicking : 1;                                             // 0x0214(0x0004)
	class UPointLightComponent*                        LightShaft;                                               // 0x0218(0x0004) (Edit, ExportObject, Component, EditInline)
	class UAudioComponent*                             Whispers;                                                 // 0x021C(0x0004) (Edit, ExportObject, Component, EditInline)
	int                                                NumTrails;                                                // 0x0220(0x0004) (Edit)
	float                                              CurrentPitch;                                             // 0x0224(0x0004)
	float                                              MaxOrbitOffset;                                           // 0x0228(0x0004)
	struct FVector                                     CurrentVelocity;                                          // 0x022C(0x000C)
	struct FVector                                     MaxVelocity;                                              // 0x0238(0x000C)
	struct FVector                                     Acceleration;                                             // 0x0244(0x000C)
	float                                              Threshold;                                                // 0x0250(0x0004)
	float                                              BlendAmount;                                              // 0x0254(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0258(0x0004)
	float                                              InterpTime;                                               // 0x025C(0x0004)
	float                                              FadeBlendAmount;                                          // 0x0260(0x0004)
	float                                              FadeBlendTimeToGo;                                        // 0x0264(0x0004)
	float                                              FadeInterpTime;                                           // 0x0268(0x0004) (Edit)
	float                                              OriginalRadius;                                           // 0x026C(0x0004)
	float                                              OriginalScale;                                            // 0x0270(0x0004)
	struct FVector                                     BoxExtent;                                                // 0x0274(0x000C)
	struct FVector                                     StoredDifference;                                         // 0x0280(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardBlackTileEnding");
		return ptr;
	}


	void SetFadeAmount(float BlendValue);
	void SetBlendAmount(float BlendValue);
	void UpdateMovement(float DeltaTime);
	void UpdateFade(float DeltaTime);
	void FadeTo(float interpValue);
	void InterpolateTo(float interpValue);
	void DoClose();
	void DoOpen();
	void UpdateTrailMeshes(float DeltaTime);
	void UpdateDuplicates(const struct FVector& NewTranslation);
	void SetupDuplicates();
	void Tick(float DeltaTime);
	void SetActive(bool bNewActive);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void PostBeginPlay();
};


// Class Hazard.HazardSeqEvent_BlackHoleTriggered
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_BlackHoleTriggered : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_BlackHoleTriggered");
		return ptr;
	}

};


// Class Hazard.HazardBlackTile
// 0x00AC (0x0280 - 0x01D4)
class AHazardBlackTile : public AActor
{
public:
	unsigned long                                      bWorldSucked : 1;                                         // 0x01D4(0x0004)
	unsigned long                                      bEmitterActive : 1;                                       // 0x01D4(0x0004)
	unsigned long                                      bEndTile : 1;                                             // 0x01D4(0x0004) (Edit)
	unsigned long                                      bSuckWorldTile : 1;                                       // 0x01D4(0x0004) (Edit)
	unsigned long                                      bFadingShrinkSound : 1;                                   // 0x01D4(0x0004)
	unsigned long                                      bDisableWhispers : 1;                                     // 0x01D4(0x0004) (Edit)
	unsigned long                                      bDisableLightShafts : 1;                                  // 0x01D4(0x0004) (Edit)
	unsigned long                                      bGlobalScale : 1;                                         // 0x01D4(0x0004) (Edit)
	unsigned long                                      bOpen : 1;                                                // 0x01D4(0x0004)
	unsigned long                                      bFading : 1;                                              // 0x01D4(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x01D4(0x0004)
	unsigned long                                      bTicking : 1;                                             // 0x01D4(0x0004)
	class AEmitterSpawnable*                           ShrinkEmitter;                                            // 0x01D8(0x0004)
	class UParticleSystem*                             ShrinkParticles;                                          // 0x01DC(0x0004)
	float                                              ShrinkTimer;                                              // 0x01E0(0x0004)
	TArray<class UStaticMeshComponent*>                ShrinkWallMeshes;                                         // 0x01E4(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UStaticMeshComponent*>                ShrinkRoofMeshes;                                         // 0x01F0(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	class UStaticMeshComponent*                        BlackMesh;                                                // 0x01FC(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        BlackShimmerMesh;                                         // 0x0200(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<class UStaticMeshComponent*>                TrailMeshes;                                              // 0x0204(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UStaticMeshComponent*>                TrailShimmerMeshes;                                       // 0x0210(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	class UPointLightComponent*                        LightShaft;                                               // 0x021C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UAudioComponent*                             Whispers;                                                 // 0x0220(0x0004) (Edit, ExportObject, Component, EditInline)
	class UAudioComponent*                             ShrinkSound;                                              // 0x0224(0x0004) (Edit, ExportObject, Component, EditInline)
	int                                                NumTrails;                                                // 0x0228(0x0004) (Edit)
	float                                              CurrentPitch;                                             // 0x022C(0x0004)
	float                                              MaxOrbitOffset;                                           // 0x0230(0x0004)
	struct FVector                                     CurrentVelocity;                                          // 0x0234(0x000C)
	struct FVector                                     MaxVelocity;                                              // 0x0240(0x000C)
	struct FVector                                     Acceleration;                                             // 0x024C(0x000C)
	float                                              Threshold;                                                // 0x0258(0x0004)
	float                                              BlendAmount;                                              // 0x025C(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0260(0x0004)
	float                                              InterpTime;                                               // 0x0264(0x0004)
	float                                              FadeBlendAmount;                                          // 0x0268(0x0004)
	float                                              FadeBlendTimeToGo;                                        // 0x026C(0x0004)
	float                                              FadeInterpTime;                                           // 0x0270(0x0004) (Edit)
	float                                              OriginalRadius;                                           // 0x0274(0x0004)
	float                                              OriginalScale;                                            // 0x0278(0x0004)
	int                                                NumHits;                                                  // 0x027C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardBlackTile");
		return ptr;
	}


	void SetFadeAmount(float BlendValue);
	void SetBlendAmount(float BlendValue);
	void UpdateMovement(float DeltaTime);
	void UpdateFade(float DeltaTime);
	void FadeTo(float interpValue);
	void InterpolateTo(float interpValue);
	void DoClose();
	void DoOpen();
	void UpdateTrailMeshes(float DeltaTime);
	void Tick(float DeltaTime);
	void SetActive(bool bNewActive);
	void PostBeginPlay();
	void SetupMirageMeshes();
	void ShrinkMirage(float DeltaTime);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void KillGunTile(float NumToKill);
};


// Class Hazard.HazardTileComponent
// 0x01E4 (0x0434 - 0x0250)
class UHazardTileComponent : public UStaticMeshComponent
{
public:
	class AHazardDuplicateVolume*                      DuplicateVolume;                                          // 0x0250(0x0004)
	TArray<class UHazardDuplicateComponent*>           DuplicateComponents;                                      // 0x0254(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	unsigned long                                      bRegisteredActive : 1;                                    // 0x0260(0x0004)
	unsigned long                                      bTileGettingKilled : 1;                                   // 0x0260(0x0004)
	unsigned long                                      bRegenerated : 1;                                         // 0x0260(0x0004)
	unsigned long                                      bTraceKillOnClose : 1;                                    // 0x0260(0x0004)
	unsigned long                                      bLoopCheckOnClose : 1;                                    // 0x0260(0x0004)
	unsigned long                                      bDestroying : 1;                                          // 0x0260(0x0004)
	unsigned long                                      bNeighboursInSync : 1;                                    // 0x0260(0x0004)
	unsigned long                                      bTimerActive : 1;                                         // 0x0260(0x0004)
	unsigned long                                      bInterpolating : 1;                                       // 0x0260(0x0004)
	unsigned long                                      bRunCompoundRecursion : 1;                                // 0x0260(0x0004)
	unsigned long                                      bDestroyOnOpen : 1;                                       // 0x0260(0x0004)
	unsigned long                                      bModified : 1;                                            // 0x0260(0x0004)
	unsigned long                                      bShot : 1;                                                // 0x0260(0x0004)
	unsigned long                                      bDrawn : 1;                                               // 0x0260(0x0004)
	unsigned long                                      bSnaked : 1;                                              // 0x0260(0x0004)
	unsigned long                                      bShrunk : 1;                                              // 0x0260(0x0004)
	unsigned long                                      bGrown : 1;                                               // 0x0260(0x0004)
	unsigned long                                      bLooped : 1;                                              // 0x0260(0x0004)
	TArray<class AHazardLaser*>                        TouchingLasers;                                           // 0x0264(0x000C) (NeedCtorLink)
	TArray<struct FRecurseConstructContainer>          SortedRecursePoints;                                      // 0x0270(0x000C) (Component, NeedCtorLink)
	int                                                totalNumRecursePoints;                                    // 0x027C(0x0004)
	int                                                NumClusteredNeighbours;                                   // 0x0280(0x0004)
	TArray<struct FRecursionPoint>                     RecursionPoints;                                          // 0x0284(0x000C) (Component, NeedCtorLink)
	TArray<struct FLoopBox>                            ProcessedBoxes;                                           // 0x0290(0x000C) (Component, NeedCtorLink)
	TArray<int>                                        AutoLoopDirections;                                       // 0x029C(0x000C) (NeedCtorLink)
	float                                              LastKillCheckTime;                                        // 0x02A8(0x0004)
	TArray<struct FVector>                             LoopTestPoints;                                           // 0x02AC(0x000C) (NeedCtorLink)
	TArray<struct FEntryPointInfo>                     EntryPoints;                                              // 0x02B8(0x000C) (Component, NeedCtorLink)
	struct FLoopBox                                    TempBoxLoop;                                              // 0x02C4(0x003C) (Component)
	TArray<struct FTestedLoopLocation>                 TestedLocations;                                          // 0x0300(0x000C) (NeedCtorLink)
	float                                              LoopTimeStamp;                                            // 0x030C(0x0004)
	class AHazardGame*                                 HazardGame;                                               // 0x0310(0x0004)
	class AWorldInfo*                                  WorldInfo;                                                // 0x0314(0x0004)
	class AHazardTile*                                 Parent;                                                   // 0x0318(0x0004)
	float                                              LoopDetectionTimer;                                       // 0x031C(0x0004)
	float                                              CloseTimer;                                               // 0x0320(0x0004)
	float                                              OpenTimer;                                                // 0x0324(0x0004)
	float                                              ConstructTimer;                                           // 0x0328(0x0004)
	float                                              SnakeTimer;                                               // 0x032C(0x0004)
	float                                              RecurseTimeStamp;                                         // 0x0330(0x0004)
	float                                              FinishedCloseTimeStamp;                                   // 0x0334(0x0004)
	float                                              RecurseCoolDown;                                          // 0x0338(0x0004)
	float                                              CompoundTimeStamp;                                        // 0x033C(0x0004)
	int                                                CancelledSearches[0x6];                                   // 0x0340(0x0004)
	float                                              BlendAmount;                                              // 0x0358(0x0004)
	float                                              BlendTimeToGo;                                            // 0x035C(0x0004)
	float                                              StayOpenTime;                                             // 0x0360(0x0004)
	float                                              DelayTime;                                                // 0x0364(0x0004)
	struct FVector                                     LastGridLocation;                                         // 0x0368(0x000C)
	TEnumAsByte<EHazardTile_EGlobalCollision>          GlobalCollision;                                          // 0x0374(0x0001)
	TEnumAsByte<EHazardTile_ECollisionSet>             CollisionSet;                                             // 0x0375(0x0001)
	TEnumAsByte<EHazardStepTileComponent_EMoveState>   MoveState;                                                // 0x0376(0x0001)
	TEnumAsByte<EHazardTileComponent_ENeighbourDir>    NeighbourDir;                                             // 0x0377(0x0001) (Const)
	class UMaterialInstanceConstant*                   HazardSkin;                                               // 0x0378(0x0004)
	struct FVector                                     CompoundRecurseLocation;                                  // 0x037C(0x000C)
	float                                              CreationTime;                                             // 0x0388(0x0004)
	TArray<class UHazardTileComponent*>                ClusteredNeighbours;                                      // 0x038C(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	struct UHazardTileComponent_FClusteredAxis         ClusteredAxisNeighbours[0x6];                             // 0x0398(0x000C) (Component, NeedCtorLink)
	float                                              TimeStamp;                                                // 0x03E0(0x0004)
	int                                                NumClusters;                                              // 0x03E4(0x0004)
	struct FVector                                     OriginalTranslation;                                      // 0x03E8(0x000C)
	class USoundCue*                                   SpawnSound;                                               // 0x03F4(0x0004)
	class USoundCue*                                   DestroySound;                                             // 0x03F8(0x0004)
	class USoundCue*                                   DestroyCyanSound;                                         // 0x03FC(0x0004)
	class USoundCue*                                   SnakeSound;                                               // 0x0400(0x0004)
	class USoundCue*                                   DisintegrateSound;                                        // 0x0404(0x0004)
	class USoundCue*                                   MaterializeSound;                                         // 0x0408(0x0004)
	class UStaticMeshComponent*                        RenderDummy;                                              // 0x040C(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   RenderMaterial;                                           // 0x0410(0x0004)
	struct FVector                                     MoveTranslation;                                          // 0x0414(0x000C)
	struct FRotator                                    MoveRotation;                                             // 0x0420(0x000C)
	float                                              InterpTime;                                               // 0x042C(0x0004)
	int                                                Recursions;                                               // 0x0430(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardTileComponent");
		return ptr;
	}


	void UpdateDuplicates();
	void SpawnDuplicate(class AHazardDuplicateVolume* NewVolume);
	void RemoveDuplicates();
	void FindFurthestCorners(const struct FVector& SearchPoint, float DistanceToPoint);
	void BruteForceFurthestPoints();
	int FindFurthestPoints(const struct FVector& SearchPoint);
	int RecurseDestruct(const struct FVector& SearchPoint);
	bool RecurseConstruct(const struct FVector& StartLocation, int* MinConstructDepth);
	struct FRecurseConstructPoint GetNextRecursePoint(int TestIndex);
	void AddRecurseConstructPoint(const struct FRecurseConstructPoint& NewConstructPoint);
	struct FVector GetRecurseLocation(const struct FVector& StartLocation, const struct FVector& CancelledDirection);
	struct FVector FindClosestTile(const struct FVector& SearchPoint, bool bUseCameraDistance);
	bool EqualClusters(class UHazardTileComponent* FirstCluster, class UHazardTileComponent* SecondCluster, const struct FVector& CancelledDirection);
	bool JoinClusters(int Axis, int I);
	void MergeClusters();
	class UHazardTileComponent* FindLoopedClusters(int PlaneAxis, int* StartDirection, struct FVector* LastLoopLocation);
	struct FName VectorToName(const struct FVector& InVect);
	bool FindLoop(float NewLoopTimeStamp, int PlaneAxis, const struct FVector& StartLocation);
	void LoopDetection(float NewLoopTimeStamp, const struct FVector& StartLocation);
	void FindLoops();
	void LatentSnakeToPoint();
	void EnableTimer();
	void SnakeToPoint(const struct FVector& EndPoint);
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	bool CompoundRecursion();
	class UHazardTileComponent* GetNeighbourFromAxis(int Index);
	void Recurse();
	void FindAxisClusters(const struct FVector& CancelledDirection);
	void FindClusteredNeighbours();
	void VoidClusteredNeighbours();
	void SplitCluster(const struct FVector& SplitLocation);
	class UHazardTileComponent* SplitAxisCluster(const struct FVector& SplitLocation, const struct FVector& SplitDirection);
	bool DoesContainPoint(const struct FVector& SearchLocation);
	int GetNumClusters();
	void SetNumClusters();
	void SetScale3D(const struct FVector& NewScale);
	bool TimerFinished(float* Time);
	void CheckTimers();
	void KillBlockingTiles();
	void FindLasers();
	void FinishedInterpolation();
	void SetBlendAmount(float BlendValue);
	void SetGlobalCollision(bool bEnabled);
	void UpdateGlobalCollision();
	void FullMerge();
	void UpdateMovement(float DeltaTime);
	void UpdateWhiteSounds();
	void TestMovePawn(const struct FVector& MoveDistance, float DeltaTime);
	struct FVector WillHitGeometry(const struct FVector& TestLocation, const struct FVector& MoveDirection);
	void ForceMovePlayer();
	void InterpolateTo(const struct FVector& NewLocation, const struct FRotator& NewRotation, float interpValue);
	void UnregisterActive();
	void RegisterActive();
	void DoClose();
	void SpawnRenderDummy();
	void SpawnDrawnTile(const struct FVector& SpawnLocation);
	void SpawnShotTile(const struct FVector& HitLocation);
	void DoOpen();
	void FinishedOpen();
	void FinishedClose();
	void KillRenderDummy();
	void Close();
	void Wait();
	void Open();
	void Tick(float DeltaTime);
	class UMaterialInstanceConstant* CreateAndSetNewMaterialInstanceConstant(int ElementIndex, class UMaterialInterface* NewMaterial);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void InitializeTile(class AHazardTile* NewOwner);
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardWeap_TileGun
// 0x0358 (0x063C - 0x02E4)
class AHazardWeap_TileGun : public AUDKWeapon
{
public:
	class AHazardBlackTileProjectile*                  BlackTileProjectile;                                      // 0x02E4(0x0004)
	class USoundCue*                                   MisfireNegative;                                          // 0x02E8(0x0004)
	class USoundCue*                                   MisfirePositive;                                          // 0x02EC(0x0004)
	float                                              LastMisfireNegativeTime;                                  // 0x02F0(0x0004)
	float                                              MisfireNegativeDelay;                                     // 0x02F4(0x0004)
	TArray<struct FVector>                             LastProjectedTracePoints;                                 // 0x02F8(0x000C) (NeedCtorLink)
	struct FVector                                     LastProjectedEndPoint;                                    // 0x0304(0x000C)
	struct FVector                                     LastProjectedStartPoint;                                  // 0x0310(0x000C)
	struct FVector                                     LastProjectedTileLocation;                                // 0x031C(0x000C)
	struct FVector                                     LastProjectedTileSize;                                    // 0x0328(0x000C)
	struct FVector                                     TempSnakeHeadLocation;                                    // 0x0334(0x000C)
	float                                              LastSnakeHeadUpdateTime;                                  // 0x0340(0x0004)
	class UStaticMeshComponent*                        XYPlane;                                                  // 0x0344(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        XZPlane;                                                  // 0x0348(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        YZPlane;                                                  // 0x034C(0x0004) (ExportObject, Component, EditInline)
	unsigned long                                      bXYActive : 1;                                            // 0x0350(0x0004)
	unsigned long                                      bXZActive : 1;                                            // 0x0350(0x0004)
	unsigned long                                      bYZActive : 1;                                            // 0x0350(0x0004)
	unsigned long                                      bShouldStopFire : 1;                                      // 0x0350(0x0004)
	unsigned long                                      bSimpleCalculate : 1;                                     // 0x0350(0x0004)
	unsigned long                                      bFadingCut : 1;                                           // 0x0350(0x0004)
	unsigned long                                      bFadingDraw : 1;                                          // 0x0350(0x0004)
	unsigned long                                      bFadingGrow : 1;                                          // 0x0350(0x0004)
	unsigned long                                      bFadingShrink : 1;                                        // 0x0350(0x0004)
	unsigned long                                      bInstantFire : 1;                                         // 0x0350(0x0004)
	unsigned long                                      bBadProjection : 1;                                       // 0x0350(0x0004)
	unsigned long                                      bSnaking : 1;                                             // 0x0350(0x0004)
	unsigned long                                      bPositive : 1;                                            // 0x0350(0x0004)
	unsigned long                                      bNegative : 1;                                            // 0x0350(0x0004)
	unsigned long                                      bGroupFire : 1;                                           // 0x0350(0x0004)
	unsigned long                                      bPlayFire : 1;                                            // 0x0350(0x0004)
	unsigned long                                      bOverloaded : 1;                                          // 0x0350(0x0004)
	unsigned long                                      bProjectionBlocked : 1;                                   // 0x0350(0x0004)
	unsigned long                                      bWindingUp : 1;                                           // 0x0350(0x0004)
	unsigned long                                      bPositiveSpin : 1;                                        // 0x0350(0x0004)
	float                                              DistanceMultiplier;                                       // 0x0354(0x0004)
	float                                              LastRedrawTime;                                           // 0x0358(0x0004)
	int                                                LastNeighbourIndex;                                       // 0x035C(0x0004)
	float                                              DefaultDistanceMultiplier;                                // 0x0360(0x0004)
	float                                              LongDistanceMultiplier;                                   // 0x0364(0x0004)
	float                                              CachedSensitivity;                                        // 0x0368(0x0004)
	class UMaterialInstanceConstant*                   GunMaterial;                                              // 0x036C(0x0004)
	struct FLinearColor                                DesiredTileColour;                                        // 0x0370(0x0010)
	struct FLinearColor                                DesiredColour;                                            // 0x0380(0x0010)
	struct FLinearColor                                CurrentColour;                                            // 0x0390(0x0010)
	struct FLinearColor                                StartBlendColour;                                         // 0x03A0(0x0010)
	float                                              BlendTimeToGo;                                            // 0x03B0(0x0004)
	float                                              BlendTime;                                                // 0x03B4(0x0004)
	float                                              PulseSpeed;                                               // 0x03B8(0x0004)
	float                                              FadeMultiplier;                                           // 0x03BC(0x0004)
	class UAudioComponent*                             LinkHitSound;                                             // 0x03C0(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             SnakeBeamSound;                                           // 0x03C4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             FillSound;                                                // 0x03C8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             GrowSound;                                                // 0x03CC(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             ShrinkSound;                                              // 0x03D0(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             DrawSound;                                                // 0x03D4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             CutSound;                                                 // 0x03D8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             CutSoundLooped;                                           // 0x03DC(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        HighlightCube;                                            // 0x03E0(0x0004) (ExportObject, Component, EditInline)
	float                                              LastCutSoundTime;                                         // 0x03E4(0x0004)
	float                                              LastDrawSoundTime;                                        // 0x03E8(0x0004)
	float                                              LastDrawLoopTime;                                         // 0x03EC(0x0004)
	struct FVector                                     ClosestDrawLoopLocation;                                  // 0x03F0(0x000C)
	float                                              LastCutLoopTime;                                          // 0x03FC(0x0004)
	struct FVector                                     ClosestCutLoopLocation;                                   // 0x0400(0x000C)
	float                                              LastGrowTime;                                             // 0x040C(0x0004)
	struct FVector                                     ClosestGrowLocation;                                      // 0x0410(0x000C)
	float                                              LastShrinkTime;                                           // 0x041C(0x0004)
	struct FVector                                     ClosestShrinkLocation;                                    // 0x0420(0x000C)
	float                                              LastFillTime;                                             // 0x042C(0x0004)
	struct FVector                                     ClosestFillLocation;                                      // 0x0430(0x000C)
	class UMaterialInterface*                          BeamDecal;                                                // 0x043C(0x0004)
	float                                              DecalWidth;                                               // 0x0440(0x0004)
	float                                              DecalHeight;                                              // 0x0444(0x0004)
	float                                              DurationOfDecal;                                          // 0x0448(0x0004)
	struct FName                                       DecalDissolveParamName;                                   // 0x044C(0x0008)
	int                                                TicksBetweenDecals;                                       // 0x0454(0x0004) (Edit)
	int                                                TicksSinceLastDecal;                                      // 0x0458(0x0004)
	float                                              DecalLifeSpan;                                            // 0x045C(0x0004)
	float                                              BobDamping;                                               // 0x0460(0x0004) (Edit)
	float                                              JumpDamping;                                              // 0x0464(0x0004) (Edit)
	TArray<struct FName>                               WeaponFireAnim;                                           // 0x0468(0x000C) (Edit, NeedCtorLink)
	struct FName                                       WeaponPutDownAnim;                                        // 0x0474(0x0008) (Edit)
	struct FName                                       WeaponEquipAnim;                                          // 0x047C(0x0008) (Edit)
	TArray<struct FName>                               WeaponIdleAnims;                                          // 0x0484(0x000C) (Edit, NeedCtorLink)
	class UParticleSystem*                             BeamTemplate[0x2];                                        // 0x0490(0x0004)
	class UUDKParticleSystemComponent*                 BeamEmitter[0x2];                                         // 0x0498(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   WeaponMaterialInstance;                                   // 0x04A0(0x0004)
	struct FName                                       BeamSockets[0x2];                                         // 0x04A4(0x0008)
	struct FName                                       BeamFireAnim[0x2];                                        // 0x04B4(0x0008)
	class UForceFeedbackWaveform*                      BeamWeaponFireWaveForm;                                   // 0x04C4(0x0004)
	struct FName                                       EndPointParamName;                                        // 0x04C8(0x0008)
	class UForceFeedbackWaveform*                      WeaponFireWaveForm;                                       // 0x04D0(0x0004)
	struct FColor                                      CrosshairColor;                                           // 0x04D4(0x0004) (Config)
	float                                              CrosshairScaling;                                         // 0x04D8(0x0004)
	struct FTextureCoordinates                         IconCoordinates;                                          // 0x04DC(0x0010)
	struct FTextureCoordinates                         CrossHairCoordinates;                                     // 0x04EC(0x0010)
	struct FTextureCoordinates                         SimpleCrossHairCoordinates;                               // 0x04FC(0x0010)
	class UTexture2D*                                  CrosshairImage;                                           // 0x050C(0x0004)
	class UTexture2D*                                  CrosshairImageOutline;                                    // 0x0510(0x0004)
	struct FVector                                     PlayerViewOffset;                                         // 0x0514(0x000C) (Edit)
	float                                              WideScreenOffsetScaling;                                  // 0x0520(0x0004) (Edit)
	struct FRotator                                    WidescreenRotationOffset;                                 // 0x0524(0x000C)
	struct FVector                                     HiddenWeaponsOffset;                                      // 0x0530(0x000C)
	class AHazardProj_GuideTile*                       GuideTile;                                                // 0x053C(0x0004)
	int                                                MaxAmmoCount;                                             // 0x0540(0x0004)
	int                                                MaxRenderCount;                                           // 0x0544(0x0004)
	class UHazardTileComponent*                        TakeTile;                                                 // 0x0548(0x0004) (ExportObject, Component, EditInline)
	struct FVector                                     ProjectedLocation;                                        // 0x054C(0x000C)
	struct FVector                                     ProjectedSize;                                            // 0x0558(0x000C)
	class UStaticMeshComponent*                        ProjectedTile;                                            // 0x0564(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   ProjectedMaterial;                                        // 0x0568(0x0004)
	class UStaticMeshComponent*                        ProjectedOutline;                                         // 0x056C(0x0004) (ExportObject, Component, EditInline)
	class AHazardTile*                                 CurrentLevelTile;                                         // 0x0570(0x0004)
	float                                              BeamDistance;                                             // 0x0574(0x0004)
	float                                              LastSnakeTime;                                            // 0x0578(0x0004)
	struct FVector                                     SnakeEndPoint;                                            // 0x057C(0x000C)
	struct FVector                                     ClosestSnakePoint;                                        // 0x0588(0x000C)
	class UParticleSystem*                             SnakeBeamTemplate;                                        // 0x0594(0x0004)
	class UParticleSystemComponent*                    SnakeBeamEmitter;                                         // 0x0598(0x0004) (ExportObject, Component, EditInline)
	class UHazardTileComponent*                        SnakeTile;                                                // 0x059C(0x0004) (ExportObject, Component, EditInline)
	class AHazardLaser*                                SnakeLaser;                                               // 0x05A0(0x0004)
	class UParticleSystem*                             SnakeRingStartTemplate;                                   // 0x05A4(0x0004)
	class AEmitterSpawnable*                           SnakeRingStartEmitter;                                    // 0x05A8(0x0004)
	class UParticleSystem*                             SnakeRingEndTemplate;                                     // 0x05AC(0x0004)
	class AEmitterSpawnable*                           SnakeRingEndEmitter;                                      // 0x05B0(0x0004)
	struct FColor                                      BeamColor;                                                // 0x05B4(0x0004)
	int                                                RealAmmoCount;                                            // 0x05B8(0x0004)
	class AHazardWeap_TileGunRotator*                  WeaponRotator;                                            // 0x05BC(0x0004)
	float                                              lastRecalculateTime;                                      // 0x05C0(0x0004)
	float                                              lastDrawTime;                                             // 0x05C4(0x0004)
	float                                              DrawingDelay;                                             // 0x05C8(0x0004)
	float                                              RedrawDelay;                                              // 0x05CC(0x0004)
	float                                              RecalculateDelay;                                         // 0x05D0(0x0004)
	float                                              LastDestructTime;                                         // 0x05D4(0x0004)
	float                                              RecurseDestructDelay;                                     // 0x05D8(0x0004)
	float                                              LastConstructTime;                                        // 0x05DC(0x0004)
	float                                              RecurseConstructDelay;                                    // 0x05E0(0x0004)
	int                                                FurthestConstructDepth;                                   // 0x05E4(0x0004)
	int                                                NumOverloads;                                             // 0x05E8(0x0004)
	struct FVector                                     LinkedLocation;                                           // 0x05EC(0x000C)
	TArray<class UMaterialInterface*>                  TileMaterial;                                             // 0x05F8(0x000C) (NeedCtorLink)
	TEnumAsByte<ELinkDir>                              LinkDir;                                                  // 0x0604(0x0001)
	TEnumAsByte<EHazardWeap_TileGun_EMode>             WeaponMode;                                               // 0x0605(0x0001)
	TEnumAsByte<EHazardWeap_TileGun_ENeighbourDir>     NeighbourDir;                                             // 0x0606(0x0001) (Const)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0607(0x0001) MISSED OFFSET
	float                                              GunRotateSpeed;                                           // 0x0608(0x0004)
	float                                              GunRotateAcceleration;                                    // 0x060C(0x0004)
	float                                              MaxGunRotateSpeed;                                        // 0x0610(0x0004)
	float                                              GunRotateBlendTime;                                       // 0x0614(0x0004)
	float                                              GunRotateBlendTimeToGo;                                   // 0x0618(0x0004)
	float                                              GunRotationPercentage;                                    // 0x061C(0x0004)
	float                                              MaxOrbitOffset;                                           // 0x0620(0x0004)
	float                                              CurrentPitch;                                             // 0x0624(0x0004)
	float                                              NumRotations;                                             // 0x0628(0x0004)
	float                                              DifferenceRotations;                                      // 0x062C(0x0004)
	float                                              OriginalRotation;                                         // 0x0630(0x0004)
	float                                              CurrentRotation;                                          // 0x0634(0x0004)
	class AHazardGame*                                 HazardGame;                                               // 0x0638(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardWeap_TileGun");
		return ptr;
	}


	void SetImpactedActor(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo);
	void SendToFiringState(unsigned char FireModeNum);
	void UpdateWeaponColour(float DeltaTime);
	void SetPosition(class AUDKPawn* Holder);
	TEnumAsByte<EWeaponHand> GetHand();
	void AttachWeaponTo(class USkeletalMeshComponent* MeshCpnt, const struct FName& SocketName);
	void ActiveRenderOverlays(class AHUD* H);
	float GetEquipTime();
	void TimeWeaponEquipping();
	class UClass* GetProjectileClass();
	void UnlockBlackGun();
	void UnlockDarkGun();
	void Upgrade();
	void UpdateWeaponPosition(float DeltaTime);
	void KillSnakeBeamEmitter();
	void SpawnSnakeBeamEmitter();
	void UpdateSnakeBeam();
	void Tick(float DeltaTime);
	void DrawWeaponCrosshair(class AHUD* HUD);
	void HideProjectedTile();
	void ShowProjectedTile(const struct FVector& NewProjectedLocation, const struct FVector& NewProjectedSize);
	void ProjectTile();
	void SimpleCalculateDrawingConstruct(const struct FVector& StartTrace, const struct FVector& AimDir, class UHazardTileComponent* LinkedTileComponent);
	void CalculateDrawingConstruct(const struct FVector& StartTrace, const struct FVector& AimDir, class UHazardTileComponent* LinkedTileComponent);
	void CalculateRecurseConstruct(const struct FVector& StartTrace, const struct FVector& AimDir, class UHazardTileComponent* LinkedTileComponent);
	void ProjectLink(const struct FVector& NewLinkedLocation);
	void CalculatePositiveLink();
	bool NoVolumesBetweenCamera(const struct FVector& StartTrace, const struct FVector& SpawnLocation, class UHazardTileComponent* LinkedTileComponent, int NeighbourIndex);
	bool NoVolume(const struct FVector& StartLocation, const struct FVector& CheckAxis);
	class AActor* PenetratingTrace(const struct FVector& EndTrace, const struct FVector& StartTrace, bool bTraceThroughTiles, bool bTraceThroughVolumes, struct FVector* HitLocation, struct FVector* HitNormal, class UHazardTileComponent** HitComponent);
	struct FVector GetLinkedToLocation();
	void ProcessBeamHit(const struct FVector& StartTrace, const struct FVector& AimDir, float DeltaTime, struct FImpactInfo* TestImpact);
	void UpdateBeamEmitter(const struct FVector& FlashLocation, const struct FVector& HitNormal, class AActor* HitActor);
	void SetBeamEmitterHidden(bool bHide);
	void KillBeamEmitter();
	void AddBeamEmitter();
	void UpdateBeam(float DeltaTime);
	struct FImpactInfo CalcWeaponFire(const struct FVector& StartTrace, const struct FVector& EndTrace, const struct FVector& Extent, TArray<struct FImpactInfo>* ImpactList);
	bool PassThroughDamage(class AActor* HitActor);
	void StopFire(unsigned char FireModeNum);
	void StartFire(unsigned char FireModeNum);
	void MoveSnake();
	bool TraceThroughGlass(const struct FVector& EndTrace, const struct FVector& StartTrace, const struct FVector& HitLocation, class AActor* HitActor, struct FVector* OutHitLocation);
	void FindSnake();
	void KillSnake();
	bool ShouldRefire();
	class AProjectile* FireBlackTileProjectile();
	class AProjectile* ProjectileFire();
	class AProjectile* DelayedHit();
	class AProjectile* InstantHit();
	void SpendAmmo(int Amount);
	void SpawnAmmo(int Amount, class UMaterialInterface* InputMaterial);
	void CheckOverloaded();
	void DestroyAllAmmo();
	void Destroyed();
	class UMaterialInterface* GetCurrentTileMaterial();
	void SafeHide(bool bNewHidden);
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardTile
// 0x0084 (0x0258 - 0x01D4)
class AHazardTile : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, Const, ExportObject, EditConst, Component, EditInline)
	TArray<class UHazardTileComponent*>                TileComponents;                                           // 0x01D8(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UHazardTileComponent*>                ActiveComponents;                                         // 0x01E4(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	class AHazardDuplicateVolume*                      DuplicateVolume;                                          // 0x01F0(0x0004) (Edit)
	unsigned long                                      bCachedHidden : 1;                                        // 0x01F4(0x0004)
	unsigned long                                      bTicking : 1;                                             // 0x01F4(0x0004)
	unsigned long                                      bModified : 1;                                            // 0x01F4(0x0004)
	unsigned long                                      bFade : 1;                                                // 0x01F4(0x0004) (Edit)
	unsigned long                                      bImpenetrable : 1;                                        // 0x01F4(0x0004) (Edit)
	unsigned long                                      bDestroyOnOpen : 1;                                       // 0x01F4(0x0004) (Edit)
	unsigned long                                      bTealTile : 1;                                            // 0x01F4(0x0004) (Edit)
	unsigned long                                      bMerge : 1;                                               // 0x01F4(0x0004) (Edit)
	unsigned long                                      bDelayedUpdateDecals : 1;                                 // 0x01F4(0x0004)
	unsigned long                                      bInstantUpdateDecals : 1;                                 // 0x01F4(0x0004)
	unsigned long                                      bAutoReset : 1;                                           // 0x01F4(0x0004) (Edit)
	unsigned long                                      bLaserBlocking : 1;                                       // 0x01F4(0x0004) (Edit)
	int                                                NumActiveComponents;                                      // 0x01F8(0x0004)
	struct FVector                                     ResetScale;                                               // 0x01FC(0x000C)
	class UMaterialInterface*                          ResetMaterial;                                            // 0x0208(0x0004)
	float                                              StayOpenTime;                                             // 0x020C(0x0004)
	struct FVector                                     LastGridLocation;                                         // 0x0210(0x000C)
	float                                              TimeStamp;                                                // 0x021C(0x0004)
	float                                              StoredDistance;                                           // 0x0220(0x0004)
	TEnumAsByte<EHazardTile_ECollisionSet>             CollisionSet;                                             // 0x0224(0x0001) (Edit)
	TEnumAsByte<EHazardTile_EGlobalCollision>          GlobalCollision;                                          // 0x0225(0x0001)
	TEnumAsByte<EHazardTile_ENeighbourDir>             NeighbourDir;                                             // 0x0226(0x0001) (Const)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0227(0x0001) MISSED OFFSET
	float                                              MaxStayOpenTime;                                          // 0x0228(0x0004) (Edit)
	float                                              InterpTime;                                               // 0x022C(0x0004) (Edit)
	float                                              DelayTime;                                                // 0x0230(0x0004) (Edit)
	struct FVector                                     OpenDistance;                                             // 0x0234(0x000C) (Edit)
	int                                                MaxRecursions;                                            // 0x0240(0x0004) (Edit)
	TArray<class ADecalActor*>                         Decals;                                                   // 0x0244(0x000C) (Edit, NeedCtorLink)
	int                                                OpenComponents;                                           // 0x0250(0x0004)
	class AHazardGame*                                 HazardGame;                                               // 0x0254(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardTile");
		return ptr;
	}


	void Detach(class AActor* Other);
	class UHazardTileComponent* SpawnNeighbour(const struct FVector& StartLocation, int NeighbourIndex, bool bRunLoopDetection, bool bLockedAxis, bool bLooped, bool bSnaked, class UHazardTileComponent* SpawnComponent, bool bPreCheck, bool bAutoLoop);
	bool PassThroughDamage(class AActor* HitActor);
	struct FImpactInfo CalcWeaponFire(const struct FVector& StartTrace, const struct FVector& EndTrace, const struct FVector& Extent, TArray<struct FImpactInfo>* ImpactList);
	bool IsWithinPawn(const struct FVector& TestLocation, const struct FVector& MoveDirection);
	void Attach(class AActor* Other);
	bool DoesContainPoint(const struct FVector& SearchLocation);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void SplitTile(const struct FVector& SplitLocation, class UHazardTileComponent* SplitComponent);
	void CustomSetTickIsDisabled(bool bNewTickDisabled);
	void Tick(float DeltaTime);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	class UHazardTileComponent* FindTileComponent(const struct FVector& SearchLocation);
	void SetupTile();
	void PreBeginPlay();
	void ResetState();
	bool CheckReset();
	void UpdateDecals(bool bPreUpdate);
	void Reset();
	void RemoveComponent(class UHazardTileComponent* DestroyedComponent);
	class UHazardTileComponent* AddComponent();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardSeqEvent_BlackTileKilled
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_BlackTileKilled : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_BlackTileKilled");
		return ptr;
	}

};


// Class Hazard.HazardSeqEvent_BlackTileDead
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_BlackTileDead : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_BlackTileDead");
		return ptr;
	}

};


// Class Hazard.HazardEndingLightComponent
// 0x0000 (0x0238 - 0x0238)
class UHazardEndingLightComponent : public UPointLightComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardEndingLightComponent");
		return ptr;
	}

};


// Class Hazard.HazardRecursiveCylinder
// 0x002C (0x0200 - 0x01D4)
class AHazardRecursiveCylinder : public AActor
{
public:
	class AHazardGame*                                 HazardGame;                                               // 0x01D4(0x0004)
	class AHazardPawn*                                 PlayerPawn;                                               // 0x01D8(0x0004)
	unsigned long                                      bEnableTeleport : 1;                                      // 0x01DC(0x0004)
	class UStaticMeshComponent*                        DistanceFog;                                              // 0x01E0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        DistanceFogFaded;                                         // 0x01E4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        RecursionBounds;                                          // 0x01E8(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FVector                                     RecursionExtent;                                          // 0x01EC(0x000C)
	class UMaterialInstanceConstant*                   DistanceMaterial;                                         // 0x01F8(0x0004)
	class UMaterialInstanceConstant*                   WorldMaterial;                                            // 0x01FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardRecursiveCylinder");
		return ptr;
	}


	void Tick(float DeltaTime);
	void TestTeleport();
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PostBeginPlay();
};


// Class Hazard.HazardProj_GuideTile
// 0x009D (0x02E9 - 0x024C)
class AHazardProj_GuideTile : public AUDKProjectile
{
public:
	float                                              TouchTime;                                                // 0x024C(0x0004)
	class AHazardDuplicateVolume*                      DuplicateVolume;                                          // 0x0250(0x0004)
	TArray<class UHazardDuplicateComponent*>           DuplicateComponents;                                      // 0x0254(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	unsigned long                                      bExploded : 1;                                            // 0x0260(0x0004)
	unsigned long                                      bHitTile : 1;                                             // 0x0260(0x0004)
	unsigned long                                      bLocked : 1;                                              // 0x0260(0x0004)
	struct FVector                                     HitTileLocation;                                          // 0x0264(0x000C)
	float                                              HitTileTime;                                              // 0x0270(0x0004)
	class UAudioComponent*                             AmbientSound;                                             // 0x0274(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystem*                             ProjExplosionTemplate;                                    // 0x0278(0x0004)
	class UPointLightComponent*                        ProjectileLight;                                          // 0x027C(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        GuideMesh;                                                // 0x0280(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   tileSkin;                                                 // 0x0284(0x0004)
	class AHazardWeap_TileGun*                         Weapon;                                                   // 0x0288(0x0004)
	struct FVector                                     LastLocation;                                             // 0x028C(0x000C)
	struct FVector                                     PrevGridLocation;                                         // 0x0298(0x000C)
	struct FVector                                     InitialViewLocation;                                      // 0x02A4(0x000C)
	struct FRotator                                    InitialViewRotation;                                      // 0x02B0(0x000C)
	struct FVector                                     VelocityCorrection;                                       // 0x02BC(0x000C)
	float                                              ScaleTime;                                                // 0x02C8(0x0004)
	float                                              ScaleTimeRemaining;                                       // 0x02CC(0x0004)
	float                                              TargetDrawScale;                                          // 0x02D0(0x0004)
	class USoundCue*                                   LockSound;                                                // 0x02D4(0x0004)
	class USoundCue*                                   ExplodeSound;                                             // 0x02D8(0x0004)
	struct FVector                                     MaxLocation;                                              // 0x02DC(0x000C)
	TEnumAsByte<EHazardProj_GuideTile_ENeighbourDir>   NeighbourDir;                                             // 0x02E8(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardProj_GuideTile");
		return ptr;
	}


	void UpdateDuplicates();
	bool IsOverlappingVolume(class AHazardDuplicateVolume* TestVolume);
	void KillDuplicate(class AHazardDuplicateVolume* newDuplicateVolume);
	void SpawnDuplicate(class AHazardDuplicateVolume* newDuplicateVolume);
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void LockTile();
	void HitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void TakeDamage(int DamageAmount, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void Tick(float DeltaTime);
	void TestSpawnDuplicate();
	void Init(const struct FVector& Direction);
	void TestCollision();
	class UHazardTileComponent* Lock();
	void Destroyed();
	void InitializeMaterial();
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardDuplicateComponent
// 0x000C (0x025C - 0x0250)
class UHazardDuplicateComponent : public UStaticMeshComponent
{
public:
	class UHazardTileComponent*                        ParentComponent;                                          // 0x0250(0x0004) (ExportObject, Component, EditInline)
	class AHazardPushBlock*                            PushParentComponent;                                      // 0x0254(0x0004)
	class AHazardDuplicateVolume*                      DuplicateVolume;                                          // 0x0258(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardDuplicateComponent");
		return ptr;
	}

};


// Class Hazard.HazardDuplicateVolume
// 0x0031 (0x0205 - 0x01D4)
class AHazardDuplicateVolume : public AActor
{
public:
	class UStaticMeshComponent*                        TransparentMesh;                                          // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        WireframeMesh;                                            // 0x01D8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        CenterMesh;                                               // 0x01DC(0x0004) (Edit, ExportObject, Component, EditInline)
	class AHazardPawn*                                 CachedPawn;                                               // 0x01E0(0x0004)
	class AHazardGame*                                 HazardGame;                                               // 0x01E4(0x0004)
	struct FVector                                     BoxExtent;                                                // 0x01E8(0x000C)
	TArray<class AHazardDuplicateVolume*>              SisterVolumes;                                            // 0x01F4(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bMasterVolume : 1;                                        // 0x0200(0x0004) (Edit)
	TEnumAsByte<EHazardDuplicateVolume_ENeighbourDir>  NeighbourDir;                                             // 0x0204(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardDuplicateVolume");
		return ptr;
	}


	void Tick(float DeltaTime);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void PostBeginPlay();
	bool DoesContainPoint(const struct FVector& SearchLocation);
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardLaser
// 0x0070 (0x0244 - 0x01D4)
class AHazardLaser : public AActor
{
public:
	class UHazardTileComponent*                        HitTileComponent;                                         // 0x01D4(0x0004) (ExportObject, Component, EditInline)
	TArray<class AHazardDoor*>                         LinkedDoors;                                              // 0x01D8(0x000C) (NeedCtorLink)
	float                                              MaxTraceDistance;                                         // 0x01E4(0x0004) (Edit)
	unsigned long                                      bTicking : 1;                                             // 0x01E8(0x0004)
	unsigned long                                      bTouched : 1;                                             // 0x01E8(0x0004)
	unsigned long                                      bBlocked : 1;                                             // 0x01E8(0x0004)
	unsigned long                                      bTouchingPlayer : 1;                                      // 0x01E8(0x0004)
	struct FLinearColor                                BeamColor;                                                // 0x01EC(0x0010) (Edit)
	struct FLinearColor                                CurrentColor;                                             // 0x01FC(0x0010)
	class UMaterialInstanceConstant*                   BeamMaterial;                                             // 0x020C(0x0004)
	class UStaticMeshComponent*                        LaserBeam;                                                // 0x0210(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        CollisionBeam;                                            // 0x0214(0x0004) (ExportObject, Component, EditInline)
	TEnumAsByte<ELaserColour>                          LaserColour;                                              // 0x0218(0x0001)
	TEnumAsByte<EHazardLaser_ETriggerType>             TriggerType;                                              // 0x0219(0x0001) (Edit)
	TEnumAsByte<EHazardLaser_ENeighbourDir>            NeighbourDir;                                             // 0x021A(0x0001) (Const)
	unsigned char                                      UnknownData00[0x1];                                       // 0x021B(0x0001) MISSED OFFSET
	class AHazardPawn*                                 CachedPawn;                                               // 0x021C(0x0004)
	struct FVector                                     AimDir;                                                   // 0x0220(0x000C)
	struct FVector                                     StartTrace;                                               // 0x022C(0x000C)
	struct FVector                                     EndTrace;                                                 // 0x0238(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardLaser");
		return ptr;
	}


	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	bool CheckBlocked();
	bool CheckTouchingPlayer();
	void Tick(float DeltaTime);
	void UpdateBeam();
	struct FImpactInfo CalcWeaponFire(const struct FVector& TraceStart, const struct FVector& TraceEnd, TArray<struct FImpactInfo>* ImpactList);
	bool PassThroughDamage(class AActor* HitActor);
	void InitializeMaterial();
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardNoShootField
// 0x0033 (0x0210 - 0x01DD)
class AHazardNoShootField : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        LeftEmitterMesh;                                          // 0x01E0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        RightEmitterMesh;                                         // 0x01E4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        MaskedMesh;                                               // 0x01E8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        TransparentMesh;                                          // 0x01EC(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        WireframeMesh;                                            // 0x01F0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   MaskedMaterial;                                           // 0x01F4(0x0004)
	class AHazardPawn*                                 CachedPawn;                                               // 0x01F8(0x0004)
	class AHazardGame*                                 HazardGame;                                               // 0x01FC(0x0004)
	unsigned long                                      bPlayingNear : 1;                                         // 0x0200(0x0004)
	struct FVector                                     BoxExtent;                                                // 0x0204(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardNoShootField");
		return ptr;
	}


	void Tick(float DeltaTime);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void PostBeginPlay();
};


// Class Hazard.HazardDistanceTile
// 0x004B (0x0228 - 0x01DD)
class AHazardDistanceTile : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01E0(0x0004) (Edit, Const, ExportObject, EditConst, Component, EditInline)
	TArray<class UHazardDistanceTileComponent*>        TileComponents;                                           // 0x01E4(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	struct FVector                                     ResetScale;                                               // 0x01F0(0x000C)
	class UMaterialInterface*                          ResetMaterial;                                            // 0x01FC(0x0004)
	float                                              StayOpenTime;                                             // 0x0200(0x0004)
	struct FVector                                     LastGridLocation;                                         // 0x0204(0x000C)
	unsigned long                                      bModified : 1;                                            // 0x0210(0x0004)
	unsigned long                                      bStayOpen : 1;                                            // 0x0210(0x0004) (Edit)
	unsigned long                                      bAutoReset : 1;                                           // 0x0210(0x0004) (Edit)
	float                                              StoredDistance;                                           // 0x0214(0x0004)
	TEnumAsByte<EHazardDistanceTile_ECollisionSet>     CollisionSet;                                             // 0x0218(0x0001) (Edit)
	TEnumAsByte<EHazardActor_EGlobalCollision>         GlobalCollision;                                          // 0x0219(0x0001)
	TEnumAsByte<EHazardDistanceTile_ENeighbourDir>     NeighbourDir;                                             // 0x021A(0x0001) (Const)
	unsigned char                                      UnknownData01[0x1];                                       // 0x021B(0x0001) MISSED OFFSET
	float                                              InterpTime;                                               // 0x021C(0x0004) (Edit)
	float                                              TriggerDistance;                                          // 0x0220(0x0004) (Edit)
	int                                                OpenComponents;                                           // 0x0224(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardDistanceTile");
		return ptr;
	}


	void Detach(class AActor* Other);
	void Attach(class AActor* Other);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void Tick(float DeltaTime);
	void PostBeginPlay();
	bool CheckReset();
	void Reset();
	void RemoveComponent(class UHazardDistanceTileComponent* DestroyedComponent);
	class UHazardDistanceTileComponent* AddComponent();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardBlackTileProjectile
// 0x0017 (0x0300 - 0x02E9)
class AHazardBlackTileProjectile : public AHazardProj_GuideTile
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	struct FVector                                     LastVelocity;                                             // 0x02EC(0x000C)
	class USoundCue*                                   StopSound;                                                // 0x02F8(0x0004)
	class USoundCue*                                   FinalSound;                                               // 0x02FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardBlackTileProjectile");
		return ptr;
	}


	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void LockTile();
	void HitWall(const struct FVector& HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp);
	void TakeDamage(int DamageAmount, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void Tick(float DeltaTime);
	void Init(const struct FVector& Direction);
	struct FVector FindLockedSpot();
	void TestCollision();
	class UHazardTileComponent* Lock();
	void Destroyed();
	void InitializeMaterial();
	void PostBeginPlay();
};


// Class Hazard.HazardCheatManager
// 0x0000 (0x005C - 0x005C)
class UHazardCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardCheatManager");
		return ptr;
	}


	void InitCheatManager();
	void VerbosePathDebug();
	void TestLevel();
	void EnableDebugCamera();
	void ToggleDebugCamera();
	void StreamLevelOut(const struct FName& PackageName);
	void OnlyLoadLevel(const struct FName& PackageName);
	void StreamLevelIn(const struct FName& PackageName);
	void SetLevelStreamingStatus(const struct FName& PackageName, bool bShouldBeLoaded, bool bShouldBeVisible);
	void ViewClass(class UClass* aClass);
	void ViewActor(const struct FName& actorName);
	void ViewPlayer(const struct FString& S);
	void ViewSelf(bool bQuiet);
	void PlayersOnly();
	void Slomo(float T);
	void Ghost();
	void Walk();
	void Fly();
	void KillViewedActor();
	void WriteToLog(const struct FString& Param);
	void FreezeFrame(float Delay);
	void ListDynamicActors();
	void DebugPause();
	void EditAIByTrace();
	void DebugAI(const struct FName& Category);
	void UnlockDarkGun();
	void UnlockBlackGun();
	void UnlockGun(int gunLevel);
	void UnlockAll();
	void UnlockMap();
};


// Class Hazard.HazardTrigger
// 0x0038 (0x0218 - 0x01E0)
class AHazardTrigger : public ATrigger
{
public:
	unsigned long                                      bUnlocked : 1;                                            // 0x01E0(0x0004)
	class AHazardIcon*                                 UnlockIcon;                                               // 0x01E4(0x0004) (Edit)
	TArray<class AHazardIcon*>                         FoundIcons;                                               // 0x01E8(0x000C) (Edit, NeedCtorLink)
	TArray<class AHazardIcon*>                         HintIcons;                                                // 0x01F4(0x000C) (Edit, NeedCtorLink)
	TArray<class ADynamicSMActor*>                     HideNodes;                                                // 0x0200(0x000C) (Edit, NeedCtorLink)
	TArray<class ADynamicSMActor*>                     UnhideNodes;                                              // 0x020C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardTrigger");
		return ptr;
	}


	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Unlock();
};


// Class Hazard.HazardDistanceTileComponent
// 0x0030 (0x0280 - 0x0250)
class UHazardDistanceTileComponent : public UStaticMeshComponent
{
public:
	class AHazardGame*                                 HazardGame;                                               // 0x0250(0x0004)
	class AHazardDistanceTile*                         Parent;                                                   // 0x0254(0x0004)
	unsigned long                                      bInterpolating : 1;                                       // 0x0258(0x0004)
	unsigned long                                      bModified : 1;                                            // 0x0258(0x0004)
	float                                              BlendAmount;                                              // 0x025C(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0260(0x0004)
	float                                              StayOpenTime;                                             // 0x0264(0x0004)
	struct FVector                                     LastGridLocation;                                         // 0x0268(0x000C)
	TEnumAsByte<EHazardActor_EGlobalCollision>         GlobalCollision;                                          // 0x0274(0x0001)
	TEnumAsByte<EHazardDistanceTileComponent_EMoveState> MoveState;                                                // 0x0275(0x0001)
	TEnumAsByte<EHazardDistanceTileComponent_ENeighbourDir> NeighbourDir;                                             // 0x0276(0x0001) (Const)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0277(0x0001) MISSED OFFSET
	class UMaterialInstanceConstant*                   HazardSkin;                                               // 0x0278(0x0004)
	int                                                NumClusters;                                              // 0x027C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardDistanceTileComponent");
		return ptr;
	}


	void SplitCluster(const struct FVector& SplitLocation);
	void SplitAxisCluster(const struct FVector& LocalSplitLocation, const struct FVector& SplitDirection);
	void CheckDistance();
	int GetNumClusters();
	void SetNumClusters();
	void SetScale3D(const struct FVector& NewScale);
	void FinishedInterpolation();
	void SetBlendAmount(float BlendValue);
	void SetGlobalCollision(bool bEnabled);
	void UpdateGlobalCollision();
	void UpdateMovement(float DeltaTime);
	void InterpolateTo(float interpValue);
	void DoClose();
	void DoOpen();
	void FinishedOpen();
	void FinishedClose();
	void Close();
	void Open();
	void Tick(float DeltaTime);
	void UpdateWhiteSounds();
	class UMaterialInstanceConstant* CreateAndSetNewMaterialInstanceConstant(int ElementIndex, class UMaterialInterface* NewMaterial);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void InitializeTile(class AHazardDistanceTile* NewOwner);
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardDoor
// 0x013C (0x0310 - 0x01D4)
class AHazardDoor : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bOpen : 1;                                                // 0x01D8(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x01D8(0x0004)
	unsigned long                                      bShouldPlayShortMove : 1;                                 // 0x01D8(0x0004)
	unsigned long                                      bPlayingShortMove : 1;                                    // 0x01D8(0x0004)
	unsigned long                                      bFadingMovement : 1;                                      // 0x01D8(0x0004)
	unsigned long                                      bFadingStop : 1;                                          // 0x01D8(0x0004)
	unsigned long                                      bDisableSounds : 1;                                       // 0x01D8(0x0004) (Edit)
	struct FVector                                     DoorScale;                                                // 0x01DC(0x000C)
	struct FVector                                     CurrentVelocity;                                          // 0x01E8(0x000C)
	struct FVector                                     ClosedLocation;                                           // 0x01F4(0x000C)
	struct FVector                                     OpenLocation;                                             // 0x0200(0x000C)
	struct FVector                                     OriginalLocation;                                         // 0x020C(0x000C)
	struct FVector                                     DoorAcceleration;                                         // 0x0218(0x000C)
	struct FVector                                     RotatedBoxExtent;                                         // 0x0224(0x000C)
	class UMaterialInstanceConstant*                   ProgressRing;                                             // 0x0230(0x0004)
	class UMaterialInstanceConstant*                   ProgressStrip;                                            // 0x0234(0x0004)
	float                                              MovementTime;                                             // 0x0238(0x0004)
	float                                              SoundStopTime;                                            // 0x023C(0x0004)
	TArray<class AHazardLaser*>                        Lasers;                                                   // 0x0240(0x000C) (Edit, NeedCtorLink)
	int                                                NumTriggered;                                             // 0x024C(0x0004)
	TEnumAsByte<EHazardDoor_ETriggerType>              TriggerType;                                              // 0x0250(0x0001) (Edit)
	TEnumAsByte<EHazardDoor_ENeighbourDir>             NeighbourDir;                                             // 0x0251(0x0001) (Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0252(0x0002) MISSED OFFSET
	float                                              BounceDampening;                                          // 0x0254(0x0004)
	float                                              BounceThreshold;                                          // 0x0258(0x0004)
	class UAudioComponent*                             RingSound;                                                // 0x025C(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             OpenSound;                                                // 0x0260(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             CloseSound;                                               // 0x0264(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             ShortCloseSound;                                          // 0x0268(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             MovingSound;                                              // 0x026C(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             StopSound;                                                // 0x0270(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             LockedSound;                                              // 0x0274(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             UnlockedSound;                                            // 0x0278(0x0004) (ExportObject, Component, EditInline)
	class AHazardPawn*                                 CachedPawn;                                               // 0x027C(0x0004)
	class AHazardPlayerController*                     CachedController;                                         // 0x0280(0x0004)
	float                                              DistanceFromOpen;                                         // 0x0284(0x0004) (Edit)
	int                                                CurrentActive;                                            // 0x0288(0x0004)
	float                                              LastResetTime;                                            // 0x028C(0x0004)
	struct FLinearColor                                DimBlueColour;                                            // 0x0290(0x0010)
	struct FLinearColor                                DimGreenColour;                                           // 0x02A0(0x0010)
	struct FLinearColor                                DimRedColour;                                             // 0x02B0(0x0010)
	struct FLinearColor                                DimSpecialColour;                                         // 0x02C0(0x0010)
	struct FLinearColor                                LitBlueColour;                                            // 0x02D0(0x0010)
	struct FLinearColor                                LitGreenColour;                                           // 0x02E0(0x0010)
	struct FLinearColor                                LitRedColour;                                             // 0x02F0(0x0010)
	struct FLinearColor                                LitSpecialColour;                                         // 0x0300(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardDoor");
		return ptr;
	}


	void UpdateMovement(float DeltaTime);
	void CheckLasers();
	void Tick(float DeltaTime);
	void Close();
	void Open();
	void FindOpenEvent();
	void Reset();
	void InitializeMaterial();
	void SetRingColours();
	bool ShouldPlaySound();
	void UpdateRingValues(int Active, int Required);
	void PlayRingSound(int Active, int Required);
	void PlayClosedSound();
	void PlayOpenSound();
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardSeqEvent_DoorOpened
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_DoorOpened : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_DoorOpened");
		return ptr;
	}

};


// Class Hazard.HazardDummyPlatform
// 0x0051 (0x0225 - 0x01D4)
class AHazardDummyPlatform : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FVector                                     TileScale;                                                // 0x01D8(0x000C)
	struct FVector                                     CurrentVelocity;                                          // 0x01E4(0x000C)
	struct FVector                                     DefaultLocation;                                          // 0x01F0(0x000C)
	struct FVector                                     MaxLocation;                                              // 0x01FC(0x000C)
	struct FVector                                     OpenDistance;                                             // 0x0208(0x000C) (Edit)
	struct FVector                                     RotatedBoxExtent;                                         // 0x0214(0x000C)
	unsigned long                                      bSetup : 1;                                               // 0x0220(0x0004)
	TEnumAsByte<EHazardDummyPlatform_ENeighbourDir>    NeighbourDir;                                             // 0x0224(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardDummyPlatform");
		return ptr;
	}


	float TryMove(float Distance, float DeltaTime);
	void SetDefaults();
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardPushBlock
// 0x00C4 (0x02A1 - 0x01DD)
class AHazardPushBlock : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class AHazardDuplicateVolume*                      DuplicateVolume;                                          // 0x01E0(0x0004) (Edit)
	TArray<class UHazardDuplicateComponent*>           DuplicateComponents;                                      // 0x01E4(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UHazardDuplicateComponent*>           DuplicateAttachees;                                       // 0x01F0(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	unsigned long                                      bPlayingLargeSound : 1;                                   // 0x01FC(0x0004)
	unsigned long                                      bPlayingSmallSound : 1;                                   // 0x01FC(0x0004)
	unsigned long                                      bSmallSound : 1;                                          // 0x01FC(0x0004) (Edit)
	unsigned long                                      bPushed : 1;                                              // 0x01FC(0x0004)
	unsigned long                                      bSpring : 1;                                              // 0x01FC(0x0004) (Edit)
	unsigned long                                      bLockX : 1;                                               // 0x01FC(0x0004) (Edit)
	unsigned long                                      bLockY : 1;                                               // 0x01FC(0x0004) (Edit)
	unsigned long                                      bLockZ : 1;                                               // 0x01FC(0x0004) (Edit)
	class UAudioComponent*                             LargeSound;                                               // 0x0200(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             LargeSoundDecay;                                          // 0x0204(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             SmallSound;                                               // 0x0208(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             SmallSoundDecay;                                          // 0x020C(0x0004) (ExportObject, Component, EditInline)
	class AHazardDummyPlatform*                        Attachee;                                                 // 0x0210(0x0004) (Edit)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0214(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              UpdateDistance;                                           // 0x0218(0x0004)
	struct FVector                                     TileScale;                                                // 0x021C(0x000C)
	struct FVector                                     CurrentVelocity;                                          // 0x0228(0x000C)
	float                                              FrictionResistance;                                       // 0x0234(0x0004)
	float                                              SpringResistance;                                         // 0x0238(0x0004)
	float                                              PushResistance;                                           // 0x023C(0x0004)
	float                                              BounceDampening;                                          // 0x0240(0x0004)
	float                                              BounceThreshold;                                          // 0x0244(0x0004)
	struct FVector                                     DefaultLocation;                                          // 0x0248(0x000C)
	struct FRotator                                    DefaultRotation;                                          // 0x0254(0x000C)
	struct FVector                                     RotatedBoxExtent;                                         // 0x0260(0x000C)
	float                                              LastPushTime;                                             // 0x026C(0x0004)
	struct FVector                                     SpringDistance;                                           // 0x0270(0x000C) (Edit)
	struct FVector                                     SpringLocation;                                           // 0x027C(0x000C)
	struct FVector                                     PushedDirection;                                          // 0x0288(0x000C)
	struct FVector                                     LockVector;                                               // 0x0294(0x000C)
	TEnumAsByte<EHazardPushBlock_ENeighbourDir>        NeighbourDir;                                             // 0x02A0(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardPushBlock");
		return ptr;
	}


	void UpdateMovement(float DeltaTime);
	void TryMove(const struct FVector& MovedLocation, const struct FVector& MoveAxis);
	struct FVector GetClampedLocation(const struct FVector& TestLocation, const struct FVector& SearchLocation);
	void Pushed(const struct FVector& PushDirection);
	void UpdateDuplicates();
	void Tick(float DeltaTime);
	void UpdateSounds(float DeltaTime);
	void Reset();
	void SpawnDuplicate(class AHazardDuplicateVolume* NewVolume);
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardElevator
// 0x00CD (0x02A1 - 0x01D4)
class AHazardElevator : public AActor
{
public:
	class UAudioComponent*                             SlowSound;                                                // 0x01D4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             SlowSoundDecay;                                           // 0x01D8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             MedSound;                                                 // 0x01DC(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             MedSoundDecay;                                            // 0x01E0(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             FastSound;                                                // 0x01E4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             FastSoundDecay;                                           // 0x01E8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             FastSoundLaunch;                                          // 0x01EC(0x0004) (ExportObject, Component, EditInline)
	unsigned long                                      bPlayingSlowSound : 1;                                    // 0x01F0(0x0004)
	unsigned long                                      bPlayingMedSound : 1;                                     // 0x01F0(0x0004)
	unsigned long                                      bPlayingFastSound : 1;                                    // 0x01F0(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x01F0(0x0004)
	unsigned long                                      bOpen : 1;                                                // 0x01F0(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x01F0(0x0004)
	unsigned long                                      bThrowPlayer : 1;                                         // 0x01F0(0x0004) (Edit)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01F4(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              UpdateDistance;                                           // 0x01F8(0x0004)
	struct FVector                                     TileScale;                                                // 0x01FC(0x000C)
	struct FVector                                     CurrentVelocity;                                          // 0x0208(0x000C)
	struct FVector                                     DefaultLocation;                                          // 0x0214(0x000C)
	struct FVector                                     UpLocation;                                               // 0x0220(0x000C)
	struct FVector                                     DownLocation;                                             // 0x022C(0x000C)
	float                                              DistanceFromUp;                                           // 0x0238(0x0004) (Edit)
	float                                              DistanceFromDown;                                         // 0x023C(0x0004) (Edit)
	struct FVector                                     ClosedLocation;                                           // 0x0240(0x000C)
	struct FVector                                     OpenLocation;                                             // 0x024C(0x000C)
	struct FVector                                     OriginalLocation;                                         // 0x0258(0x000C)
	struct FVector                                     StartBlendLocation;                                       // 0x0264(0x000C)
	struct FVector                                     RotatedBoxExtent;                                         // 0x0270(0x000C)
	float                                              BounceDampening;                                          // 0x027C(0x0004)
	float                                              BounceThreshold;                                          // 0x0280(0x0004)
	float                                              MaxBounceVelocity;                                        // 0x0284(0x0004)
	struct FVector                                     DoorAcceleration;                                         // 0x0288(0x000C)
	float                                              BlendAmount;                                              // 0x0294(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0298(0x0004)
	float                                              InterpTime;                                               // 0x029C(0x0004) (Edit)
	TEnumAsByte<EHazardElevator_ENeighbourDir>         NeighbourDir;                                             // 0x02A0(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardElevator");
		return ptr;
	}


	void UpdateMovement(float DeltaTime);
	void Tick(float DeltaTime);
	void UpdateSounds(float DeltaTime);
	void MoveDown();
	void MoveUp();
	void InterpolateTo(float interpValue);
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardEndingLight
// 0x002D (0x0209 - 0x01DC)
class AHazardEndingLight : public APointLightToggleable
{
public:
	TArray<class UHazardEndingLightComponent*>         Duplicates;                                               // 0x01DC(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	float                                              BlendAmount;                                              // 0x01E8(0x0004)
	float                                              BlendTimeToGo;                                            // 0x01EC(0x0004)
	float                                              InterpTime;                                               // 0x01F0(0x0004)
	unsigned long                                      bHiddenDuplicates : 1;                                    // 0x01F4(0x0004)
	unsigned long                                      bDuplicatesSetup : 1;                                     // 0x01F4(0x0004)
	unsigned long                                      bOpen : 1;                                                // 0x01F4(0x0004)
	struct FVector                                     BoxExtent;                                                // 0x01F8(0x000C)
	float                                              OriginalRadius;                                           // 0x0204(0x0004)
	TEnumAsByte<EHazardEndingLight_ENeighbourDir>      NeighbourDir;                                             // 0x0208(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardEndingLight");
		return ptr;
	}


	void SetBlendAmount(float BlendValue);
	void UpdateMovement(float DeltaTime);
	void InterpolateTo(float interpValue);
	void SetDuplicatesHidden(bool bNewHidden);
	void Tick(float DeltaTime);
	void SetupDuplicates();
	void PostBeginPlay();
	void UpdateDuplicates(const struct FVector& NewTranslation);
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardEndingPlatform
// 0x008C (0x0269 - 0x01DD)
class AHazardEndingPlatform : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01E0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        LeftBarrier;                                              // 0x01E4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        RightBarrier;                                             // 0x01E8(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<class UStaticMeshComponent*>                Duplicates;                                               // 0x01EC(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UStaticMeshComponent*>                LeftBarrierDuplicates;                                    // 0x01F8(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class UStaticMeshComponent*>                RightBarrierDuplicates;                                   // 0x0204(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	unsigned long                                      bOscillate : 1;                                           // 0x0210(0x0004) (Edit)
	unsigned long                                      bHiddenDuplicates : 1;                                    // 0x0210(0x0004)
	unsigned long                                      bDuplicatesSetup : 1;                                     // 0x0210(0x0004)
	unsigned long                                      bOpen : 1;                                                // 0x0210(0x0004)
	float                                              CurrentPitch;                                             // 0x0214(0x0004)
	float                                              MaxOrbitOffset;                                           // 0x0218(0x0004)
	struct FVector                                     CurrentVelocity;                                          // 0x021C(0x000C)
	struct FVector                                     MaxVelocity;                                              // 0x0228(0x000C)
	struct FVector                                     Acceleration;                                             // 0x0234(0x000C)
	float                                              Threshold;                                                // 0x0240(0x0004)
	float                                              BlendAmount;                                              // 0x0244(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0248(0x0004)
	float                                              InterpTime;                                               // 0x024C(0x0004)
	struct FVector                                     BoxExtent;                                                // 0x0250(0x000C)
	struct FVector                                     StoredDifference;                                         // 0x025C(0x000C)
	TEnumAsByte<EHazardEndingPlatform_ENeighbourDir>   NeighbourDir;                                             // 0x0268(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardEndingPlatform");
		return ptr;
	}


	void EnableTick();
	void SetBlendAmount(float BlendValue);
	void UpdateMovement(float DeltaTime);
	void InterpolateTo(float interpValue);
	void DoClose();
	void DoOpen();
	void SetDuplicatesHidden(bool bNewHidden);
	void Tick(float DeltaTime);
	void SetupDuplicates();
	void PostBeginPlay();
	void UpdateDuplicates(const struct FVector& NewTranslation);
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardExitDoors
// 0x006D (0x0241 - 0x01D4)
class AHazardExitDoors : public AActor
{
public:
	class UStaticMeshComponent*                        LeftDoor;                                                 // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        RightDoor;                                                // 0x01D8(0x0004) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bTestCollision : 1;                                       // 0x01DC(0x0004) (Edit)
	unsigned long                                      bPlaySounds : 1;                                          // 0x01DC(0x0004) (Edit)
	unsigned long                                      bUseAlternateSounds : 1;                                  // 0x01DC(0x0004) (Edit)
	unsigned long                                      bInterpolating : 1;                                       // 0x01DC(0x0004)
	unsigned long                                      bOpen : 1;                                                // 0x01DC(0x0004)
	float                                              BlendAmount;                                              // 0x01E0(0x0004)
	float                                              BlendTimeToGo;                                            // 0x01E4(0x0004)
	float                                              InterpTime;                                               // 0x01E8(0x0004)
	struct FVector                                     DoorScale;                                                // 0x01EC(0x000C)
	struct FVector                                     RotatedBoxExtent;                                         // 0x01F8(0x000C)
	struct FVector                                     LeftDoorLocation;                                         // 0x0204(0x000C)
	struct FVector                                     RightDoorLocation;                                        // 0x0210(0x000C)
	float                                              MovementTime;                                             // 0x021C(0x0004)
	float                                              SoundStopTime;                                            // 0x0220(0x0004)
	float                                              LastMovementTime;                                         // 0x0224(0x0004)
	class UAudioComponent*                             OpenSound;                                                // 0x0228(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             CloseSound;                                               // 0x022C(0x0004) (ExportObject, Component, EditInline)
	class USoundCue*                                   AlternateOpenSound;                                       // 0x0230(0x0004)
	class USoundCue*                                   AlternateCloseSound;                                      // 0x0234(0x0004)
	class AHazardPawn*                                 CachedPawn;                                               // 0x0238(0x0004)
	class AHazardPlayerController*                     CachedController;                                         // 0x023C(0x0004)
	TEnumAsByte<EHazardExitDoors_ENeighbourDir>        NeighbourDir;                                             // 0x0240(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardExitDoors");
		return ptr;
	}


	void SetBlendAmount(float BlendValue);
	void UpdateMovement(float DeltaTime);
	void InterpolateTo(float interpValue);
	void DoClose();
	void DoOpen();
	void Tick(float DeltaTime);
	void PlayClosedSound();
	void PlayOpenSound();
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardPawnSoundGroup
// 0x0050 (0x008C - 0x003C)
class UHazardPawnSoundGroup : public UObject
{
public:
	class USoundCue*                                   DefaultRunningFootstepSound;                              // 0x003C(0x0004)
	TArray<struct UHazardPawnSoundGroup_FFootstepSoundInfo> RunningFootstepSounds;                                    // 0x0040(0x000C) (NeedCtorLink)
	class USoundCue*                                   DefaultWalkingFootstepSound;                              // 0x004C(0x0004)
	TArray<struct UHazardPawnSoundGroup_FFootstepSoundInfo> WalkingFootstepSounds;                                    // 0x0050(0x000C) (NeedCtorLink)
	class USoundCue*                                   DefaultJumpingSound;                                      // 0x005C(0x0004)
	TArray<struct UHazardPawnSoundGroup_FFootstepSoundInfo> JumpingSounds;                                            // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct UHazardPawnSoundGroup_FFootstepSoundInfo> LandingSounds;                                            // 0x006C(0x000C) (NeedCtorLink)
	class USoundCue*                                   DefaultLandingSound;                                      // 0x0078(0x0004)
	TArray<struct UHazardPawnSoundGroup_FFootstepSoundInfo> BigLandingSounds;                                         // 0x007C(0x000C) (NeedCtorLink)
	class USoundCue*                                   DefaultBigLandingSound;                                   // 0x0088(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardPawnSoundGroup");
		return ptr;
	}


	class USoundCue* GetBigLandSound(TEnumAsByte<EMaterialType> MaterialType);
	class USoundCue* GetLandSound(TEnumAsByte<EMaterialType> MaterialType);
	class USoundCue* GetJumpSound(TEnumAsByte<EMaterialType> MaterialType);
	class USoundCue* GetRunningFootstepSound(int FootDown, TEnumAsByte<EMaterialType> MaterialType);
	class USoundCue* GetWalkingFootstepSound(int FootDown, TEnumAsByte<EMaterialType> MaterialType);
};


// Class Hazard.HazardFootstepVolume
// 0x0020 (0x0220 - 0x0200)
class AHazardFootstepVolume : public AVolume
{
public:
	class USoundCue*                                   PushSound;                                                // 0x0200(0x0004) (Edit)
	float                                              MinPushThreshold;                                         // 0x0204(0x0004) (Edit)
	float                                              MaxPushThreshold;                                         // 0x0208(0x0004) (Edit)
	TEnumAsByte<EMaterialType>                         MaterialType;                                             // 0x020C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x020D(0x0003) MISSED OFFSET
	float                                              VolumeMultiplier;                                         // 0x0210(0x0004) (Edit)
	float                                              PitchMultiplier;                                          // 0x0214(0x0004) (Edit)
	float                                              CachedMoveDistance;                                       // 0x0218(0x0004)
	float                                              CachedMoveThreshold;                                      // 0x021C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardFootstepVolume");
		return ptr;
	}


	void ResetMoveThreshold();
	void TestPlayPushSound(class AHazardPawn* MovingPawn, float NewDistance);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class Hazard.HazardStepTile
// 0x009B (0x0278 - 0x01DD)
class AHazardStepTile : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01E0(0x0004) (Edit, Const, ExportObject, EditConst, Component, EditInline)
	TArray<class UHazardStepTileComponent*>            TileComponents;                                           // 0x01E4(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	unsigned long                                      bSetupNeighbours : 1;                                     // 0x01F0(0x0004)
	unsigned long                                      bModified : 1;                                            // 0x01F0(0x0004)
	unsigned long                                      bStartTile : 1;                                           // 0x01F0(0x0004) (Edit)
	struct AHazardStepTile_FClusteredAxis              ClusteredAxisNeighbours[0x6];                             // 0x01F4(0x000C) (NeedCtorLink)
	int                                                NumClusteredNeighbours;                                   // 0x023C(0x0004)
	int                                                NumNeighbourTests;                                        // 0x0240(0x0004)
	int                                                XScale;                                                   // 0x0244(0x0004)
	int                                                YScale;                                                   // 0x0248(0x0004)
	int                                                ZScale;                                                   // 0x024C(0x0004)
	struct FVector                                     ResetScale;                                               // 0x0250(0x000C)
	class UMaterialInterface*                          ResetMaterial;                                            // 0x025C(0x0004)
	TEnumAsByte<EHazardDistanceTile_ECollisionSet>     CollisionSet;                                             // 0x0260(0x0001) (Edit)
	TEnumAsByte<EHazardStepTile_ENeighbourDir>         NeighbourDir;                                             // 0x0261(0x0001) (Const)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0262(0x0002) MISSED OFFSET
	float                                              InterpTime;                                               // 0x0264(0x0004) (Edit)
	int                                                MaxCloseStepRecursions;                                   // 0x0268(0x0004) (Edit)
	class AHazardGame*                                 HazardGame;                                               // 0x026C(0x0004)
	int                                                ActiveComponents;                                         // 0x0270(0x0004)
	int                                                ClosedComponents;                                         // 0x0274(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardStepTile");
		return ptr;
	}


	void Detach(class AActor* Other);
	void Attach(class AActor* Other);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void Tick(float DeltaTime);
	void OpenChildren();
	void HideChildren();
	void FindNeighbours();
	void FindClusteredNeighbours();
	void CreateTiles();
	class UHazardStepTileComponent* FindTileComponentFromVector(const struct FVector& SearchLocation);
	void PostBeginPlay();
	bool DoesContainPoint(const struct FVector& SearchLocation);
	class UHazardStepTileComponent* AddComponent();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardPickupFactory
// 0x0028 (0x0394 - 0x036C)
class AHazardPickupFactory : public AUDKPickupFactory
{
public:
	class UClass*                                      PickupClass;                                              // 0x036C(0x0004) (Edit)
	class UParticleSystemComponent*                    BaseGlow;                                                 // 0x0370(0x0004) (ExportObject, Component, EditInline)
	float                                              WeaponPickupScaling;                                      // 0x0374(0x0004)
	int                                                gunLevel;                                                 // 0x0378(0x0004) (Edit)
	class UUDKSkeletalMeshComponent*                   PickupMeshes[0x4];                                        // 0x037C(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   GunMaterial;                                              // 0x038C(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x0390(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardPickupFactory");
		return ptr;
	}


	void NotifyLocalPlayerDead(class APlayerController* PC);
	void ShowHidden();
	void ShowActive();
	void StartSleeping();
	bool CheckForErrors();
	void SetPickupMesh();
	void InitializePickup();
	void PickedUpBy(class APawn* P);
	void SetInitialState();
	void SetPickupHidden();
	void SetPickupVisible();
	void InitPickupMeshEffects();
	void StartPulse(const struct FLinearColor& TargetEmissive);
	void RespawnEffect();
	void ShutDown();
	void DisablePickup();
	void SetResOut();
	void PostBeginPlay();
};


// Class Hazard.HazardOptionsButton
// 0x0014 (0x0224 - 0x0210)
class AHazardOptionsButton : public ADynamicSMActor
{
public:
	class UMaterialInstanceConstant*                   ButtonMaterial;                                           // 0x0210(0x0004)
	class AHazardGame*                                 HazardGame;                                               // 0x0214(0x0004)
	TEnumAsByte<EDisplayMode>                          DisplayMode;                                              // 0x0218(0x0001) (Edit)
	TEnumAsByte<ESoundMode>                            SoundMode;                                                // 0x0219(0x0001) (Edit)
	TEnumAsByte<EResolutionMode>                       ResolutionMode;                                           // 0x021A(0x0001) (Edit)
	TEnumAsByte<EMouseMode>                            MouseMode;                                                // 0x021B(0x0001) (Edit)
	TEnumAsByte<ESensitivitySettings>                  SensitivitySettings;                                      // 0x021C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	unsigned long                                      bDefaultOption : 1;                                       // 0x0220(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardOptionsButton");
		return ptr;
	}


	void UnsaveSetting(class AHazardOptionsButton* HOB);
	void SaveSettings();
	void Activated(bool bLoading);
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void InitializeMaterial();
	void PostBeginPlay();
};


// Class Hazard.HazardSecretTile
// 0x0058 (0x0235 - 0x01DD)
class AHazardSecretTile : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01E0(0x0004) (Edit, Const, ExportObject, EditConst, Component, EditInline)
	class USoundCue*                                   StepSound;                                                // 0x01E4(0x0004)
	class USoundCue*                                   UnlockSound;                                              // 0x01E8(0x0004)
	unsigned long                                      bUnlocked : 1;                                            // 0x01EC(0x0004)
	unsigned long                                      bCrawling : 1;                                            // 0x01EC(0x0004)
	float                                              InterpTime;                                               // 0x01F0(0x0004)
	float                                              ViewDistance;                                             // 0x01F4(0x0004)
	float                                              BlendAmount;                                              // 0x01F8(0x0004)
	float                                              BlendTimeToGo;                                            // 0x01FC(0x0004)
	TArray<class AHazardPathNode*>                     PathNodes;                                                // 0x0200(0x000C) (Edit, NeedCtorLink)
	int                                                CurrentArrayNode;                                         // 0x020C(0x0004)
	struct FVector                                     TargetLocation;                                           // 0x0210(0x000C)
	struct FRotator                                    TargetRotation;                                           // 0x021C(0x000C)
	int                                                AutoSteps;                                                // 0x0228(0x0004)
	float                                              TriggerDistance;                                          // 0x022C(0x0004)
	float                                              ScreenCenterDistance;                                     // 0x0230(0x0004)
	TEnumAsByte<EHazardSecretTile_ENeighbourDir>       NeighbourDir;                                             // 0x0234(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSecretTile");
		return ptr;
	}


	class AActor* PenetratingTrace(const struct FVector& EndTrace, const struct FVector& StartTrace, struct FVector* HitLocation, struct FVector* HitNormal);
	bool PassThroughDamage(class AActor* HitActor);
	void UnlockSecret();
	void FinishCrawl();
	bool SetFacingRotation();
	bool TestRotation(const struct FRotator& TestRotation);
	void StartCrawl();
	void Crawl(float DeltaTime);
	void Tick(float DeltaTime);
	void EnableTick();
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardTriggerMap
// 0x0014 (0x01F4 - 0x01E0)
class AHazardTriggerMap : public ATrigger
{
public:
	class ADynamicSMActor*                             MapLocation;                                              // 0x01E0(0x0004) (Edit)
	TArray<class ADynamicSMActor*>                     AdditionalPaths;                                          // 0x01E4(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bPingMap : 1;                                             // 0x01F0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardTriggerMap");
		return ptr;
	}


	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Activate();
};


// Class Hazard.HazardTowerMesh
// 0x0008 (0x01DC - 0x01D4)
class AHazardTowerMesh : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, Const, ExportObject, EditConst, Component, EditInline)
	int                                                TowerLevel;                                               // 0x01D8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardTowerMesh");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Hazard.HazardIcon
// 0x0038 (0x020C - 0x01D4)
class AHazardIcon : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, Const, ExportObject, EditConst, Component, EditInline)
	unsigned long                                      bHint : 1;                                                // 0x01D8(0x0004)
	unsigned long                                      bUnlocked : 1;                                            // 0x01D8(0x0004)
	class UMaterialInterface*                          LockedIcon;                                               // 0x01DC(0x0004)
	class UMaterialInterface*                          LockedPicture;                                            // 0x01E0(0x0004)
	class UMaterialInterface*                          LockedText;                                               // 0x01E4(0x0004)
	class UMaterialInterface*                          LockedTitle;                                              // 0x01E8(0x0004)
	class ASceneCapture2DActor*                        HintCamera;                                               // 0x01EC(0x0004) (Edit)
	class UMaterialInterface*                          HintIcon;                                                 // 0x01F0(0x0004)
	class UMaterialInterface*                          HintPicture;                                              // 0x01F4(0x0004)
	class UMaterialInterface*                          HintText;                                                 // 0x01F8(0x0004) (Edit)
	class UMaterialInterface*                          HintTitle;                                                // 0x01FC(0x0004) (Edit)
	class UMaterialInterface*                          UnlockedPicture;                                          // 0x0200(0x0004)
	class UMaterialInterface*                          UnlockedText;                                             // 0x0204(0x0004)
	class UMaterialInterface*                          UnlockedTitle;                                            // 0x0208(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardIcon");
		return ptr;
	}


	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void SetIcons(class UMaterialInterface* IconMaterial, class UMaterialInterface* TextMaterial, class UMaterialInterface* TitleMaterial);
	void UpdateIcons();
	void Unlock();
	void Hint();
	void Find();
	void Hide();
	void PostBeginPlay();
};


// Class Hazard.HazardSaveGame
// 0x0050 (0x008C - 0x003C)
class UHazardSaveGame : public UObject
{
public:
	float                                              PlayTime;                                                 // 0x003C(0x0004)
	unsigned long                                      bHiddenSignHints : 1;                                     // 0x0040(0x0004)
	TArray<class AHazardTrigger*>                      SavedTriggers;                                            // 0x0044(0x000C) (NeedCtorLink)
	TArray<class AHazardTriggerMap*>                   MapArray;                                                 // 0x0050(0x000C) (NeedCtorLink)
	TArray<class AHazardPickupFactory*>                SavedPickups;                                             // 0x005C(0x000C) (NeedCtorLink)
	TArray<class AHazardOptionsButton*>                SavedOptions;                                             // 0x0068(0x000C) (NeedCtorLink)
	TArray<class AActor*>                              SavedActors;                                              // 0x0074(0x000C) (NeedCtorLink)
	TArray<class AHazardSecretTile*>                   SavedSecrets;                                             // 0x0080(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSaveGame");
		return ptr;
	}

};


// Class Hazard.HazardIconPreview
// 0x0098 (0x026C - 0x01D4)
class AHazardIconPreview : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        IconMesh;                                                 // 0x01D8(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        IconBorderMesh;                                           // 0x01DC(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        IconBackgroundMesh;                                       // 0x01E0(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        MessageMesh;                                              // 0x01E4(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        MessageBorderMesh;                                        // 0x01E8(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        MessageBackgroundMesh;                                    // 0x01EC(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   IconMaterial;                                             // 0x01F0(0x0004)
	class UMaterialInstanceConstant*                   MessageMaterial;                                          // 0x01F4(0x0004)
	class UMaterialInterface*                          IconWallMaterial;                                         // 0x01F8(0x0004)
	class UMaterialInstanceConstant*                   IconWallInstance;                                         // 0x01FC(0x0004)
	struct FVector                                     IconWallBounds;                                           // 0x0200(0x000C)
	unsigned long                                      bTransitioning : 1;                                       // 0x020C(0x0004)
	unsigned long                                      bFadingIcon : 1;                                          // 0x020C(0x0004)
	unsigned long                                      bFadingText : 1;                                          // 0x020C(0x0004)
	unsigned long                                      bShowingPreview : 1;                                      // 0x020C(0x0004)
	float                                              InterpTime;                                               // 0x0210(0x0004)
	float                                              BlendAmount;                                              // 0x0214(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0218(0x0004)
	float                                              TargetScale;                                              // 0x021C(0x0004)
	float                                              OriginalScale;                                            // 0x0220(0x0004)
	struct FVector                                     TargetLocation;                                           // 0x0224(0x000C)
	struct FVector                                     OriginalLocation;                                         // 0x0230(0x000C)
	float                                              OriginalOpacity;                                          // 0x023C(0x0004)
	float                                              TargetOpacity;                                            // 0x0240(0x0004)
	class AHazardIcon*                                 CurrentHighlightIcon;                                     // 0x0244(0x0004)
	class AHazardIcon*                                 CurrentIcon;                                              // 0x0248(0x0004)
	class AHazardIcon*                                 PrevIcon;                                                 // 0x024C(0x0004)
	class ADynamicSMActor*                             IconWall;                                                 // 0x0250(0x0004)
	struct FVector                                     TargetTranslation;                                        // 0x0254(0x000C)
	class AHazardGame*                                 HazardGame;                                               // 0x0260(0x0004)
	class UAudioComponent*                             GrowingSound;                                             // 0x0264(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             ShrinkingSound;                                           // 0x0268(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardIconPreview");
		return ptr;
	}


	void Tick(float DeltaTime);
	void ForceUpdate(class AHazardIcon* NewIcon);
	void HidePreview();
	void ShowPreview(class AHazardIcon* NewIcon);
	void Highlight(class AHazardIcon* NewIcon);
	void UnHighlight();
	void PostBeginPlay();
};


// Class Hazard.HazardMapPreview
// 0x00A8 (0x027C - 0x01D4)
class AHazardMapPreview : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        MapBorderMesh;                                            // 0x01D8(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        MapBackgroundMesh;                                        // 0x01DC(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        PreviewBorderMesh;                                        // 0x01E0(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        PreviewBorderMeshBlack;                                   // 0x01E4(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        PreviewBackgroundMesh;                                    // 0x01E8(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        PreviewMesh;                                              // 0x01EC(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        TitleMesh;                                                // 0x01F0(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        TitleBorderMesh;                                          // 0x01F4(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        TitleBackgroundMesh;                                      // 0x01F8(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        InstructionMesh;                                          // 0x01FC(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        InstructionBorderMesh;                                    // 0x0200(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        InstructionBackgroundMesh;                                // 0x0204(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   PreviewMaterial;                                          // 0x0208(0x0004)
	class UMaterialInstanceConstant*                   TitleMaterial;                                            // 0x020C(0x0004)
	class UMaterialInstanceConstant*                   InstructionMaterial;                                      // 0x0210(0x0004)
	class UMaterialInterface*                          MapWallMaterial;                                          // 0x0214(0x0004)
	class UMaterialInstanceConstant*                   MapWallInstance;                                          // 0x0218(0x0004)
	struct FVector                                     MapBounds;                                                // 0x021C(0x000C)
	unsigned long                                      bTransitioning : 1;                                       // 0x0228(0x0004)
	unsigned long                                      bShowingPreview : 1;                                      // 0x0228(0x0004)
	float                                              InterpTime;                                               // 0x022C(0x0004)
	float                                              BlendAmount;                                              // 0x0230(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0234(0x0004)
	float                                              TargetScale;                                              // 0x0238(0x0004)
	struct FVector                                     TargetLocation;                                           // 0x023C(0x000C)
	struct FRotator                                    TargetRotation;                                           // 0x0248(0x000C)
	struct FVector                                     OriginalLocation;                                         // 0x0254(0x000C)
	struct FRotator                                    OriginalRotation;                                         // 0x0260(0x000C)
	class AHazardMapNode*                              CurrentNode;                                              // 0x026C(0x0004)
	class AHazardMapNode*                              PrevNode;                                                 // 0x0270(0x0004)
	class ADynamicSMActor*                             MapWall;                                                  // 0x0274(0x0004)
	class AHazardGame*                                 HazardGame;                                               // 0x0278(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardMapPreview");
		return ptr;
	}


	void Tick(float DeltaTime);
	void FadeTo(float Target);
	void Interact();
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void HidePreview();
	struct FVector CalculateSafeTarget(const struct FVector& TestLocation);
	void ShowPreview(class AHazardMapNode* NewNode);
	void PostBeginPlay();
};


// Class Hazard.HazardSign
// 0x007C (0x0250 - 0x01D4)
class AHazardSign : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        BorderMesh;                                               // 0x01D8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        IconMesh;                                                 // 0x01DC(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        TextMesh;                                                 // 0x01E0(0x0004) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        HintMesh;                                                 // 0x01E4(0x0004) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   IconMaterial;                                             // 0x01E8(0x0004)
	class UMaterialInstanceConstant*                   TextMaterial;                                             // 0x01EC(0x0004)
	class UMaterialInstanceConstant*                   HintMaterial;                                             // 0x01F0(0x0004)
	float                                              MinOpacity;                                               // 0x01F4(0x0004)
	unsigned long                                      bOnScreen : 1;                                            // 0x01F8(0x0004)
	unsigned long                                      bClicked : 1;                                             // 0x01F8(0x0004)
	unsigned long                                      bDim : 1;                                                 // 0x01F8(0x0004)
	unsigned long                                      bCheckDistance : 1;                                       // 0x01F8(0x0004)
	unsigned long                                      bTicking : 1;                                             // 0x01F8(0x0004)
	unsigned long                                      bShowingIcon : 1;                                         // 0x01F8(0x0004)
	unsigned long                                      bTransitioning : 1;                                       // 0x01F8(0x0004)
	unsigned long                                      bFadingToBlack : 1;                                       // 0x01F8(0x0004)
	class UAudioComponent*                             TransitionSound;                                          // 0x01FC(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             DimSound;                                                 // 0x0200(0x0004) (ExportObject, Component, EditInline)
	class USoundCue*                                   TransitionSoundStacked;                                   // 0x0204(0x0004)
	class USoundCue*                                   DimSoundStacked;                                          // 0x0208(0x0004)
	class USoundCue*                                   BrightSoundStacked;                                       // 0x020C(0x0004)
	float                                              MaxBrightness;                                            // 0x0210(0x0004)
	TArray<class AHazardSign*>                         SisterSigns;                                              // 0x0214(0x000C) (Edit, NeedCtorLink)
	float                                              InterpTime;                                               // 0x0220(0x0004)
	float                                              BlendAmount;                                              // 0x0224(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0228(0x0004)
	struct FVector                                     RotationX;                                                // 0x022C(0x000C)
	struct FVector                                     RotationY;                                                // 0x0238(0x000C)
	struct FVector                                     RotationZ;                                                // 0x0244(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSign");
		return ptr;
	}


	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Tick(float DeltaTime);
	class AActor* PenetratingTrace(const struct FVector& EndTrace, const struct FVector& StartTrace, struct FVector* HitLocation, struct FVector* HitNormal);
	bool PassThroughDamage(class AActor* HitActor);
	void CheckDistance();
	void FadeTo(float Target);
	void Interact(bool bPlaySound);
	void UpdateSisters();
	void PostBeginPlay();
};


// Class Hazard.HazardSeqEvent_IconThreshold
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_IconThreshold : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_IconThreshold");
		return ptr;
	}

};


// Class Hazard.HazardHUD
// 0x0014 (0x05A0 - 0x058C)
class AHazardHUD : public AUDKHUD
{
public:
	unsigned long                                      bGreenCrosshair : 1;                                      // 0x058C(0x0004)
	unsigned long                                      bCrosshairShow : 1;                                       // 0x058C(0x0004)
	unsigned long                                      bCrosshairDisabled : 1;                                   // 0x058C(0x0004)
	struct FColor                                      BlackColor;                                               // 0x0590(0x0004) (Const)
	struct FColor                                      GoldColor;                                                // 0x0594(0x0004) (Const)
	struct FColor                                      LightGoldColor;                                           // 0x0598(0x0004) (Const)
	struct FColor                                      LightGreenColor;                                          // 0x059C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardHUD");
		return ptr;
	}


	void DrawHUD();
	void DisplayConsoleMessages();
};


// Class Hazard.HazardGlassPanelNoMiddle
// 0x0004 (0x01E8 - 0x01E4)
class AHazardGlassPanelNoMiddle : public AHazardGlassPanel
{
public:
	class UStaticMeshComponent*                        MiddleMesh;                                               // 0x01E4(0x0004) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardGlassPanelNoMiddle");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Hazard.HazardGuide
// 0x0033 (0x0210 - 0x01DD)
class AHazardGuide : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01E0(0x0004) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bActive : 1;                                              // 0x01E4(0x0004)
	unsigned long                                      bOnScreen : 1;                                            // 0x01E4(0x0004)
	unsigned long                                      bFadeOut : 1;                                             // 0x01E4(0x0004) (Edit)
	class UMaterialInstanceConstant*                   GuideMaterial;                                            // 0x01E8(0x0004)
	float                                              TriggerDistance;                                          // 0x01EC(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x01F0(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x01F4(0x0004) (Edit)
	float                                              InterpTime;                                               // 0x01F8(0x0004)
	float                                              BlendAmount;                                              // 0x01FC(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0200(0x0004)
	float                                              FillInterpTime;                                           // 0x0204(0x0004)
	float                                              FillBlendAmount;                                          // 0x0208(0x0004)
	float                                              FillBlendTimeToGo;                                        // 0x020C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardGuide");
		return ptr;
	}


	void Tick(float DeltaTime);
	void CheckDistance();
	void SetActive(bool bNewValue);
	void FadeTo(float Target);
	void PostBeginPlay();
};


// Class Hazard.HazardInventoryManager
// 0x0000 (0x01F0 - 0x01F0)
class AHazardInventoryManager : public AInventoryManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardInventoryManager");
		return ptr;
	}

};


// Class Hazard.HazardJumpDownTile
// 0x007D (0x0251 - 0x01D4)
class AHazardJumpDownTile : public AActor
{
public:
	class UAudioComponent*                             SlowSound;                                                // 0x01D4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             SlowSoundDecay;                                           // 0x01D8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             MedSound;                                                 // 0x01DC(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             MedSoundDecay;                                            // 0x01E0(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             FastSound;                                                // 0x01E4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             FastSoundDecay;                                           // 0x01E8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             FastSoundLaunch;                                          // 0x01EC(0x0004) (ExportObject, Component, EditInline)
	unsigned long                                      bPlayingSlowSound : 1;                                    // 0x01F0(0x0004)
	unsigned long                                      bPlayingMedSound : 1;                                     // 0x01F0(0x0004)
	unsigned long                                      bPlayingFastSound : 1;                                    // 0x01F0(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x01F0(0x0004)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01F4(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              UpdateDistance;                                           // 0x01F8(0x0004)
	struct FVector                                     TileScale;                                                // 0x01FC(0x000C)
	struct FVector                                     CurrentVelocity;                                          // 0x0208(0x000C)
	struct FVector                                     DefaultLocation;                                          // 0x0214(0x000C)
	struct FVector                                     MaxLocation;                                              // 0x0220(0x000C)
	float                                              OpenDistance;                                             // 0x022C(0x0004) (Edit)
	struct FVector                                     RotatedBoxExtent;                                         // 0x0230(0x000C)
	float                                              JamTime;                                                  // 0x023C(0x0004)
	float                                              JamDelay;                                                 // 0x0240(0x0004)
	float                                              BounceDampening;                                          // 0x0244(0x0004)
	float                                              BounceThreshold;                                          // 0x0248(0x0004)
	float                                              MaxBounceVelocity;                                        // 0x024C(0x0004)
	TEnumAsByte<EHazardJumpDownTile_ENeighbourDir>     NeighbourDir;                                             // 0x0250(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardJumpDownTile");
		return ptr;
	}


	void UpdateMovement(float DeltaTime);
	void AddVelocity(const struct FVector& Impulse);
	void Tick(float DeltaTime);
	void UpdateSounds(float DeltaTime);
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardJumpPad
// 0x0000 (0x02CC - 0x02CC)
class AHazardJumpPad : public AUDKJumpPad
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardJumpPad");
		return ptr;
	}

};


// Class Hazard.HazardSeqEvent_Intercepted
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_Intercepted : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_Intercepted");
		return ptr;
	}

};


// Class Hazard.HazardMapNode
// 0x0068 (0x0245 - 0x01DD)
class AHazardMapNode : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01E0(0x0004) (Edit, Const, ExportObject, EditConst, Component, EditInline)
	TArray<class AActor*>                              MapCovers;                                                // 0x01E4(0x000C) (Edit, NeedCtorLink)
	TArray<class AHazardSecretTile*>                   SecretTiles;                                              // 0x01F0(0x000C) (Edit, NeedCtorLink)
	class AActor*                                      LevelActor;                                               // 0x01FC(0x0004) (Edit)
	class ASceneCapture2DActor*                        LevelCamera;                                              // 0x0200(0x0004) (Edit)
	class UMaterialInterface*                          LevelTitle;                                               // 0x0204(0x0004) (Edit)
	class USceneCapture2DComponent*                    CaptureComponent;                                         // 0x0208(0x0004) (ExportObject, Component, EditInline)
	class AHazardPlayerController*                     RealPlayer;                                               // 0x020C(0x0004)
	struct FVector                                     PopupStartLocation;                                       // 0x0210(0x000C)
	struct FVector                                     PopupEndLocation;                                         // 0x021C(0x000C)
	unsigned long                                      bShrunk : 1;                                              // 0x0228(0x0004)
	unsigned long                                      bHighlighted : 1;                                         // 0x0228(0x0004)
	float                                              OriginalDrawScale;                                        // 0x022C(0x0004)
	float                                              ShrunkDrawScale;                                          // 0x0230(0x0004)
	float                                              CurrentDrawScale;                                         // 0x0234(0x0004)
	float                                              BlendAmount;                                              // 0x0238(0x0004)
	float                                              BlendTimeToGo;                                            // 0x023C(0x0004)
	float                                              InterpTime;                                               // 0x0240(0x0004)
	TEnumAsByte<EShrinkMode>                           ShrinkMode;                                               // 0x0244(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardMapNode");
		return ptr;
	}


	void UpdateMapNode();
	void DelayedJump();
	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void SetHighlighted(bool bNewHighlighted);
	void TestShrink();
	void ShrinkNode(float DeltaTime);
	void InterpolateTo(float interpValue);
	void CheckShrink();
	void Tick(float DeltaTime);
	void PostBeginPlay();
};


// Class Hazard.HazardSeqEvent_MapChanged
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_MapChanged : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_MapChanged");
		return ptr;
	}

};


// Class Hazard.HazardMapProxy
// 0x0007 (0x024C - 0x0245)
class AHazardMapProxy : public AHazardMapNode
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	class AHazardMapNode*                              ProxyNode;                                                // 0x0248(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardMapProxy");
		return ptr;
	}


	void SetHighlighted(bool bNewHighlighted);
	void Tick(float DeltaTime);
	void PostBeginPlay();
};


// Class Hazard.HazardNoAmmoVolumeMesh
// 0x0023 (0x0200 - 0x01DD)
class AHazardNoAmmoVolumeMesh : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        TransparentMesh;                                          // 0x01E0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        WireframeMesh;                                            // 0x01E4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // 0x01E8(0x0004) (Edit, ExportObject, Component, EditInline)
	class AHazardPawn*                                 CachedPawn;                                               // 0x01EC(0x0004)
	class AHazardGame*                                 HazardGame;                                               // 0x01F0(0x0004)
	struct FVector                                     BoxExtent;                                                // 0x01F4(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardNoAmmoVolumeMesh");
		return ptr;
	}


	void Tick(float DeltaTime);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void PostBeginPlay();
};


// Class Hazard.HazardPathNode
// 0x0004 (0x01D8 - 0x01D4)
class AHazardPathNode : public AActor
{
public:
	int                                                AutoSteps;                                                // 0x01D4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardPathNode");
		return ptr;
	}

};


// Class Hazard.HazardSnakeFloorComponent
// 0x002F (0x027F - 0x0250)
class UHazardSnakeFloorComponent : public UStaticMeshComponent
{
public:
	float                                              FinishedOpenTime;                                         // 0x0250(0x0004)
	float                                              CloseDelay;                                               // 0x0254(0x0004)
	class AHazardGame*                                 HazardGame;                                               // 0x0258(0x0004)
	class AHazardSnakeFloor*                           Parent;                                                   // 0x025C(0x0004)
	struct FVector                                     DefaultTranslation;                                       // 0x0260(0x000C)
	float                                              StepTime;                                                 // 0x026C(0x0004)
	unsigned long                                      bInterpolating : 1;                                       // 0x0270(0x0004)
	unsigned long                                      bModified : 1;                                            // 0x0270(0x0004)
	float                                              BlendAmount;                                              // 0x0274(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0278(0x0004)
	TEnumAsByte<EHazardActor_EGlobalCollision>         GlobalCollision;                                          // 0x027C(0x0001)
	TEnumAsByte<EHazardSnakeFloorComponent_EMoveState> MoveState;                                                // 0x027D(0x0001)
	TEnumAsByte<EHazardSnakeFloorComponent_ENeighbourDir> NeighbourDir;                                             // 0x027E(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSnakeFloorComponent");
		return ptr;
	}


	void FinishedInterpolation();
	void SetBlendAmount(float BlendValue);
	void SetGlobalCollision(bool bEnabled);
	void UpdateGlobalCollision();
	void UpdateMovement(float DeltaTime);
	void InterpolateTo(float interpValue);
	void DoClose();
	void DoOpen();
	void FinishedOpen();
	void FinishedClose();
	void Close();
	void Open();
	void Tick(float DeltaTime);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	bool DoesContainPoint(const struct FVector& SearchLocation);
	void InitializeTile(class AHazardSnakeFloor* NewOwner);
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardSnakeFloor
// 0x0031 (0x0205 - 0x01D4)
class AHazardSnakeFloor : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, Const, ExportObject, EditConst, Component, EditInline)
	TArray<class UHazardSnakeFloorComponent*>          TileComponents;                                           // 0x01D8(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	unsigned long                                      bTicking : 1;                                             // 0x01E4(0x0004)
	struct FVector                                     ResetScale;                                               // 0x01E8(0x000C)
	float                                              InterpTime;                                               // 0x01F4(0x0004) (Edit)
	class AHazardGame*                                 HazardGame;                                               // 0x01F8(0x0004)
	int                                                ActiveComponents;                                         // 0x01FC(0x0004)
	float                                              CloseDelay;                                               // 0x0200(0x0004)
	TEnumAsByte<EHazardSnakeFloor_ENeighbourDir>       NeighbourDir;                                             // 0x0204(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSnakeFloor");
		return ptr;
	}


	void Detach(class AActor* Other);
	void Attach(class AActor* Other);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void Tick(float DeltaTime);
	void CreateTiles();
	void PostBeginPlay();
	bool DoesContainPoint(const struct FVector& SearchLocation);
	class UHazardSnakeFloorComponent* AddComponent();
	void Reset();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardStepTileComponent
// 0x0048 (0x0298 - 0x0250)
class UHazardStepTileComponent : public UStaticMeshComponent
{
public:
	class AHazardGame*                                 HazardGame;                                               // 0x0250(0x0004)
	class AHazardStepTile*                             Parent;                                                   // 0x0254(0x0004)
	TArray<class UHazardStepTileComponent*>            ClusteredNeighbours;                                      // 0x0258(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	int                                                CloseStepRecursions;                                      // 0x0264(0x0004)
	float                                              StepTime;                                                 // 0x0268(0x0004)
	unsigned long                                      bInterpolating : 1;                                       // 0x026C(0x0004)
	unsigned long                                      bModified : 1;                                            // 0x026C(0x0004)
	float                                              BlendAmount;                                              // 0x0270(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0274(0x0004)
	TEnumAsByte<EHazardActor_EGlobalCollision>         GlobalCollision;                                          // 0x0278(0x0001)
	TEnumAsByte<EHazardStepTileComponent_EMoveState>   MoveState;                                                // 0x0279(0x0001)
	TEnumAsByte<EHazardStepTileComponent_ENeighbourDir> NeighbourDir;                                             // 0x027A(0x0001) (Const)
	unsigned char                                      UnknownData00[0x1];                                       // 0x027B(0x0001) MISSED OFFSET
	class UMaterialInstanceConstant*                   HazardSkin;                                               // 0x027C(0x0004)
	class UHazardStepTileComponent*                    Neighbours[0x6];                                          // 0x0280(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardStepTileComponent");
		return ptr;
	}


	void FinishedInterpolation();
	void SetBlendAmount(float BlendValue);
	void SetGlobalCollision(bool bEnabled);
	void UpdateGlobalCollision();
	void UpdateMovement(float DeltaTime);
	void InterpolateTo(float interpValue);
	void DoClose();
	void DoOpen();
	void FinishedOpen();
	void FinishedClose();
	void Close();
	void Open();
	void Tick(float DeltaTime);
	void UpdateWhiteSounds();
	class UMaterialInstanceConstant* CreateAndSetNewMaterialInstanceConstant(int ElementIndex, class UMaterialInterface* NewMaterial);
	struct FVector GetClampedLocation(const struct FVector& SearchLocation);
	void RecurseStep(bool bFixedRadius);
	bool DoesContainPoint(const struct FVector& SearchLocation);
	void InitializeTile(class AHazardStepTile* NewOwner);
	void FindNeighbours();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardPortal
// 0x0030 (0x020D - 0x01DD)
class AHazardPortal : public AHazardActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x01E0(0x0004) (ExportObject, Component, EditInline)
	float                                              UpdateDistance;                                           // 0x01E4(0x0004) (Edit)
	struct FVector                                     RotatedBoxExtent;                                         // 0x01E8(0x000C)
	class AHazardPlayerController*                     PC;                                                       // 0x01F4(0x0004)
	unsigned long                                      bOnScreen : 1;                                            // 0x01F8(0x0004)
	unsigned long                                      bViewEncapsulated : 1;                                    // 0x01F8(0x0004)
	float                                              LastUpdateTime;                                           // 0x01FC(0x0004)
	TArray<struct FVector>                             TestPoints;                                               // 0x0200(0x000C) (NeedCtorLink)
	TEnumAsByte<EHazardPortal_ENeighbourDir>           NeighbourDir;                                             // 0x020C(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardPortal");
		return ptr;
	}


	void Tick(float DeltaTime);
	bool ShouldUpdate();
	void OffScreen(class AHazardPlayerController* Player);
	void OnScreen(class AHazardPlayerController* Player);
	void ViewEncapsulated(class AHazardPlayerController* Player);
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardSeqEvent_ChamberTransition
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_ChamberTransition : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_ChamberTransition");
		return ptr;
	}

};


// Class Hazard.HazardSeqEvent_ShowCredits
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_ShowCredits : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_ShowCredits");
		return ptr;
	}

};


// Class Hazard.HazardSeqEvent_ViewEncapsulated
// 0x0000 (0x0100 - 0x0100)
class UHazardSeqEvent_ViewEncapsulated : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqEvent_ViewEncapsulated");
		return ptr;
	}

};


// Class Hazard.HazardProj_RiotBall
// 0x000C (0x01E0 - 0x01D4)
class AHazardProj_RiotBall : public AActor
{
public:
	class AHazardRiotMaster*                           Parent;                                                   // 0x01D4(0x0004)
	class UMaterialInstanceConstant*                   ProjMaterial;                                             // 0x01D8(0x0004)
	class UStaticMeshComponent*                        BallMesh;                                                 // 0x01DC(0x0004) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardProj_RiotBall");
		return ptr;
	}


	void Initialize(class AHazardRiotMaster* NewParent);
};


// Class Hazard.HazardRiotMaster
// 0x011C (0x02F0 - 0x01D4)
class AHazardRiotMaster : public AActor
{
public:
	TArray<class AHazardProj_RiotBall*>                RiotSlaves;                                               // 0x01D4(0x000C) (NeedCtorLink)
	class UStaticMeshComponent*                        UpdateCollisionBox;                                       // 0x01E0(0x0004) (ExportObject, Component, EditInline)
	class UDrawBoxComponent*                           UpdateBounds;                                             // 0x01E4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UDrawBoxComponent*                           MaxCollisionBounds;                                       // 0x01E8(0x0004) (Edit, ExportObject, Component, EditInline)
	int                                                NumberSlaves;                                             // 0x01EC(0x0004) (Edit)
	int                                                TriggerVelocity;                                          // 0x01F0(0x0004) (Edit)
	float                                              LastAngryTime;                                            // 0x01F4(0x0004)
	float                                              ExplodeDelay;                                             // 0x01F8(0x0004)
	float                                              Angryness;                                                // 0x01FC(0x0004)
	float                                              AngryIncrease;                                            // 0x0200(0x0004)
	float                                              AngryThreshold;                                           // 0x0204(0x0004)
	class UDrawSphereComponent*                        RenderComponent;                                          // 0x0208(0x0004) (ExportObject, Component, EditInline)
	unsigned long                                      bExploding : 1;                                           // 0x020C(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x020C(0x0004)
	unsigned long                                      bInsideBox : 1;                                           // 0x020C(0x0004)
	class AHazardPawn*                                 PlayerPawn;                                               // 0x0210(0x0004)
	struct FVector                                     MaxBoxExtent;                                             // 0x0214(0x000C)
	struct FVector                                     MaxBoxLocation;                                           // 0x0220(0x000C)
	struct FVector                                     RotatedBoxExtent;                                         // 0x022C(0x000C)
	struct FVector                                     RotatedBoxLocation;                                       // 0x0238(0x000C)
	class UMaterialInstanceConstant*                   RiotMaterial;                                             // 0x0244(0x0004)
	class UMaterialInterface*                          RiotMaterialTemplate;                                     // 0x0248(0x0004)
	struct FLinearColor                                CurrentColour;                                            // 0x024C(0x0010)
	struct FLinearColor                                DesiredColour;                                            // 0x025C(0x0010)
	struct FLinearColor                                StartBlendColour;                                         // 0x026C(0x0010)
	struct FLinearColor                                LastDesiredColour;                                        // 0x027C(0x0010)
	float                                              BlendAmount;                                              // 0x028C(0x0004)
	float                                              BlendTime;                                                // 0x0290(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0294(0x0004)
	TEnumAsByte<EState>                                WarningLevel;                                             // 0x0298(0x0001)
	TEnumAsByte<EHazardRiotMaster_ENeighbourDir>       NeighbourDir;                                             // 0x0299(0x0001) (Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x029A(0x0002) MISSED OFFSET
	class UAudioComponent*                             NeutralSound;                                             // 0x029C(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             CautionSound;                                             // 0x02A0(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             DangerSound;                                              // 0x02A4(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             MarimbaSound;                                             // 0x02A8(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             PigeonWingsSound;                                         // 0x02AC(0x0004) (ExportObject, Component, EditInline)
	class UAudioComponent*                             PigeonCooSound;                                           // 0x02B0(0x0004) (ExportObject, Component, EditInline)
	class USoundCue*                                   MarimbaSoundStacked;                                      // 0x02B4(0x0004)
	class USoundCue*                                   PigeonWingsSoundStacked;                                  // 0x02B8(0x0004)
	class USoundCue*                                   PigeonCooSoundStacked;                                    // 0x02BC(0x0004)
	float                                              LastMarimbaTime;                                          // 0x02C0(0x0004)
	float                                              LastCooTime;                                              // 0x02C4(0x0004)
	float                                              LastWingsTime;                                            // 0x02C8(0x0004)
	float                                              MinMarimbaDelay;                                          // 0x02CC(0x0004)
	float                                              MaxMarimbaDelay;                                          // 0x02D0(0x0004)
	float                                              MinWingsDelay;                                            // 0x02D4(0x0004)
	float                                              MaxWingsDelay;                                            // 0x02D8(0x0004)
	float                                              MinCooDelay;                                              // 0x02DC(0x0004)
	float                                              MaxCooDelay;                                              // 0x02E0(0x0004)
	float                                              NeutralBlend;                                             // 0x02E4(0x0004)
	float                                              CautionBlend;                                             // 0x02E8(0x0004)
	float                                              DangerBlend;                                              // 0x02EC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardRiotMaster");
		return ptr;
	}


	void StartRiot();
	void UpdateSlaves(float DeltaTime);
	void Explode(float DeltaTime);
	void TickSlaves(float DeltaTime);
	void MoveRiot(int Index, float DeltaTime);
	void SetVolumeLevels(float BlendPct);
	void UpdateRiotSounds(float DeltaTime);
	void UpdateRiotColours(float DeltaTime);
	void Tick(float DeltaTime);
	bool DoesContainPoint(const struct FVector& SearchLocation);
	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PostBeginPlay();
	bool PointInBox(const struct FVector& Point, const struct FVector& TestBoxLocation, const struct FVector& TestBoxExtent);
	void NormalizeActor(class AActor* Target);
	struct FVector GetNextPointOnLine(const struct FVector& EndPoint, const struct FVector& StartPoint, float inTileSize);
	int RoundToScale(float Value, int roundScale);
	struct FVector RoundVectorToScale(const struct FVector& Value, int roundScale);
	struct FVector getIndexNormal(int NeighbourIndex);
	int getMinLocationIndex(const struct FVector& SearchLocation);
	int getLocationIndex(const struct FVector& SearchLocation);
	int RotateAroundAxis(int InitialDirection, int PlaneAxis, int inNumRotations);
	float CeilValue(float Value, int significance);
	float FloorValue(float Value, int significance);
	float ManhattanVSize(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


// Class Hazard.HazardScreenshotPanel
// 0x0038 (0x020C - 0x01D4)
class AHazardScreenshotPanel : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        LeftBorderMesh;                                           // 0x01D8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        RightBorderMesh;                                          // 0x01DC(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        TopBorderMesh;                                            // 0x01E0(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        BottomBorderMesh;                                         // 0x01E4(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FVector                                     RotationX;                                                // 0x01E8(0x000C)
	struct FVector                                     RotationY;                                                // 0x01F4(0x000C)
	struct FVector                                     RotationZ;                                                // 0x0200(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardScreenshotPanel");
		return ptr;
	}


	void PostBeginPlay();
};


// Class Hazard.HazardSeqAct_ActivateBlackHole
// 0x0018 (0x0100 - 0x00E8)
class UHazardSeqAct_ActivateBlackHole : public USequenceAction
{
public:
	float                                              InInterpTime;                                             // 0x00E8(0x0004) (Edit)
	float                                              inNumRotations;                                           // 0x00EC(0x0004) (Edit)
	float                                              InExponent;                                               // 0x00F0(0x0004) (Edit)
	float                                              OutInterpTime;                                            // 0x00F4(0x0004) (Edit)
	float                                              OutNumRotations;                                          // 0x00F8(0x0004) (Edit)
	float                                              OutExponent;                                              // 0x00FC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ActivateBlackHole");
		return ptr;
	}


	void Activate(bool bNewActive);
	void SpinPlatform(bool bNewActive);
	void ShowRing();
	void Activated();
};


// Class Hazard.HazardSeqAct_CheckLasers
// 0x0015 (0x00FD - 0x00E8)
class UHazardSeqAct_CheckLasers : public USequenceAction
{
public:
	TArray<class AHazardLaser*>                        Lasers;                                                   // 0x00E8(0x000C) (NeedCtorLink)
	int                                                NumTriggered;                                             // 0x00F4(0x0004)
	unsigned long                                      bTriggered : 1;                                           // 0x00F8(0x0004)
	unsigned long                                      bPlayerTouched : 1;                                       // 0x00F8(0x0004)
	unsigned long                                      bDelayActive : 1;                                         // 0x00F8(0x0004)
	TEnumAsByte<EHazardSeqAct_CheckLasers_ETriggerType> TriggerType;                                              // 0x00FC(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_CheckLasers");
		return ptr;
	}


	void CheckTriggered();
	bool Update(float DeltaTime);
	void Activated();
};


// Class Hazard.HazardSeqAct_ClearMap
// 0x0000 (0x00E8 - 0x00E8)
class UHazardSeqAct_ClearMap : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ClearMap");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_DeleteSaveGame
// 0x0000 (0x00E8 - 0x00E8)
class UHazardSeqAct_DeleteSaveGame : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_DeleteSaveGame");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_DisableHolochamber
// 0x0000 (0x00E8 - 0x00E8)
class UHazardSeqAct_DisableHolochamber : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_DisableHolochamber");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_HoloTimer
// 0x0098 (0x0190 - 0x00F8)
class UHazardSeqAct_HoloTimer : public USeqAct_Latent
{
public:
	class AStaticMeshActor*                            Hour1;                                                    // 0x00F8(0x0004)
	class AStaticMeshActor*                            Hour2;                                                    // 0x00FC(0x0004)
	class AStaticMeshActor*                            Minute1;                                                  // 0x0100(0x0004)
	class AStaticMeshActor*                            Minute2;                                                  // 0x0104(0x0004)
	class AStaticMeshActor*                            Seconds1;                                                 // 0x0108(0x0004)
	class AStaticMeshActor*                            Seconds2;                                                 // 0x010C(0x0004)
	class UMaterialInstanceConstant*                   H1;                                                       // 0x0110(0x0004)
	class UMaterialInstanceConstant*                   H2;                                                       // 0x0114(0x0004)
	class UMaterialInstanceConstant*                   M1;                                                       // 0x0118(0x0004)
	class UMaterialInstanceConstant*                   M2;                                                       // 0x011C(0x0004)
	class UMaterialInstanceConstant*                   S1;                                                       // 0x0120(0x0004)
	class UMaterialInstanceConstant*                   S2;                                                       // 0x0124(0x0004)
	struct FLinearColor                                H1Color;                                                  // 0x0128(0x0010)
	struct FLinearColor                                H2Color;                                                  // 0x0138(0x0010)
	struct FLinearColor                                M1Color;                                                  // 0x0148(0x0010)
	struct FLinearColor                                M2Color;                                                  // 0x0158(0x0010)
	struct FLinearColor                                S1Color;                                                  // 0x0168(0x0010)
	struct FLinearColor                                S2Color;                                                  // 0x0178(0x0010)
	float                                              FullTime;                                                 // 0x0188(0x0004) (Edit)
	unsigned long                                      bDelayActive : 1;                                         // 0x018C(0x0004)
	unsigned long                                      bCountUp : 1;                                             // 0x018C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_HoloTimer");
		return ptr;
	}


	void UpdateTimers();
	bool Update(float DeltaTime);
	void Activated();
};


// Class Hazard.HazardSeqAct_HoloTransition
// 0x000C (0x00F4 - 0x00E8)
class UHazardSeqAct_HoloTransition : public USequenceAction
{
public:
	class AActor*                                      CurrentRoom;                                              // 0x00E8(0x0004)
	class AActor*                                      OtherRoom;                                                // 0x00EC(0x0004)
	float                                              NearPlaneRadius;                                          // 0x00F0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_HoloTransition");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_ManualReset
// 0x0000 (0x00E8 - 0x00E8)
class UHazardSeqAct_ManualReset : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ManualReset");
		return ptr;
	}


	void ResetActors();
	void Activated();
};


// Class Hazard.HazardSeqAct_NoOp
// 0x0000 (0x00E8 - 0x00E8)
class UHazardSeqAct_NoOp : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_NoOp");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_NoRepeatRandom
// 0x0024 (0x0124 - 0x0100)
class UHazardSeqAct_NoRepeatRandom : public USeqAct_Switch
{
public:
	int                                                FirstRandom;                                              // 0x0100(0x0004)
	int                                                LastRandom;                                               // 0x0104(0x0004)
	TArray<int>                                        Active;                                                   // 0x0108(0x000C) (NeedCtorLink)
	TArray<int>                                        AvailableLinks;                                           // 0x0114(0x000C) (NeedCtorLink)
	unsigned long                                      bForceFullCycle : 1;                                      // 0x0120(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_NoRepeatRandom");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_OpenExitDoors
// 0x000C (0x00F4 - 0x00E8)
class UHazardSeqAct_OpenExitDoors : public USequenceAction
{
public:
	TArray<class AHazardExitDoors*>                    ExitDoors;                                                // 0x00E8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_OpenExitDoors");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_ResetGunTiles
// 0x000C (0x00F4 - 0x00E8)
class UHazardSeqAct_ResetGunTiles : public USequenceAction
{
public:
	TArray<class AHazardTile*>                         Tiles;                                                    // 0x00E8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ResetGunTiles");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_SaveObject
// 0x0004 (0x00EC - 0x00E8)
class UHazardSeqAct_SaveObject : public USequenceAction
{
public:
	class AActor*                                      SaveObject;                                               // 0x00E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_SaveObject");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_ToggleBlackTile
// 0x0000 (0x00E8 - 0x00E8)
class UHazardSeqAct_ToggleBlackTile : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ToggleBlackTile");
		return ptr;
	}


	void UpdateGuides(bool bNewActive);
	void Activated();
};


// Class Hazard.HazardSeqAct_ToggleDoor
// 0x0014 (0x00FC - 0x00E8)
class UHazardSeqAct_ToggleDoor : public USequenceAction
{
public:
	TArray<class AHazardDoor*>                         TriggeredDoors;                                           // 0x00E8(0x000C) (NeedCtorLink)
	int                                                NumActive;                                                // 0x00F4(0x0004) (Edit)
	int                                                NumRequired;                                              // 0x00F8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ToggleDoor");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_ToggleElevator
// 0x0014 (0x00FC - 0x00E8)
class UHazardSeqAct_ToggleElevator : public USequenceAction
{
public:
	TArray<class AHazardElevator*>                     TriggeredElevators;                                       // 0x00E8(0x000C) (NeedCtorLink)
	int                                                NumActive;                                                // 0x00F4(0x0004) (Edit)
	int                                                NumRequired;                                              // 0x00F8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ToggleElevator");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_ToggleGuide
// 0x0000 (0x00E8 - 0x00E8)
class UHazardSeqAct_ToggleGuide : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ToggleGuide");
		return ptr;
	}


	void UpdateGuides(bool bNewActive);
	void Activated();
};


// Class Hazard.HazardSeqAct_UnlockTower
// 0x0004 (0x00EC - 0x00E8)
class UHazardSeqAct_UnlockTower : public USequenceAction
{
public:
	int                                                TowerLevel;                                               // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_UnlockTower");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardWeap_TileGunRotator
// 0x0028 (0x01FC - 0x01D4)
class AHazardWeap_TileGunRotator : public AActor
{
public:
	float                                              MinSmoothness;                                            // 0x01D4(0x0004)
	float                                              SmoothnessInterpTime;                                     // 0x01D8(0x0004)
	class UUDKSkeletalMeshComponent*                   RotationMesh;                                             // 0x01DC(0x0004) (ExportObject, Component, EditInline)
	class AHazardWeap_TileGunRotator*                  TileRotator;                                              // 0x01E0(0x0004)
	TArray<class UHazardWeap_TileGunAmmo*>             AmmoTiles;                                                // 0x01E4(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
	class AHazardWeap_TileGun*                         Parent;                                                   // 0x01F0(0x0004)
	class UMaterialInstanceConstant*                   WeaponMaterial;                                           // 0x01F4(0x0004)
	float                                              CurrentLong;                                              // 0x01F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardWeap_TileGunRotator");
		return ptr;
	}


	void UpdateAmmoMeshes(float DeltaTime);
	void Tick(float DeltaTime);
};


// Class Hazard.HazardWeap_TileGunAmmo
// 0x00BC (0x06A0 - 0x05E4)
class UHazardWeap_TileGunAmmo : public UUDKSkeletalMeshComponent
{
public:
	float                                              DefaultSmoothness;                                        // 0x05E4(0x0004)
	float                                              Smoothness;                                               // 0x05E8(0x0004)
	struct FVector                                     OffsetFromOrbit;                                          // 0x05EC(0x000C)
	struct FVector                                     OffsetFromWeapon;                                         // 0x05F8(0x000C)
	struct FRotator                                    OrbitRotation;                                            // 0x0604(0x000C)
	struct FRotator                                    CurrentRotationInsideWeapon;                              // 0x0610(0x000C)
	struct FRotator                                    CurrentRotationAroundWeapon;                              // 0x061C(0x000C)
	struct FRotator                                    CurrentRotationAroundSelf;                                // 0x0628(0x000C)
	float                                              OrbitSpeed;                                               // 0x0634(0x0004)
	struct FRotator                                    RotationSpeed;                                            // 0x0638(0x000C)
	struct FVector                                     DesiredPosition;                                          // 0x0644(0x000C)
	struct FLinearColor                                DesiredColour;                                            // 0x0650(0x0010)
	struct FLinearColor                                CurrentColour;                                            // 0x0660(0x0010)
	class UMaterialInstanceConstant*                   TileMaterial;                                             // 0x0670(0x0004)
	struct FLinearColor                                StartBlendColour;                                         // 0x0674(0x0010)
	struct FLinearColor                                LastDesiredColour;                                        // 0x0684(0x0010)
	float                                              BlendTimeToGo;                                            // 0x0694(0x0004)
	float                                              InterpTime;                                               // 0x0698(0x0004)
	class AHazardWeap_TileGun*                         Parent;                                                   // 0x069C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardWeap_TileGunAmmo");
		return ptr;
	}


	void UpdateTileColour(float DeltaTime);
	void InitializeTileMaterial(class UMaterialInterface* InputMaterial, bool bCreateNewMaterial);
};


// Class Hazard.HazardSeqAct_PlaySound
// 0x0038 (0x0130 - 0x00F8)
class UHazardSeqAct_PlaySound : public USeqAct_Latent
{
public:
	class USoundCue*                                   PlaySound;                                                // 0x00F8(0x0004) (Edit)
	float                                              ExtraDelay;                                               // 0x00FC(0x0004) (Edit)
	float                                              FadeInTime;                                               // 0x0100(0x0004) (Edit)
	float                                              StoredFadeInTime;                                         // 0x0104(0x0004)
	float                                              FadeOutTime;                                              // 0x0108(0x0004) (Edit)
	float                                              StoredFadeOutTime;                                        // 0x010C(0x0004)
	float                                              VolumeMultiplier;                                         // 0x0110(0x0004) (Edit)
	float                                              PitchMultiplier;                                          // 0x0114(0x0004) (Edit)
	unsigned long                                      bSuppressSubtitles : 1;                                   // 0x0118(0x0004) (Edit)
	unsigned long                                      bFadeIn : 1;                                              // 0x0118(0x0004)
	class UAudioComponent*                             PlayingSound;                                             // 0x011C(0x0004) (ExportObject, Component, EditInline)
	float                                              CurrentVolume;                                            // 0x0120(0x0004)
	float                                              BlendTimeToGo;                                            // 0x0124(0x0004)
	float                                              SoundDuration;                                            // 0x0128(0x0004) (Transient)
	float                                              SoundStart;                                               // 0x012C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_PlaySound");
		return ptr;
	}


	bool Update(float DeltaTime);
	void Activated();
	void HandleInputs();
};


// Class Hazard.HazardSeqAct_ResetAmbientSound
// 0x0004 (0x00EC - 0x00E8)
class UHazardSeqAct_ResetAmbientSound : public USequenceAction
{
public:
	unsigned long                                      bResetLocation : 1;                                       // 0x00E8(0x0004) (Edit)
	unsigned long                                      bResetMaxDistance : 1;                                    // 0x00E8(0x0004) (Edit)
	unsigned long                                      bResetCanTeleport : 1;                                    // 0x00E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ResetAmbientSound");
		return ptr;
	}


	void Activated();
};


// Class Hazard.HazardSeqAct_ToggleAmbientTeleport
// 0x0000 (0x00E8 - 0x00E8)
class UHazardSeqAct_ToggleAmbientTeleport : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hazard.HazardSeqAct_ToggleAmbientTeleport");
		return ptr;
	}


	void Activated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
