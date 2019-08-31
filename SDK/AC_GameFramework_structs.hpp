#pragma once

// Antichamber (1.0.7977.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_GAMEEVENT_AGGREGATED_PLAYER_MATCH_WON              10004
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_WASNORMALKILL          10007
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_TIMEALIVE              10001
#define CONST_GAMEEVENT_AGGREGATED_DATA                          10000
#define CONST_LOADING_MOVIE                                      "LoadingMovie"
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_WEAPON_DAMAGE    10202
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_KILLS                  10002
#define CONST_GAMEEVENT_AGGREGATED_TEAM_GAME_SCORE               10102
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_ROUND_WON              10005
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_DEATHS                 10003
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_NORMALKILL             10006
#define CONST_GAMEEVENT_AGGREGATED_TEAM_KILLS                    10100
#define CONST_GAMEEVENT_AGGREGATED_TEAM_ROUND_WON                10104
#define CONST_GAMEEVENT_AGGREGATED_TEAM_DEATHS                   10101
#define CONST_GAMEEVENT_AGGREGATED_TEAM_MATCH_WON                10103
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_KILLS                  10200
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEATHS                 10201
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEE_DAMAGE     10203
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WEAPON_DAMAGE 10204
#define CONST_NumTouchDataEntries                                5
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_MELEE_DAMAGE  10205
#define CONST_GAMEEVENT_AGGREGATED_GAME_SPECIFIC                 11000
#define CONST_GAMEEVENT_AGGREGATED_WEAPON_FIRED                  10300
#define CONST_GAMEEVENT_AGGREGATED_PAWN_SPAWN                    10400

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameFramework.GameCrowdAgent.EConformType
enum class EConformType : uint8_t
{
	CFM_NavMesh                    = 0,
	CFM_BSP                        = 1,
	CFM_World                      = 2,
	CFM_None                       = 3,
	CFM_MAX                        = 4
};


// Enum GameFramework.GameTypes.EShakeParam
enum class EShakeParam : uint8_t
{
	ESP_OffsetRandom               = 0,
	ESP_OffsetZero                 = 1,
	ESP_MAX                        = 2
};


// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
enum class ERecoilStart : uint8_t
{
	ERS_Zero                       = 0,
	ERS_Random                     = 1,
	ERS_MAX                        = 2
};


// Enum GameFramework.GameStateObject.GameSessionType
enum class EGameSessionType : uint8_t
{
	GT_SessionInvalid              = 0,
	GT_SinglePlayer                = 1,
	GT_Coop                        = 2,
	GT_Multiplayer                 = 3,
	GT_MAX                         = 4
};


// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
enum class ECameraViewportTypes : uint8_t
{
	CVT_16to9_Full                 = 0,
	CVT_16to9_VertSplit            = 1,
	CVT_16to9_HorizSplit           = 2,
	CVT_4to3_Full                  = 3,
	CVT_4to3_HorizSplit            = 4,
	CVT_4to3_VertSplit             = 5,
	CVT_MAX                        = 6
};


// Enum GameFramework.MobileInputZone.EZoneType
enum class EZoneType : uint8_t
{
	ZoneType_Button                = 0,
	ZoneType_Joystick              = 1,
	ZoneType_Trackball             = 2,
	ZoneType_Slider                = 3,
	ZoneType_MAX                   = 4
};


// Enum GameFramework.MobileInputZone.EZoneState
enum class EZoneState : uint8_t
{
	ZoneState_Inactive             = 0,
	ZoneState_Activating           = 1,
	ZoneState_Active               = 2,
	ZoneState_Deactivating         = 3,
	ZoneState_MAX                  = 4
};


// Enum GameFramework.MobileInputZone.EZoneTouchEvent
enum class EZoneTouchEvent : uint8_t
{
	ZoneEvent_Touch                = 0,
	ZoneEvent_Update               = 1,
	ZoneEvent_Stationary           = 2,
	ZoneEvent_UnTouch              = 3,
	ZoneEvent_Cancelled            = 4,
	ZoneEvent_MAX                  = 5
};


// Enum GameFramework.MobileInputZone.EZoneSlideType
enum class EZoneSlideType : uint8_t
{
	ZoneSlide_UpDown               = 0,
	ZoneSlide_LeftRight            = 1,
	ZoneSlide_MAX                  = 2
};


// Enum GameFramework.MobileMenuImage.MenuImageDrawStyle
enum class EMenuImageDrawStyle : uint8_t
{
	IDS_Normal                     = 0,
	IDS_Stretched                  = 1,
	IDS_Tile                       = 2,
	IDS_MAX                        = 3
};


