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

#define CONST_UTGameSearchCommon_CONTEXT_GOALSCORE_31            4
#define CONST_UTPlayerController_STATS_VIEW_DM_VEHICLES_ALLTIME  4
#define CONST_UTGameSearchCommon_QUERY_TDM                       1
#define CONST_SERVERTYPE_RANKED                                  2
#define CONST_UTPlayerController_PROPERTY_TIMELIMIT              0x100000F9
#define CONST_UTPlayerController_CONTEXT_VSBOTS_1_TO_2           2
#define CONST_UTPlayerController_CONTEXT_GOALSCORE_11            1
#define CONST_UTPlayerController_STATS_VIEW_DM_VEHICLEWEAPONS_RANKED_ALLTIME 7
#define CONST_UTPlayerController_STATS_VIEW_DM_WEAPONS_RANKED_ALLTIME 8
#define CONST_UTPlayerController_CONTEXT_TIMELIMIT_16            2
#define CONST_UTGameSearchCommon_CONTEXT_VSBOTS_3_TO_2           5
#define CONST_GFxUIView_PROPERTY_CUSTOMGAMEMODE                  0x40000002
#define CONST_UTPlayerController_STATS_VIEW_DM_PLAYER_ALLTIME    1
#define CONST_UTGameSearchCommon_CONTEXT_BOTSKILL_MASTERFUL      5
#define CONST_UTPlayerController_CONTEXT_BOTSKILL                0
#define CONST_UTPlayerController_CONTEXT_NUMBOTS_5               4
#define CONST_UTPlayerController_CONTEXT_ALLOWKEYBOARD_NO        0
#define CONST_UTGameSettingsCommon_CONTEXT_VSBOTS_1_TO_3         1
#define CONST_UTPlayerController_STATS_VIEW_DM_WEAPONS_ALLTIME   3
#define CONST_UTPlayerController_CONTEXT_FULLSERVER_YES          1
#define CONST_UTGameSettingsCommon_CONTEXT_NUMBOTS_4             3
#define CONST_UTGameSearchCommon_CONTEXT_GAME_MODE_CTF           1
#define CONST_UTPlayerController_STATS_VIEW_DM_VEHICLEWEAPONS_ALLTIME 5
#define CONST_UTPlayerController_CONTEXT_DEDICATEDSERVER_YES     1
#define CONST_GFxUIView_CONTEXT_DEDICATEDSERVER_NO               0
#define CONST_UTPlayerController_STATS_VIEW_DM_VEHICLES_RANKED_ALLTIME 6
#define CONST_UTGameSettingsCommon_CONTEXT_BOTSKILL_ADEPT        4
#define CONST_UTPlayerController_CONTEXT_TIMELIMIT_21            3
#define CONST_UTPlayerController_STATS_VIEW_DM_RANKED_ALLTIME    2
#define CONST_UTPlayerController_QUERY_CAMPAIGN                  6
#define CONST_UTPlayerController_CONTEXT_NUMBOTS_2               1
#define CONST_UTGameSettingsCommon_CONTEXT_GOALSCORE_11          1
#define CONST_UTGameSettingsCommon_CONTEXT_BOTSKILL_AVERAGE      1
#define CONST_UTPlayerController_QUERY_DUEL                      5
#define CONST_UTGameSettingsCommon_GS_EMAIL_MAXLENGTH            50
#define CONST_UTPlayerController_QUERY_WAR                       4
#define CONST_NEAROBJECTIVEDIST                                  2000.0
#define CONST_UTPlayerController_CONTEXT_NUMBOTS_7               6
#define CONST_UTGameSearchCommon_QUERY_DM                        0
#define CONST_UTGameSearchCommon_CONTEXT_FULLSERVER_YES          1
#define CONST_UTPlayerController_QUERY_VCTF                      3
#define CONST_UTPlayerController_CONTEXT_EMPTYSERVER_NO          0
#define CONST_UTVEHICLE_UNSET_TEAM                               128
#define CONST_UTPlayerController_CONTEXT_GOALSCORE_31            4
#define CONST_UTPlayerController_PROPERTY_CUSTOMGAMEMODE         0x40000002
#define CONST_UTPlayerController_QUERY_CTF                       2
#define CONST_SNIPERINDEXINDEXSTART                              1000
#define CONST_UTPlayerController_QUERY_TDM                       1
#define CONST_UTPlayerController_PROPERTY_CUSTOMMUTATORS         0x40000004
#define CONST_UTPlayerController_CONTEXT_NUMBOTS_9               8
#define CONST_GFxUIView_CONTEXT_NUMBOTS_3                        2
#define CONST_UTPlayerController_CONTEXT_GAME_MODE_CUSTOM        6
#define CONST_UTPlayerController_QUERY_DM                        0
#define CONST_UTPlayerController_CONTEXT_ALLOWKEYBOARD_ANY       2
#define CONST_GOTOURFLAGINDEXSTART                               1900
#define CONST_UTGameSettingsCommon_CONTEXT_BOTSKILL_GODLIKE      7
#define CONST_UTPlayerController_PROPERTY_SERVERDESCRIPTION      0x40000003
#define CONST_UTPlayerController_CONTEXT_NUMBOTS_1               0
#define CONST_UTPlayerController_PROPERTY_CUSTOMMAPNAME          0x40000001
#define CONST_UTPlayerController_CONTEXT_VSBOTS_NONE             0
#define CONST_UTGameSearchCommon_STATS_VIEW_DM_VEHICLES_ALLTIME  4
#define CONST_UTPlayerController_PROPERTY_EPICMUTATORS           0x10000105
#define CONST_UTGameSearchCommon_CONTEXT_GAME_MODE_CUSTOM        6
#define CONST_UTPlayerController_CONTEXT_NUMBOTS_3               2
#define CONST_UTGameSearchCommon_CONTEXT_DEDICATEDSERVER_YES     1
#define CONST_UTPlayerController_PROPERTY_LEADERBOARDRATING      0x20000004
#define CONST_UTPlayerController_PROPERTY_GOALSCORE              0x100000F8
#define CONST_UTPlayerController_PROPERTY_NUMBOTS                0x100000F7
#define CONST_GFxUIView_CONTEXT_GAME_MODE_WAR                    2
#define CONST_UTPlayerController_CONTEXT_VSBOTS_4_TO_2           6
#define CONST_UTGameSearchCommon_CONTEXT_NUMBOTS_1               0
#define CONST_UTPlayerController_CONTEXT_VSBOTS_3_TO_2           5
#define CONST_MAXIMUM_PLAYER_COUNT                               24
#define CONST_UTPlayerController_CONTEXT_PURESERVER_YES          1
#define CONST_UTGameSearchCommon_CONTEXT_NUMBOTS_2               1
#define CONST_UTPlayerController_CONTEXT_VSBOTS_2_TO_2           4
#define CONST_UTGameSettingsCommon_CONTEXT_GAME_MODE_CTF         1
#define CONST_UTPlayerController_CONTEXT_GAME_MODE_CAMPAIGN      7
#define CONST_UTPlayerController_CONTEXT_VSBOTS_3_TO_3           3
#define CONST_UTPlayerController_CONTEXT_VSBOTS_1_TO_3           1
#define CONST_MAX_WAYPOINTS                                      15
#define CONST_UTGameSettingsCommon_CONTEXT_NUMBOTS_2             1
#define CONST_UTGameSearchCommon_CONTEXT_EMPTYSERVER_YES         1
#define CONST_UTPlayerController_CONTEXT_DEDICATEDSERVER_NO      0
#define CONST_UTGameSearchCommon_CONTEXT_GAME_MODE               0x0000800B
#define CONST_UTPlayerController_CONTEXT_EMPTYSERVER_YES         1
#define CONST_UTPlayerController_CONTEXT_PURESERVER_ANY          2
#define CONST_UTPlayerController_CONTEXT_FULLSERVER_NO           0
#define CONST_UTPlayerController_CONTEXT_ALLOWKEYBOARD_YES       1
#define CONST_UTGameSettingsCommon_CONTEXT_DEDICATEDSERVER_YES   1
#define CONST_UTPlayerController_CONTEXT_PURESERVER_NO           0
#define CONST_UTPlayerController_CONTEXT_FORCERESPAWN_YES        1
#define CONST_NEEDOURFLAGINDEXSTART                              900
#define CONST_UTPlayerController_CONTEXT_FORCERESPAWN_NO         0
#define CONST_UTPlayerController_CONTEXT_CAMPAIGN_YES            1
#define CONST_MAX_PERSONALSERVERS                                15
#define CONST_UTPlayerController_CONTEXT_CAMPAIGN_NO             0
#define CONST_UTPlayerController_CONTEXT_LOCKEDSERVER_YES        1
#define CONST_UTPlayerController_CONTEXT_TIMELIMIT_31            4
#define CONST_UTPlayerController_CONTEXT_LOCKEDSERVER_NO         0
#define CONST_UTPlayerController_CONTEXT_TIMELIMIT_11            1
#define CONST_UTPlayerController_CONTEXT_TIMELIMIT_6             0
#define CONST_UTPlayerController_CONTEXT_NUMBOTS_8               7
#define CONST_UTGameSearchCommon_CONTEXT_ALLOWKEYBOARD_ANY       2
#define CONST_GFxUIView_CONTEXT_PURESERVER_NO                    0
#define CONST_UTPlayerController_CONTEXT_NUMBOTS_6               5
#define CONST_UTGameSettingsCommon_STATS_VIEW_DM_WEAPONS_ALLTIME 3
#define CONST_UTPlayerController_CONTEXT_GAME_MODE_WAR           2
#define CONST_UTPlayerController_CONTEXT_NUMBOTS_4               3
#define CONST_UTPlayerController_CONTEXT_GOALSCORE_21            3
#define CONST_UTGameSearchCommon_CONTEXT_PURESERVER_YES          1
#define CONST_UTPlayerController_CONTEXT_GOALSCORE_16            2
#define CONST_UTPlayerController_CONTEXT_CAMPAIGN                9
#define CONST_UTPlayerController_CONTEXT_GOALSCORE_6             0
#define CONST_GFxUIView_CONTEXT_GOALSCORE_11                     1
#define CONST_UTPlayerController_CONTEXT_BOTSKILL_GODLIKE        7
#define CONST_UTPlayerController_CONTEXT_BOTSKILL_INHUMAN        6
#define CONST_UTGameSettingsCommon_CONTEXT_NUMBOTS_6             5
#define CONST_UTPlayerController_CONTEXT_GAME_MODE_VCTF          3
#define CONST_UTPlayerController_CONTEXT_BOTSKILL_MASTERFUL      5
#define CONST_UTPlayerController_CONTEXT_BOTSKILL_ADEPT          4
#define CONST_UTPlayerController_CONTEXT_BOTSKILL_EXPERIENCED    2
#define CONST_UTPlayerController_CONTEXT_BOTSKILL_SKILLED        3
#define CONST_UTGameSettingsCommon_CONTEXT_MAPNAME               1
#define CONST_GFxUIView_GS_CDKEY_PART_MAXLENGTH                  4
#define CONST_UTPlayerController_CONTEXT_FULLSERVER              12
#define CONST_UTPlayerController_CONTEXT_BOTSKILL_AVERAGE        1
#define CONST_UTPlayerController_CONTEXT_BOTSKILL_NOVICE         0
#define CONST_UTGameSearchCommon_GS_MESSAGE_MAXLENGTH            255
#define CONST_UTPlayerController_CONTEXT_MAPNAME_CUSTOM          0
#define CONST_UTPlayerController_CONTEXT_DEDICATEDSERVER         14
#define CONST_UTGameSearchCommon_CONTEXT_VSBOTS_NONE             0
#define CONST_GFxUIView_PROPERTY_NUMBOTS                         0x100000F7
#define CONST_UTPlayerController_CONTEXT_EMPTYSERVER             13
#define CONST_UTPlayerController_CONTEXT_ALLOWKEYBOARD           11
#define CONST_UTGameSettingsCommon_CONTEXT_NUMBOTS_5             4
#define CONST_UTPlayerController_CONTEXT_FORCERESPAWN            10
#define CONST_UTPlayerController_CONTEXT_VSBOTS                  8
#define CONST_UTPlayerController_CONTEXT_LOCKEDSERVER            7
#define CONST_UTPlayerController_CONTEXT_PURESERVER              6
#define CONST_UTPlayerController_CONTEXT_MAPNAME                 1
#define CONST_UTPlayerController_CONTEXT_GAME_MODE_DUEL          5
#define CONST_GFxUIView_CONTEXT_DEDICATEDSERVER_YES              1
#define CONST_UTPlayerController_CONTEXT_GAME_MODE_TDM           4
#define CONST_UTGameSettingsCommon_PROPERTY_SERVERDESCRIPTION    0x40000003
#define CONST_UTGameSearchCommon_CONTEXT_BOTSKILL_AVERAGE        1
#define CONST_UTPlayerController_CONTEXT_GAME_MODE_CTF           1
#define CONST_UTGameSettingsCommon_CONTEXT_NUMBOTS_8             7
#define CONST_UTGameSearchCommon_QUERY_VCTF                      3
#define CONST_UTPlayerController_CONTEXT_GAME_MODE_DM            0
#define CONST_UTGameSearchCommon_CONTEXT_NUMBOTS_5               4
#define CONST_UTPlayerController_CONTEXT_GAME_MODE               0x0000800B
#define CONST_UTGameSettingsCommon_CONTEXT_MAPNAME_CUSTOM        0
#define CONST_UTPlayerController_CONTEXT_PRESENCE_MENUPRESENCE   0
#define CONST_UTGameSettingsCommon_CONTEXT_TIMELIMIT_31          4
#define CONST_UTPlayerController_GS_CDKEY_PART_MAXLENGTH         4
#define CONST_UTPlayerController_GS_EMAIL_MAXLENGTH              50
#define CONST_UTPlayerController_GS_MESSAGE_MAXLENGTH            255
#define CONST_UTGameSettingsCommon_PROPERTY_EPICMUTATORS         0x10000105
#define CONST_GFxUIView_CONTEXT_VSBOTS                           8
#define CONST_UTPlayerController_GS_PASSWORD_MAXLENGTH           30
#define CONST_UTPlayerController_GS_USERNAME_MAXLENGTH           15
#define CONST_HOLDINGFLAGINDEXSTART                              1600
#define CONST_GFxUIView_CONTEXT_TIMELIMIT_16                     2
#define CONST_GFxUIView_GS_USERNAME_MAXLENGTH                    15
#define CONST_GFxUIView_GS_PASSWORD_MAXLENGTH                    30
#define CONST_GFxUIView_GS_MESSAGE_MAXLENGTH                     255
#define CONST_GFxUIView_GS_EMAIL_MAXLENGTH                       50
#define CONST_GFxUIView_CONTEXT_VSBOTS_NONE                      0
#define CONST_GFxUIView_CONTEXT_PRESENCE_MENUPRESENCE            0
#define CONST_UTGameSearchCommon_CONTEXT_NUMBOTS_3               2
#define CONST_GFxUIView_CONTEXT_GAME_MODE_TDM                    4
#define CONST_GFxUIView_CONTEXT_GAME_MODE                        0x0000800B
#define CONST_GFxUIView_CONTEXT_NUMBOTS_9                        8
#define CONST_GFxUIView_CONTEXT_GAME_MODE_DM                     0
#define CONST_UTGameSettingsCommon_QUERY_CAMPAIGN                6
#define CONST_GFxUIView_CONTEXT_GAME_MODE_CTF                    1
#define CONST_UTGameSettingsCommon_QUERY_DUEL                    5
#define CONST_GFxUIView_CONTEXT_GAME_MODE_VCTF                   3
#define CONST_UTGameSettingsCommon_STATS_VIEW_DM_RANKED_ALLTIME  2
#define CONST_GFxUIView_CONTEXT_GAME_MODE_DUEL                   5
#define CONST_GFxUIView_CONTEXT_GAME_MODE_CUSTOM                 6
#define CONST_UTGameSearchCommon_CONTEXT_GOALSCORE_16            2
#define CONST_GFxUIView_CONTEXT_GAME_MODE_CAMPAIGN               7
#define CONST_UTGameSearchCommon_STATS_VIEW_DM_WEAPONS_RANKED_ALLTIME 8
#define CONST_GFxUIView_CONTEXT_BOTSKILL                         0
#define CONST_GOTYOURBACKINDEXSTART                              800
#define CONST_GFxUIView_CONTEXT_MAPNAME                          1
#define CONST_GFxUIView_CONTEXT_PURESERVER                       6
#define CONST_GFxUIView_PROPERTY_GOALSCORE                       0x100000F8
#define CONST_GFxUIView_CONTEXT_BOTSKILL_SKILLED                 3
#define CONST_GFxUIView_CONTEXT_LOCKEDSERVER                     7
#define CONST_GFxUIView_STATS_VIEW_DM_PLAYER_ALLTIME             1
#define CONST_GFxUIView_CONTEXT_CAMPAIGN                         9
#define CONST_GFxUIView_CONTEXT_FORCERESPAWN                     10
#define CONST_GFxUIView_CONTEXT_EMPTYSERVER_NO                   0
#define CONST_GFxUIView_CONTEXT_ALLOWKEYBOARD                    11
#define CONST_GFxUIView_CONTEXT_FULLSERVER                       12
#define CONST_GFxUIView_CONTEXT_EMPTYSERVER                      13
#define CONST_UTGameSettingsCommon_CONTEXT_GOALSCORE_21          3
#define CONST_UTGameSettingsCommon_CONTEXT_BOTSKILL_EXPERIENCED  2
#define CONST_GFxUIView_CONTEXT_DEDICATEDSERVER                  14
#define CONST_GFxUIView_CONTEXT_MAPNAME_CUSTOM                   0
#define CONST_GFxUIView_CONTEXT_NUMBOTS_4                        3
#define CONST_GFxUIView_CONTEXT_BOTSKILL_NOVICE                  0
#define CONST_GFxUIView_CONTEXT_BOTSKILL_AVERAGE                 1
#define CONST_GFxUIView_PROPERTY_SERVERDESCRIPTION               0x40000003
#define CONST_GFxUIView_CONTEXT_BOTSKILL_EXPERIENCED             2
#define CONST_UTGameSearchCommon_CONTEXT_LOCKEDSERVER            7
#define CONST_GFxUIView_CONTEXT_BOTSKILL_ADEPT                   4
#define CONST_UTGameSettingsCommon_CONTEXT_GAME_MODE_DUEL        5
#define CONST_GFxUIView_CONTEXT_BOTSKILL_MASTERFUL               5
#define CONST_UTGameSettingsCommon_CONTEXT_GAME_MODE             0x0000800B
#define CONST_GFxUIView_CONTEXT_BOTSKILL_INHUMAN                 6
#define CONST_GFxUIView_CONTEXT_BOTSKILL_GODLIKE                 7
#define CONST_UTGameSettingsCommon_CONTEXT_LOCKEDSERVER          7
#define CONST_GFxUIView_CONTEXT_GOALSCORE_6                      0
#define CONST_GFxUIView_CONTEXT_GOALSCORE_16                     2
#define CONST_GFxUIView_CONTEXT_GOALSCORE_21                     3
#define CONST_GFxUIView_CONTEXT_GOALSCORE_31                     4
#define CONST_GFxUIView_STATS_VIEW_DM_WEAPONS_RANKED_ALLTIME     8
#define CONST_GFxUIView_CONTEXT_NUMBOTS_1                        0
#define CONST_UTGameSettingsCommon_STATS_VIEW_DM_VEHICLEWEAPONS_RANKED_ALLTIME 7
#define CONST_GFxUIView_CONTEXT_NUMBOTS_2                        1
#define CONST_UTGameSearchCommon_PROPERTY_TIMELIMIT              0x100000F9
#define CONST_GFxUIView_CONTEXT_NUMBOTS_5                        4
#define CONST_GFxUIView_CONTEXT_NUMBOTS_6                        5
#define CONST_UTGameSearchCommon_CONTEXT_FULLSERVER_NO           0
#define CONST_UTGameSearchCommon_CONTEXT_TIMELIMIT_21            3
#define CONST_GFxUIView_CONTEXT_NUMBOTS_7                        6
#define CONST_UTGameSettingsCommon_PROPERTY_CUSTOMMAPNAME        0x40000001
#define CONST_GFxUIView_CONTEXT_NUMBOTS_8                        7
#define CONST_GFxUIView_CONTEXT_TIMELIMIT_6                      0
#define CONST_UTGameSettingsCommon_STATS_VIEW_DM_VEHICLES_RANKED_ALLTIME 6
#define CONST_GFxUIView_CONTEXT_TIMELIMIT_11                     1
#define CONST_GFxUIView_CONTEXT_TIMELIMIT_21                     3
#define CONST_UTGameSettingsCommon_PROPERTY_CUSTOMGAMEMODE       0x40000002
#define CONST_GFxUIView_CONTEXT_TIMELIMIT_31                     4
#define CONST_GFxUIView_CONTEXT_PURESERVER_YES                   1
#define CONST_UTGameSearchCommon_CONTEXT_ALLOWKEYBOARD_YES       1
#define CONST_GFxUIView_CONTEXT_PURESERVER_ANY                   2
#define CONST_GFxUIView_CONTEXT_LOCKEDSERVER_NO                  0
#define CONST_GFxUIView_CONTEXT_LOCKEDSERVER_YES                 1
#define CONST_GFxUIView_CONTEXT_CAMPAIGN_NO                      0
#define CONST_UTGameSearchCommon_CONTEXT_TIMELIMIT_16            2
#define CONST_GFxUIView_CONTEXT_CAMPAIGN_YES                     1
#define CONST_UTGameSearchCommon_CONTEXT_MAPNAME                 1
#define CONST_GFxUIView_CONTEXT_VSBOTS_1_TO_3                    1
#define CONST_GFxUIView_CONTEXT_FORCERESPAWN_NO                  0
#define CONST_GFxUIView_CONTEXT_FORCERESPAWN_YES                 1
#define CONST_GFxUIView_CONTEXT_ALLOWKEYBOARD_NO                 0
#define CONST_GFxUIView_CONTEXT_ALLOWKEYBOARD_YES                1
#define CONST_UTGameSettingsCommon_STATS_VIEW_DM_VEHICLEWEAPONS_ALLTIME 5
#define CONST_GFxUIView_CONTEXT_ALLOWKEYBOARD_ANY                2
#define CONST_GFxUIView_CONTEXT_FULLSERVER_NO                    0
#define CONST_GFxUIView_CONTEXT_FULLSERVER_YES                   1
#define CONST_FRIENDLYFIREINDEXSTART                             700
#define CONST_UTGameSettingsCommon_CONTEXT_FORCERESPAWN          10
#define CONST_UTGameSearchCommon_CONTEXT_NUMBOTS_9               8
#define CONST_MINVIEWDIST                                        200
#define CONST_GFxUIView_CONTEXT_EMPTYSERVER_YES                  1
#define CONST_UTGameSearchCommon_STATS_VIEW_DM_PLAYER_ALLTIME    1
#define CONST_GFxUIView_CONTEXT_VSBOTS_1_TO_2                    2
#define CONST_GFxUIView_CONTEXT_VSBOTS_3_TO_3                    3
#define CONST_GFxUIView_CONTEXT_VSBOTS_2_TO_2                    4
#define CONST_GFxUIView_CONTEXT_VSBOTS_3_TO_2                    5
#define CONST_GFxUIView_CONTEXT_VSBOTS_4_TO_2                    6
#define CONST_GFxUIView_PROPERTY_TIMELIMIT                       0x100000F9
#define CONST_GFxUIView_PROPERTY_LEADERBOARDRATING               0x20000004
#define CONST_UTGameSettingsCommon_CONTEXT_PURESERVER_NO         0
#define CONST_GFxUIView_PROPERTY_EPICMUTATORS                    0x10000105
#define CONST_GFxUIView_PROPERTY_CUSTOMMAPNAME                   0x40000001
#define CONST_GFxUIView_STATS_VIEW_DM_VEHICLEWEAPONS_ALLTIME     5
#define CONST_GFxUIView_PROPERTY_CUSTOMMUTATORS                  0x40000004
#define CONST_GFxUIView_QUERY_DM                                 0
#define CONST_UTGameSettingsCommon_CONTEXT_FORCERESPAWN_NO       0
#define CONST_UTGameSearchCommon_CONTEXT_PURESERVER_ANY          2
#define CONST_GFxUIView_QUERY_TDM                                1
#define CONST_GFxUIView_QUERY_CTF                                2
#define CONST_UTGameSearchCommon_CONTEXT_BOTSKILL_GODLIKE        7
#define CONST_GFxUIView_QUERY_VCTF                               3
#define CONST_GFxUIView_QUERY_WAR                                4
#define CONST_GFxUIView_QUERY_DUEL                               5
#define CONST_GFxUIView_QUERY_CAMPAIGN                           6
#define CONST_GFxUIView_STATS_VIEW_DM_RANKED_ALLTIME             2
#define CONST_UTGameSearchCommon_CONTEXT_DEDICATEDSERVER         14
#define CONST_GFxUIView_STATS_VIEW_DM_WEAPONS_ALLTIME            3
#define CONST_GFxUIView_STATS_VIEW_DM_VEHICLES_ALLTIME           4
#define CONST_GFxUIView_STATS_VIEW_DM_VEHICLES_RANKED_ALLTIME    6
#define CONST_GFxUIView_STATS_VIEW_DM_VEHICLEWEAPONS_RANKED_ALLTIME 7
#define CONST_FakePlayerIndex                                    0
#define CONST_UTGameSettingsCommon_CONTEXT_TIMELIMIT_6           0
#define CONST_MarkupForNoMapImage                                "UDKFrontEnd.gm_map_none"
#define CONST_SERVERTYPE_LAN                                     0
#define CONST_SERVERTYPE_UNRANKED                                1
#define CONST_SERVERBROWSER_SERVERTYPE_RANKED                    2
#define CONST_SERVERBROWSER_SERVERTYPE_UNRANKED                  1
#define CONST_SERVERBROWSER_SERVERTYPE_LAN                       0
#define CONST_MINTIMEBETWEENPAINSOUNDS                           0.35
#define CONST_MAXSTAKEOUTDIST                                    2000
#define CONST_UTGameSearchCommon_CONTEXT_GOALSCORE_21            3
#define CONST_ENEMYLOCATIONFUZZ                                  1200
#define CONST_TACTICALHEIGHTADVANTAGE                            320
#define CONST_MINSTRAFEDIST                                      200
#define CONST_AngleConvert                                       0.0000958738
#define CONST_UTGameSearchCommon_GS_USERNAME_MAXLENGTH           15
#define CONST_UTGameSearchCommon_GS_PASSWORD_MAXLENGTH           30
#define CONST_UTGameSearchCommon_CONTEXT_NUMBOTS_7               6
#define CONST_UTGameSearchCommon_GS_EMAIL_MAXLENGTH              50
#define CONST_UTGameSearchCommon_GS_CDKEY_PART_MAXLENGTH         4
#define CONST_UTGameSearchCommon_CONTEXT_PRESENCE_MENUPRESENCE   0
#define CONST_UTGameSearchCommon_CONTEXT_GAME_MODE_DM            0
#define CONST_UTGameSettingsCommon_CONTEXT_GAME_MODE_CUSTOM      6
#define CONST_UTGameSearchCommon_CONTEXT_GAME_MODE_WAR           2
#define CONST_UTGameSearchCommon_CONTEXT_GAME_MODE_VCTF          3
#define CONST_UTGameSearchCommon_CONTEXT_GAME_MODE_TDM           4
#define CONST_UTGameSearchCommon_CONTEXT_GAME_MODE_DUEL          5
#define CONST_UTGameSearchCommon_CONTEXT_GAME_MODE_CAMPAIGN      7
#define CONST_UTGameSearchCommon_CONTEXT_BOTSKILL                0
#define CONST_UTGameSearchCommon_CONTEXT_PURESERVER              6
#define CONST_UTGameSettingsCommon_CONTEXT_FULLSERVER_YES        1
#define CONST_UTGameSearchCommon_CONTEXT_VSBOTS                  8
#define CONST_UTGameSearchCommon_CONTEXT_CAMPAIGN                9
#define CONST_INPOSITIONINDEXSTART                               1200
#define CONST_UTGameSearchCommon_PROPERTY_GOALSCORE              0x100000F8
#define CONST_UTGameSearchCommon_CONTEXT_FORCERESPAWN            10
#define CONST_UTGameSearchCommon_CONTEXT_ALLOWKEYBOARD           11
#define CONST_UTGameSearchCommon_CONTEXT_FULLSERVER              12
#define CONST_UTGameSearchCommon_CONTEXT_EMPTYSERVER             13
#define CONST_UTGameSearchCommon_CONTEXT_MAPNAME_CUSTOM          0
#define CONST_UTGameSearchCommon_CONTEXT_PURESERVER_NO           0
#define CONST_UTGameSearchCommon_CONTEXT_TIMELIMIT_6             0
#define CONST_UTGameSearchCommon_CONTEXT_BOTSKILL_NOVICE         0
#define CONST_UTGameSearchCommon_CONTEXT_BOTSKILL_EXPERIENCED    2
#define CONST_UTGameSearchCommon_CONTEXT_BOTSKILL_SKILLED        3
#define CONST_UTGameSearchCommon_CONTEXT_BOTSKILL_ADEPT          4
#define CONST_UTGameSearchCommon_CONTEXT_BOTSKILL_INHUMAN        6
#define CONST_UTGameSettingsCommon_CONTEXT_FORCERESPAWN_YES      1
#define CONST_UTGameSettingsCommon_CONTEXT_BOTSKILL_SKILLED      3
#define CONST_UTGameSearchCommon_CONTEXT_GOALSCORE_6             0
#define CONST_UTGameSearchCommon_CONTEXT_GOALSCORE_11            1
#define CONST_UTGameSearchCommon_CONTEXT_NUMBOTS_4               3
#define CONST_UTGameSearchCommon_CONTEXT_NUMBOTS_6               5
#define CONST_UTGameSearchCommon_CONTEXT_NUMBOTS_8               7
#define CONST_UTGameSearchCommon_CONTEXT_TIMELIMIT_11            1
#define CONST_UTGameSearchCommon_CONTEXT_TIMELIMIT_31            4
#define CONST_UTGameSettingsCommon_CONTEXT_CAMPAIGN              9
#define CONST_UTGameSearchCommon_CONTEXT_LOCKEDSERVER_NO         0
#define CONST_UTGameSearchCommon_CONTEXT_LOCKEDSERVER_YES        1
#define CONST_UTGameSearchCommon_CONTEXT_CAMPAIGN_NO             0
#define CONST_UTGameSearchCommon_CONTEXT_CAMPAIGN_YES            1
#define CONST_UTGameSettingsCommon_CONTEXT_TIMELIMIT_16          2
#define CONST_UTGameSearchCommon_CONTEXT_FORCERESPAWN_NO         0
#define CONST_UTGameSearchCommon_CONTEXT_FORCERESPAWN_YES        1
#define CONST_UTGameSettingsCommon_CONTEXT_BOTSKILL_INHUMAN      6
#define CONST_UTGameSearchCommon_CONTEXT_ALLOWKEYBOARD_NO        0
#define CONST_UTGameSettingsCommon_CONTEXT_ALLOWKEYBOARD_ANY     2
#define CONST_UTGameSearchCommon_CONTEXT_EMPTYSERVER_NO          0
#define CONST_UTGameSearchCommon_CONTEXT_DEDICATEDSERVER_NO      0
#define CONST_UTGameSettingsCommon_CONTEXT_GAME_MODE_TDM         4
#define CONST_UTGameSearchCommon_CONTEXT_VSBOTS_1_TO_3           1
#define CONST_UTGameSettingsCommon_CONTEXT_VSBOTS_4_TO_2         6
#define CONST_UTGameSearchCommon_CONTEXT_VSBOTS_1_TO_2           2
#define CONST_UTGameSearchCommon_CONTEXT_VSBOTS_3_TO_3           3
#define CONST_UTGameSearchCommon_CONTEXT_VSBOTS_2_TO_2           4
#define CONST_UTGameSettingsCommon_CONTEXT_VSBOTS_1_TO_2         2
#define CONST_UTGameSearchCommon_CONTEXT_VSBOTS_4_TO_2           6
#define CONST_UTGameSearchCommon_QUERY_CTF                       2
#define CONST_UTGameSearchCommon_PROPERTY_LEADERBOARDRATING      0x20000004
#define CONST_UTGameSearchCommon_PROPERTY_NUMBOTS                0x100000F7
#define CONST_UTGameSearchCommon_PROPERTY_EPICMUTATORS           0x10000105
#define CONST_UTGameSearchCommon_PROPERTY_CUSTOMMAPNAME          0x40000001
#define CONST_UTGameSearchCommon_PROPERTY_CUSTOMGAMEMODE         0x40000002
#define CONST_UTGameSearchCommon_PROPERTY_SERVERDESCRIPTION      0x40000003
#define CONST_UTGameSearchCommon_PROPERTY_CUSTOMMUTATORS         0x40000004
#define CONST_UTGameSearchCommon_QUERY_WAR                       4
#define CONST_UTGameSearchCommon_QUERY_DUEL                      5
#define CONST_UTGameSearchCommon_QUERY_CAMPAIGN                  6
#define CONST_UTGameSearchCommon_STATS_VIEW_DM_RANKED_ALLTIME    2
#define CONST_UTGameSearchCommon_STATS_VIEW_DM_WEAPONS_ALLTIME   3
#define CONST_UTGameSettingsCommon_CONTEXT_PURESERVER            6
#define CONST_UTGameSearchCommon_STATS_VIEW_DM_VEHICLEWEAPONS_ALLTIME 5
#define CONST_UTGameSearchCommon_STATS_VIEW_DM_VEHICLES_RANKED_ALLTIME 6
#define CONST_UTGameSettingsCommon_CONTEXT_LOCKEDSERVER_YES      1
#define CONST_UTGameSearchCommon_STATS_VIEW_DM_VEHICLEWEAPONS_RANKED_ALLTIME 7
#define CONST_UTGameSettingsCommon_GS_USERNAME_MAXLENGTH         15
#define CONST_UTGameSettingsCommon_GS_PASSWORD_MAXLENGTH         30
#define CONST_UTGameSettingsCommon_GS_MESSAGE_MAXLENGTH          255
#define CONST_UTGameSettingsCommon_GS_CDKEY_PART_MAXLENGTH       4
#define CONST_UTGameSettingsCommon_CONTEXT_PRESENCE_MENUPRESENCE 0
#define CONST_UTGameSettingsCommon_CONTEXT_GAME_MODE_DM          0
#define CONST_UTGameSettingsCommon_CONTEXT_GAME_MODE_WAR         2
#define CONST_UTGameSettingsCommon_CONTEXT_GAME_MODE_VCTF        3
#define CONST_UTGameSettingsCommon_CONTEXT_GAME_MODE_CAMPAIGN    7
#define CONST_UTGameSettingsCommon_CONTEXT_BOTSKILL              0
#define CONST_UTGameSettingsCommon_CONTEXT_VSBOTS                8
#define CONST_UTGameSettingsCommon_CONTEXT_ALLOWKEYBOARD         11
#define CONST_UTGameSettingsCommon_CONTEXT_FULLSERVER            12
#define CONST_UTGameSettingsCommon_CONTEXT_EMPTYSERVER           13
#define CONST_UTGameSettingsCommon_CONTEXT_DEDICATEDSERVER       14
#define CONST_UTGameSettingsCommon_CONTEXT_BOTSKILL_NOVICE       0
#define CONST_UTGameSettingsCommon_CONTEXT_BOTSKILL_MASTERFUL    5
#define CONST_UTGameSettingsCommon_CONTEXT_GOALSCORE_6           0
#define CONST_UTGameSettingsCommon_CONTEXT_GOALSCORE_16          2
#define CONST_UTGameSettingsCommon_CONTEXT_GOALSCORE_31          4
#define CONST_UTGameSettingsCommon_CONTEXT_NUMBOTS_1             0
#define CONST_UTGameSettingsCommon_CONTEXT_NUMBOTS_3             2
#define CONST_UTGameSettingsCommon_STATS_VIEW_DM_PLAYER_ALLTIME  1
#define CONST_UTGameSettingsCommon_CONTEXT_NUMBOTS_7             6
#define CONST_UTGameSettingsCommon_CONTEXT_NUMBOTS_9             8
#define CONST_UTGameSettingsCommon_CONTEXT_TIMELIMIT_11          1
#define CONST_UTGameSettingsCommon_CONTEXT_TIMELIMIT_21          3
#define CONST_UTGameSettingsCommon_CONTEXT_PURESERVER_YES        1
#define CONST_UTGameSettingsCommon_CONTEXT_PURESERVER_ANY        2
#define CONST_UTGameSettingsCommon_CONTEXT_LOCKEDSERVER_NO       0
#define CONST_UTGameSettingsCommon_CONTEXT_CAMPAIGN_NO           0
#define CONST_UTGameSettingsCommon_CONTEXT_CAMPAIGN_YES          1
#define CONST_UTGameSettingsCommon_QUERY_DM                      0
#define CONST_UTGameSettingsCommon_CONTEXT_ALLOWKEYBOARD_NO      0
#define CONST_UTGameSettingsCommon_CONTEXT_ALLOWKEYBOARD_YES     1
#define CONST_UTGameSettingsCommon_CONTEXT_FULLSERVER_NO         0
#define CONST_UTGameSettingsCommon_CONTEXT_EMPTYSERVER_NO        0
#define CONST_UTGameSettingsCommon_CONTEXT_EMPTYSERVER_YES       1
#define CONST_NODECONSTRUCTEDINDEXSTART                          2000
#define CONST_UTGameSettingsCommon_CONTEXT_DEDICATEDSERVER_NO    0
#define CONST_UTGameSettingsCommon_CONTEXT_VSBOTS_NONE           0
#define CONST_UTGameSettingsCommon_CONTEXT_VSBOTS_3_TO_3         3
#define CONST_UTGameSettingsCommon_CONTEXT_VSBOTS_2_TO_2         4
#define CONST_UTGameSettingsCommon_CONTEXT_VSBOTS_3_TO_2         5
#define CONST_UTGameSettingsCommon_PROPERTY_NUMBOTS              0x100000F7
#define CONST_UTGameSettingsCommon_PROPERTY_GOALSCORE            0x100000F8
#define CONST_UTGameSettingsCommon_PROPERTY_TIMELIMIT            0x100000F9
#define CONST_UTGameSettingsCommon_PROPERTY_LEADERBOARDRATING    0x20000004
#define CONST_UTGameSettingsCommon_PROPERTY_CUSTOMMUTATORS       0x40000004
#define CONST_UTGameSettingsCommon_QUERY_TDM                     1
#define CONST_UTGameSettingsCommon_QUERY_CTF                     2
#define CONST_UTGameSettingsCommon_QUERY_VCTF                    3
#define CONST_UTGameSettingsCommon_QUERY_WAR                     4
#define CONST_UTGameSettingsCommon_STATS_VIEW_DM_VEHICLES_ALLTIME 4
#define CONST_UTGameSettingsCommon_STATS_VIEW_DM_WEAPONS_RANKED_ALLTIME 8
#define CONST_ACKINDEXSTART                                      600
#define CONST_LOCATIONUPDATEINDEXSTART                           1100
#define CONST_ENEMYSTATUSINDEXSTART                              1300
#define CONST_KILLEDVEHICLEINDEXSTART                            1400
#define CONST_ENEMYFLAGCARRIERINDEXSTART                         1500
#define CONST_AREASECUREINDEXSTART                               1700

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UTGame.UTPlayerController.EWeaponHand
enum class EWeaponHand : uint8_t
{
	HAND_Right                     = 0,
	HAND_Left                      = 1,
	HAND_Centered                  = 2,
	HAND_Hidden                    = 3,
	HAND_MAX                       = 4
};


