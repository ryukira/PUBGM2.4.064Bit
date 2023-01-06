// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Editor_login.Editor_login_C.SetFpsByIndex
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEditor_login_C::STATIC_SetFpsByIndex(int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.SetFpsByIndex");

	AEditor_login_C_SetFpsByIndex_Params params;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_2
// (NetReliable, NetRequest, Native, NetResponse, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEditor_login_C::STATIC_InpActEvt_Android_Back_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_2");

	AEditor_login_C_InpActEvt_Android_Back_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.ReceiveBeginPlay
// ()

void AEditor_login_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.ReceiveBeginPlay");

	AEditor_login_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.ExecuteUbergraph_Editor_login
// (NetReliable, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, NetClient)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEditor_login_C::STATIC_ExecuteUbergraph_Editor_login(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.ExecuteUbergraph_Editor_login");

	AEditor_login_C_ExecuteUbergraph_Editor_login_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

