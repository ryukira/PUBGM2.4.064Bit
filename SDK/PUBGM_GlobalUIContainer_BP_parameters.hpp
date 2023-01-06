#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetInternal
struct UGlobalUIContainer_BP_C_AddWidgetInternal_Params
{
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.RemoveWidgetInternal
struct UGlobalUIContainer_BP_C_RemoveWidgetInternal_Params
{
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetWithZOrderInternal
struct UGlobalUIContainer_BP_C_AddWidgetWithZOrderInternal_Params
{
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ZOrder;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.ExecuteUbergraph_GlobalUIContainer_BP
struct UGlobalUIContainer_BP_C_ExecuteUbergraph_GlobalUIContainer_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