// Enum UTGame.UTPlayerController.EPawnShadowMode
enum class EPawnShadowMode : uint8_t
{
	SHADOW_None                    = 0,
	SHADOW_Self                    = 1,
	SHADOW_All                     = 2,
	SHADOW_MAX                     = 3
};


// Enum UTGame.UTPlayerController.EAutoObjectivePreference
enum class EAutoObjectivePreference : uint8_t
{
	AOP_Disabled                   = 0,
	AOP_NoPreference               = 1,
	AOP_Attack                     = 2,
	AOP_Defend                     = 3,
	AOP_OrbRunner                  = 4,
	AOP_SpecialOps                 = 5,
	AOP_MAX                        = 6
};


// Enum UTGame.UTPlayerController.EUTVehicleControls
enum class EUTVehicleControls : uint8_t
{
	UTVC_Simple                    = 0,
	UTVC_Normal                    = 1,
	UTVC_Advanced                  = 2,
	UTVC_MAX                       = 3
};


// Enum UTGame.UTGFxTweenableMoviePlayer.TweenType
enum class ETweenType : uint8_t
{
	TWEEN_EaseOut                  = 0,
	TWEEN_EaseIn                   = 1,
	TWEEN_Linear                   = 2,
	TWEEN_MAX                      = 3
};


