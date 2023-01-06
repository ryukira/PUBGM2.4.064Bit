#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PhotonDestructible.FracturedStaticMeshActor
// 0x0038 (0x03F8 - 0x03C0)
class AFracturedStaticMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	class UFracturedStaticMeshComponent*               FracturedStaticMeshComponent;                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              SingleFragmentHP;                                         // 0x03D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnableImpactDamage : 1;                                   // 0x03D4(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              ImpactDamageValue;                                        // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FFStaticMeshNetData                         FSMNetData;                                               // 0x03E0(0x0018) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedStaticMeshActor");
		return pStaticClass;
	}


	void Server_OnActorRadiusHitAction(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& WorldImpactPoint, float Radius);
	void Server_OnActorHitAction(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnRep_FSMNetData();
	void Client_OnFragmentsHPChanged(TArray<int> FragmentsIndex, TArray<float> FragmentsChangedHP, const struct FVector& WorldImpactPoint, float Radius);
	void Client_OnFragmentHPChanged(int FragmentIndex, float FragmentHP, const struct FVector& WorldImpactPoint);
};


// Class PhotonDestructible.PhotonDestructibleSurfaceComponent
// 0x0080 (0x0910 - 0x0890)
class UPhotonDestructibleSurfaceComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0890(0x0018) MISSED OFFSET
	TEnumAsByte<EFracturedAxis>                        MaskUAxis;                                                // 0x08A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFracturedAxis>                        MaskVAxis;                                                // 0x08A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x08AA(0x0006) MISSED OFFSET
	class UTexture2D*                                  MaskTexture2D;                                            // 0x08B0(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FPDSurfaceNetData                           SurfaceNetData;                                           // 0x08B8(0x0018) (Net)
	struct FGuid                                       TargetPuppetGUID;                                         // 0x08D0(0x0010) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x08E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceComponent");
		return pStaticClass;
	}


	void Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
	void OnRep_SurfaceNetData();
	void Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
};


// Class PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent
// 0x0070 (0x0B40 - 0x0AD0)
class UPhotonDestructibleInstancedSurfaceComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0AD0(0x0018) MISSED OFFSET
	TEnumAsByte<EFracturedAxis>                        MaskUAxis;                                                // 0x0AE8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFracturedAxis>                        MaskVAxis;                                                // 0x0AE9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0AEA(0x0006) MISSED OFFSET
	class UMaterialInterface*                          Texture2DArrayMaterial;                                   // 0x0AF0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AtlasMaterial;                                            // 0x0AF8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDSurfaceNetData                           SurfaceNetData;                                           // 0x0B00(0x0018) (Net)
	TArray<struct FGuid>                               TargetPuppetGUID;                                         // 0x0B18(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0B28(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent");
		return pStaticClass;
	}


	void Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
	void OnRep_SurfaceNetData();
	void Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
};


// Class PhotonDestructible.FracturedMesh
// 0x0048 (0x0070 - 0x0028)
class UFracturedMesh : public UObject
{
public:
	TArray<class UFracturedFragmentInfo*>              FracturedFragmentInfo;                                    // 0x0028(0x0010) (ZeroConstructor)
	int                                                ClipPlaneMaterialIndex;                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFracturedAxis>                        FracturedClipAxis;                                        // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x33];                                      // 0x003D(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedMesh");
		return pStaticClass;
	}

};


// Class PhotonDestructible.FracturedMeshSettings
// 0x0000 (0x0028 - 0x0028)
class UFracturedMeshSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedMeshSettings");
		return pStaticClass;
	}

};


// Class PhotonDestructible.FracturedSkeletalMesh
// 0x0088 (0x03D8 - 0x0350)
class UFracturedSkeletalMesh : public USkeletalMesh
{
public:
	class UFracturedMesh*                              FracturedMesh;                                            // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      GenerateNormalSimplifiedLOD : 1;                          // 0x0358(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	TArray<struct FKConvexElem>                        NormalConvexElemForCollision;                             // 0x0360(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedSkeletalMesh");
		return pStaticClass;
	}

};