// Enum GameFramework.MobilePlayerInput.EUIOrientation
enum class EUIOrientation : uint8_t
{
	UI_Unknown                     = 0,
	UI_Portait                     = 1,
	UI_PortaitUpsideDown           = 2,
	UI_LandscapeRight              = 3,
	UI_LandscapeLeft               = 4,
	UI_MAX                         = 5
};


// Enum GameFramework.SeqEvent_HudRenderText.ETextDrawMethod
enum class ETextDrawMethod : uint8_t
{
	DRAW_CenterText                = 0,
	DRAW_WrapText                  = 1,
	DRAW_MAX                       = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameFramework.FrameworkGame.RequiredMobileInputConfig
// 0x001C
struct FRequiredMobileInputConfig
{
	struct FString                                     GroupName;                                                // 0x0000(0x000C) (Config, NeedCtorLink)
	TArray<struct FString>                             RequireZoneNames;                                         // 0x000C(0x000C) (Config, AlwaysInit, NeedCtorLink)
	unsigned long                                      bIsAttractModeGroup : 1;                                  // 0x0018(0x0004) (Config)
};

// ScriptStruct GameFramework.GameTypes.AICmdHistoryItem
// 0x0014
struct FAICmdHistoryItem
{
	class UClass*                                      CmdClass;                                                 // 0x0000(0x0004)
	float                                              TimeStamp;                                                // 0x0004(0x0004)
	struct FString                                     VerboseString;                                            // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameCrowdAgent.BehaviorEntry
// 0x0010
struct FBehaviorEntry
{
	class UGameCrowdAgentBehavior*                     BehaviorArchetype;                                        // 0x0000(0x0004) (Edit)
	class AActor*                                      LookAtActor;                                              // 0x0004(0x0004) (Edit)
	float                                              BehaviorFrequency;                                        // 0x0008(0x0004) (Edit)
	unsigned long                                      bNeverRepeat : 1;                                         // 0x000C(0x0004) (Edit)
	unsigned long                                      bHasBeenUsed : 1;                                         // 0x000C(0x0004)
	unsigned long                                      bCanBeUsed : 1;                                           // 0x000C(0x0004)
};

// ScriptStruct GameFramework.GameCrowdAgent.RecentInteraction
// 0x000C
struct FRecentInteraction
{
	struct FName                                       InteractionTag;                                           // 0x0000(0x0008)
	float                                              InteractionDelay;                                         // 0x0008(0x0004)
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentInfo
// 0x0014
struct FGameCrowdAttachmentInfo
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0004) (Edit)
	float                                              Chance;                                                   // 0x0004(0x0004) (Edit)
	struct FVector                                     Scale3D;                                                  // 0x0008(0x000C) (Edit)
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentList
// 0x0014
struct FGameCrowdAttachmentList
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit)
	TArray<struct FGameCrowdAttachmentInfo>            List;                                                     // 0x0008(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct GameFramework.SeqAct_GameCrowdSpawner.AgentArchetypeInfo
// 0x001C
struct FAgentArchetypeInfo
{
	class UObject*                                     AgentArchetype;                                           // 0x0000(0x0004) (Edit)
	float                                              FrequencyModifier;                                        // 0x0004(0x0004) (Edit)
	int                                                MaxAllowed;                                               // 0x0008(0x0004) (Edit)
	int                                                CurrSpawned;                                              // 0x000C(0x0004) (Transient)
	TArray<class UObject*>                             GroupMembers;                                             // 0x0010(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct GameFramework.MobileInputZone.TextureUVs
// 0x0010
struct FTextureUVs
{
	float                                              U;                                                        // 0x0000(0x0004) (Edit)
	float                                              V;                                                        // 0x0004(0x0004) (Edit)
	float                                              UL;                                                       // 0x0008(0x0004) (Edit)
	float                                              VL;                                                       // 0x000C(0x0004) (Edit)
};

// ScriptStruct GameFramework.MobileMenuObject.UVCoords
// 0x0014
struct FUVCoords
{
	unsigned long                                      bCustomCoords : 1;                                        // 0x0000(0x0004)
	float                                              U;                                                        // 0x0004(0x0004)
	float                                              V;                                                        // 0x0008(0x0004)
	float                                              UL;                                                       // 0x000C(0x0004)
	float                                              VL;                                                       // 0x0010(0x0004)
};

// ScriptStruct GameFramework.MobilePlayerInput.TouchDataEvent
// 0x0014
struct FTouchDataEvent
{
	TEnumAsByte<EZoneTouchEvent>                       EventType;                                                // 0x0000(0x0001)
	unsigned char                                      TouchpadIndex;                                            // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector2D                                   Location;                                                 // 0x0004(0x0008)
	struct FDouble                                     DeviceTime;                                               // 0x000C(0x0008)
};

// ScriptStruct GameFramework.MobilePlayerInput.TouchData
// 0x0048
struct FTouchData
{
	int                                                Handle;                                                   // 0x0000(0x0004)
	unsigned char                                      TouchpadIndex;                                            // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FVector2D                                   Location;                                                 // 0x0008(0x0008)
	float                                              TotalMoveDistance;                                        // 0x0010(0x0004)
	struct FDouble                                     InitialDeviceTime;                                        // 0x0014(0x0008)
	float                                              TouchDuration;                                            // 0x001C(0x0004)
	struct FDouble                                     MoveEventDeviceTime;                                      // 0x0020(0x0008)
	float                                              MoveDeltaTime;                                            // 0x0028(0x0004)
	unsigned long                                      bInUse : 1;                                               // 0x002C(0x0004)
	class UMobileInputZone*                            Zone;                                                     // 0x0030(0x0004)
	TEnumAsByte<EZoneTouchEvent>                       State;                                                    // 0x0034(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	TArray<struct FTouchDataEvent>                     Events;                                                   // 0x0038(0x000C) (NeedCtorLink)
	float                                              LastActiveTime;                                           // 0x0044(0x0004)
};

// ScriptStruct GameFramework.MobilePlayerInput.MobileInputGroup
// 0x0018
struct FMobileInputGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x000C) (NeedCtorLink)
	TArray<class UMobileInputZone*>                    AssociatedZones;                                          // 0x000C(0x000C) (NeedCtorLink, EditInline)
};

