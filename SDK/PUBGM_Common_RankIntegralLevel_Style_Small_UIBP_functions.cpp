// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.IsSegmentStarSwitchOpen
// (NetReliable, Exec, NetResponse, Static, NetMulticast, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// bool                           isStarOpen                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_IsSegmentStarSwitchOpen(bool* isStarOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.IsSegmentStarSwitchOpen");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_IsSegmentStarSwitchOpen_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (isStarOpen != nullptr)
		*isStarOpen = params.isStarOpen;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetArenaRankInteralWithCustomColor
// (NetReliable, Native, NetResponse, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            RankInteral                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetArenaRankInteralWithCustomColor(int RankInteral, class UTextBlock* textIntegralName, const struct FSlateColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetArenaRankInteralWithCustomColor");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetArenaRankInteralWithCustomColor_Params params;
	params.RankInteral = RankInteral;
	params.textIntegralName = textIntegralName;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralBySeason
// (Net, Native, NetResponse, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInteralBySeason(int rankIntegral, class UTextBlock* textIntegralName, int SeasonID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralBySeason");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteralBySeason_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;
	params.SeasonID = SeasonID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankCustomColor
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankCustomColor(int rankIntegral, class UTextBlock* textIntegralName, const struct FSlateColor& Color, int SeasonID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankCustomColor");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankCustomColor_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;
	params.Color = Color;
	params.SeasonID = SeasonID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralJaguar
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInteralJaguar(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralJaguar");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteralJaguar_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteral
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInteral(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteral");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteral_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralInXMission
// (NetReliable, Exec, NetResponse, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInteralInXMission(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralInXMission");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteralInXMission_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetArenaRankInteral
// (Exec, NetResponse, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetArenaRankInteral(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetArenaRankInteral");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetArenaRankInteral_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralCommon
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInteralCommon(int rankIntegral, class UTextBlock* textIntegralName, int SeasonID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralCommon");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteralCommon_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;
	params.SeasonID = SeasonID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.PreConstruct
// (Exec, NetResponse, Static, NetMulticast, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::STATIC_PreConstruct(bool* IsDesignTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.PreConstruct");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.Construct
// ()

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.Construct");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ConstructItem
// ()

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::ConstructItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ConstructItem");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_ConstructItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.Destruct
// ()

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::Destruct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.Destruct");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_Destruct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP
// (NetRequest, NetResponse, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

