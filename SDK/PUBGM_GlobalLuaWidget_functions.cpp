// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 TaskId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_NewLevelTask_type BP_STRUCT_NewLevelTask_type    (Parm, OutParm)

void UGlobalLuaWidget_C::GetNewLevelTaskData(const struct FString& TaskId, bool* Has, struct FBP_STRUCT_NewLevelTask_type* BP_STRUCT_NewLevelTask_type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData");

	UGlobalLuaWidget_C_GetNewLevelTaskData_Params params;
	params.TaskId = TaskId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
	if (BP_STRUCT_NewLevelTask_type != nullptr)
		*BP_STRUCT_NewLevelTask_type = params.BP_STRUCT_NewLevelTask_type;
}


}