// Enum UTGame.GFxUDKFrontEnd_JoinGame.EQueryCompletionAction
enum class EQueryCompletionAction : uint8_t
{
	QUERYACTION_None               = 0,
	QUERYACTION_Default            = 1,
	QUERYACTION_CloseScene         = 2,
	QUERYACTION_JoinServer         = 3,
	QUERYACTION_RefreshAll         = 4,
	QUERYACTION_MAX                = 5
};


// Enum UTGame.GFxUIFrontEnd_TitleScreen.MenuButtonsType
enum class EMenuButtonsType : uint8_t
{
	MENU_BTN_CAMPAIGN              = 0,
	MENU_BTN_INSTANTACTION         = 1,
	MENU_BTN_MULTIPLAYER           = 2,
	MENU_BTN_COMMUNITY             = 3,
	MENU_BTN_SETTINGS              = 4,
	MENU_BTN_EXIT                  = 5,
	MENU_BTN_LOGOUT                = 6,
	MENU_BTN_SELECT                = 7,
	MENU_BTN_MAX                   = 8
};


// Enum UTGame.PhysAnimTestActor.EPATAState
enum class EPATAState : uint8_t
{
	PATA_FixedAll                  = 0,
	PATA_FixedLower                = 1,
	PATA_MotorRagdoll              = 2,
	PATA_Floppy                    = 3,
	PATA_Recover                   = 4,
	PATA_MAX                       = 5
};