// ScriptStruct GameFramework.MobilePlayerInput.MobileInputZoneClassMap
// 0x0010
struct FMobileInputZoneClassMap
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (NeedCtorLink)
	class UClass*                                      ClassType;                                                // 0x000C(0x0004)
};

// ScriptStruct GameFramework.SeqAct_ModifyProperty.PropertyInfo
// 0x0018
struct FPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (Edit)
	unsigned long                                      bModifyProperty : 1;                                      // 0x0008(0x0004) (Edit)
	struct FString                                     PropertyValue;                                            // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	TEnumAsByte<ERecoilStart>                          X;                                                        // 0x0000(0x0001) (Edit)
	TEnumAsByte<ERecoilStart>                          Y;                                                        // 0x0001(0x0001) (Edit)
	TEnumAsByte<ERecoilStart>                          Z;                                                        // 0x0002(0x0001) (Edit)
	unsigned char                                      Padding;                                                  // 0x0003(0x0001) (Const, Transient)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004) (Transient)
	float                                              TimeDuration;                                             // 0x0004(0x0004) (Edit)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C) (Edit)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C) (Edit)
	struct FVector                                     RotSinOffset;                                             // 0x0020(0x000C)
	struct FRecoilParams                               RotParams;                                                // 0x002C(0x0004) (Edit)
	struct FRotator                                    RotOffset;                                                // 0x0030(0x000C) (Transient)
	struct FVector                                     LocAmplitude;                                             // 0x003C(0x000C) (Edit)
	struct FVector                                     LocFrequency;                                             // 0x0048(0x000C) (Edit)
	struct FVector                                     LocSinOffset;                                             // 0x0054(0x000C)
	struct FRecoilParams                               LocParams;                                                // 0x0060(0x0004) (Edit)
	struct FVector                                     LocOffset;                                                // 0x0064(0x000C) (Transient)
};

// ScriptStruct GameFramework.GameThirdPersonCamera.CamFocusPointParams
// 0x0034
struct FCamFocusPointParams
{
	class AActor*                                      FocusActor;                                               // 0x0000(0x0004) (Edit)
	struct FName                                       FocusBoneName;                                            // 0x0004(0x0008) (Edit)
	struct FVector                                     FocusWorldLoc;                                            // 0x000C(0x000C) (Edit)
	float                                              CameraFOV;                                                // 0x0018(0x0004) (Edit)
	struct FVector2D                                   InterpSpeedRange;                                         // 0x001C(0x0008) (Edit)
	struct FVector2D                                   InFocusFOV;                                               // 0x0024(0x0008) (Edit)
	unsigned long                                      bAlwaysFocus : 1;                                         // 0x002C(0x0004) (Edit)
	unsigned long                                      bAdjustCamera : 1;                                        // 0x002C(0x0004) (Edit)
	unsigned long                                      bIgnoreTrace : 1;                                         // 0x002C(0x0004) (Edit)
	float                                              FocusPitchOffsetDeg;                                      // 0x0030(0x0004) (Edit)
};

