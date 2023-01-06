#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AI.AESpawner
// 0x0030 (0x0540 - 0x0510)
class AAESpawner : public ASTSpawnerBase
{
public:
	TArray<class UClass*>                              TeamAIClasses;                                            // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SpawnerCampItemID;                                        // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpawnerTeamID;                                            // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBotCategray>                          SpeciesCategory;                                          // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	TArray<class UActorComponent*>                     TeamAIComponents;                                         // 0x0530(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AESpawner");
		return pStaticClass;
	}


	void SwitchTeamAI(bool bEnable);
	void OnUnitSpawned(uint32_t InSpawnerID, class APawn* AIPawn, int ConfigId);
	void OnSpawnTimingRipe(bool IsRipe);
	void OnOwnedMobDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	void OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	TEnumAsByte<EBotCategray> GetSpeciesCategory();
	int GenerateParamID(int ConfigId, int BaseParamID);
	void DeactivateSpawner();
	void BPOnUnitSpawned(class APawn* AIPawn, int ConfigId);
	void ActivateSpawner();
};


// Class AI.AESpawnSubsystem
// 0x0070 (0x01A0 - 0x0130)
class UAESpawnSubsystem : public USTSpawnSubsystem
{
public:
	struct FMonsterParams                              CacheMobParams;                                           // 0x0130(0x0058)
	struct FFakePlayerParams                           CacheFPParams;                                            // 0x0188(0x0010)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AESpawnSubsystem");
		return pStaticClass;
	}


	class AActor* SpawnUnit(const struct FSTSpawnParam& SpawnParam);
	bool PreCheck();
	int GetUnitConfigID(class AActor* Unit);
};


// Class AI.AIActionExecutionComponent
// 0x0018 (0x01F0 - 0x01D8)
class UAIActionExecutionComponent : public ULuaActorComponent
{
public:
	class ANewFakePlayerAIController*                  MyController;                                             // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       MyPlayerPawn;                                             // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMLAIControllerComponent*                    MyMLAIControllerComp;                                     // 0x01E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIActionExecutionComponent");
		return pStaticClass;
	}


	void SetFocusRotation(float InPitch, float InYaw, float InRoll);
	bool IsFreeCamera();
	class APickUpWrapperActor* GetPickActorWithID(int UId);
	void DoActionMove(bool IsRun, float DirectionX, float DirectionY, float DirectionZ);
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll);
};


// Class AI.AISoundCollectionComponent
// 0x0120 (0x02F8 - 0x01D8)
class UAISoundCollectionComponent : public ULuaActorComponent
{
public:
	TMap<uint32_t, struct FCacheSoundState>            CacheStepSounds;                                          // 0x01D8(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FCacheSoundState>            CacheWeaponSounds;                                        // 0x0228(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FCacheSoundState>            CacheVehicleSounds;                                       // 0x0278(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x02C8(0x0018) MISSED OFFSET
	float                                              ClearStepSoundTime;                                       // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearWeaponSoundTime;                                     // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearVehicleSoundTime;                                    // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StepSoundMaxNum;                                          // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSoundMaxNum;                                        // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VehicleSoundMaxNum;                                       // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AISoundCollectionComponent");
		return pStaticClass;
	}


	void OnCollectionHearSound(ESoundType soundType, const struct FVector& InPos, class AActor* InSourceActor);
	TArray<struct FSoundState> GetCollectSoundInfo();
};


