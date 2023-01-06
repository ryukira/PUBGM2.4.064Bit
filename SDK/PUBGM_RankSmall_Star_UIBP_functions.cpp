// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RankSmall_Star_UIBP.RankSmall_Star_UIBP_C.SetRankIntegral
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient)
// Parameters:
// struct FBP_STRUCT_RankIntegralLevel_type RankIntegralLevel_Info         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isStarOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankSmall_Star_UIBP_C::SetRankIntegral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevel_Info, bool isStarOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Star_UIBP.RankSmall_Star_UIBP_C.SetRankIntegral");

	URankSmall_Star_UIBP_C_SetRankIntegral_Params params;
	params.RankIntegralLevel_Info = RankIntegralLevel_Info;
	params.isStarOpen = isStarOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RankSmall_Star_UIBP.RankSmall_Star_UIBP_C.SetRankText
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             ShadowColor                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateFontInfo          FontInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void URankSmall_Star_UIBP_C::SetRankText(const struct FSlateColor& Color, const struct FSlateColor& ShadowColor, const struct FSlateFontInfo& FontInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Star_UIBP.RankSmall_Star_UIBP_C.SetRankText");

	URankSmall_Star_UIBP_C_SetRankText_Params params;
	params.Color = Color;
	params.ShadowColor = ShadowColor;
	params.FontInfo = FontInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function RankSmall_Star_UIBP.RankSmall_Star_UIBP_C.ExecuteUbergraph_RankSmall_Star_UIBP
// (Net, Native, NetResponse, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URankSmall_Star_UIBP_C::STATIC_ExecuteUbergraph_RankSmall_Star_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RankSmall_Star_UIBP.RankSmall_Star_UIBP_C.ExecuteUbergraph_RankSmall_Star_UIBP");

	URankSmall_Star_UIBP_C_ExecuteUbergraph_RankSmall_Star_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

