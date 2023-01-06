#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Creative.CreativeAbilitySystemComponent
// 0x00B8 (0x1270 - 0x11B8)
class UCreativeAbilitySystemComponent : public USAbilitySystemComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x11B8(0x0048) MISSED OFFSET
	float                                              BuildDistance;                                            // 0x1200(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x1204(0x0020) MISSED OFFSET
	bool                                               bOpenLandPosCheckDebug;                                   // 0x1224(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapTransValid;                                          // 0x1225(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapGridEnable;                                          // 0x1226(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x1227(0x0001) MISSED OFFSET
	struct FRotator                                    BuildingRotation;                                         // 0x1228(0x000C) (IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x1234(0x000C) (IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x1240(0x000C) (IsPlainOldData)
	struct FVector                                     BuildingScale;                                            // 0x124C(0x000C) (IsPlainOldData)
	struct FVector                                     RelativeScale;                                            // 0x1258(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x1264(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAbilitySystemComponent");
		return pStaticClass;
	}


	void UpdateGhostBuildingTransform();
	void SetSnapTargetTransform(struct FTransform* SnapTargetTransform);
	void SetLuaGhostBuildingTransformScale(float X, float Y, float Z);
	void SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch);
	void SetLuaGhostBuildingTransformLocation(float X, float Y, float Z);
	bool ReceiveGetSnapTargetTransform();
	float GetSnappedLocAxis(float Value);
	int GetSetupBuildingID();
	struct FTransform GetGhostBuildingTransform();
	struct FString GetBuildingInstanceID();
};


// Class Creative.CreativeModeActorInteractionComponent
// 0x0040 (0x0218 - 0x01D8)
class UCreativeModeActorInteractionComponent : public ULuaActorComponent
{
public:
	bool                                               bSectorCheckEnabled;                                      // 0x01D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	float                                              SectorCheckCD;                                            // 0x01DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTransformCrossHairCheckEnabled;                          // 0x01E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01E1(0x0003) MISSED OFFSET
	float                                              TransformCrossHairCheckCD;                                // 0x01E4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x01E8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeActorInteractionComponent");
		return pStaticClass;
	}


	void SortCanEditParamsObjs();
	void SetCrossHairTransformObj(class UObject* uTargetActor);
	void SetCrossHairSelectedObj(class UObject* uTargetActor);
	float GetSectorCheckIntervalCfg();
	float GetSectorCheckDistance();
	float GetSectorCheckAngle();
	float GetPlayerHalfHeight();
	float GetCrossHairCheckIntervalCfg();
	float GetCrossHairCheckDistanceCfg();
	void ClearCanEditParamsObjs();
	void AddCanEditObject(class UObject* uCanEditObject, float Angle, float Distance);
};


// Class Creative.CreativeModeManagerBase
// 0x0000 (0x0108 - 0x0108)
class UCreativeModeManagerBase : public USTExtraManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeManagerBase");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeAssetManager
// 0x0058 (0x0160 - 0x0108)
class UCreativeModeAssetManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	TMap<int, struct FCreativeObjectStaticMeshConfigInfo> AssetStaticMeshConfigMap;                                 // 0x0110(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeAssetManager");
		return pStaticClass;
	}


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveInitAssetStaticMeshConfig(int AssetId);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	int GetAssetLandGroundType(int AssetId);
	class UCreativeModeAssetManager* Get(class UObject* WorldContext);
	void AddAssetStaticMeshConfig(int AssetId, const struct FCreativeObjectStaticMeshConfigInfo& ObjectStaticMeshConfigInfo);
};


// Class Creative.CreativeModeBackpackUtils
// 0x0000 (0x0028 - 0x0028)
class UCreativeModeBackpackUtils : public UBackpackUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBackpackUtils");
		return pStaticClass;
	}


	int ResCanAddToBackpackNum(class UBackpackComponent* BackpackComponent, int resID, int AddNum);
};


