// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C.WardrobePutDownEvent__DelegateSignature
// (Native, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// int                            PutonID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIEventDispatcher_BP_C::WardrobePutDownEvent__DelegateSignature(int PutonID, int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C.WardrobePutDownEvent__DelegateSignature");

	UGlobalUIEventDispatcher_BP_C_WardrobePutDownEvent__DelegateSignature_Params params;
	params.PutonID = PutonID;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