// Class AI.AIStateInfoComponent
// 0x09B8 (0x0AC8 - 0x0110)
class UAIStateInfoComponent : public UActorComponent
{
public:
	TMap<int, int>                                     ProgressSkillConfig;                                      // 0x0110(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, bool>                                    AvailableBackpacItemTypes;                                // 0x0160(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, int>                                     GrenadeTypeConfig;                                        // 0x01B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              VisibleAngle;                                             // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeadOffset;                                               // 0x0204(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              NearByEnemyRange;                                         // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              FogWeatherRangeScale;                                     // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                NearByEnemyMaxNum;                                        // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSearchNearItem;                                         // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	int                                                NearbyItemMaxNum;                                         // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyMaxBoxNum;                                          // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyAirDropBoxRangeInner;                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyAirDropBoxRangeOuter;                               // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyDeathBoxRange;                                      // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyPickUpWrapperRange;                                 // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CacheNearbyItemRangeCoefficient;                          // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyFindBuildingRange;                                  // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ItemStateChangedRange;                                    // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsItemVisiable;                                           // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseItemSpotLoc;                                         // 0x0245(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0246(0x0002) MISSED OFFSET
	float                                              NearbyObstacleRange;                                      // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyThrownRange;                                        // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyThrownMaxNum;                                       // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	int                                                NearbyDoorMaxNum;                                         // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyVehicleRange;                                       // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                NearbyVehicleMaxNum;                                      // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearbyBulletHoleRange;                                    // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NearbyBulletHoleMaxNum;                                   // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct FAIStateInfo                                CacheAIStateInfo;                                         // 0x0270(0x0308)
	struct FDiffAIStateInfo                            CacheDiffAIStateInfo;                                     // 0x0578(0x0420)
	struct FRedZoneState                               CacheRedZoneInfo;                                         // 0x0998(0x0018)
	float                                              AirAttackTotalTime;                                       // 0x09B0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsTouchedPlayer;                                          // 0x09B4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTreeAIWhenNoPlayerAround;                          // 0x09B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x09B6(0x0002) MISSED OFFSET
	float                                              IgnoreTreeAIRadius;                                       // 0x09B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSendPlayerSimpleInfo;                                    // 0x09BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x09BD(0x0003) MISSED OFFSET
	uint32_t                                           FrameNo;                                                  // 0x09C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	class UAirAttackComponent*                         AirAttackComp;                                            // 0x09C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APawn*                                       MyOwnerPawn;                                              // 0x09D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABattleRoyaleGameModeBase*                   MyGameMode;                                               // 0x09D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x60];                                      // 0x09E0(0x0060) MISSED OFFSET
	TMap<int, class APickUpWrapperActor*>              CacheAINearByItem;                                        // 0x0A40(0x0050) (ZeroConstructor)
	struct FCacheNearbyItemState                       CacheNearbyItemState;                                     // 0x0A90(0x0020)
	class UMLAIControllerComponent*                    MyMLAIControllerComp;                                     // 0x0AB0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint32_t                                           CacheModeMapId;                                           // 0x0AB8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0ABC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.AIStateInfoComponent");
		return pStaticClass;
	}


	TArray<struct FItemStateData> QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingRange, bool InIsUseItemSpotLoc);
	void OnItemStateChanged(const struct FVector& Location);
	void OnAirAttackInfo(TEnumAsByte<EAirAttackInfo> airattacktype, int waveIndex, const struct FAirAttackOrder& InAirAttackOrder, const struct FVector& InAirAttackArea);
	bool IsAvailableBackpacItemType(const struct FItemDefineID& DefineID);
	bool HasPlayerAround();
	struct FVector GetViewForwardVector(class ACharacter* InCharacter);
	struct FVehicleState GetVehicleStatus(class ASTExtraVehicleBase* InVehicle, class ASTExtraBaseCharacter* PawnInCar);
	struct FTLogAIShootInfo GetTLogAIShootInfo();
	TArray<struct FSoundState> GetSoundInfo();
	struct FProgressBarState GetProgressBarState();
	struct FAIPlayerInteractInfo GetPlayerInteractInfo();
	class APickUpWrapperActor* GetPickActorWithID(int UId);
	TArray<struct FObstacleState> GetObstaclesState(float Range);
	TArray<struct FVehicleState> GetNearbyVehicles(class ASTExtraBaseCharacter* InPawn);
	uint32_t GetFrameNo();
	TArray<struct FDoorState> GetDoorsState(float Range, int MaxNum);
	struct FDiffAIStateInfo GetDiffAIStateInfo();
	struct FAIDamageSources GetDamageSources();
	struct FCameraState GetCameraState(class ASTExtraBaseCharacter* InCharacter);
	TArray<struct FAIStateInfo> GetAllPlayerStateInfo();
	struct FAIStateInfo GetAIStateInfoInternal();
	struct FAIStateInfo GetAIStateInfo();
	TArray<struct FAIBackpackItem> GetAIPlayerBackpackItems(class ABaseAIController* InController);
	TArray<struct FAINearbyThrown> GetAINearbyThrownState(class ASTExtraBaseCharacter* InCharacter, float InRange, float InCheckAngle, int MaxNum);
	void ClearPlayerInteractInfo();
	void ClearDamageSources();
};