// Class Creative.CreativeModeBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCreativeModeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBlueprintLibrary");
		return pStaticClass;
	}


	void SetStaticMeshMobility(class UStaticMeshComponent* StaticMeshComponent, TEnumAsByte<EComponentMobility> NewMobility);
	void SetSpeedOverLimit(class AActor* Actor);
	void SetInstanceValue(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	bool SetEditorActorTransform(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FTransform& NewTransform);
	void SaveAssetStringToFile(const struct FString& String, const struct FString& Filename);
	struct FString ProjectSavedDir();
	void MinAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InPoints, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FRotator* OutRectRotation, float* OutRectLengthX, float* OutRectLengthY, struct FVector* OutRectCenter, TArray<int>* PolyVertIndices);
	struct FString LoadAssetFileToString(const struct FString& Filename);
	void IgnoreClientMovementErrorChecksAndCorrection(class ACharacter* Charcter, bool bIsIgnore);
	TMap<struct FString, class UObject*> GetObjectMap(class UObject* WorldContextObject);
	struct FString GetGameTypeAsString(ECreativeModeGameType GameType);
	void GetActorMeshBoundsByTag(class AActor* Actor, const struct FString& IgnoreTag, const struct FString& IncludeTag, struct FVector* Origin, struct FVector* BoxExtent);
	struct FString GenerateGuid();
	void DrawLine(const struct FPaintContext& InContext, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& LineColor, int LayerOffset, float LineThickness, bool bAntiAlias);
	void DrawGrids(const struct FPaintContext& InContext, float CellSize, int CellCountX, int CellCountY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, int LayerOffset);
	void DrawGridCell(const struct FPaintContext& InContext, float CellSize, int CellIndexX, int CellIndexY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, int LayerOffset);
	struct FString DestroyInstance(class UObject* WorldContextObject, const struct FString& InstanceID);
	bool BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
};


// Class Creative.CreativeModeCheatManager
// 0x0000 (0x0148 - 0x0148)
class UCreativeModeCheatManager : public UGMCheatManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeCheatManager");
		return pStaticClass;
	}


	void SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void DestroyInstance(const struct FString& InstanceID);
};


// Class Creative.CreativeModeLiteComponent
// 0x00C0 (0x0100 - 0x0040)
class UCreativeModeLiteComponent : public ULiteComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x00A0(0x0050) (Net)
	struct FString                                     LuaFilePath;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeLiteComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeGameModeBaseComponent
// 0x0010 (0x0110 - 0x0100)
class UCreativeModeGameModeBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 // 0x0100(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	class UCreativeModeGameStateBaseComponent*         GameStateComponent;                                       // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeBaseComponent");
		return pStaticClass;
	}


	void SetGameStateComponent(class UCreativeModeGameStateBaseComponent* NewGameStateComponent);
	void ReceivePostInitializeComponents();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameMode* GetGameMode();
	class AActor* FindPlayerStartOverride(class AController* Player, const struct FString& IncomingName);
};


// Class Creative.CreativeModeEditorModeComponent
// 0x0000 (0x0110 - 0x0110)
class UCreativeModeEditorModeComponent : public UCreativeModeGameModeBaseComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorModeComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeEditorObject
// 0x00A0 (0x0528 - 0x0488)
class ACreativeModeEditorObject : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0488(0x0018) MISSED OFFSET
	ECreativeModeActorState                            ActorState;                                               // 0x04A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	class UMaterialInstance*                           PrefabMaterial;                                           // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           PrefabCollisionMaterial;                                  // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           InstanceSelectedMaterial;                                 // 0x04B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FEditorObjectLiteComponentTickFunction      LiteComponentActorTick;                                   // 0x04C0(0x0058) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x0518(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void ShowSelectedEffect(bool ShowEff, const struct FLinearColor& OutlineColor, float OutlineThickness);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetActorState(ECreativeModeActorState NewState);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	void ReceiveInitializeLiteComponent();
	void OnRepActorStateOverride(ECreativeModeActorState NewState);
	void OnRep_ActorState(ECreativeModeActorState LastState);
	bool IsDedicatedServer();
	bool HasAuthority();
	ECreativeModeActorState GetActorState();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	bool CanEditParameters();
};


// Class Creative.CreativeModeGameStateBaseComponent
// 0x0008 (0x0108 - 0x0100)
class UCreativeModeGameStateBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 // 0x0100(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateBaseComponent");
		return pStaticClass;
	}


	void ReceivePostInitializeComponents();
	ECreativeModePlayState GetPlayState();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameState* GetGameState();
};