// Enum UTGame.UTAchievementsBase.EAchievementUnlockType
enum class EAchievementUnlockType : uint8_t
{
	EAUT_Count                     = 0,
	EAUT_Bitmask                   = 1,
	EAUT_ByteCount                 = 2,
	EAUT_MAX                       = 3
};


// Enum UTGame.UTAchievements.EUTGameAchievements
enum class EUTGameAchievements : uint8_t
{
	EUTA_EXPLORE_EveryMutator      = 0,
	EUTA_WEAPON_DontTaseMeBro      = 1,
	EUTA_WEAPON_StrongestLink      = 2,
	EUTA_WEAPON_HaveANiceDay       = 3,
	EUTA_VEHICLE_Armadillo         = 4,
	EUTA_POWERUP_DeliveringTheHurt = 5,
	EUTA_HUMILIATION_SerialKiller  = 6,
	EUTA_HUMILIATION_OffToAGoodStart = 7,
	EUTA_MAX                       = 8
};


// Enum UTGame.UTVehicle.EAIVehiclePurpose
enum class EAIVehiclePurpose : uint8_t
{
	AIP_Offensive                  = 0,
	AIP_Defensive                  = 1,
	AIP_Any                        = 2,
	AIP_MAX                        = 3
};


// Enum UTGame.UTPawn.EWeapAnimType
enum class EWeapAnimType : uint8_t
{
	EWAT_Default                   = 0,
	EWAT_Pistol                    = 1,
	EWAT_DualPistols               = 2,
	EWAT_ShoulderRocket            = 3,
	EWAT_Stinger                   = 4,
	EWAT_MAX                       = 5
};


