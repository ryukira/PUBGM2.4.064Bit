// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.ExtractItemData
// (Native, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UVirtualBackpackEmoteHandleBase_BP_C::STATIC_ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.ExtractItemData");

	UVirtualBackpackEmoteHandleBase_BP_C_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandleDisuse
// (Native, NetResponse, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVirtualBackpackEmoteHandleBase_BP_C::HandleDisuse(EBattleItemDisuseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandleDisuse");

	UVirtualBackpackEmoteHandleBase_BP_C_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandleUse
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemUseReason*          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVirtualBackpackEmoteHandleBase_BP_C::STATIC_HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandleUse");

	UVirtualBackpackEmoteHandleBase_BP_C_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandlePickup
// (NetRequest, Exec, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo*  PickupInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// EBattleItemPickupReason*       Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVirtualBackpackEmoteHandleBase_BP_C::HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandlePickup");

	UVirtualBackpackEmoteHandleBase_BP_C_HandlePickup_Params params;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemContainer != nullptr)
		*ItemContainer = params.ItemContainer;

	return params.ReturnValue;
}


}