// Class Creative.CreativeModeEditorStateComponent
// 0x0000 (0x0108 - 0x0108)
class UCreativeModeEditorStateComponent : public UCreativeModeGameStateBaseComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorStateComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeGameMode
// 0x00E0 (0x2450 - 0x2370)
class ACreativeModeGameMode : public ABattleRoyaleGameModeTeam
{
public:
	class UCreativeModeGameModeBaseComponent*          CurrentModeComponent;                                     // 0x2370(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              GameModeComponentClassArray;                              // 0x2378(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      GameModeComponentClass;                                   // 0x2388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FGameModeParam>        MapPlaneRouteConfigs;                                     // 0x2390(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	ECreativeModeGameType                              EditorStartupGameType;                                    // 0x23E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x23E1(0x0007) MISSED OFFSET
	struct FGameModeLiteComponentTickFunction          LiteComponentActorTick;                                   // 0x23E8(0x0058) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x2440(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameMode");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetItemGenerate(bool bIsOpen);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	class UCreativeModeGameModeBaseComponent* GetCurrentModeComponent();
	int GetCreativeModeRealTeamNum();
	TArray<int> GetCreativeModeRealTeamIDs();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	class AActor* CreativeModeFindPlayerStart(class AController* Player, const struct FString& IncomingName);
};


// Class Creative.CreativeModeGameModeComponent
// 0x0020 (0x0130 - 0x0110)
class UCreativeModeGameModeComponent : public UCreativeModeGameModeBaseComponent
{
public:
	class UClass*                                      RaceCheckPointComponentClass;                             // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeRaceCheckPointLiteComponent*    RaceCheckPointComponent;                                  // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      OccupationAreaComponentClass;                             // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeOccupationAreaLiteComponent*        OccupationAreaComponent;                                  // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeComponent");
		return pStaticClass;
	}


	void ReceiveCallPlayStateFunction();
};


// Class Creative.CreativeModeGameObject
// 0x00A0 (0x00C8 - 0x0028)
class UCreativeModeGameObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x00B8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameObject");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	bool IsDedicatedServer();
	bool HasAuthority();
};


// Class Creative.CreativeModeGameParameterManager
// 0x00D0 (0x01D8 - 0x0108)
class UCreativeModeGameParameterManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeModeGameParameterContainer         GameParameterContainer;                                   // 0x0108(0x00C8) (Net, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameParameterManager");
		return pStaticClass;
	}


	void RemoveGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnReceivePreGameParameterRemove(const struct FString& ParameterKey, const struct FString& TemplateID);
	void OnReceivePostGameParameterChange(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc);
	void OnReceivePostGameParameterAdd(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	int GetSingleSerializeNum();
	struct FString GetGameParameterDesc(const struct FString& ParameterKey, const struct FString& TemplateID);
	class UCreativeModeGameParameterManager* Get(class UObject* WorldContext);
	void ChangeGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc);
	void AddGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, const struct FString& Desc);
};


// Class Creative.CreativeModeGameState
// 0x0098 (0x1348 - 0x12B0)
class ACreativeModeGameState : public ASTExtraGameStateBase
{
public:
	ECreativeModeGameType                              CurrentGameType;                                          // 0x12B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x12B1(0x0007) MISSED OFFSET
	class UCreativeModeGameStateBaseComponent*         CurrentStateComponent;                                    // 0x12B8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UCreativeModeGameStateBaseComponent*         LastStateComponent;                                       // 0x12C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              GameStateComponentClassArray;                             // 0x12C8(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      GameStateComponentClass;                                  // 0x12D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameStateLiteComponentTickFunction         LiteComponentActorTick;                                   // 0x12E0(0x0058) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x1338(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameState");
		return pStaticClass;
	}


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	void OnRep_CurrentStateComponent(class UCreativeModeGameStateBaseComponent* LastComponent);
	ECreativeModePlayState GetPlayState();
	bool GetIsEditorMode();
	bool GetIsCreative();
	class UCreativeModeGameStateBaseComponent* GetCurrentStateComponent();
	ECreativeModeGameType GetCurrentGameType();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	void ClearAndReImportInstance();
};


