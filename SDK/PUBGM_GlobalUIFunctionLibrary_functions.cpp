// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenRechargeUI
// (NetRequest, Native, Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::OpenRechargeUI(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenRechargeUI");

	UGlobalUIFunctionLibrary_C_OpenRechargeUI_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.AddOrUpdateBlendable
// (NetReliable, Native, Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* MIDynamic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendWeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::AddOrUpdateBlendable(class UCameraComponent* CameraComponent, class UMaterialInstanceDynamic* MIDynamic, float BlendWeight, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.AddOrUpdateBlendable");

	UGlobalUIFunctionLibrary_C_AddOrUpdateBlendable_Params params;
	params.CameraComponent = CameraComponent;
	params.MIDynamic = MIDynamic;
	params.BlendWeight = BlendWeight;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ProcessAndroidBack
// (NetRequest, Exec, Event, NetResponse, Static, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_ProcessAndroidBack(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ProcessAndroidBack");

	UGlobalUIFunctionLibrary_C_ProcessAndroidBack_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSpecialIconWithSprite2DMatchSize
// (Native, Event, NetResponse, Static, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UImage*                  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 specialIconPath                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetSpecialIconWithSprite2DMatchSize(class UImage* Widget, const struct FString& specialIconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSpecialIconWithSprite2DMatchSize");

	UGlobalUIFunctionLibrary_C_SetSpecialIconWithSprite2DMatchSize_Params params;
	params.Widget = Widget;
	params.specialIconPath = specialIconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetZoneDelay
// (Net, NetReliable, Native, Event, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            ZoneID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            fakeShowDelay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            maxDelay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetZoneDelay(int ZoneID, int fakeShowDelay, int maxDelay, class UObject* __WorldContext, int* Delay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetZoneDelay");

	UGlobalUIFunctionLibrary_C_GetZoneDelay_Params params;
	params.ZoneID = ZoneID;
	params.fakeShowDelay = fakeShowDelay;
	params.maxDelay = maxDelay;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UnixTimeToLocalizedTimeStrGMT
