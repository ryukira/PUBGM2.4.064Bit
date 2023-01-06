// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SettingConfig.SettingConfig_C.ConditionSetFireGyroData
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent)

void USettingConfig_C::ConditionSetFireGyroData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SettingConfig.SettingConfig_C.ConditionSetFireGyroData");

	USettingConfig_C_ConditionSetFireGyroData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SettingConfig.SettingConfig_C.Init
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, NetServer, HasOutParms, NetClient, BlueprintPure)

void USettingConfig_C::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SettingConfig.SettingConfig_C.Init");

	USettingConfig_C_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

