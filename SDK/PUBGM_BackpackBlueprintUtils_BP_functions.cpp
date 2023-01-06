// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentArmorLevel
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::STATIC_GetEquipmentArmorLevel(int* ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentArmorLevel");

	UBackpackBlueprintUtils_BP_C_GetEquipmentArmorLevel_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentHelmetLevel
// (Net, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::GetEquipmentHelmetLevel(int* ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentHelmetLevel");

	UBackpackBlueprintUtils_BP_C_GetEquipmentHelmetLevel_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsForceLoadLobbyHandle
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::IsForceLoadLobbyHandle(struct FItemDefineID* InItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsForceLoadLobbyHandle");

	UBackpackBlueprintUtils_BP_C_IsForceLoadLobbyHandle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InItemID != nullptr)
		*InItemID = params.InItemID;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsSinkMode
// (NetRequest, Native, Event, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::IsSinkMode(bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsSinkMode");

	UBackpackBlueprintUtils_BP_C_IsSinkMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCustomPickupItemCountByDefineID
// (Native, NetResponse, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UBackpackComponent**     BackpackComp                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FJudgePickupUsefulItem  JudgePickUseful                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::STATIC_GetCustomPickupItemCountByDefineID(class UBackpackComponent** BackpackComp, struct FItemDefineID* DefineID, struct FJudgePickupUsefulItem* JudgePickUseful)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCustomPickupItemCountByDefineID");

	UBackpackBlueprintUtils_BP_C_GetCustomPickupItemCountByDefineID_Params params;
	params.BackpackComp = BackpackComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;
	if (JudgePickUseful != nullptr)
		*JudgePickUseful = params.JudgePickUseful;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandleClass
// (Native, NetResponse, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBackpackBlueprintUtils_BP_C::GetBattleItemHandleClass(struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandleClass");

	UBackpackBlueprintUtils_BP_C_GetBattleItemHandleClass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CanNotAutoSwitchToGrenade
// (Net, NetReliable, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           InGrenadeID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::CanNotAutoSwitchToGrenade(int* InGrenadeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CanNotAutoSwitchToGrenade");

	UBackpackBlueprintUtils_BP_C_CanNotAutoSwitchToGrenade_Params params;
	params.InGrenadeID = InGrenadeID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.PreModifyPickupSettingData
// (Native, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class USettingConfig_C*        SettingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::STATIC_PreModifyPickupSettingData(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.PreModifyPickupSettingData");

	UBackpackBlueprintUtils_BP_C_PreModifyPickupSettingData_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsConsumableMissionItemType
// (NetRequest, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::IsConsumableMissionItemType(int* ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsConsumableMissionItemType");

	UBackpackBlueprintUtils_BP_C_IsConsumableMissionItemType_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetGrenadePriorityByType
// (NetReliable, NetRequest, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           InGrenadeType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::GetGrenadePriorityByType(int* InGrenadeType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetGrenadePriorityByType");

	UBackpackBlueprintUtils_BP_C_GetGrenadePriorityByType_Params params;
	params.InGrenadeType = InGrenadeType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsIceDrinkEmoteIDInBackpack
// (Net, NetReliable, Exec, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InEmoteID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::IsIceDrinkEmoteIDInBackpack(int* InItemID, int* InEmoteID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsIceDrinkEmoteIDInBackpack");

	UBackpackBlueprintUtils_BP_C_IsIceDrinkEmoteIDInBackpack_Params params;
	params.InItemID = InItemID;
	params.InEmoteID = InEmoteID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsEquipmentItem
// (Net, NetRequest, Exec, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::IsEquipmentItem(int* ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsEquipmentItem");

	UBackpackBlueprintUtils_BP_C_IsEquipmentItem_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateVirtualItemHandle
// (Exec, Native, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject**                Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackBlueprintUtils_BP_C::STATIC_CreateVirtualItemHandle(class UObject** Outer, struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateVirtualItemHandle");

	UBackpackBlueprintUtils_BP_C_CreateVirtualItemHandle_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetPendantIDByWeaponID
// (Net, NetReliable, NetRequest, Exec, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::GetPendantIDByWeaponID(int* WeaponID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetPendantIDByWeaponID");

	UBackpackBlueprintUtils_BP_C_GetPendantIDByWeaponID_Params params;
	params.WeaponID = WeaponID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetWeaponSkinMappingID
// (Net, Native, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           InWeaponSkinID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::GetWeaponSkinMappingID(int* InWeaponSkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetWeaponSkinMappingID");

	UBackpackBlueprintUtils_BP_C_GetWeaponSkinMappingID_Params params;
	params.InWeaponSkinID = InWeaponSkinID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemOperationSoundAndBank
// (NetReliable, Native, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemSoundID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemOperationType*      ItemOperation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutBankName                    (Parm, OutParm, ZeroConstructor)
// struct FString                 OutSoundName                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::GetItemOperationSoundAndBank(int* ItemSoundID, EBattleItemOperationType* ItemOperation, struct FString* OutBankName, struct FString* OutSoundName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemOperationSoundAndBank");

	UBackpackBlueprintUtils_BP_C_GetItemOperationSoundAndBank_Params params;
	params.ItemSoundID = ItemSoundID;
	params.ItemOperation = ItemOperation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBankName != nullptr)
		*OutBankName = params.OutBankName;
	if (OutSoundName != nullptr)
		*OutSoundName = params.OutSoundName;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsGlideItemType
// (NetRequest, Native, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::IsGlideItemType(int* ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsGlideItemType");

	UBackpackBlueprintUtils_BP_C_IsGlideItemType_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsGhillieSuitItemType
// (NetReliable, NetRequest, Native, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::IsGhillieSuitItemType(int* ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsGhillieSuitItemType");

	UBackpackBlueprintUtils_BP_C_IsGhillieSuitItemType_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentBagLevel
// (Exec, Native, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::GetEquipmentBagLevel(int* ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentBagLevel");

	UBackpackBlueprintUtils_BP_C_GetEquipmentBagLevel_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentLevel
// (Net, Exec, Native, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::GetEquipmentLevel(int* ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentLevel");

	UBackpackBlueprintUtils_BP_C_GetEquipmentLevel_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.Is3BackpackID
// (Net, NetReliable, Exec, Native, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::Is3BackpackID(int* ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.Is3BackpackID");

	UBackpackBlueprintUtils_BP_C_Is3BackpackID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsInPveMode
// (NetReliable, Exec, Native, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::STATIC_IsInPveMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsInPveMode");

	UBackpackBlueprintUtils_BP_C_IsInPveMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsPVEMode
// (NetRequest, Exec, Native, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::STATIC_IsPVEMode(bool* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsPVEMode");

	UBackpackBlueprintUtils_BP_C_IsPVEMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentSkinIDByAvatar
// (Net, NetRequest, Exec, Native, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            InItemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameModePlayerEquipmentAvatar EquipmentAvatar                (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SkinItemID                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::GetEquipmentSkinIDByAvatar(int InItemID, const struct FGameModePlayerEquipmentAvatar& EquipmentAvatar, int* SkinItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetEquipmentSkinIDByAvatar");

	UBackpackBlueprintUtils_BP_C_GetEquipmentSkinIDByAvatar_Params params;
	params.InItemID = InItemID;
	params.EquipmentAvatar = EquipmentAvatar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SkinItemID != nullptr)
		*SkinItemID = params.SkinItemID;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifySetting
// ()

void UBackpackBlueprintUtils_BP_C::ModifySetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifySetting");

	UBackpackBlueprintUtils_BP_C_ModifySetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifyPickupSetting
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)

void UBackpackBlueprintUtils_BP_C::STATIC_ModifyPickupSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifyPickupSetting");

	UBackpackBlueprintUtils_BP_C_ModifyPickupSetting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifyBulletAndMedician
