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

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x007C (0x0230 - 0x01B4)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	TArray<struct FServerQueryToRulesResponseMapping>  QueryToRulesResponseMap;                                  // 0x01B4(0x000C) (NeedCtorLink)
	TArray<struct FServerQueryToPingResponseMapping>   QueryToPingResponseMap;                                   // 0x01C0(0x000C) (NeedCtorLink)
	struct FPointer                                    ServerListResponse;                                       // 0x01CC(0x0004) (Const, Native, Transient)
	TEnumAsByte<ESteamMatchmakingType>                 CurrentMatchmakingType;                                   // 0x01D0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	struct FPointer                                    CurrentMatchmakingQuery;                                  // 0x01D4(0x0004) (Const, Native, Transient)
	TArray<struct FScriptDelegate>                     GameInviteAcceptedDelegates;                              // 0x01D8(0x000C) (NeedCtorLink)
	class UOnlineGameSearch*                           InviteGameSearch;                                         // 0x01E4(0x0004) (Const)
	struct FString                                     InviteLocationUrl;                                        // 0x01E8(0x000C) (Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                          // 0x01F4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                        // 0x0200(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x020C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x0218(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x0224(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		return ptr;
	}


	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
};


// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x0528 (0x0614 - 0x00EC)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    CallbackBridge;                                           // 0x00EC(0x0004) (Native)
	unsigned long                                      bStoringAchievement : 1;                                  // 0x00F0(0x0004)
	unsigned long                                      bGSStatsStoresSuccess : 1;                                // 0x00F0(0x0004)
	unsigned long                                      bNeedsKeyboardTicking : 1;                                // 0x00F0(0x0004) (Const)
	unsigned long                                      bLastHasConnection : 1;                                   // 0x00F0(0x0004)
	unsigned long                                      bIsStatsSessionOk : 1;                                    // 0x00F0(0x0004)
	unsigned long                                      bHasSteamworksAccount : 1;                                // 0x00F0(0x0004) (Const, Config)
	unsigned long                                      bShouldUseMcp : 1;                                        // 0x00F0(0x0004) (Const, Config)
	unsigned long                                      bListenHostPendingAuth : 1;                               // 0x00F0(0x0004) (Const)
	unsigned long                                      bListenHostAuthenticated : 1;                             // 0x00F0(0x0004) (Const)
	unsigned long                                      bIncrementStatValues : 1;                                 // 0x00F0(0x0004)
	int                                                TotalGSStatsStoresPending;                                // 0x00F4(0x0004)
	TEnumAsByte<EOnlineEnumerationReadState>           UserStatsReceivedState;                                   // 0x00F8(0x0001)
	TEnumAsByte<ELoginStatus>                          LoggedInStatus;                                           // 0x00F9(0x0001) (Const)
	unsigned char                                      bWasKeyboardInputCanceled;                                // 0x00FA(0x0001) (Const)
	TEnumAsByte<ENetworkNotificationPosition>          CurrentNotificationPosition;                              // 0x00FB(0x0001) (Config)
	unsigned char                                      ListenAuthRetryCount;                                     // 0x00FC(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                            // 0x0100(0x0004) (Const)
	struct FString                                     LocalProfileName;                                         // 0x0104(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     LoggedInPlayerName;                                       // 0x0110(0x000C) (Const, NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                                         // 0x011C(0x0008) (Const)
	int                                                LoggedInPlayerNum;                                        // 0x0124(0x0004) (Const)
	struct FString                                     ProfileDataDirectory;                                     // 0x0128(0x000C) (Config, NeedCtorLink)
	struct FString                                     ProfileDataExtension;                                     // 0x0134(0x000C) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                            // 0x0140(0x000C) (NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                            // 0x014C(0x0004)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageReadDelegates;                          // 0x0150(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageWriteDelegates;                         // 0x015C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RemotePlayerStorageReadDelegates;                         // 0x0168(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;                       // 0x0174(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                                     // 0x0180(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                                   // 0x018C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                                    // 0x0198(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                                     // 0x01A4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                                     // 0x01B0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LogoutCompletedDelegates;                                 // 0x01BC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AccountCreateDelegates;                                   // 0x01C8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                                         // 0x01D4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadOnlineStatsCompleteDelegates;                         // 0x01E0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FlushOnlineStatsDelegates;                                // 0x01EC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;                          // 0x01F8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ControllerChangeDelegates;                                // 0x0204(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                                      // 0x0210(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x021C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                                     // 0x0228(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                                 // 0x0234(0x000C) (NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                                       // 0x0240(0x0008)
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                            // 0x0248(0x000C) (NeedCtorLink)
	int                                                GameID;                                                   // 0x0254(0x0004) (Const, Config)
	class UOnlineStatsRead*                            CurrentStatsRead;                                         // 0x0258(0x0004) (Const)
	TArray<struct FPendingPlayerStats>                 PendingStats;                                             // 0x025C(0x000C) (Const, NeedCtorLink)
	struct FString                                     KeyboardResultsString;                                    // 0x0268(0x000C) (Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputDelegates;                                   // 0x0274(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendInviteReceivedDelegates;                            // 0x0280(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendMessageReceivedDelegates;                           // 0x028C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AddFriendByNameCompleteDelegates;                         // 0x0298(0x000C) (NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                             // 0x02A4(0x0028) (NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                                       // 0x02CC(0x0004)
	struct FString                                     CachedFriendMessage;                                      // 0x02D0(0x000C) (Const, NeedCtorLink)
	struct FDeviceIdCache                              DeviceCache;                                              // 0x02DC(0x001C) (NeedCtorLink)
	TArray<struct FString>                             LocationUrlsForInvites;                                   // 0x02F8(0x000C) (Const, Config, NeedCtorLink)
	struct FString                                     LocationUrl;                                              // 0x0304(0x000C) (Const, Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                              // 0x0310(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;                          // 0x031C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetNumberOfCurrentPlayersCompleteDelegates;               // 0x0328(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterHostStatGuidCompleteDelegates;                    // 0x0334(0x000C) (NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                                     // 0x0340(0x000C) (NeedCtorLink)
	TArray<struct FOnlineStatusMapping>                StatusMappings;                                           // 0x034C(0x000C) (Const, Config, NeedCtorLink)
	struct FString                                     DefaultStatus;                                            // 0x0358(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     GameInviteMessage;                                        // 0x0364(0x000C) (Const, Localized, NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[0x4];                                    // 0x0370(0x0008)
	float                                              ConnectionPresenceTimeInterval;                           // 0x0390(0x0004)
	float                                              ConnectionPresenceElapsedTime;                            // 0x0394(0x0004)
	struct FString                                     EncryptedProductKey;                                      // 0x0398(0x000C) (Const, Config, NeedCtorLink)
	int                                                NextAuthId;                                               // 0x03A4(0x0004) (Const, Transient)
	struct FString                                     ServerChallenge;                                          // 0x03A8(0x000C) (Const, NeedCtorLink)
	struct FString                                     ServerResponse;                                           // 0x03B4(0x000C) (Const, NeedCtorLink)
	int                                                ServerLocalId;                                            // 0x03C0(0x0004) (Const)
	TArray<struct FUniqueNetId>                        MuteList;                                                 // 0x03C4(0x000C) (Const, NeedCtorLink)
	TArray<struct FQueuedAvatarRequest>                QueuedAvatarRequests;                                     // 0x03D0(0x000C) (Const, NeedCtorLink)
	TArray<struct FAchievementMappingInfo>             AchievementMappings;                                      // 0x03DC(0x000C) (Config, NeedCtorLink)
	TArray<struct FAchievementProgressStat>            PendingAchievementProgress;                               // 0x03E8(0x000C) (Const, NeedCtorLink)
	TArray<struct FLeaderboardTemplate>                LeaderboardList;                                          // 0x03F4(0x000C) (NeedCtorLink)
	int                                                PendingLeaderboardInits;                                  // 0x0400(0x0004) (Const)
	int                                                PendingLeaderboardReads;                                  // 0x0404(0x0004) (Const)
	int                                                PendingLeaderboardWrites;                                 // 0x0408(0x0004) (Const)
	TArray<struct FDeferredLeaderboardRead>            DeferredLeaderboardReads;                                 // 0x040C(0x000C) (Const, NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           DeferredLeaderboardWrites;                                // 0x0418(0x000C) (Const, NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           PendingLeaderboardStats;                                  // 0x0424(0x000C) (Const, NeedCtorLink)
	TArray<struct FLeaderboardEntry>                   ProcessedLeaderboardReads;                                // 0x0430(0x000C) (Const, NeedCtorLink)
	TArray<struct FViewIdToLeaderboardName>            LeaderboardNameMappings;                                  // 0x043C(0x000C) (Config, NeedCtorLink)
	float                                              ListenAuthTimestamp;                                      // 0x0448(0x0004) (Const)
	TArray<struct FUniqueNetId>                        StatsReadList;                                            // 0x044C(0x000C) (Const, NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                // 0x0458(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                             // 0x0464(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                               // 0x0470(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                              // 0x047C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                // 0x0488(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                            // 0x0494(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                          // 0x04A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                // 0x04AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;               // 0x04B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;                  // 0x04C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;          // 0x04D0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;                 // 0x04DC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                        // 0x04E8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;                   // 0x04F4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                        // 0x0500(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                    // 0x050C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                   // 0x0518(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                           // 0x0524(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                           // 0x0530(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                           // 0x053C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                     // 0x0548(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                        // 0x0554(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x0560(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;               // 0x056C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                      // 0x0578(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                    // 0x0584(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                       // 0x0590(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                         // 0x059C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                     // 0x05A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                      // 0x05B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;               // 0x05C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;                    // 0x05CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                  // 0x05D8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                         // 0x05E4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;                   // 0x05F0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;                   // 0x05FC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;          // 0x0608(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		return ptr;
	}


	struct FString UniqueNetIdToPlayerName(struct FUniqueNetId* Uid);
	bool DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress);
	bool CreateLeaderboard(const struct FString& LeaderboardName, TEnumAsByte<ELeaderboardSortType> SortType, TEnumAsByte<ELeaderboardFormat> DisplayFormat);
	bool ResetStats(bool bResetAchievements);
	bool UnlockAvatarAward(unsigned char LocalUserNum, int AvatarItemId);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int TotalPlayers);
	bool GetNumberOfCurrentPlayers();
	void ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
	void OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar);
	bool ShowCustomPlayersUI(unsigned char LocalUserNum, const struct FString& Title, const struct FString& Description, TArray<struct FUniqueNetId>* Players);
	TEnumAsByte<EOnlineEnumerationReadState> GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int TitleId);
	bool ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages);
	bool ShowPlayersUI(unsigned char LocalUserNum);
	bool ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool ShowFriendsUI(unsigned char LocalUserNum);
	void ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool UnlockAchievement(unsigned char LocalUserNum, int AchievementId);
	bool IsDeviceValid(int DeviceID, int SizeNeeded);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName);
	void ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bManageStorage);
	bool ShowMembershipMarketplaceUI(unsigned char LocalUserNum);
	bool ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId);
	bool ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText);
	bool ShowAchievementsUI(unsigned char LocalUserNum);
	bool ShowMessagesUI(unsigned char LocalUserNum);
	bool ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	bool UnmuteAll(unsigned char LocalUserNum);
	bool MuteAll(unsigned char LocalUserNum, bool bAllowFriends);
	void CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma);
	bool RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName);
	bool SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text);
	bool SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text);
	bool SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	bool DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	bool AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message);
	bool AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties);
	bool GetLocalAccountNames(TArray<struct FString>* Accounts);
	bool DeleteLocalAccount(const struct FString& UserName, const struct FString& Password);
	bool RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password);
	bool CreateLocalAccount(const struct FString& UserName, const struct FString& Password);
	void ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus);
	bool CreateOnlineAccount(const struct FString& UserName, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey);
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const struct FString& FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	int GetLocale();
	TEnumAsByte<ENATType> GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	bool IsControllerConnected(int ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange(int ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos);
	TEnumAsByte<ENetworkNotificationPosition> GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	struct FUniqueNetId GetPlayerUniqueNetIdFromIndex(int UserIndex);
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
	bool WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(const struct FName& SessionName);
	bool WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players);
	bool SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words);
	bool StopSpeechRecognition(unsigned char LocalUserNum);
	bool StartSpeechRecognition(unsigned char LocalUserNum);
	void StopNetworkedVoice(unsigned char LocalUserNum);
	void StartNetworkedVoice(unsigned char LocalUserNum);
	void ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	bool UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum);
	bool RegisterLocalTalker(unsigned char LocalUserNum);
	TEnumAsByte<EOnlineEnumerationReadState> GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	bool IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query);
	bool IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	TEnumAsByte<EFeaturePrivilegeLevel> CanShowPresenceInformation(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanViewPlayerProfiles(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanPurchaseContent(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanDownloadUserContent(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanCommunicate(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanPlayOnline(unsigned char LocalUserNum);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID);
	bool IsLocalLogin(unsigned char LocalUserNum);
	bool IsGuestLogin(unsigned char LocalUserNum);
	TEnumAsByte<ELoginStatus> GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	bool AutoLogin();
	bool Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly);
	bool ShowLoginUI(bool bShowOnlineOnly);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(unsigned char LocalUserNum);
	bool Init();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