// Class PhotonDestructible.FracturedSkeletalMeshActor
// 0x0058 (0x0418 - 0x03C0)
class AFracturedSkeletalMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	class UFracturedSkinnedMeshComponent*              FracturedSkinnedMeshComponent;                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              SingleFragmentHP;                                         // 0x03D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnableImpactDamage : 1;                                   // 0x03D4(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              ImpactDamageValue;                                        // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactImpulseForce;                                       // 0x03DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFSkeletalMeshNetData                       FSMNetData;                                               // 0x03E0(0x0038) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedSkeletalMeshActor");
		return pStaticClass;
	}


	void Server_OnActorHitAction(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnRep_FSMNetData();
	void Client_OnImpact(int FragmentIndex, const struct FVector& ImpactWorldPos, const struct FVector& ImpactWorldDir, float ImpulseForce, float InFirstImpactTime);
};


// Class PhotonDestructible.FracturedSkinnedMeshComponent
// 0x00C0 (0x09F0 - 0x0930)
class UFracturedSkinnedMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0930(0x0050) MISSED OFFSET
	TEnumAsByte<EFracturedMeshDestructibleAction>      DestructibleAction;                                       // 0x0980(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFracturedImpactEffType>               ImpactEffType;                                            // 0x0981(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0982(0x0002) MISSED OFFSET
	float                                              ImpactEffSpreadOutFactor;                                 // 0x0984(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShowFracturedMaxDistance;                                 // 0x0988(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShowFracturedMaxDistanceBuffer;                           // 0x098C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShowFracturedTime;                                        // 0x0990(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RemovePhysicsIfFragmentHidden : 1;                        // 0x0994(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0995(0x0003) MISSED OFFSET
	class UFracturedSkeletalMesh*                      FracturedMesh;                                            // 0x0998(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  BodySetup;                                                // 0x09A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x48];                                      // 0x09A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedSkinnedMeshComponent");
		return pStaticClass;
	}

};


// Class PhotonDestructible.FracturedStaticMesh
// 0x0078 (0x0228 - 0x01B0)
class UFracturedStaticMesh : public UStaticMesh
{
public:
	class UFracturedMesh*                              FracturedMesh;                                            // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseUnDestructedTriangle : 1;                              // 0x01B8(0x0001)
	unsigned char                                      DistanceFieldEightBit : 1;                                // 0x01B8(0x0001)
	unsigned char                                      UnknownData00[0x6F];                                      // 0x01B9(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedStaticMesh");
		return pStaticClass;
	}

};


// Class PhotonDestructible.FracturedStaticMeshComponent
// 0x00E0 (0x0970 - 0x0890)
class UFracturedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x4D];                                      // 0x0890(0x004D) MISSED OFFSET
	TEnumAsByte<EFracturedMeshConnectionType>          CheckConnectionType;                                      // 0x08DD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x08DE(0x0002) MISSED OFFSET
	class UFracturedStaticMesh*                        FracturedMesh;                                            // 0x08E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     NormalCollisionEnabled;                                   // 0x08E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	struct FName                                       NormalCollisionProfileName;                               // 0x08F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     AllBrokenCollisionEnabled;                                // 0x08F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08F9(0x0007) MISSED OFFSET
	struct FName                                       AllBrokenCollisionProfileName;                            // 0x0900(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShowFracturedMaxDistance;                                 // 0x0908(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShowFracturedMaxDistanceBuffer;                           // 0x090C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnableFracturedMeshDecal : 1;                             // 0x0910(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0911(0x0003) MISSED OFFSET
	float                                              FracturedMeshDecalFactor;                                 // 0x0914(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FracturedMeshDecalMaterialIndex;                          // 0x0918(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FracturedMeshDecalMaterial;                               // 0x0920(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          FracturedMeshDecalNormalMaterial;                         // 0x0928(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShowDecalMaxDistance;                                     // 0x0930(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShowDecalMaxDistanceBuffer;                               // 0x0934(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  ThisBodySetup;                                            // 0x0938(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x30];                                      // 0x0940(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedStaticMeshComponent");
		return pStaticClass;
	}

};


// Class PhotonDestructible.FEdgeData
// 0x0000 (0x0028 - 0x0028)
class UFEdgeData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FEdgeData");
		return pStaticClass;
	}

};


// Class PhotonDestructible.FracturedFragmentInfo
// 0x0058 (0x0080 - 0x0028)
class UFracturedFragmentInfo : public UObject
{
public:
	TArray<struct FKConvexElem>                        ConvexElemForCollision;                                   // 0x0028(0x0010) (ZeroConstructor)
	struct FVector                                     centerPoint;                                              // 0x0038(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<int>                                        neighbors;                                                // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FPlane>                              FacePlaneData;                                            // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             PolygonVertex;                                            // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      CanDestroy : 1;                                           // 0x0078(0x0001) (Edit)
	unsigned char                                      HasTriangle : 1;                                          // 0x0078(0x0001) (Edit, EditConst)
	unsigned char                                      IsBorder : 1;                                             // 0x0078(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedFragmentInfo");
		return pStaticClass;
	}

};


