#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SpawnSystem.ESpeciesOrganization
enum class ESpeciesOrganization : uint8_t
{
	ESpeciesOrganization__Org_Group = 0,
	ESpeciesOrganization__Org_Squad = 1,
	ESpeciesOrganization__Org_Unit = 2,
	ESpeciesOrganization__Org_MAX  = 3
};


// Enum SpawnSystem.ESTSpawnerVolume
enum class ESTSpawnerVolume : uint8_t
{
	ESTSpawnerVolume__ESTSpawnerVolume_None = 0,
	ESTSpawnerVolume__ESTSpawnerVolume_Box = 1,
	ESTSpawnerVolume__ESTSpawnerVolume_Sphere = 2,
	ESTSpawnerVolume__ESTSpawnerVolume_MAX = 3
};


// Enum SpawnSystem.ESpawnSpotType
enum class ESpawnSpotType : uint8_t
{
	ESpawnSpotType__Ground         = 0,
	ESpawnSpotType__Wall           = 1,
	ESpawnSpotType__Air            = 2,
	ESpawnSpotType__ESpawnSpotType_MAX = 3
};


// Enum SpawnSystem.EReadSpeciesData
enum class EReadSpeciesData : uint8_t
{
	EReadSpeciesData__WeightedRandom = 0,
	EReadSpeciesData__Ordered      = 1,
	EReadSpeciesData__ManuallyIndex = 2,
	EReadSpeciesData__EReadSpeciesData_MAX = 3
};


// Enum SpawnSystem.EWaveState
enum class EWaveState : uint8_t
{
	EWaveState__None               = 0,
	EWaveState__WaveSpawning       = 1,
	EWaveState__WaveSpawned        = 2,
	EWaveState__WaveCD             = 3,
	EWaveState__WaveReadyForNext   = 4,
	EWaveState__EWaveState_MAX     = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SpawnSystem.UnitInitConfig
// 0x0028
struct FUnitInitConfig
{
	struct FName                                       BlackboardKey;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                IntegerValue;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BooleanValue;                                             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              FloatValue;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnumValue;                                                // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct SpawnSystem.UnitConfig
// 0x0040
struct FUnitConfig
{
	struct FString                                     Desc;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                ConfigId;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FUnitInitConfig>                     UnitInitConfig;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AttrId;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     PreferSpotID;                                             // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SpawnSystem.STSpawnParam
// 0x00A0
struct FSTSpawnParam
{
	struct FUnitConfig                                 UnitConfig;                                               // 0x0000(0x0040) (BlueprintVisible)
	struct FVector                                     SpawnLocation;                                            // 0x0040(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0050(0x0030) (BlueprintVisible, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CampID;                                                   // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AttributeID;                                              // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SpawnerID;                                                // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};

// ScriptStruct SpawnSystem.SpawnSpotInfo
// 0x0050
struct FSpawnSpotInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (BlueprintVisible, IsPlainOldData)
	int                                                SpecieSquadIndex;                                         // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpecieUnitIndex;                                          // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SpotID;                                                   // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct SpawnSystem.WeightedUnit
// 0x0008
struct FWeightedUnit
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SpawnSystem.SquadConfig
// 0x0048
struct FSquadConfig
{
	struct FString                                     Desc;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FWeightedUnit>                       Units;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SquadTeamID;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FUnitInitConfig>                     SquadInitConfig;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SuggestNumber;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct SpawnSystem.WeightedSquad
// 0x0008
struct FWeightedSquad
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SpawnSystem.GroupConfig
// 0x0028
struct FGroupConfig
{
	struct FString                                     Desc;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FWeightedSquad>                      Squads;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Weight;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct SpawnSystem.UnitRatio
// 0x0048
struct FUnitRatio
{
	struct FUnitConfig                                 Unit;                                                     // 0x0000(0x0040) (Edit)
	float                                              Ratio;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct SpawnSystem.SpeciesRatioStruct
// 0x0010
struct FSpeciesRatioStruct
{
	TArray<struct FUnitRatio>                          UnitRatios;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct SpawnSystem.STSpawnerDebugData
// 0x0001
struct FSTSpawnerDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

