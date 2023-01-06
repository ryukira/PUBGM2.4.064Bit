#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_global.bp_global_C
// 0x00F8 (0x0520 - 0x0428)
class Abp_global_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_ShouldRequestChatPrivacy;                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                BP_played_cg;                                             // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_StartUpType;                                           // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IOS_CHECK;                                             // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_EUChatRestriction;                                     // 0x043D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsAppleAudit;                                          // 0x043E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AdvertiseNeedShowtask;                          // 0x043F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_BUTTON_TYPE;                                        // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CHECK_MENU_OPEN_RESULT;                                // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	int                                                BP_Platform;                                              // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatBan;                                               // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GameGender;                                            // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CHECK_MENU_OPEN_ID;                                    // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_PreviewItemId;                                  // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_BackpackAvatarPreviewID;                        // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Cur_Lobby_Skin_Id;                              // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	struct FString                                     BP_Global_SelfUID;                                        // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_NATION_SWITCH                    BP_STRUCT_NATION_SWITCH;                                  // 0x0478(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FString                                     BP_GEM_REPORT_PARA1;                                      // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Global_IsAnniversaryNeedShow;                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                BP_BA_REASON;                                             // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IS_EXTERNAL_CHANNEL;                                   // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FString                                     BP_Global_TouchTitleString;                               // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GLOBAL_USE_ITEM;                                       // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Share_Platform;                                        // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	struct FString                                     BP_GEM_REPORT_SUBEVENT;                                   // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GEM_REPORT_PARA2;                                      // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Global_IsChristmasNeedShow;                            // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_AndroidKey_IsValid;                             // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x04EA(0x0006) MISSED OFFSET
	struct FString                                     BP_Global_Url;                                            // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalSwitchCameraIndex;                               // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurSceneCameraIndex;                                   // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HadPlayAnimation;                                      // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0509(0x0003) MISSED OFFSET
	int                                                BP_Global_AvatarPreviewTarget;                            // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_IsResidentEvilNeedShow;                         // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_global.bp_global_C");
		return pStaticClass;
	}


	void EventGotoItemPreviewPress_NoFetch();
	void EventGotoItemPreviewPress();
	void EventClickLobbyEventGemReport_NoFetch();
	void EventClickLobbyEventGemReport();
	void EventSwitchLobbySkinCompleted_NoFetch();
	void EventSwitchLobbySkinCompleted();
	void EventShowPlatIconTips_NoFetch();
	void EventShowPlatIconTips();
	void EventSlapJumpUrl_NoFetch();
	void EventSlapJumpUrl();
	void EventAndroidQuitGame_NoFetch();
	void EventAndroidQuitGame();
	void EventCheckEUChatRestriction_NoFetch();
	void EventCheckEUChatRestriction();
	void EventCheckIfMenuOpen_NoFetch();
	void EventCheckIfMenuOpen();
	void EventJumpUrl_NoFetch();
	void EventJumpUrl();
	void EventShowPlatQQStartup_NoFetch();
	void EventShowPlatQQStartup();
	void EventGotoItemPreviewClick_NoFetch();
	void EventGotoItemPreviewClick();
	void EventFetchNationSwitch_NoFetch();
	void EventFetchNationSwitch();
	void EventGlobalUseItem_NoFetch();
	void EventGlobalUseItem();
	void EventShowPlatWXStartup_NoFetch();
	void EventShowPlatWXStartup();
	void EventSendBAReport_NoFetch();
	void EventSendBAReport();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventGlobalCloseItemTips_NoFetch();
	void EventGlobalCloseItemTips();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventSendClickGemReport_NoFetch();
	void EventSendClickGemReport();
	void UserConstructionScript();
};


}