// Enum UTGame.UTWeapon.EZoomState
enum class EZoomState : uint8_t
{
	ZST_NotZoomed                  = 0,
	ZST_ZoomingOut                 = 1,
	ZST_ZoomingIn                  = 2,
	ZST_Zoomed                     = 3,
	ZST_MAX                        = 4
};


// Enum UTGame.UTWeapon.AmmoWidgetDisplayStyle
enum class EAmmoWidgetDisplayStyle : uint8_t
{
	EAWDS_Numeric                  = 0,
	EAWDS_BarGraph                 = 1,
	EAWDS_Both                     = 2,
	EAWDS_None                     = 3,
	EAWDS_MAX                      = 4
};


// Enum UTGame.UTGame.EVoiceChannel
enum class EVoiceChannel : uint8_t
{
	VC_Spectators                  = 0,
	VC_Team1                       = 1,
	VC_Team2                       = 2,
	VC_MAX                         = 3
};


// Enum UTGame.UTGameReplicationInfo.EFlagState
enum class EFlagState : uint8_t
{
	FLAG_Home                      = 0,
	FLAG_HeldFriendly              = 1,
	FLAG_HeldEnemy                 = 2,
	FLAG_Down                      = 3,
	FLAG_MAX                       = 4
};


// Enum UTGame.UTDefensePoint.EDefensePriority
enum class EDefensePriority : uint8_t
{
	DEFPRI_Low                     = 0,
	DEFPRI_High                    = 1,
	DEFPRI_MAX                     = 2
};