// Class Creative.CreativeModeGameStateComponent
// 0x0028 (0x0130 - 0x0108)
class UCreativeModeGameStateComponent : public UCreativeModeGameStateBaseComponent
{
public:
	class UClass*                                      IntegralMechanismComponentClass;                          // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeIntegralMechanismLiteComponent* IntegralMechanismComponent;                               // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RuntimePlayerBattleDataObjectClass;                       // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACreativeRuntimePlayerBattleDataObject*      RuntimePlayerBattleDataObject;                            // 0x0120(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	ECreativeModePlayState                             CurPlayState;                                             // 0x0128(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateComponent");
		return pStaticClass;
	}


	void SetPlayState(ECreativeModePlayState newPlayState);
	void OnRep_RuntimePlayerBattleDataObject();
	void OnRep_IntegralMechanismComponent();
	void OnRep_CurPlayState();
	ECreativeModePlayState GetPlayState();
};


// Class Creative.CreativeModeGridLevelsManager
// 0x0358 (0x0460 - 0x0108)
class UCreativeModeGridLevelsManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0108(0x0028) MISSED OFFSET
	TArray<struct FString>                             GridLevelList;                                            // 0x0130(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FCreativeModeGridLevelConfig> GridLevelConfigs;                                         // 0x0140(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCreativeModeGridLevelInfo> GridLevelsMap;                                            // 0x0190(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FIntVector>            ObjectCellIndexMap;                                       // 0x01E0(0x0050) (ZeroConstructor)
	TArray<struct FString>                             AlwaysLoadLevel;                                          // 0x0230(0x0010) (ZeroConstructor)
	bool                                               bStaticMeshObjectBatchSwitch;                             // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEditorBatchSwitch;                                       // 0x0241(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0242(0x0002) MISSED OFFSET
	float                                              EditorModeUpdateTime;                                     // 0x0244(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x218];                                     // 0x0248(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGridLevelsManager");
		return pStaticClass;
	}


	void UpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID);
	void UnLoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	bool RemoveObject(const struct FString& InstanceID);
	void ReceiveDelayUpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID);
	void ReceiveClearAllData();
	void ObjectAddToGridCellMap(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	void LoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	bool IsCreativeEidtMode();
	void GridCellMapRemoveObject(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	struct FString GetStaticMeshBatchActorPath();
	float GetRelieveBatchDistance();
	float GetReBatchDistance();
	struct FIntVector GetOnCellIndex(const struct FString& GridName, const struct FVector& Location);
	struct FTransform GetObjectTransform(const struct FString& ID);
	ECreativeModeActorStreamingType GetObjectStreamingType(const struct FString& ID);
	struct FString GetObjectRuntimeGrid(const struct FString& ID);
	int GetObjectMaterialID(const struct FString& ID);
	bool GetObjectIsPrefab(const struct FString& ID);
	int GetObjectAssetID(const struct FString& ID);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FString GetDefaultGridName();
	struct FVector2D GetCellWidthHeight(const struct FString& GridName);
	struct FVector GetCellCenterLocation(const struct FString& GridName, const struct FIntVector& CellIndex);
	int GetAxisIndex(float pos, float BlockLenght);
	class UCreativeModeGridLevelsManager* Get(class UObject* WorldContext);
	bool CheckObjectCanBatch(const struct FString& InstanceID);
	bool CheckObjectBeRelieveBatch(const struct FString& ID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool CheckAndRemoveObjectForBatchData(const struct FString& ID);
	bool CheckAndAddObjectToBatchData(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID);
	bool ChangeObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool ChangeObjectMaterialId(const struct FString& InstanceID, int MaterialID);
	bool AddObjectToGridLevels(const struct FString& InstanceID);
};


// Class Creative.CreativeModeInGameManagerCenter
// 0x0048 (0x0408 - 0x03C0)
class ACreativeModeInGameManagerCenter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET
	TArray<class USTExtraManagerBase*>                 ManagerArray;                                             // 0x03D0(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              ManagerClassArray;                                        // 0x03E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x18];                                      // 0x03F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeInGameManagerCenter");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeInstanceManager
// 0x00E0 (0x01E8 - 0x0108)
class UCreativeModeInstanceManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeModeNodeContainer                  InstanceContainer;                                        // 0x0108(0x00C8) (Net, Transient)
	TArray<struct FCreativeModeNode>                   PrefabInstances;                                          // 0x01D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E0(0x0004) MISSED OFFSET
	int                                                SingleSerializeNum;                                       // 0x01E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeInstanceManager");
		return pStaticClass;
	}


	bool SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	void SetInstanceTransform(const struct FString& InstanceID, const struct FTransform& Transform);
	void RemoveInstance(const struct FString& ID);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnReceivePreInstanceRemove(const struct FString& ID);
	void OnReceivePostInstanceChange(const struct FString& ID, TArray<unsigned char> Content);
	void OnReceivePostInstanceAdd(const struct FString& ID, TArray<unsigned char> Content);
	void OnReadyToAddInstance();
	void OnGameTypeChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool HasReadyToAddInstance();
	int GetSingleSerializeNum();
	ECreativeModeActorStreamingType GetObjectStreamingType(const struct FString& ID);
	struct FString GetObjectRuntimeGrid(const struct FString& ID);
	struct FString GetObjectAssetPath(const struct FString& ID);
	struct FTransform GetInstanceTransform(const struct FString& ID);
	bool GetInstanceIsPrefab(const struct FString& ID);
	int GetInstanceAssetID(const struct FString& ID);
	class UCreativeModeInstanceManager* Get(class UObject* WorldContext);
	struct FString DestroyInstance(const struct FString& InstanceID);
	void ChangeInstance(const struct FString& ID, TArray<unsigned char> Content);
	void AddInstance(const struct FString& ID, TArray<unsigned char> Content);
};