// ScriptStruct GameFramework.GameThirdPersonCamera.PenetrationAvoidanceFeeler
// 0x0028
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                            // 0x0000(0x000C) (Edit)
	float                                              WorldWeight;                                              // 0x000C(0x0004) (Edit)
	float                                              PawnWeight;                                               // 0x0010(0x0004) (Edit)
	struct FVector                                     Extent;                                                   // 0x0014(0x000C) (Edit)
	int                                                TraceInterval;                                            // 0x0020(0x0004) (Edit)
	int                                                FramesUntilNextTrace;                                     // 0x0024(0x0004) (Transient)
};

// ScriptStruct GameFramework.GameThirdPersonCameraMode.ViewOffsetData
// 0x0024
struct FViewOffsetData
{
	struct FVector                                     OffsetHigh;                                               // 0x0000(0x000C) (Edit)
	struct FVector                                     OffsetMid;                                                // 0x000C(0x000C) (Edit)
	struct FVector                                     OffsetLow;                                                // 0x0018(0x000C) (Edit)
};

// ScriptStruct GameFramework.GameStatsAggregator.AggregateEventMapping
// 0x000C
struct FAggregateEventMapping
{
	int                                                EventID;                                                  // 0x0000(0x0004)
	int                                                AggregateID;                                              // 0x0004(0x0004)
	int                                                TargetAggregateID;                                        // 0x0008(0x0004)
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvents
// 0x003C
struct FGameEvents
{
	struct FMap_Mirror                                 Events;                                                   // 0x0000(0x003C) (Const, Native, Transient)
};

// ScriptStruct GameFramework.GameStatsAggregator.WeaponEvents
// 0x0048
struct FWeaponEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	TArray<struct FGameEvents>                         EventsByWeaponClass;                                      // 0x003C(0x000C) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.DamageEvents
// 0x0048
struct FDamageEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	TArray<struct FGameEvents>                         EventsByDamageClass;                                      // 0x003C(0x000C) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.ProjectileEvents
// 0x0048
struct FProjectileEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	TArray<struct FGameEvents>                         EventsByProjectileClass;                                  // 0x003C(0x000C) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.PawnEvents
// 0x0048
struct FPawnEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	TArray<struct FGameEvents>                         EventsByPawnClass;                                        // 0x003C(0x000C) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.TeamEvents
// 0x01A4
struct FTeamEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	struct FWeaponEvents                               WeaponEvents;                                             // 0x003C(0x0048) (NeedCtorLink)
	struct FDamageEvents                               DamageAsPlayerEvents;                                     // 0x0084(0x0048) (NeedCtorLink)
	struct FDamageEvents                               DamageAsTargetEvents;                                     // 0x00CC(0x0048) (NeedCtorLink)
	struct FProjectileEvents                           ProjectileEvents;                                         // 0x0114(0x0048) (NeedCtorLink)
	struct FPawnEvents                                 PawnEvents;                                               // 0x015C(0x0048) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.PlayerEvents
// 0x01A4
struct FPlayerEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	struct FWeaponEvents                               WeaponEvents;                                             // 0x003C(0x0048) (NeedCtorLink)
	struct FDamageEvents                               DamageAsPlayerEvents;                                     // 0x0084(0x0048) (NeedCtorLink)
	struct FDamageEvents                               DamageAsTargetEvents;                                     // 0x00CC(0x0048) (NeedCtorLink)
	struct FProjectileEvents                           ProjectileEvents;                                         // 0x0114(0x0048) (NeedCtorLink)
	struct FPawnEvents                                 PawnEvents;                                               // 0x015C(0x0048) (NeedCtorLink)
};

// ScriptStruct GameFramework.GameTypes.SpecialMoveStruct
// 0x0014
struct FSpecialMoveStruct
{
	struct FName                                       SpecialMoveName;                                          // 0x0000(0x0008)
	class AGamePawn*                                   InteractionPawn;                                          // 0x0008(0x0004)
	class AActor*                                      InteractionActor;                                         // 0x000C(0x0004)
	int                                                Flags;                                                    // 0x0010(0x0004)
};

