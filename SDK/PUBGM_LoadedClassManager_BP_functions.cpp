// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadBPTableData_Mod
// (Net, Native, Event, NetResponse, Static, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 tableName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadBPTableData_Mod(const struct FString& BPTableName, const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadBPTableData_Mod");

	ULoadedClassManager_BP_C_LoadBPTableData_Mod_Params params;
	params.BPTableName = BPTableName;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadBPTableData
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 tableName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_LoadBPTableData(const struct FString& BPTableName, const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadBPTableData");

	ULoadedClassManager_BP_C_LoadBPTableData_Params params;
	params.BPTableName = BPTableName;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.Load3DIconBPTable
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::STATIC_Load3DIconBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.Load3DIconBPTable");

	ULoadedClassManager_BP_C_Load3DIconBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadInFillingBPTable
// (NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadInFillingBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadInFillingBPTable");

	ULoadedClassManager_BP_C_LoadInFillingBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehiclePropsBPTable
// (NetReliable, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadVehiclePropsBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehiclePropsBPTable");

	ULoadedClassManager_BP_C_LoadVehiclePropsBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadDecalBPTable
// (NetRequest, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadDecalBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadDecalBPTable");

	ULoadedClassManager_BP_C_LoadDecalBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadSkillPropsBPTable
// (NetReliable, NetRequest, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadSkillPropsBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadSkillPropsBPTable");

	ULoadedClassManager_BP_C_LoadSkillPropsBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitPartternBPTable
// (Net, NetReliable, NetRequest, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadVehilceRefitPartternBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitPartternBPTable");

	ULoadedClassManager_BP_C_LoadVehilceRefitPartternBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitColorBPTable
// (Net, Exec, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadVehilceRefitColorBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitColorBPTable");

	ULoadedClassManager_BP_C_LoadVehilceRefitColorBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitParticleBPTable
// (Net, NetReliable, Exec, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadVehilceRefitParticleBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitParticleBPTable");

	ULoadedClassManager_BP_C_LoadVehilceRefitParticleBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPetAvatarBPTable
// (Net, NetRequest, Exec, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadPetAvatarBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPetAvatarBPTable");

	ULoadedClassManager_BP_C_LoadPetAvatarBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitBPTable
// (NetReliable, NetRequest, Exec, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadVehilceRefitBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehilceRefitBPTable");

	ULoadedClassManager_BP_C_LoadVehilceRefitBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadSeasonMissionBPTable
// (Native, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadSeasonMissionBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadSeasonMissionBPTable");

	ULoadedClassManager_BP_C_LoadSeasonMissionBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarPatternBPTable
// (NetReliable, Native, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadAvatarPatternBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarPatternBPTable");

	ULoadedClassManager_BP_C_LoadAvatarPatternBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarColorBPTable
// (NetRequest, Native, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadAvatarColorBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarColorBPTable");

	ULoadedClassManager_BP_C_LoadAvatarColorBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehicleBPTable
// (Net, NetRequest, Native, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadVehicleBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadVehicleBPTable");

	ULoadedClassManager_BP_C_LoadVehicleBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPlaneBPTable
// (Net, NetReliable, NetRequest, Native, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadPlaneBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadPlaneBPTable");

	ULoadedClassManager_BP_C_LoadPlaneBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadEmoteBPTable
// (Net, Exec, Native, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadEmoteBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadEmoteBPTable");

	ULoadedClassManager_BP_C_LoadEmoteBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadConsumableBPTable
// (Net, NetReliable, Exec, Native, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadConsumableBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadConsumableBPTable");

	ULoadedClassManager_BP_C_LoadConsumableBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadGameModeBPTable
// (NetRequest, Exec, Native, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadGameModeBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadGameModeBPTable");

	ULoadedClassManager_BP_C_LoadGameModeBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarBPTable
// (NetReliable, NetRequest, Exec, Native, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadAvatarBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadAvatarBPTable");

	ULoadedClassManager_BP_C_LoadAvatarBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadWeaponBPTable
// (Event, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FString                 BPTableName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoadedClassManager_BP_C::LoadWeaponBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.LoadWeaponBPTable");

	ULoadedClassManager_BP_C_LoadWeaponBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap
// ()

void ULoadedClassManager_BP_C::InitBPTableMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap");

	ULoadedClassManager_BP_C_InitBPTableMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap_Mod
// ()

void ULoadedClassManager_BP_C::InitBPTableMap_Mod()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.InitBPTableMap_Mod");

	ULoadedClassManager_BP_C_InitBPTableMap_Mod_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function LoadedClassManager_BP.LoadedClassManager_BP_C.ExecuteUbergraph_LoadedClassManager_BP
// (Net, NetReliable, Event, NetMulticast, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadedClassManager_BP_C::ExecuteUbergraph_LoadedClassManager_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LoadedClassManager_BP.LoadedClassManager_BP_C.ExecuteUbergraph_LoadedClassManager_BP");

	ULoadedClassManager_BP_C_ExecuteUbergraph_LoadedClassManager_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

