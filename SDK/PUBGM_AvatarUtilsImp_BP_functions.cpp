// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAdjustWeaponBPID_Lobby
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::STATIC_GetAdjustWeaponBPID_Lobby(int* WeaponID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAdjustWeaponBPID_Lobby");

	UAvatarUtilsImp_BP_C_GetAdjustWeaponBPID_Lobby_Params params;
	params.WeaponID = WeaponID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarSuits
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           gender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int>                    OutClothSuits                  (Parm, OutParm, ZeroConstructor)

void UAvatarUtilsImp_BP_C::STATIC_GetClothAvatarSuits(int* gender, struct FItemDefineID* ItemDefineID, TArray<int>* OutClothSuits)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarSuits");

	UAvatarUtilsImp_BP_C_GetClothAvatarSuits_Params params;
	params.gender = gender;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemDefineID != nullptr)
		*ItemDefineID = params.ItemDefineID;
	if (OutClothSuits != nullptr)
		*OutClothSuits = params.OutClothSuits;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleAvatarTemplateID
// (NetReliable, NetRequest, NetResponse, NetMulticast, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FItemDefineID           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::GetVehicleAvatarTemplateID(struct FItemDefineID* ItemDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleAvatarTemplateID");

	UAvatarUtilsImp_BP_C_GetVehicleAvatarTemplateID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemDefineID != nullptr)
		*ItemDefineID = params.ItemDefineID;

	return params.ReturnValue;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarTemplateID
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FItemDefineID           ItemDefineID                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::STATIC_GetClothAvatarTemplateID(struct FItemDefineID* ItemDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetClothAvatarTemplateID");

	UAvatarUtilsImp_BP_C_GetClothAvatarTemplateID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemDefineID != nullptr)
		*ItemDefineID = params.ItemDefineID;

	return params.ReturnValue;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPIDByResID
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::STATIC_GetBPIDByResID(int* resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPIDByResID");

	UAvatarUtilsImp_BP_C_GetBPIDByResID_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleDefaultStyleID
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           InVehicleSkinID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutStyleIDList                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAvatarUtilsImp_BP_C::STATIC_GetVehicleDefaultStyleID(int* InVehicleSkinID, TArray<int>* OutStyleIDList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleDefaultStyleID");

	UAvatarUtilsImp_BP_C_GetVehicleDefaultStyleID_Params params;
	params.InVehicleSkinID = InVehicleSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutStyleIDList != nullptr)
		*OutStyleIDList = params.OutStyleIDList;

	return params.ReturnValue;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleBPPathBySkinID
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           InVehicleSkinID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAvatarUtilsImp_BP_C::STATIC_GetVehicleBPPathBySkinID(int* InVehicleSkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleBPPathBySkinID");

	UAvatarUtilsImp_BP_C_GetVehicleBPPathBySkinID_Params params;
	params.InVehicleSkinID = InVehicleSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleShapeBySkinID
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           InVehicleSkinID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAvatarUtilsImp_BP_C::STATIC_GetVehicleShapeBySkinID(int* InVehicleSkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetVehicleShapeBySkinID");

	UAvatarUtilsImp_BP_C_GetVehicleShapeBySkinID_Params params;
	params.InVehicleSkinID = InVehicleSkinID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPTableName
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TypeSpecificID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BPTableName                    (Parm, OutParm, ZeroConstructor)
// int                            SpecificID                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAvatarUtilsImp_BP_C::STATIC_GetBPTableName(int Type, int TypeSpecificID, struct FString* BPTableName, int* SpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetBPTableName");

	UAvatarUtilsImp_BP_C_GetBPTableName_Params params;
	params.Type = Type;
	params.TypeSpecificID = TypeSpecificID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BPTableName != nullptr)
		*BPTableName = params.BPTableName;
	if (SpecificID != nullptr)
		*SpecificID = params.SpecificID;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.ConstructAvatarDataFromTable
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TemplateID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAvatarTableData        OutAvatarTableData             (Parm, OutParm)

void UAvatarUtilsImp_BP_C::STATIC_ConstructAvatarDataFromTable(int* ItemType, int* TemplateID, struct FAvatarTableData* OutAvatarTableData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.ConstructAvatarDataFromTable");

	UAvatarUtilsImp_BP_C_ConstructAvatarDataFromTable_Params params;
	params.ItemType = ItemType;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutAvatarTableData != nullptr)
		*OutAvatarTableData = params.OutAvatarTableData;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.CreateAvatarHandle
// (NetReliable, NetRequest, Exec, Native, Event, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                Outer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLobby                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemHandleBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemHandleBase* UAvatarUtilsImp_BP_C::STATIC_CreateAvatarHandle(struct FItemDefineID* DefineID, class UObject** Outer, bool* bLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.CreateAvatarHandle");

	UAvatarUtilsImp_BP_C_CreateAvatarHandle_Params params;
	params.DefineID = DefineID;
	params.Outer = Outer;
	params.bLobby = bLobby;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAvatarHandlePath
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FItemDefineID*          DefineID                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          bLobby                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAvatarUtilsImp_BP_C::GetAvatarHandlePath(struct FItemDefineID* DefineID, bool* bLobby)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AvatarUtilsImp_BP.AvatarUtilsImp_BP_C.GetAvatarHandlePath");

	UAvatarUtilsImp_BP_C_GetAvatarHandlePath_Params params;
	params.DefineID = DefineID;
	params.bLobby = bLobby;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

