// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.GetWrapperClass
// (NetRequest, Event, NetResponse, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UClass*                  WrapperClass                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVirtualBattleItemHandle_AvatarBP_C::GetWrapperClass(class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.GetWrapperClass");

	UVirtualBattleItemHandle_AvatarBP_C_GetWrapperClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}


// Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.Constuct
// (NetReliable, Exec, Event, Static, Public, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FItemDefineID*          InDefineID                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UVirtualBattleItemHandle_AvatarBP_C::STATIC_Constuct(struct FItemDefineID* InDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.Constuct");

	UVirtualBattleItemHandle_AvatarBP_C_Constuct_Params params;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP
// (NetRequest, Event, NetResponse, NetMulticast, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVirtualBattleItemHandle_AvatarBP_C::ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP");

	UVirtualBattleItemHandle_AvatarBP_C_ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

