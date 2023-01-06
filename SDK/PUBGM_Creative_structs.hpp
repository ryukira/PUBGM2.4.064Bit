#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Creative.ECreativeModeActorState
enum class ECreativeModeActorState : uint8_t
{
	ECreativeModeActorState__CreativeModeActorState_Unknown = 0,
	ECreativeModeActorState__CreativeModeActorState_Prefab = 1,
	ECreativeModeActorState__CreativeModeActorState_Instance = 2,
	ECreativeModeActorState__CreativeModeActorState_MAX = 3
};


// Enum Creative.ECreativeModePlayState
enum class ECreativeModePlayState : uint8_t
{
	ECreativeModePlayState__CreativeModePlayState_None = 0,
	ECreativeModePlayState__CreativeModePlayState_Ready = 1,
	ECreativeModePlayState__CreativeModePlayState_Fighting = 2,
	ECreativeModePlayState__CreativeModePlayState_Finish = 3,
	ECreativeModePlayState__CreativeModePlayState_Max = 4
};


// Enum Creative.ECreativeModeActorStreamingType
enum class ECreativeModeActorStreamingType : uint8_t
{
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_AlwaysLoad = 0,
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_Grid = 1,
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_Distance = 2,
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_MAX = 3
};


// Enum Creative.ECreativeModeGameType
enum class ECreativeModeGameType : uint8_t
{
	ECreativeModeGameType__CreativeModeGameType_None = 0,
	ECreativeModeGameType__CreativeModeGameType_Editor = 1,
	ECreativeModeGameType__CreativeModeGameType_Game = 2,
	ECreativeModeGameType__CreativeModeGameType_Max = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Creative.CreativeStaticMeshConfigInfo
// 0x0050
struct FCreativeStaticMeshConfigInfo
{
	struct FString                                     MeshPath;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	TArray<struct FString>                             MaterialPaths;                                            // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeObjectStaticMeshConfigInfo
// 0x0010
struct FCreativeObjectStaticMeshConfigInfo
{
	TArray<struct FCreativeStaticMeshConfigInfo>       StaticMeshes;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.EditorObjectLiteComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FEditorObjectLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.GameModeLiteComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FGameModeLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativeModeGameParameter
// 0x0034 (0x0040 - 0x000C)
struct FCreativeModeGameParameter : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ParameterKey;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     TemplateID;                                               // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     Desc;                                                     // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeModeGameParameterContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeModeGameParameterContainer : public FFastArraySerializer
{
	TArray<struct FCreativeModeGameParameter>          Nodes;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeModeGameParameterManager*           GameParameterManager;                                     // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.GameStateLiteComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FGameStateLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativeModeGridLevelConfig
// 0x000C
struct FCreativeModeGridLevelConfig
{
	struct FVector2D                                   CellWidthHeight;                                          // 0x0000(0x0008) (IsPlainOldData)
	float                                              LoadingRange;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeModeGridLevelInfo
// 0x0050
struct FCreativeModeGridLevelInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Creative.CreativeModeNode
// 0x0024 (0x0030 - 0x000C)
struct FCreativeModeNode : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ID;                                                       // 0x0010(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              NodeContent;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeModeNodeContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeModeNodeContainer : public FFastArraySerializer
{
	TArray<struct FCreativeModeNode>                   Nodes;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeModeInstanceManager*                InstanceManager;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.PlayerIntegralInfo
// 0x0028
struct FPlayerIntegralInfo
{
	int                                                nCurIntegral;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                nCurStageIntegral;                                        // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                nIntegralAddSeq;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     UId;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.CreativeModeStreamingParameters
// 0x0050
struct FCreativeModeStreamingParameters
{
	ECreativeModeActorStreamingType                    StreamingType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	int                                                Distance;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnState;                                              // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0045(0x000B) MISSED OFFSET
};

// ScriptStruct Creative.RuntimePlayerBattleDataInfo
// 0x004C (0x0058 - 0x000C)
struct FRuntimePlayerBattleDataInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           UId;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WinningRoundNum;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIKillCount;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterKillCount;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                AssistCount;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	ExtraPlayerLiveState                               PlayerLiveState;                                          // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              SurvivalTime;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                DeadCount;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              CauseTotalDamage;                                         // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              CauseMonsterTotalDamage;                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              CauseRoleTotalDamage;                                     // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TakeTotalDamage;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TakeRoleTotalDamage;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TakeMonsterTotalDamage;                                   // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.RuntimeCacheRoundBattleDataInfo
// 0x0014 (0x0020 - 0x000C)
struct FRuntimeCacheRoundBattleDataInfo : public FFastArraySerializerItem
{
	int                                                RoundIndex;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRuntimePlayerBattleDataInfo>        PlayerBattleDataList;                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.RuntimeCacheRoundBattleDataInfoContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FRuntimeCacheRoundBattleDataInfoContainer : public FFastArraySerializer
{
	TArray<struct FRuntimeCacheRoundBattleDataInfo>    OldRoundCacheTeamRuntimeDataList;                         // 0x00B0(0x0010) (ZeroConstructor)
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.RuntimeBattleDataInfoContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FRuntimeBattleDataInfoContainer : public FFastArraySerializer
{
	TArray<struct FRuntimePlayerBattleDataInfo>        CurRuntimePlayerBattleDataList;                           // 0x00B0(0x0010) (ZeroConstructor)
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeGridLevelsActivationInfo
// 0x0050
struct FCreativeGridLevelsActivationInfo
{
	TMap<struct FIntVector, bool>                      LevelsActivationMap;                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Material
// 0x0010
struct FCreativeStaticMeshObjectBatchInfo_Material
{
	TArray<struct FString>                             InstanceIds;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Asset
// 0x0060
struct FCreativeStaticMeshObjectBatchInfo_Asset
{
	struct FCreativeObjectStaticMeshConfigInfo         StaticMeshConfig;                                         // 0x0000(0x0010)
	TMap<int, struct FCreativeStaticMeshObjectBatchInfo_Material> MaterialDataMap;                                          // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Cell
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo_Cell
{
	TMap<int, struct FCreativeStaticMeshObjectBatchInfo_Asset> AssetDataMap;                                             // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Grid
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo_Grid
{
	TMap<struct FIntVector, struct FCreativeStaticMeshObjectBatchInfo_Cell> CellDataMap;                                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo
{
	TMap<struct FString, struct FCreativeStaticMeshObjectBatchInfo_Grid> GridDataMap;                                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeObjectBatchSignInfo
// 0x0040
struct FCreativeObjectBatchSignInfo
{
	struct FIntVector                                  CellIndex;                                                // 0x0000(0x000C) (IsPlainOldData)
	int                                                CurMaterialId;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Creative.CreativeBatchInstancedStaticMesh_MaterialId
// 0x00A0
struct FCreativeBatchInstancedStaticMesh_MaterialId
{
	TMap<int, class UInstancedStaticMeshComponent*>    ISMMap;                                                   // 0x0000(0x0050) (ExportObject, ZeroConstructor)
	TMap<struct FString, int>                          CurLoadedInstances;                                       // 0x0050(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeBatchInstancedStaticMesh_AssetID
// 0x0050
struct FCreativeBatchInstancedStaticMesh_AssetID
{
	TMap<int, struct FCreativeBatchInstancedStaticMesh_MaterialId> AllISMMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeBatchInstancedStaticMesh
// 0x0050
struct FCreativeBatchInstancedStaticMesh
{
	TMap<int, struct FCreativeBatchInstancedStaticMesh_AssetID> MaterialISMMap;                                           // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeModeGridCellChangeInfo
// 0x0010
struct FCreativeModeGridCellChangeInfo
{
	struct FIntVector                                  CellIndex;                                                // 0x0000(0x000C) (IsPlainOldData)
	bool                                               LoadState;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

}

