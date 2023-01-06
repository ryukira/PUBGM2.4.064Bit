// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptationByOffset
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::STATIC_SetAdaptationByOffset(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptationByOffset");

	UUICommonFunctionLibrary_C_SetAdaptationByOffset_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_Lobby
// (Exec, Event, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::STATIC_SetAdaptation_Lobby(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_Lobby");

	UUICommonFunctionLibrary_C_SetAdaptation_Lobby_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.FormatSecondsToString
// (NetReliable, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Ret                            (Parm, OutParm)

void UUICommonFunctionLibrary_C::STATIC_FormatSecondsToString(int Seconds, class UObject* __WorldContext, struct FText* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.FormatSecondsToString");

	UUICommonFunctionLibrary_C_FormatSecondsToString_Params params;
	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation
// (Native, Event, Static, NetMulticast, Private, NetServer, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUICommonFunctionLibrary_C::STATIC_SetAdaptation(class UWidget* Widget, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation");

	UUICommonFunctionLibrary_C_SetAdaptation_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

