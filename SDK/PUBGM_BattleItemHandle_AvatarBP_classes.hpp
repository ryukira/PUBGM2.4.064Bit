#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C
// 0x0092 (0x0B22 - 0x0A90)
class UBattleItemHandle_AvatarBP_C : public UBackpackAvatarHandle
{
public:
	class ASTExtraPlayerController*                    OwningPlayerController;                                   // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBackpackComponent*                          OwningBackpackComponent;                                  // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AA8(0x0008) MISSED OFFSET
	struct FTransform                                  SourceWrapperTrans;                                       // 0x0AB0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  WrapperPutdownTrans;                                      // 0x0AE0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnumAvatarSlotNameConfig>              SlotNameConfig;                                           // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnumAvatarForceGender>                 ForceGender;                                              // 0x0B21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C");
		return pStaticClass;
	}


	bool STATIC_BPNeedCheckCapacityInHandleDisuse(EBattleItemDisuseReason* Reason);
	void STATIC_GetWrapperClass(class UClass** WrapperClass);
	struct FBattleItemData ExtractItemData();
	void LocalHandleDisuse();
	class UWorld* GetWorldInternal();
	void SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool STATIC_HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	bool STATIC_HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
};


}