// Enum UTGame.UTMusicManager.EMusicState
enum class EMusicState : uint8_t
{
	MST_Ambient                    = 0,
	MST_Tension                    = 1,
	MST_Suspense                   = 2,
	MST_Action                     = 3,
	MST_Victory                    = 4,
	MST_MAX                        = 5
};


// Enum UTGame.UTWeap_RocketLauncher.ERocketFireMode1
enum class ERocketFireMode1 : uint8_t
{
	RFM_Spread                     = 0,
	RFM_Spiral                     = 1,
	RFM_Grenades                   = 2,
	RFM_Max                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UTGame.UTPlayerController.PostProcessInfo
// 0x0010
struct FPostProcessInfo
{
	float                                              Shadows;                                                  // 0x0000(0x0004)
	float                                              MidTones;                                                 // 0x0004(0x0004)
	float                                              HighLights;                                               // 0x0008(0x0004)
	float                                              Desaturation;                                             // 0x000C(0x0004)
};

// ScriptStruct UTGame.UTPlayerReplicationInfo.TimeStat
// 0x0010
struct FTimeStat
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008)
	float                                              TotalTime;                                                // 0x0008(0x0004)
	float                                              CurrentStart;                                             // 0x000C(0x0004)
};

// ScriptStruct UTGame.UTPlayerReplicationInfo.IntStat
// 0x000C
struct FIntStat
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008)
	int                                                StatValue;                                                // 0x0008(0x0004)
};

