#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginTestEvent
struct Ubp_pluginBPLibrary_bp_pluginTestEvent_Params
{
	struct FString                                     jsonEventCmd;                                             // (Parm, ZeroConstructor)
};

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent
struct Ubp_pluginBPLibrary_bp_pluginSendEvent_Params
{
	struct FString                                     jsonEventCmd;                                             // (Parm, ZeroConstructor)
};

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction
struct Ubp_pluginBPLibrary_bp_pluginLaunchMeemoFunction_Params
{
	struct FString                                     Param;                                                    // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