// (NetReliable, Event, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void UBackpackBlueprintUtils_BP_C::ModifyBulletAndMedician()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ModifyBulletAndMedician");

	UBackpackBlueprintUtils_BP_C_ModifyBulletAndMedician_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBPIDByResID
// (Event, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::GetBPIDByResID(int* resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBPIDByResID");

	UBackpackBlueprintUtils_BP_C_GetBPIDByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddToWeaponAttachPos
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            attachID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponAttachmentSocketType    socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::AddToWeaponAttachPos(int attachID, EWeaponAttachmentSocketType socket)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddToWeaponAttachPos");

	UBackpackBlueprintUtils_BP_C_AddToWeaponAttachPos_Params params;
	params.attachID = attachID;
	params.socket = socket;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitItemTable
// (Event, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)

void UBackpackBlueprintUtils_BP_C::STATIC_InitItemTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitItemTable");

	UBackpackBlueprintUtils_BP_C_InitItemTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandlePath
// (NetRequest, Exec, Event, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bLobby                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceLobby                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBackpackBlueprintUtils_BP_C::GetBattleItemHandlePath(bool* bLobby, bool* bForceLobby, struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemHandlePath");

	UBackpackBlueprintUtils_BP_C_GetBattleItemHandlePath_Params params;
	params.bLobby = bLobby;
	params.bForceLobby = bForceLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByRawTextID
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBackpackBlueprintUtils_BP_C::GetRawBattleTextByRawTextID(int* ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByRawTextID");

	UBackpackBlueprintUtils_BP_C_GetRawBattleTextByRawTextID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByType
// (Native, Event, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// EBattleTextType*               Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InSubType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBackpackBlueprintUtils_BP_C::GetRawBattleTextByType(EBattleTextType* Type, int* InSubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetRawBattleTextByType");

	UBackpackBlueprintUtils_BP_C_GetRawBattleTextByType_Params params;
	params.Type = Type;
	params.InSubType = InSubType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemSubTypeID
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           SpecificID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBackpackBlueprintUtils_BP_C::GetItemSubTypeID(int* SpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetItemSubTypeID");

	UBackpackBlueprintUtils_BP_C_GetItemSubTypeID_Params params;
	params.SpecificID = SpecificID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleWeaponItemDisplayDataByDefineID
// (NetReliable, Native, Event, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBattleWeaponItemDisplayData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleWeaponItemDisplayData UBackpackBlueprintUtils_BP_C::GetBattleWeaponItemDisplayDataByDefineID(struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleWeaponItemDisplayDataByDefineID");

	UBackpackBlueprintUtils_BP_C_GetBattleWeaponItemDisplayDataByDefineID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GenerateItemDefineIDByItemTableID
// (Net, Exec, Native, NetResponse, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemTableID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TypeSpecificID                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::GenerateItemDefineIDByItemTableID(int* ItemTableID, int* Type, int* TypeSpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GenerateItemDefineIDByItemTableID");

	UBackpackBlueprintUtils_BP_C_GenerateItemDefineIDByItemTableID_Params params;
	params.ItemTableID = ItemTableID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (TypeSpecificID != nullptr)
		*TypeSpecificID = params.TypeSpecificID;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsVirtualItemData
// (NetReliable, NetRequest, Native, Event, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FBattleItemData         ItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackBlueprintUtils_BP_C::IsVirtualItemData(struct FBattleItemData* ItemData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.IsVirtualItemData");

	UBackpackBlueprintUtils_BP_C_IsVirtualItemData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemData != nullptr)
		*ItemData = params.ItemData;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemHandleInBackpack
// (NetReliable, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UBackpackComponent**     BackpackComp                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackBlueprintUtils_BP_C::STATIC_GetCharacterVirtualItemHandleInBackpack(class UBackpackComponent** BackpackComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemHandleInBackpack");

	UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemHandleInBackpack_Params params;
	params.BackpackComp = BackpackComp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Character
// (NetRequest, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UObject*                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   BattleItemHandle               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::STATIC_CreateBattleItemHandle_Character(class UObject* Outer, class UBattleItemHandleBase** BattleItemHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Character");

	UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Character_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BattleItemHandle != nullptr)
		*BattleItemHandle = params.BattleItemHandle;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Default
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLobby                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   BattleItemHandle               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::CreateBattleItemHandle_Default(int Type, int ID, class UObject* Outer, bool bLobby, class UBattleItemHandleBase** BattleItemHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle_Default");

	UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Default_Params params;
	params.Type = Type;
	params.ID = ID;
	params.Outer = Outer;
	params.bLobby = bLobby;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BattleItemHandle != nullptr)
		*BattleItemHandle = params.BattleItemHandle;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureData
// (NetReliable, NetRequest, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBattleItemFeatureData  FeatureData                    (Parm, OutParm)

void UBackpackBlueprintUtils_BP_C::STATIC_GetBattleItemFeatureData(const struct FItemDefineID& DefineID, struct FBattleItemFeatureData* FeatureData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureData");

	UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureData_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FeatureData != nullptr)
		*FeatureData = params.FeatureData;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureDataByDefineID
// (Exec, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBattleItemFeatureData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemFeatureData UBackpackBlueprintUtils_BP_C::STATIC_GetBattleItemFeatureDataByDefineID(struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetBattleItemFeatureDataByDefineID");

	UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureDataByDefineID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle
// (NetReliable, Exec, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject**                Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLobby                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBattleItemHandleBase*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBattleItemHandleBase* UBackpackBlueprintUtils_BP_C::STATIC_CreateBattleItemHandle(class UObject** Outer, bool* bLobby, struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle");

	UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Params params;
	params.Outer = Outer;
	params.bLobby = bLobby;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemInBackpack
// (NetRequest, Exec, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UBackpackComponent**     BackpackComp                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackBlueprintUtils_BP_C::STATIC_GetCharacterVirtualItemInBackpack(class UBackpackComponent** BackpackComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.GetCharacterVirtualItemInBackpack");

	UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemInBackpack_Params params;
	params.BackpackComp = BackpackComp;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByItemTableID
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           ItemTableID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackBlueprintUtils_BP_C::ConstructBattleItemDataByItemTableID(int* ItemTableID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByItemTableID");

	UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByItemTableID_Params params;
	params.ItemTableID = ItemTableID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByDefineID
// (NetReliable, NetRequest, Exec, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID           DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBackpackBlueprintUtils_BP_C::STATIC_ConstructBattleItemDataByDefineID(struct FItemDefineID* DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ConstructBattleItemDataByDefineID");

	UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByDefineID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefineID != nullptr)
		*DefineID = params.DefineID;

	return params.ReturnValue;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddCharacterVirtualItemToBackpack
// (Native, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UBackpackComponent**     BackpackComp                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter**  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::STATIC_AddCharacterVirtualItemToBackpack(class UBackpackComponent** BackpackComp, class ASTExtraBaseCharacter** Character)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.AddCharacterVirtualItemToBackpack");

	UBackpackBlueprintUtils_BP_C_AddCharacterVirtualItemToBackpack_Params params;
	params.BackpackComp = BackpackComp;
	params.Character = Character;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitialItemTable
// ()

void UBackpackBlueprintUtils_BP_C::InitialItemTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.InitialItemTable");

	UBackpackBlueprintUtils_BP_C_InitialItemTable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ExecuteUbergraph_BackpackBlueprintUtils_BP
// (Event, NetResponse, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBackpackBlueprintUtils_BP_C::ExecuteUbergraph_BackpackBlueprintUtils_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.ExecuteUbergraph_BackpackBlueprintUtils_BP");

	UBackpackBlueprintUtils_BP_C_ExecuteUbergraph_BackpackBlueprintUtils_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