// Class AI.CustomDamageEventComponent
// 0x0138 (0x0310 - 0x01D8)
class UCustomDamageEventComponent : public ULuaActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSpawnActor;                                             // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AI.CustomDamageEventComponent.EventDataTable
	float                                              ActorSpawnGlobalCooldown;                                 // 0x0210(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnThrowBox;                                               // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0228(0x0004) MISSED OFFSET
	float                                              OwnerHealthPercentage;                                    // 0x022C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	TArray<struct FTriggeredCustomDamageEvent>         ClientEvents;                                             // 0x0240(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x70];                                      // 0x0250(0x0070) MISSED OFFSET
	TMap<struct FName, class UObject*>                 CacheUObjectMap;                                          // 0x02C0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.CustomDamageEventComponent");
		return pStaticClass;
	}


	void OnRep_ClientEvents();
};


// Class AI.CharacterCustomDamageEventComponent
// 0x0008 (0x0318 - 0x0310)
class UCharacterCustomDamageEventComponent : public UCustomDamageEventComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0310(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.CharacterCustomDamageEventComponent");
		return pStaticClass;
	}


	void OnTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer);
};


// Class AI.MLAIControllerComponent
// 0x0148 (0x0258 - 0x0110)
class UMLAIControllerComponent : public UActorComponent
{
public:
	class UClass*                                      AIActionExcutionCompClass;                                // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AISoundCollectCompClass;                                  // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AIStateInfoCompClass;                                     // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIActionExecutionComponent*                 AIActionExecutionComp;                                    // 0x0128(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIStateInfoComponent*                       AIStateInfoComp;                                          // 0x0130(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAISoundCollectionComponent*                 AISoundCollectComp;                                       // 0x0138(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HearRadius;                                               // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<ESTEPoseState>, struct FCameraViewPitchLimitData> CameraViewPitchLimitDataMap;                              // 0x0148(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     PrePos;                                                   // 0x0198(0x000C) (IsPlainOldData)
	float                                              PreTickTime;                                              // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	class ANewFakePlayerAIController*                  MyController;                                             // 0x01A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x01B0(0x0014) MISSED OFFSET
	float                                              FindNavLocationRadius;                                    // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxNavLocationFindTimes;                                  // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLerpRotation;                                         // 0x01CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01CD(0x0003) MISSED OFFSET
	float                                              LerpRotationThreshold;                                    // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsForceTargetRotation;                                    // 0x01D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	float                                              FirstLerpRotationDeltaTime;                               // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FreeCameraTurnVelocity;                                   // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01E0(0x0004) MISSED OFFSET
	bool                                               IsModifyDamageLuaOverride;                                // 0x01E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	float                                              RatingDamageScaleLuaOverride;                             // 0x01E8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSendVehicleInfo;                                   // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6B];                                      // 0x01ED(0x006B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAIControllerComponent");
		return pStaticClass;
	}


	void UnBindDelegates(bool IsEndPlay);
	void SetLuaAIParamConfigString(const struct FString& InAIParamConfigString);
	void RestartFightBehaviorTree();
	bool IsFreeCamera();
	struct FRotator GetViewRotation();
	struct FVector GetViewForwardVector();
	class UAIStateInfoComponent* GetAIStateInfoComp();
	class UAIActionExecutionComponent* GetAIActionExecutionComp();
	void DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll);
	bool CheckCameraViewPitchLimit(struct FRotator* InOutTargetRot);
	void BindDelegates();
};


// Class AI.MLAISubSystem
// 0x0180 (0x01B0 - 0x0030)
class UMLAISubSystem : public UWorldSubsystem
{
public:
	TMap<uint32_t, struct FAIPlayerState>              CacheAIPlayerStates;                                      // 0x0030(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerWeapon>             CacheAIPlayerWeapons;                                     // 0x0080(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIPlayerEquipment>          CacheAIPlayerEquipments;                                  // 0x00D0(0x0050) (ZeroConstructor)
	TArray<class UAIStateInfoComponent*>               AIStateInfoComps;                                         // 0x0120(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FBulletHoleRecordInfo>               CacheBulletHoles;                                         // 0x0130(0x0010) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   CacheSpecialZones;                                        // 0x0140(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) MISSED OFFSET
	TMap<class AActor*, class ASpecialZoneActor*>      CacheSpecialZoneParents;                                  // 0x0160(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAISubSystem");
		return pStaticClass;
	}


	void StartRequestCache();
	void SetSpecialZoneCustomState(class AActor* InParent, int InCustomState);
	void OnItemStateChanged(const struct FVector& Location);
	bool IsAIBotGame();
	void EndRequestCache();
};


