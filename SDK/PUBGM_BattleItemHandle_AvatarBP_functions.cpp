// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.BPNeedCheckCapacityInHandleDisuse
// (Event, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_AvatarBP_C::STATIC_BPNeedCheckCapacityInHandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.BPNeedCheckCapacityInHandleDisuse");

	UBattleItemHandle_AvatarBP_C_BPNeedCheckCapacityInHandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWrapperClass
// (NetReliable, Event, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class UClass*                  WrapperClass                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_AvatarBP_C::STATIC_GetWrapperClass(class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWrapperClass");

	UBattleItemHandle_AvatarBP_C_GetWrapperClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}


// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.ExtractItemData
// (NetReliable, Event, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBattleItemHandle_AvatarBP_C::ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.ExtractItemData");

	UBattleItemHandle_AvatarBP_C_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.LocalHandleDisuse
// (Exec, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void UBattleItemHandle_AvatarBP_C::LocalHandleDisuse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.LocalHandleDisuse");

	UBattleItemHandle_AvatarBP_C_LocalHandleDisuse_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWorldInternal
// (Event, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandle_AvatarBP_C::GetWorldInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.GetWorldInternal");

	UBattleItemHandle_AvatarBP_C_GetWorldInternal_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.SpawnWrapperOnGround
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UClass*                  WrapperClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseRandomLoc                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleItemHandle_AvatarBP_C::SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.SpawnWrapperOnGround");

	UBattleItemHandle_AvatarBP_C_SpawnWrapperOnGround_Params params;
	params.WrapperClass = WrapperClass;
	params.bUseRandomLoc = bUseRandomLoc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDisuse
// (NetReliable, Exec, Native, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_AvatarBP_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDisuse");

	UBattleItemHandle_AvatarBP_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDrop
// (NetReliable, Exec, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason*         Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_AvatarBP_C::HandleDrop(int* InCount, EBattleItemDropReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleDrop");

	UBattleItemHandle_AvatarBP_C_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandlePickup
// (NetReliable, Native, Event, Static, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  PickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_AvatarBP_C::STATIC_HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandlePickup");

	UBattleItemHandle_AvatarBP_C_HandlePickup_Params params;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}


// Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleUse
// (NetRequest, Native, Event, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandle_AvatarBP_C::STATIC_HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C.HandleUse");

	UBattleItemHandle_AvatarBP_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