// ScriptStruct UTGame.UTCharInfo.CustomAIData
// 0x0028
struct FCustomAIData
{
	float                                              Tactics;                                                  // 0x0000(0x0004)
	float                                              StrafingAbility;                                          // 0x0004(0x0004)
	float                                              Accuracy;                                                 // 0x0008(0x0004)
	float                                              Aggressiveness;                                           // 0x000C(0x0004)
	float                                              CombatStyle;                                              // 0x0010(0x0004)
	float                                              Jumpiness;                                                // 0x0014(0x0004)
	float                                              ReactionTime;                                             // 0x0018(0x0004)
	struct FString                                     FavoriteWeapon;                                           // 0x001C(0x000C) (NeedCtorLink)
};

// ScriptStruct UTGame.UTCharInfo.CharacterInfo
// 0x0070
struct FCharacterInfo
{
	struct FString                                     CharID;                                                   // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     FamilyID;                                                 // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     CharName;                                                 // 0x0018(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     Description;                                              // 0x0024(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     PreviewImageMarkup;                                       // 0x0030(0x000C) (NeedCtorLink)
	struct FString                                     Faction;                                                  // 0x003C(0x000C) (NeedCtorLink)
	struct FCustomAIData                               AIData;                                                   // 0x0048(0x0028) (NeedCtorLink)
};

// ScriptStruct UTGame.UTPawn.GibInfo
// 0x0010
struct FGibInfo
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008)
	class UClass*                                      GibClass;                                                 // 0x0008(0x0004)
	unsigned long                                      bHighDetailOnly : 1;                                      // 0x000C(0x0004)
};

// ScriptStruct UTGame.UTGame.GameMapCycle
// 0x0014
struct FGameMapCycle
{
	struct FName                                       GameClassName;                                            // 0x0000(0x0008)
	TArray<struct FString>                             Maps;                                                     // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct UTGame.UTGame.ActiveBotInfo
// 0x0010
struct FActiveBotInfo
{
	struct FString                                     BotName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	unsigned long                                      bInUse : 1;                                               // 0x000C(0x0004)
};

// ScriptStruct UTGame.UTGameReplicationInfo.MeshEffect
// 0x0008
struct FMeshEffect
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0004)
	class UMaterialInterface*                          Material;                                                 // 0x0004(0x0004)
};

// ScriptStruct UTGame.UTVehicle.TimePosition
// 0x0010
struct FTimePosition
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	float                                              Time;                                                     // 0x000C(0x0004)
};