// (Net, Native, Event, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            Year                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Month                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Day                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hour                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            sec                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           start_from_month               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 h_m_s_format                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TimeStr                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::UnixTimeToLocalizedTimeStrGMT(int Year, int Month, int Day, int Hour, int Min, int sec, bool start_from_month, const struct FString& h_m_s_format, class UObject* __WorldContext, struct FString* TimeStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UnixTimeToLocalizedTimeStrGMT");

	UGlobalUIFunctionLibrary_C_UnixTimeToLocalizedTimeStrGMT_Params params;
	params.Year = Year;
	params.Month = Month;
	params.Day = Day;
	params.Hour = Hour;
	params.Min = Min;
	params.sec = sec;
	params.start_from_month = start_from_month;
	params.h_m_s_format = h_m_s_format;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStr != nullptr)
		*TimeStr = params.TimeStr;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTableRow
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_Item_type    Item                           (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::GetItemTableRow(int ID, class UObject* __WorldContext, struct FBP_STRUCT_Item_type* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTableRow");

	UGlobalUIFunctionLibrary_C_GetItemTableRow_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SecondsToMMSS
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FormatTime                     (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::SecondsToMMSS(int Seconds, class UObject* __WorldContext, struct FString* FormatTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SecondsToMMSS");

	UGlobalUIFunctionLibrary_C_SecondsToMMSS_Params params;
	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FormatTime != nullptr)
		*FormatTime = params.FormatTime;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundPopup
// (NetReliable, NetRequest, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundPopup(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundPopup");

	UGlobalUIFunctionLibrary_C_PlaySoundPopup_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundToggle
// (NetReliable, Exec, Native, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundToggle(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundToggle");

	UGlobalUIFunctionLibrary_C_PlaySoundToggle_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundSubTab
// (NetReliable, Exec, Event, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundSubTab(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundSubTab");

	UGlobalUIFunctionLibrary_C_PlaySoundSubTab_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundTab
// (NetRequest, NetResponse, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundTab(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundTab");

	UGlobalUIFunctionLibrary_C_PlaySoundTab_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPathWithLight
// (NetRequest, Exec, Event, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetBgQualityPathWithLight(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPathWithLight");

	UGlobalUIFunctionLibrary_C_GetBgQualityPathWithLight_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetUIRectOffset
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Left                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetUIRectOffset(class UObject* __WorldContext, int* Left, int* Right)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetUIRectOffset");

	UGlobalUIFunctionLibrary_C_GetUIRectOffset_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Left != nullptr)
		*Left = params.Left;
	if (Right != nullptr)
		*Right = params.Right;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeSubType
// (Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// EGameModeSubType               InSubType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_IsConfigGameModeSubType(EGameModeSubType InSubType, class UObject* Context, class UObject* __WorldContext, bool* res)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeSubType");

	UGlobalUIFunctionLibrary_C_IsConfigGameModeSubType_Params params;
	params.InSubType = InSubType;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeType
// (Exec, NetResponse, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// EGameModeType                  InGameModeType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsConfigGameModeType(EGameModeType InGameModeType, class UObject* Context, class UObject* __WorldContext, bool* res)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsConfigGameModeType");

	UGlobalUIFunctionLibrary_C_IsConfigGameModeType_Params params;
	params.InGameModeType = InGameModeType;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalLuaUI
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGlobalLuaWidget_C*      AsGlobal_Lua_Widget            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetGlobalLuaUI(class UObject* WorldContextObject, class UObject* __WorldContext, class UGlobalLuaWidget_C** AsGlobal_Lua_Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalLuaUI");

	UGlobalUIFunctionLibrary_C_GetGlobalLuaUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AsGlobal_Lua_Widget != nullptr)
		*AsGlobal_Lua_Widget = params.AsGlobal_Lua_Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushWithPath
// (Net, Event, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 ImagePath                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ImageWidth                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ImageHeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             OutBrush                       (Parm, OutParm)
// bool                           bOK                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetBrushWithPath(const struct FString& ImagePath, int ImageWidth, int ImageHeight, class UObject* __WorldContext, struct FSlateBrush* OutBrush, bool* bOK)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushWithPath");

	UGlobalUIFunctionLibrary_C_GetBrushWithPath_Params params;
	params.ImagePath = ImagePath;
	params.ImageWidth = ImageWidth;
	params.ImageHeight = ImageHeight;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBrush != nullptr)
		*OutBrush = params.OutBrush;
	if (bOK != nullptr)
		*bOK = params.bOK;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraToTransform_2
// (NetReliable, Exec, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          blendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SwitchSceneCameraToTransform_2(const struct FTransform& Transform, float FOV, float blendTime, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraToTransform_2");

	UGlobalUIFunctionLibrary_C_SwitchSceneCameraToTransform_2_Params params;
	params.Transform = Transform;
	params.FOV = FOV;
	params.blendTime = blendTime;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetVector4
// (NetRequest, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// float                          X                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          W                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          H                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4                Vector                         (Parm, OutParm, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetVector4(float X, float Y, float W, float H, class UObject* __WorldContext, struct FVector4* Vector)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetVector4");

	UGlobalUIFunctionLibrary_C_GetVector4_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.DestroyLobbyCameras
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::DestroyLobbyCameras(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.DestroyLobbyCameras");

	UGlobalUIFunctionLibrary_C_DestroyLobbyCameras_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InitAmmoDropBox
// (Exec, NetResponse, NetMulticast, MulticastDelegate, DLLImport, BlueprintPure)
// Parameters:
// class UMeshComponent*          MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LOD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::InitAmmoDropBox(class UMeshComponent* MeshComponent, int LOD, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InitAmmoDropBox");

	UGlobalUIFunctionLibrary_C_InitAmmoDropBox_Params params;
	params.MeshComponent = MeshComponent;
	params.LOD = LOD;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralBigIcon
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGlobalUIFunctionLibrary_C::GetRankIntegralBigIcon(const struct FString& Icon, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralBigIcon");

	UGlobalUIFunctionLibrary_C_GetRankIntegralBigIcon_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSmallIcon
// (NetRequest, Exec, Native, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGlobalUIFunctionLibrary_C::GetRankIntegralSmallIcon(const struct FString& Icon, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSmallIcon");

	UGlobalUIFunctionLibrary_C_GetRankIntegralSmallIcon_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSubIcon
// (NetReliable, Exec, Native, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGlobalUIFunctionLibrary_C::GetRankIntegralSubIcon(const struct FString& Icon, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetRankIntegralSubIcon");

	UGlobalUIFunctionLibrary_C_GetRankIntegralSubIcon_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetArenaWeaponLightProperty
// (NetRequest, Native, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetArenaWeaponLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetArenaWeaponLightProperty");

	UGlobalUIFunctionLibrary_C_SetArenaWeaponLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateMPCLightDirection
// (NetRequest, Exec, Native, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateMPCLightDirection(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateMPCLightDirection");

	UGlobalUIFunctionLibrary_C_UpdateMPCLightDirection_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetRankInteral
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// struct FBP_STRUCT_RankIntegralLevel_type RankIntegralLevelInfo          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UImage*                  ImageIcon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextBlock_Rank                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCanvasPanel*            Canvas_Panel_Star              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image_Star                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextBlock_Star                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSegmentStarOpen              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image_Quality                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  vx_Image_Quality               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetRankInteral(const struct FBP_STRUCT_RankIntegralLevel_type& RankIntegralLevelInfo, class UImage* ImageIcon, class UTextBlock* TextBlock_Rank, class UCanvasPanel* Canvas_Panel_Star, class UImage* Image_Star, class UTextBlock* TextBlock_Star, bool isSegmentStarOpen, class UImage* Image_Quality, class UImage* vx_Image_Quality, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetRankInteral");

	UGlobalUIFunctionLibrary_C_SetRankInteral_Params params;
	params.RankIntegralLevelInfo = RankIntegralLevelInfo;
	params.ImageIcon = ImageIcon;
	params.TextBlock_Rank = TextBlock_Rank;
	params.Canvas_Panel_Star = Canvas_Panel_Star;
	params.Image_Star = Image_Star;
	params.TextBlock_Star = TextBlock_Star;
	params.isSegmentStarOpen = isSegmentStarOpen;
	params.Image_Quality = Image_Quality;
	params.vx_Image_Quality = vx_Image_Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlayModelSequence
// (Net, Exec, Native, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    playingsequence                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlayModelSequence(const struct FString& Path, class UObject* __WorldContext, class ULevelSequencePlayer** playingsequence)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlayModelSequence");

	UGlobalUIFunctionLibrary_C_PlayModelSequence_Params params;
	params.Path = Path;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (playingsequence != nullptr)
		*playingsequence = params.playingsequence;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraToTransform
// (NetReliable, Native, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          blendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SwitchSceneCameraToTransform(const struct FVector& Location, const struct FVector& Rotation, const struct FVector& Scale, float FOV, float blendTime, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraToTransform");

	UGlobalUIFunctionLibrary_C_SwitchSceneCameraToTransform_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.FOV = FOV;
	params.blendTime = blendTime;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageFromPath
// (NetReliable, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetImageFromPath(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageFromPath");

	UGlobalUIFunctionLibrary_C_SetImageFromPath_Params params;
	params.Image = Image;
	params.IconPath = IconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCharacterImage
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 imgPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UImage*                  imageItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetCharacterImage(const struct FString& imgPath, class UImage* imageItem, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCharacterImage");

	UGlobalUIFunctionLibrary_C_SetCharacterImage_Params params;
	params.imgPath = imgPath;
	params.imageItem = imageItem;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPopularityColor
// (Net, NetRequest, Native, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Output                         (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::GetPopularityColor(int Type, class UObject* __WorldContext, struct FSlateColor* Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPopularityColor");

	UGlobalUIFunctionLibrary_C_GetPopularityColor_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushFromSprite
// (NetReliable, NetRequest, Exec, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Result                         (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::STATIC_GetBrushFromSprite(const struct FSlateBrush& Brush, const struct FString& Path, class UObject* __WorldContext, struct FSlateBrush* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBrushFromSprite");

	UGlobalUIFunctionLibrary_C_GetBrushFromSprite_Params params;
	params.Brush = Brush;
	params.Path = Path;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadImage
// (Event, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::LoadImage(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadImage");

	UGlobalUIFunctionLibrary_C_LoadImage_Params params;
	params.Image = Image;
	params.IconPath = IconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadSprite
// (NetRequest, Native, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_LoadSprite(class UImage* Image, const struct FString& IconPath, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.LoadSprite");

	UGlobalUIFunctionLibrary_C_LoadSprite_Params params;
	params.Image = Image;
	params.IconPath = IconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetXieQualityPath
// (Native, Static, NetMulticast, HasDefaults, NetClient)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetXieQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetXieQualityPath");

	UGlobalUIFunctionLibrary_C_GetXieQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPath
// (Net, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBgQualityPath");

	UGlobalUIFunctionLibrary_C_GetBgQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetQualityPath
// (NetReliable, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetQualityPath");

	UGlobalUIFunctionLibrary_C_GetQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizationString
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Ret                            (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetLocalizationString(const struct FString& Key, class UObject* __WorldContext, struct FString* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizationString");

	UGlobalUIFunctionLibrary_C_GetLocalizationString_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCornerQuality
// (Native, Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetCornerQuality(class UImage* Image, int Quality, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCornerQuality");

	UGlobalUIFunctionLibrary_C_SetCornerQuality_Params params;
	params.Image = Image;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPingColor
// (Net, NetReliable, Native, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// float                          ms                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetPingColor(float ms, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPingColor");

	UGlobalUIFunctionLibrary_C_GetPingColor_Params params;
	params.ms = ms;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImgWithPath
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UImage*                  ImgRef                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 imgPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsMatchSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetImgWithPath(class UImage* ImgRef, const struct FString& imgPath, bool IsMatchSize, class UObject* __WorldContext, bool* Success)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImgWithPath");

	UGlobalUIFunctionLibrary_C_SetImgWithPath_Params params;
	params.ImgRef = ImgRef;
	params.imgPath = imgPath;
	params.IsMatchSize = IsMatchSize;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendLobbyEventClickReport
// (NetReliable, Native, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 SubEvent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 para1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 para2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SendLobbyEventClickReport(const struct FString& SubEvent, const struct FString& para1, const struct FString& para2, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendLobbyEventClickReport");

	UGlobalUIFunctionLibrary_C_SendLobbyEventClickReport_Params params;
	params.SubEvent = SubEvent;
	params.para1 = para1;
	params.para2 = para2;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenSlapUrl
// (Native, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::OpenSlapUrl(const struct FString& URL, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenSlapUrl");

	UGlobalUIFunctionLibrary_C_OpenSlapUrl_Params params;
	params.URL = URL;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemName
// (NetReliable, NetRequest, Exec, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           chineseSensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutName                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetItemName(const struct FString& Name, int Length, bool chineseSensity, class UObject* __WorldContext, struct FString* OutName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemName");

	UGlobalUIFunctionLibrary_C_GetItemName_Params params;
	params.Name = Name;
	params.Length = Length;
	params.chineseSensity = chineseSensity;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutName != nullptr)
		*OutName = params.OutName;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageByPath
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateImageByPath(class UImage* Image, const struct FString& Path, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageByPath");

	UGlobalUIFunctionLibrary_C_UpdateImageByPath_Params params;
	params.Image = Image;
	params.Path = Path;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ConvertRGBAStr
// (NetRequest, Exec, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 RGBAstr                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          R                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          G                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          A                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ConvertRGBAStr(const struct FString& RGBAstr, class UObject* __WorldContext, float* R, float* G, float* B, float* A)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ConvertRGBAStr");

	UGlobalUIFunctionLibrary_C_ConvertRGBAStr_Params params;
	params.RGBAstr = RGBAstr;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (R != nullptr)
		*R = params.R;
	if (G != nullptr)
		*G = params.G;
	if (B != nullptr)
		*B = params.B;
	if (A != nullptr)
		*A = params.A;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendGemClickReport
// (Net, Exec, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 SubEvent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 para1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 para2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SendGemClickReport(const struct FString& SubEvent, const struct FString& para1, const struct FString& para2, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendGemClickReport");

	UGlobalUIFunctionLibrary_C_SendGemClickReport_Params params;
	params.SubEvent = SubEvent;
	params.para1 = para1;
	params.para2 = para2;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsJapanOrKorea
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsJapanOrKorea(class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsJapanOrKorea");

	UGlobalUIFunctionLibrary_C_IsJapanOrKorea_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageTint
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateImageTint(class UImage* Image, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateImageTint");

	UGlobalUIFunctionLibrary_C_UpdateImageTint_Params params;
	params.Image = Image;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ChangeBrushColor
// (NetRequest, Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             NewBrush                       (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::ChangeBrushColor(const struct FSlateBrush& Brush, const struct FLinearColor& Color, class UObject* __WorldContext, struct FSlateBrush* NewBrush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ChangeBrushColor");

	UGlobalUIFunctionLibrary_C_ChangeBrushColor_Params params;
	params.Brush = Brush;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewBrush != nullptr)
		*NewBrush = params.NewBrush;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateButtonColor
// (NetReliable, Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateButtonColor(class UButton* Button, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateButtonColor");

	UGlobalUIFunctionLibrary_C_UpdateButtonColor_Params params;
	params.Button = Button;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCameraMod
// (Event, NetResponse, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Mod                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetCameraMod(class UObject* __WorldContext, int* Mod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCameraMod");

	UGlobalUIFunctionLibrary_C_GetCameraMod_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ConvertSecondsToString
// (Net, NetReliable, Exec, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 timestring                     (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::ConvertSecondsToString(int Seconds, class UObject* __WorldContext, struct FString* timestring)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ConvertSecondsToString");

	UGlobalUIFunctionLibrary_C_ConvertSecondsToString_Params params;
	params.Seconds = Seconds;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (timestring != nullptr)
		*timestring = params.timestring;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLangueTable
// (Native, Event, NetResponse, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEDataTable*           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLangueTable(class UObject* __WorldContext, class UUAEDataTable** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLangueTable");

	UGlobalUIFunctionLibrary_C_GetLangueTable_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGuidonInfo
// (Net, NetReliable, NetRequest, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 code                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_GuidonConfig_type GuidonConfig                   (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::GetGuidonInfo(const struct FString& code, class UObject* __WorldContext, struct FBP_STRUCT_GuidonConfig_type* GuidonConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGuidonInfo");

	UGlobalUIFunctionLibrary_C_GetGuidonInfo_Params params;
	params.code = code;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (GuidonConfig != nullptr)
		*GuidonConfig = params.GuidonConfig;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetHumanLightProperty
// (NetRequest, Native, Event, NetResponse, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetHumanLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetHumanLightProperty");

	UGlobalUIFunctionLibrary_C_SetHumanLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetWeaponLightProperty
// (Exec, Native, Event, NetResponse, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetWeaponLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetWeaponLightProperty");

	UGlobalUIFunctionLibrary_C_SetWeaponLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty
// (Net, NetRequest, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              Trans                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSceneSkyLightProperty(const struct FString& lightName, const struct FTransform& Trans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty");

	UGlobalUIFunctionLibrary_C_SetSceneSkyLightProperty_Params params;
	params.lightName = lightName;
	params.Trans = Trans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty
// (NetReliable, Exec, Native, Event, NetResponse, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetLobbyDefaultLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty");

	UGlobalUIFunctionLibrary_C_SetLobbyDefaultLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetAndroidKeyIsValid
// (Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// bool                           bValid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetAndroidKeyIsValid(bool bValid, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetAndroidKeyIsValid");

	UGlobalUIFunctionLibrary_C_SetAndroidKeyIsValid_Params params;
	params.bValid = bValid;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStrFormat
// (NetRequest, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            timeNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TimeStr                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::numToTimeStrFormat(int timeNum, class UObject* __WorldContext, struct FString* TimeStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStrFormat");

	UGlobalUIFunctionLibrary_C_numToTimeStrFormat_Params params;
	params.timeNum = timeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStr != nullptr)
		*TimeStr = params.TimeStr;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStr
// (MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            timeNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TimeStr                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::numToTimeStr(int timeNum, class UObject* __WorldContext, struct FString* TimeStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.numToTimeStr");

	UGlobalUIFunctionLibrary_C_numToTimeStr_Params params;
	params.timeNum = timeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStr != nullptr)
		*TimeStr = params.TimeStr;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IdToColor
// (NetReliable, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, OutParm, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IdToColor(int ID, class UObject* __WorldContext, struct FColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IdToColor");

	UGlobalUIFunctionLibrary_C_IdToColor_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetOnLineColor
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            onlinestate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bonline                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::STATIC_GetOnLineColor(int onlinestate, bool bonline, class UObject* __WorldContext, struct FSlateColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetOnLineColor");

	UGlobalUIFunctionLibrary_C_GetOnLineColor_Params params;
	params.onlinestate = onlinestate;
	params.bonline = bonline;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateNationImage
// (NetReliable, NetRequest, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RoleNation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_UpdateNationImage(class UImage* Image, const struct FString& RoleNation, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateNationImage");

	UGlobalUIFunctionLibrary_C_UpdateNationImage_Params params;
	params.Image = Image;
	params.RoleNation = RoleNation;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            BgIdx                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SwitchLobbyMeshBg(int BgIdx, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg");

	UGlobalUIFunctionLibrary_C_SwitchLobbyMeshBg_Params params;
	params.BgIdx = BgIdx;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsLengthyScreen
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWideScreen                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsLengthyScreen(class UObject* __WorldContext, bool* bWideScreen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsLengthyScreen");

	UGlobalUIFunctionLibrary_C_IsLengthyScreen_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bWideScreen != nullptr)
		*bWideScreen = params.bWideScreen;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyDragDropWidget
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            dragDropType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetLobbyDragDropWidget(int dragDropType, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyDragDropWidget");

	UGlobalUIFunctionLibrary_C_GetLobbyDragDropWidget_Params params;
	params.dragDropType = dragDropType;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetItemQuality
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            ItemQuality                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  imageres                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetItemQuality(int ItemQuality, class UImage* imageres, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetItemQuality");

	UGlobalUIFunctionLibrary_C_SetItemQuality_Params params;
	params.ItemQuality = ItemQuality;
	params.imageres = imageres;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetIntimacy
// (NetReliable, Exec, Native, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UImage*                  heart                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            intimacynum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              intimacyText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetIntimacy(class UImage* heart, int intimacynum, class UTextBlock* intimacyText, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetIntimacy");

	UGlobalUIFunctionLibrary_C_SetIntimacy_Params params;
	params.heart = heart;
	params.intimacynum = intimacynum;
	params.intimacyText = intimacyText;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyRankTexture
// (Net, NetReliable, Exec, NetResponse, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetLobbyRankTexture(int rankIntegral, class UObject* __WorldContext, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyRankTexture");

	UGlobalUIFunctionLibrary_C_GetLobbyRankTexture_Params params;
	params.rankIntegral = rankIntegral;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty
// (Net, Exec, NetResponse, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              targetTrans                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            inverseSquareFalloff           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetScenePointLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty");

	UGlobalUIFunctionLibrary_C_SetScenePointLightProperty_Params params;
	params.lightName = lightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.inverseSquareFalloff = inverseSquareFalloff;
	params.Radius = Radius;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty
// (Exec, NetResponse, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              targetTrans                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetSceneDirectionalLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty");

	UGlobalUIFunctionLibrary_C_SetSceneDirectionalLightProperty_Params params;
	params.lightName = lightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsSegmentLimit
// (NetReliable, Native, Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UCommon_RankIntegralLevel_Style_Small_UIBP_C* segmentWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LevelID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetCorpsSegmentLimit(class UCommon_RankIntegralLevel_Style_Small_UIBP_C* segmentWidget, class UTextBlock* textWidget, int LevelID, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsSegmentLimit");

	UGlobalUIFunctionLibrary_C_SetCorpsSegmentLimit_Params params;
	params.segmentWidget = segmentWidget;
	params.textWidget = textWidget;
	params.LevelID = LevelID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsLevelLimit
// (Native, Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UTextBlock*              textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetCorpsLevelLimit(class UTextBlock* textWidget, int Level, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsLevelLimit");

	UGlobalUIFunctionLibrary_C_SetCorpsLevelLimit_Params params;
	params.textWidget = textWidget;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            IconID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetLobbyCorpsIcon(int IconID, class UObject* __WorldContext, class UTexture2D** Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon");

	UGlobalUIFunctionLibrary_C_GetLobbyCorpsIcon_Params params;
	params.IconID = IconID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPlatfromDisplayName
// (NetRequest, NetResponse, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 strChannel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 showChannel                    (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetPlatfromDisplayName(const struct FString& strChannel, class UObject* __WorldContext, struct FString* showChannel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPlatfromDisplayName");

	UGlobalUIFunctionLibrary_C_GetPlatfromDisplayName_Params params;
	params.strChannel = strChannel;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (showChannel != nullptr)
		*showChannel = params.showChannel;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPlayerPrefs
// (NetReliable, NetRequest, Exec, Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerPrefs_C*          bp_playerprefs                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetPlayerPrefs(class UObject* __WorldContext, class UPlayerPrefs_C** bp_playerprefs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPlayerPrefs");

	UGlobalUIFunctionLibrary_C_GetPlayerPrefs_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bp_playerprefs != nullptr)
		*bp_playerprefs = params.bp_playerprefs;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowLobbyMenuEnterAnimation
// (NetRequest, Exec, Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_ShowLobbyMenuEnterAnimation(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowLobbyMenuEnterAnimation");

	UGlobalUIFunctionLibrary_C_ShowLobbyMenuEnterAnimation_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp
// (NetReliable, Exec, Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGlobal_Bp_C*            AsGlobal_Bp                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetLobbyGlobalBp(class UObject* __WorldContext, class UGlobal_Bp_C** AsGlobal_Bp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp");

	UGlobalUIFunctionLibrary_C_GetLobbyGlobalBp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AsGlobal_Bp != nullptr)
		*AsGlobal_Bp = params.AsGlobal_Bp;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture
// (NetReliable, NetResponse, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            frameLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetLobbyFrameTexture(int frameLevel, class UObject* __WorldContext, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture");

	UGlobalUIFunctionLibrary_C_GetLobbyFrameTexture_Params params;
	params.frameLevel = frameLevel;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunctionNoFetch
// (Net, NetResponse, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 InName                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 InFunname                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_InvoleBpFunctionNoFetch(const struct FString& InName, const struct FString& InFunname, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunctionNoFetch");

	UGlobalUIFunctionLibrary_C_InvoleBpFunctionNoFetch_Params params;
	params.InName = InName;
	params.InFunname = InFunname;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckChatPrivacyAcceptStatus
// (Exec, Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChatPrivacyAcceptStatus        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_CheckChatPrivacyAcceptStatus(class UObject* __WorldContext, bool* ChatPrivacyAcceptStatus)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckChatPrivacyAcceptStatus");

	UGlobalUIFunctionLibrary_C_CheckChatPrivacyAcceptStatus_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ChatPrivacyAcceptStatus != nullptr)
		*ChatPrivacyAcceptStatus = params.ChatPrivacyAcceptStatus;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGVoiceInterface
// (NetRequest, NetMulticast, MulticastDelegate, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGVoiceInterface*        outputObj                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetGVoiceInterface(class UObject* __WorldContext, class UGVoiceInterface** outputObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGVoiceInterface");

	UGlobalUIFunctionLibrary_C_GetGVoiceInterface_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outputObj != nullptr)
		*outputObj = params.outputObj;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenUseItemUI
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 itemInsID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_OpenUseItemUI(const struct FString& itemInsID, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenUseItemUI");

	UGlobalUIFunctionLibrary_C_OpenUseItemUI_Params params;
	params.itemInsID = itemInsID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ConvertURLByLanguage
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 convertedURL                   (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_ConvertURLByLanguage(const struct FString& URL, class UObject* __WorldContext, struct FString* convertedURL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ConvertURLByLanguage");

	UGlobalUIFunctionLibrary_C_ConvertURLByLanguage_Params params;
	params.URL = URL;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (convertedURL != nullptr)
		*convertedURL = params.convertedURL;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.isChineseSymbol
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_isChineseSymbol(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.isChineseSymbol");

	UGlobalUIFunctionLibrary_C_isChineseSymbol_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.isSpace
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_isSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.isSpace");

	UGlobalUIFunctionLibrary_C_isSpace_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationInfo
// (Exec, Native, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 NationCode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_RegionConfig_type NationInfo                     (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::STATIC_GetNationInfo(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationInfo");

	UGlobalUIFunctionLibrary_C_GetNationInfo_Params params;
	params.NationCode = NationCode;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NationInfo != nullptr)
		*NationInfo = params.NationInfo;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageWithSpriteRes
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 ResPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SetImageWithSpriteRes(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetImageWithSpriteRes");

	UGlobalUIFunctionLibrary_C_SetImageWithSpriteRes_Params params;
	params.ResPath = ResPath;
	params.Image = Image;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationSwitch
// (NetRequest, Native, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetNationSwitch");

	UGlobalUIFunctionLibrary_C_GetNationSwitch_Params params;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBpLuaObject
// (Net, NetReliable, Native, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 bp_name                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ALuaClassObj*            Lua_obj                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetBpLuaObject(const struct FString& bp_name, class UObject* __WorldContext, class ALuaClassObj** Lua_obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetBpLuaObject");

	UGlobalUIFunctionLibrary_C_GetBpLuaObject_Params params;
	params.bp_name = bp_name;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Lua_obj != nullptr)
		*Lua_obj = params.Lua_obj;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen
// (Net, Native, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            MenuId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_CheckIfMenuOpen(int MenuId, class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen");

	UGlobalUIFunctionLibrary_C_CheckIfMenuOpen_Params params;
	params.MenuId = MenuId;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidStringAll
// (Net, NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           CanBeEnglish                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeWhiteSpace                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeChinese                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeSpace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeChineseSymbol             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 validText                      (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetValidStringAll(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeWhiteSpace, bool CanBeChinese, bool CanBeSpace, bool CanBeChineseSymbol, class UObject* __WorldContext, struct FString* validText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidStringAll");

	UGlobalUIFunctionLibrary_C_GetValidStringAll_Params params;
	params.Text = Text;
	params.CanBeEnglish = CanBeEnglish;
	params.CanBeNumber = CanBeNumber;
	params.CanBeWhiteSpace = CanBeWhiteSpace;
	params.CanBeChinese = CanBeChinese;
	params.CanBeSpace = CanBeSpace;
	params.CanBeChineseSymbol = CanBeChineseSymbol;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (validText != nullptr)
		*validText = params.validText;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateLobbyRedpointStatus
// (NetReliable, NetRequest, Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ModeID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_UpdateLobbyRedpointStatus(bool IsShow, int ModeID, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateLobbyRedpointStatus");

	UGlobalUIFunctionLibrary_C_UpdateLobbyRedpointStatus_Params params;
	params.IsShow = IsShow;
	params.ModeID = ModeID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS_Server
// (Net, NetRequest, Exec, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            expire_ts                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            valid_hours                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 time_s                         (Parm, OutParm, ZeroConstructor)
// bool                           is_have_limit                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetItemTimeS_Server(int expire_ts, int valid_hours, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS_Server");

	UGlobalUIFunctionLibrary_C_GetItemTimeS_Server_Params params;
	params.expire_ts = expire_ts;
	params.valid_hours = valid_hours;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (time_s != nullptr)
		*time_s = params.time_s;
	if (is_have_limit != nullptr)
		*is_have_limit = params.is_have_limit;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS
// (NetRequest, Exec, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            res_id                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FirstTimeNum                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 time_s                         (Parm, OutParm, ZeroConstructor)
// bool                           is_have_limit                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetItemTimeS(int res_id, int FirstTimeNum, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS");

	UGlobalUIFunctionLibrary_C_GetItemTimeS_Params params;
	params.res_id = res_id;
	params.FirstTimeNum = FirstTimeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (time_s != nullptr)
		*time_s = params.time_s;
	if (is_have_limit != nullptr)
		*is_have_limit = params.is_have_limit;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeNumToTimeS
// (NetReliable, Exec, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            time_num                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 time_s                         (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_TimeNumToTimeS(int time_num, class UObject* __WorldContext, struct FString* time_s)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeNumToTimeS");

	UGlobalUIFunctionLibrary_C_TimeNumToTimeS_Params params;
	params.time_num = time_num;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (time_s != nullptr)
		*time_s = params.time_s;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton
// (Exec, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            validHours                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isShowCloseBtn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_ShowItemTipsByButton(int ItemID, class UButton* Button, int validHours, bool isShowCloseBtn, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton");

	UGlobalUIFunctionLibrary_C_ShowItemTipsByButton_Params params;
	params.ItemID = ItemID;
	params.Button = Button;
	params.validHours = validHours;
	params.isShowCloseBtn = isShowCloseBtn;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips
// (NetRequest, Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_CloseItemTips(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips");

	UGlobalUIFunctionLibrary_C_CloseItemTips_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget
// (NetReliable, Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget");

	UGlobalUIFunctionLibrary_C_CreateUAEUserWidget_Params params;
	params.Class = Class;
	params.Parent = Parent;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton
// (Event, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_PlaySoundCloseButton(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton");

	UGlobalUIFunctionLibrary_C_PlaySoundCloseButton_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect
// (NetResponse, MulticastDelegate, Protected, Delegate, NetClient, DLLImport)
// Parameters:
// TArray<class UWidget*>         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowEffect(bool IsShow, class UObject* __WorldContext, TArray<class UWidget*>* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect");

	UGlobalUIFunctionLibrary_C_ShowEffect_Params params;
	params.IsShow = IsShow;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible
// (NetRequest, Exec, Native, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible");

	UGlobalUIFunctionLibrary_C_IsWidgetVisible_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton
// (Exec, Native, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_PlaySoundClickButton(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton");

	UGlobalUIFunctionLibrary_C_PlaySoundClickButton_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsChinese
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_IsChinese(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsChinese");

	UGlobalUIFunctionLibrary_C_IsChinese_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport
// (Net, NetRequest, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            ButtonType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_SendBAReport(int ButtonType, int Reason, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport");

	UGlobalUIFunctionLibrary_C_SendBAReport_Params params;
	params.ButtonType = ButtonType;
	params.Reason = Reason;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsValidChar
// (Net, NetReliable, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           CanBeEnglish                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeWhiteSpace                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeChinese                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeSpace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeChineseSymbol             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_IsValidChar(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeWhiteSpace, bool CanBeChinese, bool CanBeSpace, bool CanBeChineseSymbol, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsValidChar");

	UGlobalUIFunctionLibrary_C_IsValidChar_Params params;
	params.Text = Text;
	params.CanBeEnglish = CanBeEnglish;
	params.CanBeNumber = CanBeNumber;
	params.CanBeWhiteSpace = CanBeWhiteSpace;
	params.CanBeChinese = CanBeChinese;
	params.CanBeSpace = CanBeSpace;
	params.CanBeChineseSymbol = CanBeChineseSymbol;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsNumber
// (Net, Event, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_IsNumber(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsNumber");

	UGlobalUIFunctionLibrary_C_IsNumber_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWhiteSpace
// (Net, NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_IsWhiteSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWhiteSpace");

	UGlobalUIFunctionLibrary_C_IsWhiteSpace_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           chineseSensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetTextLength(const struct FString& Text, bool chineseSensity, class UObject* __WorldContext, int* Length)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength");

	UGlobalUIFunctionLibrary_C_GetTextLength_Params params;
	params.Text = Text;
	params.chineseSensity = chineseSensity;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible
// (NetReliable, NetRequest, Native, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           collapse                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isButton                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_BoolToVisible(bool Visible, bool collapse, bool isButton, class UObject* __WorldContext, ESlateVisibility* Visibility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible");

	UGlobalUIFunctionLibrary_C_BoolToVisible_Params params;
	params.Visible = Visible;
	params.collapse = collapse;
	params.isButton = isButton;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidString
// (NetReliable, Exec, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            maxLength                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           CanBeEnglish                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeWhiteSpace                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeChinese                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           chineseSensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeSpace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 validText                      (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetValidString(int maxLength, const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeWhiteSpace, bool CanBeChinese, bool chineseSensity, bool CanBeSpace, class UObject* __WorldContext, struct FString* validText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidString");

	UGlobalUIFunctionLibrary_C_GetValidString_Params params;
	params.maxLength = maxLength;
	params.Text = Text;
	params.CanBeEnglish = CanBeEnglish;
	params.CanBeNumber = CanBeNumber;
	params.CanBeWhiteSpace = CanBeWhiteSpace;
	params.CanBeChinese = CanBeChinese;
	params.chineseSensity = chineseSensity;
	params.CanBeSpace = CanBeSpace;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (validText != nullptr)
		*validText = params.validText;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsEnglish
// (NetRequest, Exec, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_IsEnglish(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsEnglish");

	UGlobalUIFunctionLibrary_C_IsEnglish_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenURL
// (Exec, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_OpenURL(const struct FString& URL, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenURL");

	UGlobalUIFunctionLibrary_C_OpenURL_Params params;
	params.URL = URL;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankName
// (NetRequest, Native, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_UpdateRankName(class UTextBlock* Text, int Level, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankName");

	UGlobalUIFunctionLibrary_C_UpdateRankName_Params params;
	params.Text = Text;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankIcon
// (NetReliable, Native, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UImage*                  imageObj                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_UpdateRankIcon(class UImage* imageObj, int Level, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankIcon");

	UGlobalUIFunctionLibrary_C_UpdateRankIcon_Params params;
	params.imageObj = imageObj;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData
// (Native, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Abp_global_C*            globalObj                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetGlobalData(class UObject* __WorldContext, class Abp_global_C** globalObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData");

	UGlobalUIFunctionLibrary_C_GetGlobalData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (globalObj != nullptr)
		*globalObj = params.globalObj;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunction
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 bp_name                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 func_name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_InvoleBpFunction(const struct FString& bp_name, const struct FString& func_name, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunction");

	UGlobalUIFunctionLibrary_C_InvoleBpFunction_Params params;
	params.bp_name = bp_name;
	params.func_name = func_name;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString
// (Net, NetRequest, Native, Static, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 string1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 string2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 string3                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TextValue                      (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::STATIC_GetLocalizeString(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, class UObject* __WorldContext, struct FString* TextValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString");

	UGlobalUIFunctionLibrary_C_GetLocalizeString_Params params;
	params.ID = ID;
	params.string1 = string1;
	params.string2 = string2;
	params.string3 = string3;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TextValue != nullptr)
		*TextValue = params.TextValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalUIEventDispatcher
// (NetRequest, Exec, Static, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// class UFrontendHUD*            FrontendHUD                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGlobalUIEventDispatcher_BP_C* NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::STATIC_GetGlobalUIEventDispatcher(class UFrontendHUD* FrontendHUD, class UObject* __WorldContext, class UGlobalUIEventDispatcher_BP_C** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalUIEventDispatcher");

	UGlobalUIFunctionLibrary_C_GetGlobalUIEventDispatcher_Params params;
	params.FrontendHUD = FrontendHUD;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


}