// Class Creative.CreativeModeIntegralMechanismComponent
// 0x0010 (0x01E8 - 0x01D8)
class UCreativeModeIntegralMechanismComponent : public ULuaActorComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismComponent");
		return pStaticClass;
	}


	bool SetPlayerIntegral(const struct FString& UId, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq);
	void OnRepPlayerIntegralsOverride();
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};


// Class Creative.CreativeModeIntegralMechanismLiteComponent
// 0x0018 (0x0118 - 0x0100)
class UCreativeModeIntegralMechanismLiteComponent : public UCreativeModeLiteComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                TestIndex;                                                // 0x0110(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismLiteComponent");
		return pStaticClass;
	}


	bool SetPlayerIntegral(const struct FString& UId, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq);
	void OnRepPlayerIntegralsOverride();
	void OnRep_TestIndex(int LastIndex);
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};


// Class Creative.CreativeItemGeneratorComponent
// 0x0058 (0x0A28 - 0x09D0)
class UCreativeItemGeneratorComponent : public UItemGeneratorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x09D0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeItemGeneratorComponent");
		return pStaticClass;
	}


	void SetWeightMul(TMap<struct FString, int> Weight);
	void SetAddSpotPercentMul(float percent);
	void ClearWeightMul();
};


// Class Creative.CreativeModeModDataCheckManager
// 0x0000 (0x0108 - 0x0108)
class UCreativeModeModDataCheckManager : public UCreativeModeManagerBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeModDataCheckManager");
		return pStaticClass;
	}


	void ReceiveOnPreAddInstance();
	void ReceiveOnPostAddInstance();
	void OnPreAddInstance();
	void OnPostAddInstance();
	class UCreativeModeModDataCheckManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeModeStaticMeshBatchActor
// 0x0098 (0x0520 - 0x0488)
class ACreativeModeStaticMeshBatchActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0488(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeStaticMeshBatchActor");
		return pStaticClass;
	}


	void SetISMStaticMeshAndMaterials(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int AssetId, int StaticMeshIndex, int MaterialID);
};


// Class Creative.CreativeModeNavigationManager
// 0x0050 (0x0158 - 0x0108)
class UCreativeModeNavigationManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0108(0x0050) UNKNOWN PROPERTY: SetProperty Creative.CreativeModeNavigationManager.CachedActors

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeNavigationManager");
		return pStaticClass;
	}


	void SetDynamicModeEnable(bool bEnable);
	void ReceiveOnUnInit();
	void ReceiveOnInit();
	void RebuildDynamicTiles(TArray<class AActor*>* Actors);
	int GetDynamicTilesCount();
	TArray<class AActor*> GetAllAssociateActors();
	class UCreativeModeNavigationManager* Get(class UObject* WorldContext);
	void ClearDynamicOctreeData();
	void ClearDynamicNavMesh();
	void ClearAssociateActors();
	TArray<struct FVector> CalSamplePointsInBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints);
	TArray<struct FVector> CalSamplePoints(const struct FVector& StartPos, float StepSize, int MaxPoints);
	void AddNavAffectedObjects(TArray<class AActor*> Actors);
	void AddNavAffectedObject(class AActor* Actor);
};