// ScriptStruct GameFramework.GameTypes.GameSpecialMoveInfo
// 0x0010
struct FGameSpecialMoveInfo
{
	struct FName                                       SpecialMoveName;                                          // 0x0000(0x0008) (Edit)
	class UClass*                                      SpecialMoveClass;                                         // 0x0008(0x0004) (Edit)
	class UGameSpecialMove*                            SpecialMoveInstance;                                      // 0x000C(0x0004) (Edit)
};

// ScriptStruct GameFramework.GameTypes.TakeHitInfo
// 0x0038
struct FTakeHitInfo
{
	struct FVector                                     HitLocation;                                              // 0x0000(0x000C)
	struct FVector                                     Momentum;                                                 // 0x000C(0x000C)
	class UClass*                                      DamageType;                                               // 0x0018(0x0004)
	class APawn*                                       InstigatedBy;                                             // 0x001C(0x0004)
	unsigned char                                      HitBoneIndex;                                             // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0024(0x0004)
	float                                              Damage;                                                   // 0x0028(0x0004)
	struct FVector                                     RadialDamageOrigin;                                       // 0x002C(0x000C)
};

// ScriptStruct GameFramework.GameTypes.ShakeParams
// 0x0004
struct FShakeParams
{
	TEnumAsByte<EShakeParam>                           X;                                                        // 0x0000(0x0001)
	TEnumAsByte<EShakeParam>                           Y;                                                        // 0x0001(0x0001)
	TEnumAsByte<EShakeParam>                           Z;                                                        // 0x0002(0x0001)
	unsigned char                                      Padding;                                                  // 0x0003(0x0001) (Const, Transient)
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeStruct
// 0x0078
struct FScreenShakeStruct
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004)
	float                                              TimeDuration;                                             // 0x0004(0x0004)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C)
	struct FVector                                     RotSinOffset;                                             // 0x0020(0x000C)
	struct FShakeParams                                RotParam;                                                 // 0x002C(0x0004)
	struct FVector                                     LocAmplitude;                                             // 0x0030(0x000C)
	struct FVector                                     LocFrequency;                                             // 0x003C(0x000C)
	struct FVector                                     LocSinOffset;                                             // 0x0048(0x000C)
	struct FShakeParams                                LocParam;                                                 // 0x0054(0x0004)
	float                                              FOVAmplitude;                                             // 0x0058(0x0004)
	float                                              FOVFrequency;                                             // 0x005C(0x0004)
	float                                              FOVSinOffset;                                             // 0x0060(0x0004)
	TEnumAsByte<EShakeParam>                           FOVParam;                                                 // 0x0064(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	struct FName                                       ShakeName;                                                // 0x0068(0x0008)
	unsigned long                                      bOverrideTargetingDampening : 1;                          // 0x0070(0x0004)
	float                                              TargetingDampening;                                       // 0x0074(0x0004)
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeAnimStruct
// 0x0030
struct FScreenShakeAnimStruct
{
	class UCameraAnim*                                 Anim;                                                     // 0x0000(0x0004)
	unsigned long                                      bUseDirectionalAnimVariants : 1;                          // 0x0004(0x0004)
	class UCameraAnim*                                 Anim_Left;                                                // 0x0008(0x0004)
	class UCameraAnim*                                 Anim_Right;                                               // 0x000C(0x0004)
	class UCameraAnim*                                 Anim_Rear;                                                // 0x0010(0x0004)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004)
	float                                              AnimScale;                                                // 0x0018(0x0004)
	float                                              AnimBlendInTime;                                          // 0x001C(0x0004)
	float                                              AnimBlendOutTime;                                         // 0x0020(0x0004)
	unsigned long                                      bRandomSegment : 1;                                       // 0x0024(0x0004)
	float                                              RandomSegmentDuration;                                    // 0x0028(0x0004)
	unsigned long                                      bSingleInstance : 1;                                      // 0x002C(0x0004)
};

// ScriptStruct GameFramework.GameStateObject.TeamState
// 0x0010
struct FTeamState
{
	int                                                TeamIndex;                                                // 0x0000(0x0004)
	TArray<int>                                        PlayerIndices;                                            // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct GameFramework.GameStateObject.PlayerState
// 0x0010
struct FPlayerState
{
	int                                                PlayerIndex;                                              // 0x0000(0x0004)
	int                                                CurrentTeamIndex;                                         // 0x0004(0x0004)
	float                                              TimeSpawned;                                              // 0x0008(0x0004)
	float                                              TimeAliveSinceLastDeath;                                  // 0x000C(0x0004)
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvent
// 0x000C
struct FGameEvent
{
	TArray<float>                                      EventCountByTimePeriod;                                   // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
