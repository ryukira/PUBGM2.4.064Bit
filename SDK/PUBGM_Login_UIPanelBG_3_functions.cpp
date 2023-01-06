// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Login_UIPanelBG_3.Login_UIPanelBG_2_C.Construct
// ()

void ULogin_UIPanelBG_2_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_UIPanelBG_3.Login_UIPanelBG_2_C.Construct");

	ULogin_UIPanelBG_2_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_UIPanelBG_3.Login_UIPanelBG_2_C.ExecuteUbergraph_Login_UIPanelBG_3
// (NetReliable, Public, Delegate, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULogin_UIPanelBG_2_C::ExecuteUbergraph_Login_UIPanelBG_3(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_UIPanelBG_3.Login_UIPanelBG_2_C.ExecuteUbergraph_Login_UIPanelBG_3");

	ULogin_UIPanelBG_2_C_ExecuteUbergraph_Login_UIPanelBG_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