// Class Creative.CreativeModeObjectFuncComponent
// 0x0000 (0x0100 - 0x0100)
class UCreativeModeObjectFuncComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectFuncComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UCreativeModeObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectInterface");
		return pStaticClass;
	}


	void ReceiveOnPostSetInstanceId();
	struct FString GetInstanceId();
	void GetAssetComponent(const struct FString& ComponentName);
};


// Class Creative.CreativeModeObjectManager
// 0x0050 (0x0158 - 0x0108)
class UCreativeModeObjectManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, class UObject*>               ObjectMap;                                                // 0x0108(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectManager");
		return pStaticClass;
	}


	void SpawnObjectForStreaming(const struct FString& InstanceID);
	void SpawnObjectForBatchManager(struct FString* InstanceID, struct FTransform* SpawnTransform);
	class UObject* SpawnObject(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform);
	bool SetObjectTempStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType TempStreamingType);
	bool ResetObjectStreamingType(const struct FString& InstanceID);
	bool RemoveObject(const struct FString& InstanceID);
	void ReceiveUnregisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveRegisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveClearAllObjects();
	void OnObjectSpawnComplete(const struct FString& ID);
	struct FTransform GetObjectTransform(const struct FString& ID);
	uint32_t GetObjectNum();
	TMap<struct FString, class UObject*> GetObjectMap();
	struct FString GetObjectAssetPath(const struct FString& ID);
	class UObject* GetObject(const struct FString& InstanceID);
	class UCreativeModeObjectManager* Get(class UObject* WorldContext);
	bool DestroyObject(const struct FString& InstanceID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform);
	bool AddObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
};


// Class Creative.CreativeOccupationAreaLiteComponent
// 0x0000 (0x0100 - 0x0100)
class UCreativeOccupationAreaLiteComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOccupationAreaLiteComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModePlayerState
// 0x0018 (0x1990 - 0x1978)
class ACreativeModePlayerState : public ASTExtraPlayerState
{
public:
	bool                                               bEnableAutoPickUp;                                        // 0x1978(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1979(0x0007) MISSED OFFSET
	struct FString                                     PrefabInstanceId;                                         // 0x1980(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModePlayerState");
		return pStaticClass;
	}


	void SetPrefabInstanceId(const struct FString& bNewInstanceId);
	void ServerSetInstanceTransfrom(const struct FString& InstanceID, const struct FTransform& InstanceTransform);
	void ServerAddInstance(const struct FString& InstanceID, TArray<unsigned char> Content);
	void OnRep_PrefabInstanceId();
	struct FString GetPrefabInstanceId();
};


// Class Creative.CreativeModeRaceCheckPointComponent
// 0x0000 (0x01D8 - 0x01D8)
class UCreativeModeRaceCheckPointComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeModeRaceCheckPointLiteComponent
// 0x0000 (0x0100 - 0x0100)
class UCreativeModeRaceCheckPointLiteComponent : public UCreativeModeLiteComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointLiteComponent");
		return pStaticClass;
	}

};


