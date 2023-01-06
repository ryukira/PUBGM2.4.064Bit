#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C
// 0x0268 (0x0F30 - 0x0CC8)
class UBackpackBlueprintUtils_BP_C : public UBackpackBlueprintUtils
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC8(0x0008) (Transient, DuplicateTransient)
	TArray<struct FBattleItemAdditionalData>           EmptyAdditionalData;                                      // 0x0CD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FItemAssociation>        EmptyAssociationMap;                                      // 0x0CE0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FItemAssociation>                    EmptyAssociationArray;                                    // 0x0D30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, EAvatarSlotType>                         EquipmentID2SlotID_Map;                                   // 0x0D40(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EquipmentBagID2Level_Map;                                 // 0x0D90(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EquipmentHelmetID2Level_Map;                              // 0x0DE0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EquipmentArmorID2Level_Map;                               // 0x0E30(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        GhillieSuitItem;                                          // 0x0E80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     GrenadeTypeToPriority;                                    // 0x0E90(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     CacheItemId2BagLevelMap;                                  // 0x0EE0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C");
		return pStaticClass;
	}


	int STATIC_GetEquipmentArmorLevel(int* ItemID);
	int GetEquipmentHelmetLevel(int* ItemID);
	bool IsForceLoadLobbyHandle(struct FItemDefineID* InItemID);
	void IsSinkMode(bool* Out);
	int STATIC_GetCustomPickupItemCountByDefineID(class UBackpackComponent** BackpackComp, struct FItemDefineID* DefineID, struct FJudgePickupUsefulItem* JudgePickUseful);
	class UClass* GetBattleItemHandleClass(struct FItemDefineID* DefineID);
	bool CanNotAutoSwitchToGrenade(int* InGrenadeID);
	void STATIC_PreModifyPickupSettingData(class USettingConfig_C* SettingConfig);
	bool IsConsumableMissionItemType(int* ItemID);
	int GetGrenadePriorityByType(int* InGrenadeType);
	bool IsIceDrinkEmoteIDInBackpack(int* InItemID, int* InEmoteID);
	bool IsEquipmentItem(int* ItemID);
	class UBattleItemHandleBase* STATIC_CreateVirtualItemHandle(class UObject** Outer, struct FItemDefineID* DefineID);
	int GetPendantIDByWeaponID(int* WeaponID);
	int GetWeaponSkinMappingID(int* InWeaponSkinID);
	bool GetItemOperationSoundAndBank(int* ItemSoundID, EBattleItemOperationType* ItemOperation, struct FString* OutBankName, struct FString* OutSoundName);
	bool IsGlideItemType(int* ItemID);
	bool IsGhillieSuitItemType(int* ItemID);
	int GetEquipmentBagLevel(int* ItemID);
	int GetEquipmentLevel(int* ItemID);
	bool Is3BackpackID(int* ID);
	bool STATIC_IsInPveMode();
	void STATIC_IsPVEMode(bool* Out);
	void GetEquipmentSkinIDByAvatar(int InItemID, const struct FGameModePlayerEquipmentAvatar& EquipmentAvatar, int* SkinItemID);
	void ModifySetting();
	void STATIC_ModifyPickupSetting();
	void ModifyBulletAndMedician();
	int GetBPIDByResID(int* resID);
	void AddToWeaponAttachPos(int attachID, EWeaponAttachmentSocketType socket);
	void STATIC_InitItemTable();
	struct FString GetBattleItemHandlePath(bool* bLobby, bool* bForceLobby, struct FItemDefineID* DefineID);
	struct FString GetRawBattleTextByRawTextID(int* ID);
	struct FString GetRawBattleTextByType(EBattleTextType* Type, int* InSubType);
	int GetItemSubTypeID(int* SpecificID);
	struct FBattleWeaponItemDisplayData GetBattleWeaponItemDisplayDataByDefineID(struct FItemDefineID* DefineID);
	void GenerateItemDefineIDByItemTableID(int* ItemTableID, int* Type, int* TypeSpecificID);
	bool IsVirtualItemData(struct FBattleItemData* ItemData);
	class UBattleItemHandleBase* STATIC_GetCharacterVirtualItemHandleInBackpack(class UBackpackComponent** BackpackComp);
	void STATIC_CreateBattleItemHandle_Character(class UObject* Outer, class UBattleItemHandleBase** BattleItemHandle);
	void CreateBattleItemHandle_Default(int Type, int ID, class UObject* Outer, bool bLobby, class UBattleItemHandleBase** BattleItemHandle);
	void STATIC_GetBattleItemFeatureData(const struct FItemDefineID& DefineID, struct FBattleItemFeatureData* FeatureData);
	struct FBattleItemFeatureData STATIC_GetBattleItemFeatureDataByDefineID(struct FItemDefineID* DefineID);
	class UBattleItemHandleBase* STATIC_CreateBattleItemHandle(class UObject** Outer, bool* bLobby, struct FItemDefineID* DefineID);
	struct FBattleItemData STATIC_GetCharacterVirtualItemInBackpack(class UBackpackComponent** BackpackComp);
	struct FBattleItemData ConstructBattleItemDataByItemTableID(int* ItemTableID);
	struct FBattleItemData STATIC_ConstructBattleItemDataByDefineID(struct FItemDefineID* DefineID);
	void STATIC_AddCharacterVirtualItemToBackpack(class UBackpackComponent** BackpackComp, class ASTExtraBaseCharacter** Character);
	void InitialItemTable();
	void ExecuteUbergraph_BackpackBlueprintUtils_BP(int EntryPoint);
};


}