// Class PhotonDestructible.MaterialExpressionObjectLocalPosition
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionObjectLocalPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.MaterialExpressionObjectLocalPosition");
		return pStaticClass;
	}

};


// Class PhotonDestructible.MaterialExpressionGetPDInstancedSurfaceMask
// 0x0000 (0x0060 - 0x0060)
class UMaterialExpressionGetPDInstancedSurfaceMask : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.MaterialExpressionGetPDInstancedSurfaceMask");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleAtlasPool
// 0x0010 (0x0120 - 0x0110)
class UPhotonDestructibleAtlasPool : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleAtlasPool");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleMgr
// 0x0028 (0x03E8 - 0x03C0)
class APhotonDestructibleMgr : public AActor
{
public:
	class UPhotonDestructibleTexturePool*              TexturePool;                                              // 0x03C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructibleAtlasPool*                AtlasPool;                                                // 0x03C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructibleTexture2DArrayManager*    Texture2DArrayManager;                                    // 0x03D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructibleSurfaceConfig*            SurfaceConfig;                                            // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructiblePuppetMgr*                PuppetMgr;                                                // 0x03E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleMgr");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructiblePuppet
// 0x0010 (0x02E0 - 0x02D0)
class UPhotonDestructiblePuppet : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppet");
		return pStaticClass;
	}


	void TriggerPuppetEvent(int EventId);
};


// Class PhotonDestructible.PhotonDestructiblePuppetContainer
// 0x0020 (0x02F0 - 0x02D0)
class UPhotonDestructiblePuppetContainer : public USceneComponent
{
public:
	TArray<struct FGuid>                               TargetsPuppetGUID;                                        // 0x02D0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FString>                             TargetsName;                                              // 0x02E0(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppetContainer");
		return pStaticClass;
	}


	void TriggerPuppetEvent(const struct FString& ObjectName, int EventId);
};


// Class PhotonDestructible.PhotonDestructiblePuppetMgr
// 0x0050 (0x0160 - 0x0110)
class UPhotonDestructiblePuppetMgr : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0110(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppetMgr");
		return pStaticClass;
	}


	void Client_TriggerPuppetEvent(const struct FGuid& PuppetGUID, int EventId);
};


// Class PhotonDestructible.PhotonDestructiblePuppetTarget
// 0x0000 (0x0028 - 0x0028)
class UPhotonDestructiblePuppetTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppetTarget");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceActor
// 0x0010 (0x03D0 - 0x03C0)
class APhotonDestructibleSurfaceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	class UPhotonDestructibleSurfaceComponent*         SurfaceComponent;                                         // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceActor");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActor
// 0x0010 (0x03D0 - 0x03C0)
class APhotonDestructibleInstancedSurfaceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	class UPhotonDestructibleInstancedSurfaceComponent* InstancedSurfaceComponent;                                // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActor");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceActorBase
// 0x0000 (0x0028 - 0x0028)
class UPhotonDestructibleSurfaceActorBase : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceActorBase");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActorBase
// 0x0000 (0x0028 - 0x0028)
class UPhotonDestructibleInstancedSurfaceActorBase : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActorBase");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceBase
// 0x0000 (0x0028 - 0x0028)
class UPhotonDestructibleSurfaceBase : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceBase");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceConfig
// 0x0010 (0x0120 - 0x0110)
class UPhotonDestructibleSurfaceConfig : public UActorComponent
{
public:
	TArray<class UPhotonDestructibleSurfaceMask*>      TextureMaskData;                                          // 0x0110(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceConfig");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleSurfaceMask
// 0x0020 (0x0048 - 0x0028)
class UPhotonDestructibleSurfaceMask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FIntPoint                                   MaskSize;                                                 // 0x0030(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceMask");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleTexture2DArrayManager
// 0x0028 (0x0138 - 0x0110)
class UPhotonDestructibleTexture2DArrayManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0110(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleTexture2DArrayManager");
		return pStaticClass;
	}

};


// Class PhotonDestructible.PhotonDestructibleTexturePool
// 0x0020 (0x0130 - 0x0110)
class UPhotonDestructibleTexturePool : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleTexturePool");
		return pStaticClass;
	}

};


}