// Class Creative.CreativeRuntimePlayerBattleDataObject
// 0x0208 (0x0690 - 0x0488)
class ACreativeRuntimePlayerBattleDataObject : public ALuaActor
{
public:
	struct FRuntimePlayerBattleDataInfo                DefaultPlayerBattleDataInfo;                              // 0x0488(0x0058)
	struct FRuntimeCacheRoundBattleDataInfoContainer   RuntimeOldCacheRoundBattleDataContainer;                  // 0x04E0(0x00C8) (Transient)
	struct FRuntimeBattleDataInfoContainer             RuntimeCurRoundBattleDataInfoContainer;                   // 0x05A8(0x00C8) (Net, Transient)
	struct FRuntimeCacheRoundBattleDataInfo            DefaultCacheRoundBattleDataInfo;                          // 0x0670(0x0020)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeRuntimePlayerBattleDataObject");
		return pStaticClass;
	}


	bool SetPlayerBattleData(uint64_t UId, bool bPropagateToChildren, struct FRuntimePlayerBattleDataInfo* playerBattleData);
	void OnRepCurRoundPlayerBattleDataInfo(uint64_t PlayerUID, int ChangeTeamID);
	struct FRuntimePlayerBattleDataInfo GetCurRoundPlayerBattleData(uint64_t PlayerUID);
	TArray<struct FRuntimePlayerBattleDataInfo> GetCurRoundAllPlayerBattleData();
	struct FRuntimePlayerBattleDataInfo GetCacheRoundPlayerBattleData(int RoundIndex, uint64_t PlayerUID);
	struct FRuntimeCacheRoundBattleDataInfo GetCacheRoundBattleData(int RoundIndex);
	struct FRuntimePlayerBattleDataInfo GetAllRoundPlayerBattleData(uint64_t PlayerUID);
	void CacheCurRoundBattleData(int RoundIndex);
};


// Class Creative.CreativeModeSoftComponentManager
// 0x0050 (0x0158 - 0x0108)
class UCreativeModeSoftComponentManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0108(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeSoftComponentManager");
		return pStaticClass;
	}


	class UCreativeModeSoftComponentManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeModeStreamingManager
// 0x0150 (0x0258 - 0x0108)
class UCreativeModeStreamingManager : public UCreativeModeManagerBase
{
public:
	bool                                               bStreamingManagerEnable;                                  // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0109(0x002F) MISSED OFFSET
	TMap<struct FString, struct FCreativeModeStreamingParameters> ObjectStreamingStateMap;                                  // 0x0138(0x0050) (ZeroConstructor, Transient)
	TArray<struct FString>                             ObjectStreamingStateKeyList;                              // 0x0188(0x0010) (ZeroConstructor, Transient)
	TMap<struct FString, bool>                         ObjectSpawnStateChangeMaps;                               // 0x0198(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x01E8(0x0050) MISSED OFFSET
	TArray<class AActor*>                              OuterStreamingSources;                                    // 0x0238(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0248(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeStreamingManager");
		return pStaticClass;
	}


	bool StreamingManagerEnable();
	bool RemoveStreamingObject(const struct FString& InstanceID);
	float GetStreamingTickFrequency();
	struct FIntVector GetOnGridCellIndex(const struct FString& GridName, const struct FVector& Location);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FVector2D GetGridCellWidthHeight(const struct FString& GridName);
	float GetDestroyExtendDistance();
	float GetDelayDestroyTime();
	class UCreativeModeStreamingManager* Get(class UObject* WorldContext);
	bool ChangeStreamingObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform);
	ECreativeModeActorStreamingType ChangeStreamingObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool AddStreamingObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
};


// Class Creative.CreativeWorldSubSystem
// 0x0008 (0x0038 - 0x0030)
class UCreativeWorldSubSystem : public UWorldSubsystem
{
public:
	class AActor*                                      ManagerCenter;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWorldSubSystem");
		return pStaticClass;
	}

};


// Class Creative.GameModeStateActive_CreativeMode
// 0x0000 (0x0058 - 0x0058)
class UGameModeStateActive_CreativeMode : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateActive_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.GameModeStateFighting_CreativeMode
// 0x0000 (0x0068 - 0x0068)
class UGameModeStateFighting_CreativeMode : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFighting_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.GameModeStateFinished_CreativeMode
// 0x0000 (0x0050 - 0x0050)
class UGameModeStateFinished_CreativeMode : public UGameModeStateFinishedTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFinished_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.GameModeStateReady_CreativeMode
// 0x0000 (0x0090 - 0x0090)
class UGameModeStateReady_CreativeMode : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateReady_CreativeMode");
		return pStaticClass;
	}

};


// Class Creative.SoftStaticMeshComponent
// 0x0030 (0x08C0 - 0x0890)
class USoftStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0890(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Creative.SoftStaticMeshComponent.SoftStaticMesh
	unsigned char                                      bAsyncLoad : 1;                                           // 0x08B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.SoftStaticMeshComponent");
		return pStaticClass;
	}


	bool SetSoftStaticMesh(class UStaticMesh* NewMesh, bool bSetStaticMesh);
	void OnClientAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath);
};


}