// Class AI.MLAITrainingComponent
// 0x0028 (0x0138 - 0x0110)
class UMLAITrainingComponent : public UActorComponent
{
public:
	bool                                               IsBeginRequestAIState;                                    // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsEndRequestAIState;                                      // 0x0111(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x26];                                      // 0x0112(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.MLAITrainingComponent");
		return pStaticClass;
	}


	void StopRunnable();
	void SendAIStateRequest(TArray<unsigned char> Packet);
	bool IsRequestAIState();
	void InitRunnable(float InStartCollectingInterval, float InSendInterval, float InTimeOutInterval);
	void EndRequestAIState();
};


// Class AI.SpecialZoneShapeComponent
// 0x0010 (0x0770 - 0x0760)
class USpecialZoneShapeComponent : public UPrimitiveComponent
{
public:
	float                                              SphereRadius;                                             // 0x0760(0x0004) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0764(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.SpecialZoneShapeComponent");
		return pStaticClass;
	}

};


// Class AI.SpecialZoneActor
// 0x0020 (0x03E0 - 0x03C0)
class ASpecialZoneActor : public AActor
{
public:
	int                                                ZoneID;                                                   // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CustomState;                                              // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpecialZoneShapeComponent*                  SpecialZoneShapeComponent;                                // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      CacheParentActor;                                         // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.SpecialZoneActor");
		return pStaticClass;
	}


	void UpdateCustomState(int InCustomState);
	struct FSpecialZoneState GetSpecialZoneState();
};


// Class AI.STStrategySpecies_Candidate
// 0x0000 (0x0110 - 0x0110)
class USTStrategySpecies_Candidate : public USTStrategySpecies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategySpecies_Candidate");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class AI.STStrategySpecies_Lua
// 0x0000 (0x0110 - 0x0110)
class USTStrategySpecies_Lua : public USTStrategySpecies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategySpecies_Lua");
		return pStaticClass;
	}


	TArray<struct FUnitConfig> Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies);
	void LuaSupply(int ReferencedCount);
};


// Class AI.STStrategyTiming_Event
// 0x0020 (0x0110 - 0x00F0)
class USTStrategyTiming_Event : public USTStrategyTiming
{
public:
	struct FString                                     EventId;                                                  // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     EventName;                                                // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.STStrategyTiming_Event");
		return pStaticClass;
	}


	void TickStrategy(float DeltaTime);
	void OnSpawnEventBroadcast();
	void ActivateStrategy(class ASTSpawnerBase* Owner);
};


// Class AI.VehicleAIUserComponent
// 0x0000 (0x0208 - 0x0208)
class UVehicleAIUserComponent : public UVehicleUserComponentBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleAIUserComponent");
		return pStaticClass;
	}


	void ServerVehicleLeanOut(bool bLeanOut);
	void ServerExitVehicle();
	void ServerEnterVehicle(class ASTExtraVehicleBase* InVehicle, unsigned char SeatType);
	void ServerChangeVehicleSeat(int InSeatIndex);
	void MulticastExitVehicle();
	void MulticastEnterVehicle(class ASTExtraVehicleBase* InVehicle, class ASTExtraPlayerCharacter* Pawn, bool bSuccess, unsigned char SeatType, int SeatIndex);
	void MulticastChangeVehicleSeat(int InSeatIndex);
};


// Class AI.VehicleCustomDamageEventComponent
// 0x0008 (0x0318 - 0x0310)
class UVehicleCustomDamageEventComponent : public UCustomDamageEventComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0310(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AI.VehicleCustomDamageEventComponent");
		return pStaticClass;
	}


	void OnVehicleHPFuelChanged(float HP, float Fuel);
};


}

