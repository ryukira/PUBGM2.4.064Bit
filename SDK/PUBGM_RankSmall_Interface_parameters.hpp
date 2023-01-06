#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RankSmall_Interface.RankSmall_Interface_C.SetRankText
struct URankSmall_Interface_C_SetRankText_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 ShadowColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateFontInfo                              FontInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RankSmall_Interface.RankSmall_Interface_C.SetRankIntegral
struct URankSmall_Interface_C_SetRankIntegral_Params
{
	struct FBP_STRUCT_RankIntegralLevel_type           RankIntegralLevel_Info;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isStarOpen;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

