// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform
// ()

void UCreativeAbilitySystemComponent::UpdateGhostBuildingTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform");

	UCreativeAbilitySystemComponent_UpdateGhostBuildingTransform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform
// ()
// Parameters:
// struct FTransform              SnapTargetTransform            (Parm, OutParm, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetSnapTargetTransform(struct FTransform* SnapTargetTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform");

	UCreativeAbilitySystemComponent_SetSnapTargetTransform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SnapTargetTransform != nullptr)
		*SnapTargetTransform = params.SnapTargetTransform;
}


// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale
// ()
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformScale(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformScale_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation
// ()
// Parameters:
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformRotation_Params params;
	params.Roll = Roll;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation
// ()
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformLocation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.ReceiveGetSnapTargetTransform
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeAbilitySystemComponent::ReceiveGetSnapTargetTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.ReceiveGetSnapTargetTransform");

	UCreativeAbilitySystemComponent_ReceiveGetSnapTargetTransform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeAbilitySystemComponent::GetSnappedLocAxis(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis");

	UCreativeAbilitySystemComponent_GetSnappedLocAxis_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeAbilitySystemComponent::GetSetupBuildingID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID");

	UCreativeAbilitySystemComponent_GetSetupBuildingID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeAbilitySystemComponent::GetGhostBuildingTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform");

	UCreativeAbilitySystemComponent_GetGhostBuildingTransform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeAbilitySystemComponent::GetBuildingInstanceID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID");

	UCreativeAbilitySystemComponent_GetBuildingInstanceID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs
// ()

void UCreativeModeActorInteractionComponent::SortCanEditParamsObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs");

	UCreativeModeActorInteractionComponent_SortCanEditParamsObjs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObj
// ()
// Parameters:
// class UObject*                 uTargetActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeActorInteractionComponent::SetCrossHairTransformObj(class UObject* uTargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObj");

	UCreativeModeActorInteractionComponent_SetCrossHairTransformObj_Params params;
	params.uTargetActor = uTargetActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObj
// ()
// Parameters:
// class UObject*                 uTargetActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeActorInteractionComponent::SetCrossHairSelectedObj(class UObject* uTargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObj");

	UCreativeModeActorInteractionComponent_SetCrossHairSelectedObj_Params params;
	params.uTargetActor = uTargetActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetSectorCheckIntervalCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg");

	UCreativeModeActorInteractionComponent_GetSectorCheckIntervalCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetSectorCheckDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance");

	UCreativeModeActorInteractionComponent_GetSectorCheckDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetSectorCheckAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle");

	UCreativeModeActorInteractionComponent_GetSectorCheckAngle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetPlayerHalfHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight");

	UCreativeModeActorInteractionComponent_GetPlayerHalfHeight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetCrossHairCheckIntervalCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairCheckIntervalCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetCrossHairCheckDistanceCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairCheckDistanceCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs
// ()

void UCreativeModeActorInteractionComponent::ClearCanEditParamsObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs");

	UCreativeModeActorInteractionComponent_ClearCanEditParamsObjs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject
// ()
// Parameters:
// class UObject*                 uCanEditObject                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeActorInteractionComponent::AddCanEditObject(class UObject* uCanEditObject, float Angle, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject");

	UCreativeModeActorInteractionComponent_AddCanEditObject_Params params;
	params.uCanEditObject = uCanEditObject;
	params.Angle = Angle;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeAssetManager.ReceiveOnGameStateBeginPlay
// ()
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeAssetManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeAssetManager.ReceiveOnGameStateBeginPlay");

	UCreativeModeAssetManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeAssetManager.ReceiveInitAssetStaticMeshConfig
// ()
// Parameters:
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeAssetManager::ReceiveInitAssetStaticMeshConfig(int AssetId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeAssetManager.ReceiveInitAssetStaticMeshConfig");

	UCreativeModeAssetManager_ReceiveInitAssetStaticMeshConfig_Params params;
	params.AssetId = AssetId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeAssetManager.OnGameStateBeginPlay
// ()
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeAssetManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeAssetManager.OnGameStateBeginPlay");

	UCreativeModeAssetManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeAssetManager.GetAssetLandGroundType
// ()
// Parameters:
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeAssetManager::GetAssetLandGroundType(int AssetId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeAssetManager.GetAssetLandGroundType");

	UCreativeModeAssetManager_GetAssetLandGroundType_Params params;
	params.AssetId = AssetId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeAssetManager.Get
// ()
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeAssetManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeAssetManager* UCreativeModeAssetManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeAssetManager.Get");

	UCreativeModeAssetManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeAssetManager.AddAssetStaticMeshConfig
// ()
// Parameters:
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FCreativeObjectStaticMeshConfigInfo ObjectStaticMeshConfigInfo     (ConstParm, Parm, OutParm, ReferenceParm)

void UCreativeModeAssetManager::AddAssetStaticMeshConfig(int AssetId, const struct FCreativeObjectStaticMeshConfigInfo& ObjectStaticMeshConfigInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeAssetManager.AddAssetStaticMeshConfig");

	UCreativeModeAssetManager_AddAssetStaticMeshConfig_Params params;
	params.AssetId = AssetId;
	params.ObjectStaticMeshConfigInfo = ObjectStaticMeshConfigInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum
// ()
// Parameters:
// class UBackpackComponent*      BackpackComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            resID                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            AddNum                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBackpackUtils::ResCanAddToBackpackNum(class UBackpackComponent* BackpackComponent, int resID, int AddNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum");

	UCreativeModeBackpackUtils_ResCanAddToBackpackNum_Params params;
	params.BackpackComponent = BackpackComponent;
	params.resID = resID;
	params.AddNum = AddNum;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility
// ()
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EComponentMobility> NewMobility                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetStaticMeshMobility(class UStaticMeshComponent* StaticMeshComponent, TEnumAsByte<EComponentMobility> NewMobility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility");

	UCreativeModeBlueprintLibrary_SetStaticMeshMobility_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.NewMobility = NewMobility;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetSpeedOverLimit(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit");

	UCreativeModeBlueprintLibrary_SetSpeedOverLimit_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::SetInstanceValue(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue");

	UCreativeModeBlueprintLibrary_SetInstanceValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetEditorActorTransform
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FTransform              NewTransform                   (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::SetEditorActorTransform(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FTransform& NewTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetEditorActorTransform");

	UCreativeModeBlueprintLibrary_SetEditorActorTransform_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;
	params.NewTransform = NewTransform;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile
// ()
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::SaveAssetStringToFile(const struct FString& String, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile");

	UCreativeModeBlueprintLibrary_SaveAssetStringToFile_Params params;
	params.String = String;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::ProjectSavedDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir");

	UCreativeModeBlueprintLibrary_ProjectSavedDir_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         InPoints                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 SampleSurfaceNormal            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutRectCenter                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRectRotation                (Parm, OutParm, IsPlainOldData)
// float                          OutRectLengthX                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutRectLengthY                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bDebugDraw                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    PolyVertIndices                (Parm, OutParm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::MinAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InPoints, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FRotator* OutRectRotation, float* OutRectLengthX, float* OutRectLengthY, struct FVector* OutRectCenter, TArray<int>* PolyVertIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle");

	UCreativeModeBlueprintLibrary_MinAreaRectangle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InPoints = InPoints;
	params.SampleSurfaceNormal = SampleSurfaceNormal;
	params.bDebugDraw = bDebugDraw;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRectCenter != nullptr)
		*OutRectCenter = params.OutRectCenter;
	if (OutRectRotation != nullptr)
		*OutRectRotation = params.OutRectRotation;
	if (OutRectLengthX != nullptr)
		*OutRectLengthX = params.OutRectLengthX;
	if (OutRectLengthY != nullptr)
		*OutRectLengthY = params.OutRectLengthY;
	if (PolyVertIndices != nullptr)
		*PolyVertIndices = params.PolyVertIndices;
}


// Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString
// ()
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::LoadAssetFileToString(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString");

	UCreativeModeBlueprintLibrary_LoadAssetFileToString_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection
// ()
// Parameters:
// class ACharacter*              Charcter                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsIgnore                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::IgnoreClientMovementErrorChecksAndCorrection(class ACharacter* Charcter, bool bIsIgnore)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection");

	UCreativeModeBlueprintLibrary_IgnoreClientMovementErrorChecksAndCorrection_Params params;
	params.Charcter = Charcter;
	params.bIsIgnore = bIsIgnore;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.GetObjectMap
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, class UObject*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, class UObject*> UCreativeModeBlueprintLibrary::GetObjectMap(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetObjectMap");

	UCreativeModeBlueprintLibrary_GetObjectMap_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString
// ()
// Parameters:
// ECreativeModeGameType          GameType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetGameTypeAsString(ECreativeModeGameType GameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString");

	UCreativeModeBlueprintLibrary_GetGameTypeAsString_Params params;
	params.GameType = GameType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag
// ()
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)
// struct FString                 IgnoreTag                      (Parm, ZeroConstructor)
// struct FString                 IncludeTag                     (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::GetActorMeshBoundsByTag(class AActor* Actor, const struct FString& IgnoreTag, const struct FString& IncludeTag, struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag");

	UCreativeModeBlueprintLibrary_GetActorMeshBoundsByTag_Params params;
	params.Actor = Actor;
	params.IgnoreTag = IgnoreTag;
	params.IncludeTag = IncludeTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Creative.CreativeModeBlueprintLibrary.GenerateGuid
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GenerateGuid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GenerateGuid");

	UCreativeModeBlueprintLibrary_GenerateGuid_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.DrawLine
// ()
// Parameters:
// struct FPaintContext           InContext                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector2D               Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FLinearColor            LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::DrawLine(const struct FPaintContext& InContext, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& LineColor, int LayerOffset, float LineThickness, bool bAntiAlias)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawLine");

	UCreativeModeBlueprintLibrary_DrawLine_Params params;
	params.InContext = InContext;
	params.Start = Start;
	params.End = End;
	params.LineColor = LineColor;
	params.LayerOffset = LayerOffset;
	params.LineThickness = LineThickness;
	params.bAntiAlias = bAntiAlias;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DrawGrids
// ()
// Parameters:
// struct FPaintContext           InContext                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellCountX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            CellCountY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::DrawGrids(const struct FPaintContext& InContext, float CellSize, int CellCountX, int CellCountY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, int LayerOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawGrids");

	UCreativeModeBlueprintLibrary_DrawGrids_Params params;
	params.InContext = InContext;
	params.CellSize = CellSize;
	params.CellCountX = CellCountX;
	params.CellCountY = CellCountY;
	params.PosOffsetX = PosOffsetX;
	params.PosOffsetY = PosOffsetY;
	params.LineColor = LineColor;
	params.LineThickness = LineThickness;
	params.bAntiAlias = bAntiAlias;
	params.LayerOffset = LayerOffset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DrawGridCell
// ()
// Parameters:
// struct FPaintContext           InContext                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellIndexX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            CellIndexY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::DrawGridCell(const struct FPaintContext& InContext, float CellSize, int CellIndexX, int CellIndexY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, int LayerOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawGridCell");

	UCreativeModeBlueprintLibrary_DrawGridCell_Params params;
	params.InContext = InContext;
	params.CellSize = CellSize;
	params.CellIndexX = CellIndexX;
	params.CellIndexY = CellIndexY;
	params.PosOffsetX = PosOffsetX;
	params.PosOffsetY = PosOffsetY;
	params.LineColor = LineColor;
	params.LayerOffset = LayerOffset;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DestroyInstance
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::DestroyInstance(class UObject* WorldContextObject, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DestroyInstance");

	UCreativeModeBlueprintLibrary_DestroyInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxPos                         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, IsPlainOldData)
// TArray<int>                    ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  ActorClassFilter               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors");

	UCreativeModeBlueprintLibrary_BoxOverlapActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.ObjectTypes = ObjectTypes;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}


// Function Creative.CreativeModeCheatManager.SetInstanceValue
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UCreativeModeCheatManager::SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeCheatManager.SetInstanceValue");

	UCreativeModeCheatManager_SetInstanceValue_Params params;
	params.InstanceID = InstanceID;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeCheatManager.SetCurrentGameType
// ()
// Parameters:
// ECreativeModeGameType          NewGameType                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeCheatManager::SetCurrentGameType(ECreativeModeGameType NewGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeCheatManager.SetCurrentGameType");

	UCreativeModeCheatManager_SetCurrentGameType_Params params;
	params.NewGameType = NewGameType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeCheatManager.DestroyInstance
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeModeCheatManager::DestroyInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeCheatManager.DestroyInstance");

	UCreativeModeCheatManager_DestroyInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent
// ()
// Parameters:
// class UCreativeModeGameStateBaseComponent* NewGameStateComponent          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameModeBaseComponent::SetGameStateComponent(class UCreativeModeGameStateBaseComponent* NewGameStateComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent");

	UCreativeModeGameModeBaseComponent_SetGameStateComponent_Params params;
	params.NewGameStateComponent = NewGameStateComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents
// ()

void UCreativeModeGameModeBaseComponent::ReceivePostInitializeComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents");

	UCreativeModeGameModeBaseComponent_ReceivePostInitializeComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameModeBaseComponent.GetGameType
// ()
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType UCreativeModeGameModeBaseComponent::GetGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.GetGameType");

	UCreativeModeGameModeBaseComponent_GetGameType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeBaseComponent.GetGameMode
// ()
// Parameters:
// class ACreativeModeGameMode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativeModeGameMode* UCreativeModeGameModeBaseComponent::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.GetGameMode");

	UCreativeModeGameModeBaseComponent_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride
// ()
// Parameters:
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IncomingName                   (Parm, ZeroConstructor)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeModeGameModeBaseComponent::FindPlayerStartOverride(class AController* Player, const struct FString& IncomingName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride");

	UCreativeModeGameModeBaseComponent_FindPlayerStartOverride_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.UnregisterLiteComponent
// ()
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.UnregisterLiteComponent");

	ACreativeModeEditorObject_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ShowSelectedEffect
// ()
// Parameters:
// bool                           ShowEff                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutlineColor                   (Parm, IsPlainOldData)
// float                          OutlineThickness               (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::ShowSelectedEffect(bool ShowEff, const struct FLinearColor& OutlineColor, float OutlineThickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ShowSelectedEffect");

	ACreativeModeEditorObject_ShowSelectedEffect_Params params;
	params.ShowEff = ShowEff;
	params.OutlineColor = OutlineColor;
	params.OutlineThickness = OutlineThickness;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable
// ()
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable");

	ACreativeModeEditorObject_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.SetActorState
// ()
// Parameters:
// ECreativeModeActorState        NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::SetActorState(ECreativeModeActorState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetActorState");

	ACreativeModeEditorObject_SetActorState_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.RegisterLiteComponent
// ()
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.RegisterLiteComponent");

	ACreativeModeEditorObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay
// ()

void ACreativeModeEditorObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay");

	ACreativeModeEditorObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent
// ()

void ACreativeModeEditorObject::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent");

	ACreativeModeEditorObject_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.OnRepActorStateOverride
// ()
// Parameters:
// ECreativeModeActorState        NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::OnRepActorStateOverride(ECreativeModeActorState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.OnRepActorStateOverride");

	ACreativeModeEditorObject_OnRepActorStateOverride_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.OnRep_ActorState
// ()
// Parameters:
// ECreativeModeActorState        LastState                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::OnRep_ActorState(ECreativeModeActorState LastState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.OnRep_ActorState");

	ACreativeModeEditorObject_OnRep_ActorState_Params params;
	params.LastState = LastState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.IsDedicatedServer
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeEditorObject::IsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.IsDedicatedServer");

	ACreativeModeEditorObject_IsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.HasAuthority
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeEditorObject::HasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.HasAuthority");

	ACreativeModeEditorObject_HasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.GetActorState
// ()
// Parameters:
// ECreativeModeActorState        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorState ACreativeModeEditorObject::GetActorState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetActorState");

	ACreativeModeEditorObject_GetActorState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.FindLiteComponentByClass
// ()
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class ULiteComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiteComponent* ACreativeModeEditorObject::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.FindLiteComponentByClass");

	ACreativeModeEditorObject_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.CanEditParameters
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeEditorObject::CanEditParameters()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.CanEditParameters");

	ACreativeModeEditorObject_CanEditParameters_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents
// ()

void UCreativeModeGameStateBaseComponent::ReceivePostInitializeComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents");

	UCreativeModeGameStateBaseComponent_ReceivePostInitializeComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateBaseComponent.GetPlayState
// ()
// Parameters:
// ECreativeModePlayState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModePlayState UCreativeModeGameStateBaseComponent::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetPlayState");

	UCreativeModeGameStateBaseComponent_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameStateBaseComponent.GetGameType
// ()
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType UCreativeModeGameStateBaseComponent::GetGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetGameType");

	UCreativeModeGameStateBaseComponent_GetGameType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameStateBaseComponent.GetGameState
// ()
// Parameters:
// class ACreativeModeGameState*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativeModeGameState* UCreativeModeGameStateBaseComponent::GetGameState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetGameState");

	UCreativeModeGameStateBaseComponent_GetGameState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.UnregisterLiteComponent
// ()
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.UnregisterLiteComponent");

	ACreativeModeGameMode_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable
// ()
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable");

	ACreativeModeGameMode_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.SetItemGenerate
// ()
// Parameters:
// bool                           bIsOpen                        (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::SetItemGenerate(bool bIsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetItemGenerate");

	ACreativeModeGameMode_SetItemGenerate_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.SetCurrentGameType
// ()
// Parameters:
// ECreativeModeGameType          NewGameType                    (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::SetCurrentGameType(ECreativeModeGameType NewGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetCurrentGameType");

	ACreativeModeGameMode_SetCurrentGameType_Params params;
	params.NewGameType = NewGameType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.RegisterLiteComponent
// ()
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.RegisterLiteComponent");

	ACreativeModeGameMode_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent
// ()

void ACreativeModeGameMode::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent");

	ACreativeModeGameMode_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.GetCurrentModeComponent
// ()
// Parameters:
// class UCreativeModeGameModeBaseComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeGameModeBaseComponent* ACreativeModeGameMode::GetCurrentModeComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCurrentModeComponent");

	ACreativeModeGameMode_GetCurrentModeComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACreativeModeGameMode::GetCreativeModeRealTeamNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum");

	ACreativeModeGameMode_GetCreativeModeRealTeamNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs
// ()
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> ACreativeModeGameMode::GetCreativeModeRealTeamIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs");

	ACreativeModeGameMode_GetCreativeModeRealTeamIDs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.FindLiteComponentByClass
// ()
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class ULiteComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiteComponent* ACreativeModeGameMode::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.FindLiteComponentByClass");

	ACreativeModeGameMode_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart
// ()
// Parameters:
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IncomingName                   (Parm, ZeroConstructor)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ACreativeModeGameMode::CreativeModeFindPlayerStart(class AController* Player, const struct FString& IncomingName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart");

	ACreativeModeGameMode_CreativeModeFindPlayerStart_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction
// ()

void UCreativeModeGameModeComponent::ReceiveCallPlayStateFunction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction");

	UCreativeModeGameModeComponent_ReceiveCallPlayStateFunction_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.UnregisterLiteComponent
// ()
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameObject::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.UnregisterLiteComponent");

	UCreativeModeGameObject_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.RegisterLiteComponent
// ()
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.RegisterLiteComponent");

	UCreativeModeGameObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReceivePostBeginPlay
// ()

void UCreativeModeGameObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceivePostBeginPlay");

	UCreativeModeGameObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReceiveEndPlay
// ()

void UCreativeModeGameObject::ReceiveEndPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveEndPlay");

	UCreativeModeGameObject_ReceiveEndPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReceiveBeginPlay
// ()

void UCreativeModeGameObject::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveBeginPlay");

	UCreativeModeGameObject_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.IsDedicatedServer
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGameObject::IsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.IsDedicatedServer");

	UCreativeModeGameObject_IsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameObject.HasAuthority
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGameObject::HasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.HasAuthority");

	UCreativeModeGameObject_HasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameParameterManager.RemoveGameParameter
// ()
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)

void UCreativeModeGameParameterManager::RemoveGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.RemoveGameParameter");

	UCreativeModeGameParameterManager_RemoveGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameParameterManager.ReceiveOnGameStateBeginPlay
// ()
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameParameterManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.ReceiveOnGameStateBeginPlay");

	UCreativeModeGameParameterManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameParameterManager.OnReceivePreGameParameterRemove
// ()
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (Parm, ZeroConstructor)

void UCreativeModeGameParameterManager::OnReceivePreGameParameterRemove(const struct FString& ParameterKey, const struct FString& TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.OnReceivePreGameParameterRemove");

	UCreativeModeGameParameterManager_OnReceivePreGameParameterRemove_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameParameterManager.OnReceivePostGameParameterChange
// ()
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)

void UCreativeModeGameParameterManager::OnReceivePostGameParameterChange(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.OnReceivePostGameParameterChange");

	UCreativeModeGameParameterManager_OnReceivePostGameParameterChange_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Desc = Desc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameParameterManager.OnReceivePostGameParameterAdd
// ()
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)

void UCreativeModeGameParameterManager::OnReceivePostGameParameterAdd(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.OnReceivePostGameParameterAdd");

	UCreativeModeGameParameterManager_OnReceivePostGameParameterAdd_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Desc = Desc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameParameterManager.OnGameStateBeginPlay
// ()
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameParameterManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.OnGameStateBeginPlay");

	UCreativeModeGameParameterManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameParameterManager.GetSingleSerializeNum
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeGameParameterManager::GetSingleSerializeNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.GetSingleSerializeNum");

	UCreativeModeGameParameterManager_GetSingleSerializeNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameParameterManager.GetGameParameterDesc
// ()
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeGameParameterManager::GetGameParameterDesc(const struct FString& ParameterKey, const struct FString& TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.GetGameParameterDesc");

	UCreativeModeGameParameterManager_GetGameParameterDesc_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameParameterManager.Get
// ()
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeGameParameterManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeGameParameterManager* UCreativeModeGameParameterManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.Get");

	UCreativeModeGameParameterManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameParameterManager.ChangeGameParameter
// ()
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)

void UCreativeModeGameParameterManager::ChangeGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.ChangeGameParameter");

	UCreativeModeGameParameterManager_ChangeGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Desc = Desc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameParameterManager.AddGameParameter
// ()
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)

void UCreativeModeGameParameterManager::AddGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameParameterManager.AddGameParameter");

	UCreativeModeGameParameterManager_AddGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Desc = Desc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.UnregisterLiteComponent
// ()
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.UnregisterLiteComponent");

	ACreativeModeGameState_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.SetLiteComponentTickEnable
// ()
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetLiteComponentTickEnable");

	ACreativeModeGameState_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.SetCurrentGameType
// ()
// Parameters:
// ECreativeModeGameType          NewGameType                    (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::SetCurrentGameType(ECreativeModeGameType NewGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetCurrentGameType");

	ACreativeModeGameState_SetCurrentGameType_Params params;
	params.NewGameType = NewGameType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.RegisterLiteComponent
// ()
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.RegisterLiteComponent");

	ACreativeModeGameState_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent
// ()

void ACreativeModeGameState::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent");

	ACreativeModeGameState_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent
// ()
// Parameters:
// class UCreativeModeGameStateBaseComponent* LastComponent                  (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnRep_CurrentStateComponent(class UCreativeModeGameStateBaseComponent* LastComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent");

	ACreativeModeGameState_OnRep_CurrentStateComponent_Params params;
	params.LastComponent = LastComponent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.GetPlayState
// ()
// Parameters:
// ECreativeModePlayState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModePlayState ACreativeModeGameState::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetPlayState");

	ACreativeModeGameState_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetIsEditorMode
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::GetIsEditorMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetIsEditorMode");

	ACreativeModeGameState_GetIsEditorMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetIsCreative
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::GetIsCreative()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetIsCreative");

	ACreativeModeGameState_GetIsCreative_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurrentStateComponent
// ()
// Parameters:
// class UCreativeModeGameStateBaseComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeGameStateBaseComponent* ACreativeModeGameState::GetCurrentStateComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurrentStateComponent");

	ACreativeModeGameState_GetCurrentStateComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurrentGameType
// ()
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType ACreativeModeGameState::GetCurrentGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurrentGameType");

	ACreativeModeGameState_GetCurrentGameType_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.FindLiteComponentByClass
// ()
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class ULiteComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiteComponent* ACreativeModeGameState::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.FindLiteComponentByClass");

	ACreativeModeGameState_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.ClearAndReImportInstance
// ()

void ACreativeModeGameState::ClearAndReImportInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ClearAndReImportInstance");

	ACreativeModeGameState_ClearAndReImportInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.SetPlayState
// ()
// Parameters:
// ECreativeModePlayState         newPlayState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameStateComponent::SetPlayState(ECreativeModePlayState newPlayState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.SetPlayState");

	UCreativeModeGameStateComponent_SetPlayState_Params params;
	params.newPlayState = newPlayState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject
// ()

void UCreativeModeGameStateComponent::OnRep_RuntimePlayerBattleDataObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject");

	UCreativeModeGameStateComponent_OnRep_RuntimePlayerBattleDataObject_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent
// ()

void UCreativeModeGameStateComponent::OnRep_IntegralMechanismComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent");

	UCreativeModeGameStateComponent_OnRep_IntegralMechanismComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState
// ()

void UCreativeModeGameStateComponent::OnRep_CurPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState");

	UCreativeModeGameStateComponent_OnRep_CurPlayState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.GetPlayState
// ()
// Parameters:
// ECreativeModePlayState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModePlayState UCreativeModeGameStateComponent::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.GetPlayState");

	UCreativeModeGameStateComponent_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.UpdateBatchActorInstances
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGridLevelsManager::UpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.UpdateBatchActorInstances");

	UCreativeModeGridLevelsManager_UpdateBatchActorInstances_Params params;
	params.GridName = GridName;
	params.AssetId = AssetId;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGridLevelsManager.UnLoadGridLevelsBatchActor
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeModeGridLevelsManager::UnLoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.UnLoadGridLevelsBatchActor");

	UCreativeModeGridLevelsManager_UnLoadGridLevelsBatchActor_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGridLevelsManager.RemoveObject
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::RemoveObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.RemoveObject");

	UCreativeModeGridLevelsManager_RemoveObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGridLevelsManager::ReceiveDelayUpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances");

	UCreativeModeGridLevelsManager_ReceiveDelayUpdateBatchActorInstances_Params params;
	params.GridName = GridName;
	params.AssetId = AssetId;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGridLevelsManager.ReceiveClearAllData
// ()

void UCreativeModeGridLevelsManager::ReceiveClearAllData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.ReceiveClearAllData");

	UCreativeModeGridLevelsManager_ReceiveClearAllData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGridLevelsManager.ObjectAddToGridCellMap
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              Index                          (ConstParm, Parm, IsPlainOldData)
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)

void UCreativeModeGridLevelsManager::ObjectAddToGridCellMap(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.ObjectAddToGridCellMap");

	UCreativeModeGridLevelsManager_ObjectAddToGridCellMap_Params params;
	params.GridName = GridName;
	params.Index = Index;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGridLevelsManager.LoadGridLevelsBatchActor
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeModeGridLevelsManager::LoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.LoadGridLevelsBatchActor");

	UCreativeModeGridLevelsManager_LoadGridLevelsBatchActor_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGridLevelsManager.IsCreativeEidtMode
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::IsCreativeEidtMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.IsCreativeEidtMode");

	UCreativeModeGridLevelsManager_IsCreativeEidtMode_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GridCellMapRemoveObject
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              Index                          (ConstParm, Parm, IsPlainOldData)
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)

void UCreativeModeGridLevelsManager::GridCellMapRemoveObject(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GridCellMapRemoveObject");

	UCreativeModeGridLevelsManager_GridCellMapRemoveObject_Params params;
	params.GridName = GridName;
	params.Index = Index;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGridLevelsManager.GetStaticMeshBatchActorPath
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeGridLevelsManager::GetStaticMeshBatchActorPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetStaticMeshBatchActorPath");

	UCreativeModeGridLevelsManager_GetStaticMeshBatchActorPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetRelieveBatchDistance
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeGridLevelsManager::GetRelieveBatchDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetRelieveBatchDistance");

	UCreativeModeGridLevelsManager_GetRelieveBatchDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetReBatchDistance
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeGridLevelsManager::GetReBatchDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetReBatchDistance");

	UCreativeModeGridLevelsManager_GetReBatchDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetOnCellIndex
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntVector UCreativeModeGridLevelsManager::GetOnCellIndex(const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetOnCellIndex");

	UCreativeModeGridLevelsManager_GetOnCellIndex_Params params;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetObjectTransform
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeModeGridLevelsManager::GetObjectTransform(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetObjectTransform");

	UCreativeModeGridLevelsManager_GetObjectTransform_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetObjectStreamingType
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorStreamingType UCreativeModeGridLevelsManager::GetObjectStreamingType(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetObjectStreamingType");

	UCreativeModeGridLevelsManager_GetObjectStreamingType_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetObjectRuntimeGrid
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeGridLevelsManager::GetObjectRuntimeGrid(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetObjectRuntimeGrid");

	UCreativeModeGridLevelsManager_GetObjectRuntimeGrid_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetObjectMaterialID
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeGridLevelsManager::GetObjectMaterialID(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetObjectMaterialID");

	UCreativeModeGridLevelsManager_GetObjectMaterialID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetObjectIsPrefab
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::GetObjectIsPrefab(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetObjectIsPrefab");

	UCreativeModeGridLevelsManager_GetObjectIsPrefab_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetObjectAssetID
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeGridLevelsManager::GetObjectAssetID(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetObjectAssetID");

	UCreativeModeGridLevelsManager_GetObjectAssetID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetGridLoadingRange
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeGridLevelsManager::GetGridLoadingRange(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetGridLoadingRange");

	UCreativeModeGridLevelsManager_GetGridLoadingRange_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetGridList
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeModeGridLevelsManager::GetGridList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetGridList");

	UCreativeModeGridLevelsManager_GetGridList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetDefaultGridName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeGridLevelsManager::GetDefaultGridName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetDefaultGridName");

	UCreativeModeGridLevelsManager_GetDefaultGridName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetCellWidthHeight
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UCreativeModeGridLevelsManager::GetCellWidthHeight(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetCellWidthHeight");

	UCreativeModeGridLevelsManager_GetCellWidthHeight_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetCellCenterLocation
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCreativeModeGridLevelsManager::GetCellCenterLocation(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetCellCenterLocation");

	UCreativeModeGridLevelsManager_GetCellCenterLocation_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.GetAxisIndex
// ()
// Parameters:
// float                          pos                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlockLenght                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeGridLevelsManager::GetAxisIndex(float pos, float BlockLenght)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.GetAxisIndex");

	UCreativeModeGridLevelsManager_GetAxisIndex_Params params;
	params.pos = pos;
	params.BlockLenght = BlockLenght;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.Get
// ()
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeGridLevelsManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeGridLevelsManager* UCreativeModeGridLevelsManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.Get");

	UCreativeModeGridLevelsManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.CheckObjectCanBatch
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::CheckObjectCanBatch(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.CheckObjectCanBatch");

	UCreativeModeGridLevelsManager_CheckObjectCanBatch_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.CheckObjectBeRelieveBatch
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::CheckObjectBeRelieveBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.CheckObjectBeRelieveBatch");

	UCreativeModeGridLevelsManager_CheckObjectBeRelieveBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.CheckObjectBeBatch
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::CheckObjectBeBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.CheckObjectBeBatch");

	UCreativeModeGridLevelsManager_CheckObjectBeBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.CheckAndRemoveObjectForBatchData
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::CheckAndRemoveObjectForBatchData(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.CheckAndRemoveObjectForBatchData");

	UCreativeModeGridLevelsManager_CheckAndRemoveObjectForBatchData_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.CheckAndAddObjectToBatchData
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::CheckAndAddObjectToBatchData(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.CheckAndAddObjectToBatchData");

	UCreativeModeGridLevelsManager_CheckAndAddObjectToBatchData_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.ChangeObjectTransform
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::ChangeObjectTransform(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.ChangeObjectTransform");

	UCreativeModeGridLevelsManager_ChangeObjectTransform_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.ChangeObjectStreamingType
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType NewStremaingType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::ChangeObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.ChangeObjectStreamingType");

	UCreativeModeGridLevelsManager_ChangeObjectStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.NewStremaingType = NewStremaingType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.ChangeObjectMaterialId
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// int                            MaterialID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::ChangeObjectMaterialId(const struct FString& InstanceID, int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.ChangeObjectMaterialId");

	UCreativeModeGridLevelsManager_ChangeObjectMaterialId_Params params;
	params.InstanceID = InstanceID;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGridLevelsManager.AddObjectToGridLevels
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGridLevelsManager::AddObjectToGridLevels(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGridLevelsManager.AddObjectToGridLevels");

	UCreativeModeGridLevelsManager_AddObjectToGridLevels_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.SetInstanceValue
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeInstanceManager::SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.SetInstanceValue");

	UCreativeModeInstanceManager_SetInstanceValue_Params params;
	params.InstanceID = InstanceID;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.SetInstanceTransform
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FTransform              Transform                      (Parm, IsPlainOldData)

void UCreativeModeInstanceManager::SetInstanceTransform(const struct FString& InstanceID, const struct FTransform& Transform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.SetInstanceTransform");

	UCreativeModeInstanceManager_SetInstanceTransform_Params params;
	params.InstanceID = InstanceID;
	params.Transform = Transform;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.RemoveInstance
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeModeInstanceManager::RemoveInstance(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.RemoveInstance");

	UCreativeModeInstanceManager_RemoveInstance_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.ReceiveOnGameStateBeginPlay
// ()
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeInstanceManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.ReceiveOnGameStateBeginPlay");

	UCreativeModeInstanceManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.OnReceivePreInstanceRemove
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeModeInstanceManager::OnReceivePreInstanceRemove(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.OnReceivePreInstanceRemove");

	UCreativeModeInstanceManager_OnReceivePreInstanceRemove_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.OnReceivePostInstanceChange
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeModeInstanceManager::OnReceivePostInstanceChange(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.OnReceivePostInstanceChange");

	UCreativeModeInstanceManager_OnReceivePostInstanceChange_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.OnReceivePostInstanceAdd
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeModeInstanceManager::OnReceivePostInstanceAdd(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.OnReceivePostInstanceAdd");

	UCreativeModeInstanceManager_OnReceivePostInstanceAdd_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.OnReadyToAddInstance
// ()

void UCreativeModeInstanceManager::OnReadyToAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.OnReadyToAddInstance");

	UCreativeModeInstanceManager_OnReadyToAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.OnGameTypeChanged
// ()
// Parameters:
// unsigned char                  LastGameType                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentGameType                (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeInstanceManager::OnGameTypeChanged(unsigned char LastGameType, unsigned char CurrentGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.OnGameTypeChanged");

	UCreativeModeInstanceManager_OnGameTypeChanged_Params params;
	params.LastGameType = LastGameType;
	params.CurrentGameType = CurrentGameType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.OnGameStateBeginPlay
// ()
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeInstanceManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.OnGameStateBeginPlay");

	UCreativeModeInstanceManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.HasReadyToAddInstance
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeInstanceManager::HasReadyToAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.HasReadyToAddInstance");

	UCreativeModeInstanceManager_HasReadyToAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.GetSingleSerializeNum
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeInstanceManager::GetSingleSerializeNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.GetSingleSerializeNum");

	UCreativeModeInstanceManager_GetSingleSerializeNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.GetObjectStreamingType
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorStreamingType UCreativeModeInstanceManager::GetObjectStreamingType(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.GetObjectStreamingType");

	UCreativeModeInstanceManager_GetObjectStreamingType_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.GetObjectRuntimeGrid
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeInstanceManager::GetObjectRuntimeGrid(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.GetObjectRuntimeGrid");

	UCreativeModeInstanceManager_GetObjectRuntimeGrid_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.GetObjectAssetPath
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeInstanceManager::GetObjectAssetPath(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.GetObjectAssetPath");

	UCreativeModeInstanceManager_GetObjectAssetPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.GetInstanceTransform
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeModeInstanceManager::GetInstanceTransform(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.GetInstanceTransform");

	UCreativeModeInstanceManager_GetInstanceTransform_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.GetInstanceIsPrefab
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeInstanceManager::GetInstanceIsPrefab(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.GetInstanceIsPrefab");

	UCreativeModeInstanceManager_GetInstanceIsPrefab_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.GetInstanceAssetID
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeInstanceManager::GetInstanceAssetID(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.GetInstanceAssetID");

	UCreativeModeInstanceManager_GetInstanceAssetID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.Get
// ()
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeInstanceManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeInstanceManager* UCreativeModeInstanceManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.Get");

	UCreativeModeInstanceManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.DestroyInstance
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeInstanceManager::DestroyInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.DestroyInstance");

	UCreativeModeInstanceManager_DestroyInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeInstanceManager.ChangeInstance
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeModeInstanceManager::ChangeInstance(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.ChangeInstance");

	UCreativeModeInstanceManager_ChangeInstance_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInstanceManager.AddInstance
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeModeInstanceManager::AddInstance(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInstanceManager.AddInstance");

	UCreativeModeInstanceManager_AddInstance_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral
// ()
// Parameters:
// struct FString                 UId                            (Parm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            curIntegral                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            curStageIntegral               (Parm, ZeroConstructor, IsPlainOldData)
// int                            integralAddSeq                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntegralMechanismComponent::SetPlayerIntegral(const struct FString& UId, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral");

	UCreativeModeIntegralMechanismComponent_SetPlayerIntegral_Params params;
	params.UId = UId;
	params.TeamID = TeamID;
	params.curIntegral = curIntegral;
	params.curStageIntegral = curStageIntegral;
	params.integralAddSeq = integralAddSeq;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride
// ()

void UCreativeModeIntegralMechanismComponent::OnRepPlayerIntegralsOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride");

	UCreativeModeIntegralMechanismComponent_OnRepPlayerIntegralsOverride_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals
// ()

void UCreativeModeIntegralMechanismComponent::OnRep_PlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals");

	UCreativeModeIntegralMechanismComponent_OnRep_PlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals
// ()

void UCreativeModeIntegralMechanismComponent::ClearPlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals");

	UCreativeModeIntegralMechanismComponent_ClearPlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral
// ()
// Parameters:
// struct FString                 UId                            (Parm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            curIntegral                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            curStageIntegral               (Parm, ZeroConstructor, IsPlainOldData)
// int                            integralAddSeq                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntegralMechanismLiteComponent::SetPlayerIntegral(const struct FString& UId, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral");

	UCreativeModeIntegralMechanismLiteComponent_SetPlayerIntegral_Params params;
	params.UId = UId;
	params.TeamID = TeamID;
	params.curIntegral = curIntegral;
	params.curStageIntegral = curStageIntegral;
	params.integralAddSeq = integralAddSeq;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride
// ()

void UCreativeModeIntegralMechanismLiteComponent::OnRepPlayerIntegralsOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride");

	UCreativeModeIntegralMechanismLiteComponent_OnRepPlayerIntegralsOverride_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex
// ()
// Parameters:
// int                            LastIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeIntegralMechanismLiteComponent::OnRep_TestIndex(int LastIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex");

	UCreativeModeIntegralMechanismLiteComponent_OnRep_TestIndex_Params params;
	params.LastIndex = LastIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals
// ()

void UCreativeModeIntegralMechanismLiteComponent::OnRep_PlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals");

	UCreativeModeIntegralMechanismLiteComponent_OnRep_PlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals
// ()

void UCreativeModeIntegralMechanismLiteComponent::ClearPlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals");

	UCreativeModeIntegralMechanismLiteComponent_ClearPlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeItemGeneratorComponent.SetWeightMul
// ()
// Parameters:
// TMap<struct FString, int>      Weight                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeItemGeneratorComponent::SetWeightMul(TMap<struct FString, int> Weight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.SetWeightMul");

	UCreativeItemGeneratorComponent_SetWeightMul_Params params;
	params.Weight = Weight;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul
// ()
// Parameters:
// float                          percent                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeItemGeneratorComponent::SetAddSpotPercentMul(float percent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul");

	UCreativeItemGeneratorComponent_SetAddSpotPercentMul_Params params;
	params.percent = percent;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeItemGeneratorComponent.ClearWeightMul
// ()

void UCreativeItemGeneratorComponent::ClearWeightMul()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.ClearWeightMul");

	UCreativeItemGeneratorComponent_ClearWeightMul_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance
// ()

void UCreativeModeModDataCheckManager::ReceiveOnPreAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance");

	UCreativeModeModDataCheckManager_ReceiveOnPreAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance
// ()

void UCreativeModeModDataCheckManager::ReceiveOnPostAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance");

	UCreativeModeModDataCheckManager_ReceiveOnPostAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance
// ()

void UCreativeModeModDataCheckManager::OnPreAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance");

	UCreativeModeModDataCheckManager_OnPreAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance
// ()

void UCreativeModeModDataCheckManager::OnPostAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance");

	UCreativeModeModDataCheckManager_OnPostAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.Get
// ()
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeModDataCheckManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeModDataCheckManager* UCreativeModeModDataCheckManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.Get");

	UCreativeModeModDataCheckManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials
// ()
// Parameters:
// class UInstancedStaticMeshComponent* InstancedStaticMeshComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            AssetId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            StaticMeshIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeStaticMeshBatchActor::SetISMStaticMeshAndMaterials(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int AssetId, int StaticMeshIndex, int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials");

	ACreativeModeStaticMeshBatchActor_SetISMStaticMeshAndMaterials_Params params;
	params.InstancedStaticMeshComponent = InstancedStaticMeshComponent;
	params.AssetId = AssetId;
	params.StaticMeshIndex = StaticMeshIndex;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::SetDynamicModeEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable");

	UCreativeModeNavigationManager_SetDynamicModeEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit
// ()

void UCreativeModeNavigationManager::ReceiveOnUnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit");

	UCreativeModeNavigationManager_ReceiveOnUnInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ReceiveOnInit
// ()

void UCreativeModeNavigationManager::ReceiveOnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ReceiveOnInit");

	UCreativeModeNavigationManager_ReceiveOnInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles
// ()
// Parameters:
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::RebuildDynamicTiles(TArray<class AActor*>* Actors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles");

	UCreativeModeNavigationManager_RebuildDynamicTiles_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeNavigationManager::GetDynamicTilesCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount");

	UCreativeModeNavigationManager_GetDynamicTilesCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.GetAllAssociateActors
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UCreativeModeNavigationManager::GetAllAssociateActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetAllAssociateActors");

	UCreativeModeNavigationManager_GetAllAssociateActors_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.Get
// ()
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeNavigationManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeNavigationManager* UCreativeModeNavigationManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.Get");

	UCreativeModeNavigationManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData
// ()

void UCreativeModeNavigationManager::ClearDynamicOctreeData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData");

	UCreativeModeNavigationManager_ClearDynamicOctreeData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh
// ()

void UCreativeModeNavigationManager::ClearDynamicNavMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh");

	UCreativeModeNavigationManager_ClearDynamicNavMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ClearAssociateActors
// ()

void UCreativeModeNavigationManager::ClearAssociateActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearAssociateActors");

	UCreativeModeNavigationManager_ClearAssociateActors_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox
// ()
// Parameters:
// struct FVector                 BoxMin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxMax                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          StepSize                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPoints                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePointsInBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox");

	UCreativeModeNavigationManager_CalSamplePointsInBox_Params params;
	params.BoxMin = BoxMin;
	params.BoxMax = BoxMax;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.CalSamplePoints
// ()
// Parameters:
// struct FVector                 StartPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          StepSize                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPoints                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePoints(const struct FVector& StartPos, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePoints");

	UCreativeModeNavigationManager_CalSamplePoints_Params params;
	params.StartPos = StartPos;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects
// ()
// Parameters:
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeModeNavigationManager::AddNavAffectedObjects(TArray<class AActor*> Actors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects");

	UCreativeModeNavigationManager_AddNavAffectedObjects_Params params;
	params.Actors = Actors;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.AddNavAffectedObject
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::AddNavAffectedObject(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.AddNavAffectedObject");

	UCreativeModeNavigationManager_AddNavAffectedObject_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId
// ()

void UCreativeModeObjectInterface::ReceiveOnPostSetInstanceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId");

	UCreativeModeObjectInterface_ReceiveOnPostSetInstanceId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeObjectInterface.GetInstanceId
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeObjectInterface::GetInstanceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectInterface.GetInstanceId");

	UCreativeModeObjectInterface_GetInstanceId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectInterface.GetAssetComponent
// ()
// Parameters:
// struct FString                 ComponentName                  (Parm, ZeroConstructor)

void UCreativeModeObjectInterface::GetAssetComponent(const struct FString& ComponentName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectInterface.GetAssetComponent");

	UCreativeModeObjectInterface_GetAssetComponent_Params params;
	params.ComponentName = ComponentName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeObjectManager.SpawnObjectForStreaming
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeModeObjectManager::SpawnObjectForStreaming(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.SpawnObjectForStreaming");

	UCreativeModeObjectManager_SpawnObjectForStreaming_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeObjectManager.SpawnObjectForBatchManager
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, OutParm, IsPlainOldData)

void UCreativeModeObjectManager::SpawnObjectForBatchManager(struct FString* InstanceID, struct FTransform* SpawnTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.SpawnObjectForBatchManager");

	UCreativeModeObjectManager_SpawnObjectForBatchManager_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;
	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;
}


// Function Creative.CreativeModeObjectManager.SpawnObject
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeModeObjectManager::SpawnObject(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.SpawnObject");

	UCreativeModeObjectManager_SpawnObject_Params params;
	params.InstanceID = InstanceID;
	params.Path = Path;
	params.SpawnTransform = SpawnTransform;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.SetObjectTempStreamingType
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType TempStreamingType              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeObjectManager::SetObjectTempStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType TempStreamingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.SetObjectTempStreamingType");

	UCreativeModeObjectManager_SetObjectTempStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.TempStreamingType = TempStreamingType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.ResetObjectStreamingType
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeObjectManager::ResetObjectStreamingType(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.ResetObjectStreamingType");

	UCreativeModeObjectManager_ResetObjectStreamingType_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.RemoveObject
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeObjectManager::RemoveObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.RemoveObject");

	UCreativeModeObjectManager_RemoveObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.ReceiveUnregisterObject
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 NewObject                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeObjectManager::ReceiveUnregisterObject(const struct FString& InstanceID, class UObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.ReceiveUnregisterObject");

	UCreativeModeObjectManager_ReceiveUnregisterObject_Params params;
	params.InstanceID = InstanceID;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeObjectManager.ReceiveRegisterObject
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 NewObject                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeObjectManager::ReceiveRegisterObject(const struct FString& InstanceID, class UObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.ReceiveRegisterObject");

	UCreativeModeObjectManager_ReceiveRegisterObject_Params params;
	params.InstanceID = InstanceID;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeObjectManager.ReceiveClearAllObjects
// ()

void UCreativeModeObjectManager::ReceiveClearAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.ReceiveClearAllObjects");

	UCreativeModeObjectManager_ReceiveClearAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeObjectManager.OnObjectSpawnComplete
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeModeObjectManager::OnObjectSpawnComplete(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.OnObjectSpawnComplete");

	UCreativeModeObjectManager_OnObjectSpawnComplete_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeObjectManager.GetObjectTransform
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeModeObjectManager::GetObjectTransform(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.GetObjectTransform");

	UCreativeModeObjectManager_GetObjectTransform_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.GetObjectNum
// ()
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeModeObjectManager::GetObjectNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.GetObjectNum");

	UCreativeModeObjectManager_GetObjectNum_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.GetObjectMap
// ()
// Parameters:
// TMap<struct FString, class UObject*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, class UObject*> UCreativeModeObjectManager::GetObjectMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.GetObjectMap");

	UCreativeModeObjectManager_GetObjectMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.GetObjectAssetPath
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeObjectManager::GetObjectAssetPath(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.GetObjectAssetPath");

	UCreativeModeObjectManager_GetObjectAssetPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.GetObject
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeModeObjectManager::GetObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.GetObject");

	UCreativeModeObjectManager_GetObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.Get
// ()
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeObjectManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeObjectManager* UCreativeModeObjectManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.Get");

	UCreativeModeObjectManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.DestroyObject
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeObjectManager::DestroyObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.DestroyObject");

	UCreativeModeObjectManager_DestroyObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.CheckObjectBeBatch
// ()
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeObjectManager::CheckObjectBeBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.CheckObjectBeBatch");

	UCreativeModeObjectManager_CheckObjectBeBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.ChangeObjectTransform
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeObjectManager::ChangeObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.ChangeObjectTransform");

	UCreativeModeObjectManager_ChangeObjectTransform_Params params;
	params.InstanceID = InstanceID;
	params.Transform = Transform;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeObjectManager.AddObject
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FCreativeModeStreamingParameters StreamingParameters            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeObjectManager::AddObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectManager.AddObject");

	UCreativeModeObjectManager_AddObject_Params params;
	params.InstanceID = InstanceID;
	params.StreamingParameters = StreamingParameters;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModePlayerState.SetPrefabInstanceId
// ()
// Parameters:
// struct FString                 bNewInstanceId                 (Parm, ZeroConstructor)

void ACreativeModePlayerState::SetPrefabInstanceId(const struct FString& bNewInstanceId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.SetPrefabInstanceId");

	ACreativeModePlayerState_SetPrefabInstanceId_Params params;
	params.bNewInstanceId = bNewInstanceId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModePlayerState.ServerSetInstanceTransfrom
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FTransform              InstanceTransform              (Parm, IsPlainOldData)

void ACreativeModePlayerState::ServerSetInstanceTransfrom(const struct FString& InstanceID, const struct FTransform& InstanceTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerSetInstanceTransfrom");

	ACreativeModePlayerState_ServerSetInstanceTransfrom_Params params;
	params.InstanceID = InstanceID;
	params.InstanceTransform = InstanceTransform;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModePlayerState.ServerAddInstance
// ()
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ACreativeModePlayerState::ServerAddInstance(const struct FString& InstanceID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerAddInstance");

	ACreativeModePlayerState_ServerAddInstance_Params params;
	params.InstanceID = InstanceID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModePlayerState.OnRep_PrefabInstanceId
// ()

void ACreativeModePlayerState::OnRep_PrefabInstanceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.OnRep_PrefabInstanceId");

	ACreativeModePlayerState_OnRep_PrefabInstanceId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModePlayerState.GetPrefabInstanceId
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ACreativeModePlayerState::GetPrefabInstanceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.GetPrefabInstanceId");

	ACreativeModePlayerState_GetPrefabInstanceId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData
// ()
// Parameters:
// uint64_t                       UId                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo playerBattleData               (Parm, OutParm)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeRuntimePlayerBattleDataObject::SetPlayerBattleData(uint64_t UId, bool bPropagateToChildren, struct FRuntimePlayerBattleDataInfo* playerBattleData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_SetPlayerBattleData_Params params;
	params.UId = UId;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (playerBattleData != nullptr)
		*playerBattleData = params.playerBattleData;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo
// ()
// Parameters:
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ChangeTeamID                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeRuntimePlayerBattleDataObject::OnRepCurRoundPlayerBattleDataInfo(uint64_t PlayerUID, int ChangeTeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo");

	ACreativeRuntimePlayerBattleDataObject_OnRepCurRoundPlayerBattleDataInfo_Params params;
	params.PlayerUID = PlayerUID;
	params.ChangeTeamID = ChangeTeamID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData
// ()
// Parameters:
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCurRoundPlayerBattleData(uint64_t PlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCurRoundPlayerBattleData_Params params;
	params.PlayerUID = PlayerUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData
// ()
// Parameters:
// TArray<struct FRuntimePlayerBattleDataInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRuntimePlayerBattleDataInfo> ACreativeRuntimePlayerBattleDataObject::GetCurRoundAllPlayerBattleData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCurRoundAllPlayerBattleData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData
// ()
// Parameters:
// int                            RoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCacheRoundPlayerBattleData(int RoundIndex, uint64_t PlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCacheRoundPlayerBattleData_Params params;
	params.RoundIndex = RoundIndex;
	params.PlayerUID = PlayerUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData
// ()
// Parameters:
// int                            RoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimeCacheRoundBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimeCacheRoundBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCacheRoundBattleData(int RoundIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCacheRoundBattleData_Params params;
	params.RoundIndex = RoundIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData
// ()
// Parameters:
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetAllRoundPlayerBattleData(uint64_t PlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetAllRoundPlayerBattleData_Params params;
	params.PlayerUID = PlayerUID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData
// ()
// Parameters:
// int                            RoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeRuntimePlayerBattleDataObject::CacheCurRoundBattleData(int RoundIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData");

	ACreativeRuntimePlayerBattleDataObject_CacheCurRoundBattleData_Params params;
	params.RoundIndex = RoundIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeSoftComponentManager.Get
// ()
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeSoftComponentManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeSoftComponentManager* UCreativeModeSoftComponentManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeSoftComponentManager.Get");

	UCreativeModeSoftComponentManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.StreamingManagerEnable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeStreamingManager::StreamingManagerEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.StreamingManagerEnable");

	UCreativeModeStreamingManager_StreamingManagerEnable_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.RemoveStreamingObject
// ()
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeStreamingManager::RemoveStreamingObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.RemoveStreamingObject");

	UCreativeModeStreamingManager_RemoveStreamingObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.GetStreamingTickFrequency
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeStreamingManager::GetStreamingTickFrequency()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.GetStreamingTickFrequency");

	UCreativeModeStreamingManager_GetStreamingTickFrequency_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.GetOnGridCellIndex
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntVector UCreativeModeStreamingManager::GetOnGridCellIndex(const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.GetOnGridCellIndex");

	UCreativeModeStreamingManager_GetOnGridCellIndex_Params params;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.GetGridLoadingRange
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeStreamingManager::GetGridLoadingRange(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.GetGridLoadingRange");

	UCreativeModeStreamingManager_GetGridLoadingRange_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.GetGridList
// ()
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeModeStreamingManager::GetGridList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.GetGridList");

	UCreativeModeStreamingManager_GetGridList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.GetGridCellWidthHeight
// ()
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UCreativeModeStreamingManager::GetGridCellWidthHeight(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.GetGridCellWidthHeight");

	UCreativeModeStreamingManager_GetGridCellWidthHeight_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.GetDestroyExtendDistance
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeStreamingManager::GetDestroyExtendDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.GetDestroyExtendDistance");

	UCreativeModeStreamingManager_GetDestroyExtendDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.GetDelayDestroyTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeStreamingManager::GetDelayDestroyTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.GetDelayDestroyTime");

	UCreativeModeStreamingManager_GetDelayDestroyTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.Get
// ()
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeStreamingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeStreamingManager* UCreativeModeStreamingManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.Get");

	UCreativeModeStreamingManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.ChangeStreamingObjectTransform
// ()
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// struct FTransform              Transform                      (ConstParm, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeStreamingManager::ChangeStreamingObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.ChangeStreamingObjectTransform");

	UCreativeModeStreamingManager_ChangeStreamingObjectTransform_Params params;
	params.InstanceID = InstanceID;
	params.Transform = Transform;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.ChangeStreamingObjectStreamingType
// ()
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// ECreativeModeActorStreamingType NewStremaingType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ECreativeModeActorStreamingType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorStreamingType UCreativeModeStreamingManager::ChangeStreamingObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.ChangeStreamingObjectStreamingType");

	UCreativeModeStreamingManager_ChangeStreamingObjectStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.NewStremaingType = NewStremaingType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeStreamingManager.AddStreamingObject
// ()
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// struct FCreativeModeStreamingParameters StreamingParameters            (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeStreamingManager::AddStreamingObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStreamingManager.AddStreamingObject");

	UCreativeModeStreamingManager_AddStreamingObject_Params params;
	params.InstanceID = InstanceID;
	params.StreamingParameters = StreamingParameters;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh
// ()
// Parameters:
// class UStaticMesh*             NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetStaticMesh                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoftStaticMeshComponent::SetSoftStaticMesh(class UStaticMesh* NewMesh, bool bSetStaticMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh");

	USoftStaticMeshComponent_SetSoftStaticMesh_Params params;
	params.NewMesh = NewMesh;
	params.bSetStaticMesh = bSetStaticMesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded
// ()
// Parameters:
// struct FSoftObjectPath         SoftObjectPath                 (Parm)

void USoftStaticMeshComponent::OnClientAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded");

	USoftStaticMeshComponent_OnClientAsyncLoaded_Params params;
	params.SoftObjectPath = SoftObjectPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