// ScriptStruct UTGame.UTVehicle.MaterialList
// 0x000C
struct FMaterialList
{
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UTGame.UTGameObjective.ScorerRecord
// 0x0008
struct FScorerRecord
{
	class AUTPlayerReplicationInfo*                    PRI;                                                      // 0x0000(0x0004)
	float                                              Pct;                                                      // 0x0004(0x0004)
};

// ScriptStruct UTGame.UTHUD.DamageInfo
// 0x000C
struct FDamageInfo
{
	float                                              FadeTime;                                                 // 0x0000(0x0004)
	float                                              FadeValue;                                                // 0x0004(0x0004)
	class UMaterialInstanceConstant*                   MatConstant;                                              // 0x0008(0x0004)
};

// ScriptStruct UTGame.UTWeaponLocker.WeaponEntry
// 0x0008
struct FWeaponEntry
{
	class UClass*                                      WeaponClass;                                              // 0x0000(0x0004) (Edit)
	class UPrimitiveComponent*                         PickupMesh;                                               // 0x0004(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct UTGame.UTWeaponLocker.ReplacementWeaponEntry
// 0x0008
struct FReplacementWeaponEntry
{
	unsigned long                                      bReplaced : 1;                                            // 0x0000(0x0004)
	class UClass*                                      WeaponClass;                                              // 0x0004(0x0004)
};

// ScriptStruct UTGame.UTWeaponLocker.PawnToucher
// 0x0008
struct FPawnToucher
{
	class APawn*                                       P;                                                        // 0x0000(0x0004)
	float                                              NextTouchTime;                                            // 0x0004(0x0004)
};

// ScriptStruct UTGame.UTInventoryManager.AmmoStore
// 0x0008
struct FAmmoStore
{
	int                                                Amount;                                                   // 0x0000(0x0004)
	class UClass*                                      WeaponClass;                                              // 0x0004(0x0004)
};

// ScriptStruct UTGame.UTAchievementsBase.AchievementData
// 0x0014
struct FAchievementData
{
	int                                                Id;                                                       // 0x0000(0x0004)
	TEnumAsByte<EAchievementUnlockType>                UnlockType;                                               // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                UnlockCriteria;                                           // 0x0008(0x0004)
	int                                                ProgressCriteria;                                         // 0x000C(0x0004)
	unsigned long                                      bDoUnlock : 1;                                            // 0x0010(0x0004)
	unsigned long                                      bDoProgress : 1;                                          // 0x0010(0x0004)
};

// ScriptStruct UTGame.UTAchievementsBase.AchievementValue
// 0x0008
struct FAchievementValue
{
	int                                                Id;                                                       // 0x0000(0x0004)
	int                                                Value;                                                    // 0x0004(0x0004)
};

// ScriptStruct UTGame.GFxMinimapHud.MessageRow
// 0x0010
struct FMessageRow
{
	class UGFxObject*                                  MC;                                                       // 0x0000(0x0004)
	class UGFxObject*                                  TF;                                                       // 0x0004(0x0004)
	float                                              StartFadeTime;                                            // 0x0008(0x0004)
	int                                                Y;                                                        // 0x000C(0x0004)
};

// ScriptStruct UTGame.UTGFxTweenableMoviePlayer.GFxTween
// 0x0061
struct FGFxTween
{
	class UGFxObject*                                  TargetMC;                                                 // 0x0000(0x0004)
	float                                              TweenTime;                                                // 0x0004(0x0004)
	float                                              Duration;                                                 // 0x0008(0x0004)
	float                                              StartValue;                                               // 0x000C(0x0004)
	float                                              Delta;                                                    // 0x0010(0x0004)
	float                                              DesiredValue;                                             // 0x0014(0x0004)
	struct FString                                     MemberName;                                               // 0x0018(0x000C) (NeedCtorLink)
	struct FString                                     Callback;                                                 // 0x0024(0x000C) (NeedCtorLink)
	struct FASDisplayInfo                              displayInfo;                                              // 0x0030(0x002C)
	unsigned long                                      bFinished : 1;                                            // 0x005C(0x0004)
	TEnumAsByte<ETweenType>                            ThisTweenType;                                            // 0x0060(0x0001)
};

// ScriptStruct UTGame.GFxProjectedUI.ItemData
// 0x0019
struct FItemData
{
	struct FString                                     ItemInfo;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     ItemName;                                                 // 0x000C(0x000C) (NeedCtorLink)
	unsigned char                                      ItemFrame;                                                // 0x0018(0x0001)
};

// ScriptStruct UTGame.GFxUDKFrontEnd.ViewInfo
// 0x0020
struct FViewInfo
{
	struct FName                                       ViewName;                                                 // 0x0000(0x0008)
	struct FString                                     SWFName;                                                  // 0x0008(0x000C) (NeedCtorLink)
	TArray<struct FName>                               DependantViews;                                           // 0x0014(0x000C) (NeedCtorLink)
};

// ScriptStruct UTGame.GFxUDKFrontEnd_FilterDialog.Option
// 0x0024
struct UGFxUDKFrontEnd_FilterDialog_FOption
{
	struct FString                                     OptionName;                                               // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     OptionLabel;                                              // 0x000C(0x000C) (NeedCtorLink)
	TArray<struct FString>                             OptionData;                                               // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct UTGame.GFxUDKFrontEnd_LaunchGame.Option
// 0x0024
struct UGFxUDKFrontEnd_LaunchGame_FOption
{
	struct FString                                     OptionName;                                               // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     OptionLabel;                                              // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     OptionDesc;                                               // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct UTGame.GFxUDKFrontEnd_Multiplayer.Option
// 0x0024
struct UGFxUDKFrontEnd_Multiplayer_FOption
{
	struct FString                                     OptionName;                                               // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     OptionLabel;                                              // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     OptionDesc;                                               // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct UTGame.GFxUDKFrontEnd_MainMenu.Option
// 0x0024
struct UGFxUDKFrontEnd_MainMenu_FOption
{
	struct FString                                     OptionName;                                               // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     OptionLabel;                                              // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     OptionDesc;                                               // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct UTGame.UTDataStore_GameSearchDM.PersistentLocalizedSettingValue
// 0x0008
struct FPersistentLocalizedSettingValue
{
	int                                                SettingId;                                                // 0x0000(0x0004) (Config)
	int                                                ValueId;                                                  // 0x0004(0x0004) (Config)
};

// ScriptStruct UTGame.UTDataStore_GameSearchDM.GameSearchSettingsStorage
// 0x0014
struct FGameSearchSettingsStorage
{
	struct FName                                       GameSearchName;                                           // 0x0000(0x0008) (Config)
	TArray<struct FPersistentLocalizedSettingValue>    StoredValues;                                             // 0x0008(0x000C) (Config, NeedCtorLink)
};

// ScriptStruct UTGame.GFxUILeaderboard.UILeaderboardEntry
// 0x0018
struct FUILeaderboardEntry
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (NeedCtorLink)
	int                                                Score;                                                    // 0x000C(0x0004)
	int                                                Rank;                                                     // 0x0010(0x0004)
	unsigned long                                      bLocalPlayer : 1;                                         // 0x0014(0x0004)
};

// ScriptStruct UTGame.GFxUILeaderboard.ListRow
// 0x0014
struct FListRow
{
	class UGFxObject*                                  MovieClip;                                                // 0x0000(0x0004)
	class UGFxObject*                                  InnerMovieClip;                                           // 0x0004(0x0004)
	class UGFxObject*                                  RankTF;                                                   // 0x0008(0x0004)
	class UGFxObject*                                  ScoreTF;                                                  // 0x000C(0x0004)
	class UGFxObject*                                  NameTF;                                                   // 0x0010(0x0004)
};

// ScriptStruct UTGame.GFxUIScoreboard.ScoreRow
// 0x0014
struct FScoreRow
{
	class UGFxObject*                                  MovieClip;                                                // 0x0000(0x0004)
	class UGFxObject*                                  InnerMovieClip;                                           // 0x0004(0x0004)
	class UGFxObject*                                  DeathsTF;                                                 // 0x0008(0x0004)
	class UGFxObject*                                  ScoreTF;                                                  // 0x000C(0x0004)
	class UGFxObject*                                  NameTF;                                                   // 0x0010(0x0004)
};

// ScriptStruct UTGame.GFxUIScoreboard.ScoreEntry
// 0x0018
struct FScoreEntry
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (NeedCtorLink)
	int                                                PlayerScore;                                              // 0x000C(0x0004)
	int                                                PlayerDeaths;                                             // 0x0010(0x0004)
	unsigned long                                      bHasFlag : 1;                                             // 0x0014(0x0004)
};

// ScriptStruct UTGame.GFxUIScoreboard.ScoreboardState
// 0x0024
struct FScoreboardState
{
	int                                                RemainingTime;                                            // 0x0000(0x0004)
	int                                                RedScore;                                                 // 0x0004(0x0004)
	int                                                BlueScore;                                                // 0x0008(0x0004)
	struct FString                                     PlayerName;                                               // 0x000C(0x000C) (NeedCtorLink)
	unsigned char                                      PlayerPlace;                                              // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              PlayerScore;                                              // 0x001C(0x0004)
	int                                                PlayerDeaths;                                             // 0x0020(0x0004)
};

// ScriptStruct UTGame.UTGib.StaticMeshDatum
// 0x0014
struct FStaticMeshDatum
{
	class UStaticMesh*                                 TheStaticMesh;                                            // 0x0000(0x0004)
	class USkeletalMesh*                               TheSkelMesh;                                              // 0x0004(0x0004)
	class UPhysicsAsset*                               ThePhysAsset;                                             // 0x0008(0x0004)
	float                                              DrawScale;                                                // 0x000C(0x0004)
	unsigned long                                      bUseSecondaryGibMeshMITV : 1;                             // 0x0010(0x0004)
};

// ScriptStruct UTGame.UTConsolePlayerController.ProfileSettingToUE3BindingDatum
// 0x0010
struct FProfileSettingToUE3BindingDatum
{
	struct FName                                       ProfileSettingName;                                       // 0x0000(0x0008)
	struct FName                                       UE3BindingName;                                           // 0x0008(0x0008)
};

// ScriptStruct UTGame.UTPawnSoundGroup.FootstepSoundInfo
// 0x000C
struct UUTPawnSoundGroup_FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                             // 0x0000(0x0008)
	class USoundCue*                                   Sound;                                                    // 0x0008(0x0004)
};

// ScriptStruct UTGame.UTAttachment_LinkGun.LinkConnection
// 0x0008
struct FLinkConnection
{
	class AUTWeaponAttachment*                         TargetAttachment;                                         // 0x0000(0x0004)
	class UParticleSystemComponent*                    Effect;                                                   // 0x0004(0x0004) (ExportObject, Component, EditInline)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
