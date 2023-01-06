#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x0890 - 0x0890)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeProxy
// 0x0490 (0x0850 - 0x03C0)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x03C8(0x0010) (Edit, EditConst, IsPlainOldData)
	struct FGuid                                       BoundingGuid;                                             // 0x03D8(0x0010) (Edit, IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x03E8(0x0008) (IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x03F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x03F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScreenSizeLOD;                                        // 0x03F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03FA(0x0002) MISSED OFFSET
	float                                              LOD0DistributionSetting;                                  // 0x03FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistributionSetting;                                   // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NearMaxLOD_Baked;                                         // 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	float                                              NearFactor_Baked;                                         // 0x0408(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NearExtent_Baked;                                         // 0x040C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FarFactor_Baked;                                          // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LandscapeRoughness;                                       // 0x0414(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               EnableImproveLOD;                                         // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	TArray<float>                                      ImproveLODValues;                                         // 0x0420(0x0010) (ZeroConstructor)
	unsigned char                                      NearMaxLOD;                                               // 0x0430(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	float                                              NearFactor;                                               // 0x0434(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearExtent;                                               // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarFactor;                                                // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0440(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x0450(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCacheHeightData : 1;                                     // 0x0454(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      OtherMaterials;                                           // 0x0468(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      bOverrideGrassTypes : 1;                                  // 0x04B8(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	TArray<class ULandscapeGrassType*>                 GrassTypes;                                               // 0x04C0(0x0010) (Edit, ZeroConstructor)
	float                                              MinGrassWeightThreshold;                                  // 0x04D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x04D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x04D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class UTexture2D*                                  GrassColor_WorldMaskNoiseTexture;                         // 0x04E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GrassColor_UVScale_WorldMaskNoise;                        // 0x04E8(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   GrassColor_Center_WorldMaskNoise;                         // 0x04F0(0x0008) (Edit, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x04F8(0x0010) (ExportObject, ZeroConstructor)
	class ULandscapeAOTextureDataAsset*                LandscapeAOTextureDataAsset;                              // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0510(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0520(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData08[0x60];                                      // 0x0530(0x0060) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x0590(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0591(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x0594(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0598(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0598(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x0598(0x0001) (Edit)
	struct FLightingChannels                           LightingChannels;                                         // 0x0599(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x059A(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x059A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0x1];                                       // 0x059B(0x0001) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x05A0(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x05B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x05BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x05C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x05C8(0x0180) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x0748(0x0001) (Edit)
	unsigned char                                      bUseHoleConsistent : 1;                                   // 0x0748(0x0001) (Edit)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x074C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0750(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0754(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0758(0x0001) (Edit)
	unsigned char                                      bMobileMultiLayers : 1;                                   // 0x0758(0x0001) (Edit)
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x0759(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x075A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0xF5];                                      // 0x075B(0x00F5) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeProxy");
		return pStaticClass;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistributionSettingConsoleVariable();
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeLOD0DistributionSettingConsoleVariable();
	void ChangebUseScreenSizeLOD(bool InbUseScreenSizeLOD);
};


// Class Landscape.Landscape
// 0x00A0 (0x08F0 - 0x0850)
class ALandscape : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0850(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.Landscape");
		return pStaticClass;
	}

};


// Class Landscape.SimpleMeshComponent
// 0x0030 (0x07C0 - 0x0790)
class USimpleMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0790(0x0008) MISSED OFFSET
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0798(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x07B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.SimpleMeshComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeComponent
// 0x03E0 (0x0B40 - 0x0760)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                             // 0x0760(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0764(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0768(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x076C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0770(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      OverrideOtherMaterials;                                   // 0x0788(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FOverridePhyxMaterial                       OverridePhyxMaterial;                                     // 0x07D8(0x0020) (Edit)
	unsigned char                                      bOverrideGrassTypes : 1;                                  // 0x07F8(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07F9(0x0007) MISSED OFFSET
	TArray<class ULandscapeGrassType*>                 GrassTypes;                                               // 0x0800(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x0810(0x0010) (ZeroConstructor)
	TMap<struct FName, class UMaterialInstanceConstant*> OtherMaterialInstances;                                   // 0x0820(0x0050) (ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0870(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0880(0x0010) (ZeroConstructor)
	int                                                VisibilityLayerChannel;                                   // 0x0890(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0898(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    WeightmapScaleBias;                                       // 0x08A0(0x0010) (IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x08B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x08B4(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x08C0(0x0010) (IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x08D0(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FVisibilityData>       MultiVisibilityTextureData;                               // 0x08D8(0x0050) (ZeroConstructor)
	struct FString                                     VisibleVisibilityLayer;                                   // 0x0928(0x0010) (ZeroConstructor)
	struct FBox                                        CachedLocalBox;                                           // 0x0938(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x0954(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x0970(0x0010) (IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0980(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0990(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0994(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0998(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x099C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x09A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x09A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x09A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MobileVertexHoleMaxLOD;                                   // 0x09AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x09B0(0x0010) MISSED OFFSET
	TArray<float>                                      LODDeltaVertex;                                           // 0x09C0(0x0010) (ZeroConstructor)
	float                                              MaxDeltaVertex;                                           // 0x09D0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateID;                                                  // 0x09D4(0x0010) (IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x09E4(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x09F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UStaticMesh*                                 OccluderMesh;                                             // 0x0A00(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0A08(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0A10(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      OtherMobileMaterialInterfaces;                            // 0x0A18(0x0050) (ZeroConstructor)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                  // 0x0A68(0x0010) (ZeroConstructor)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x0A78(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMobileMultiLayers : 1;                                   // 0x0A80(0x0001)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0A81(0x0007) MISSED OFFSET
	TArray<uint16_t>                                   CachedHeightData;                                         // 0x0A88(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x68];                                      // 0x0A98(0x0068) MISSED OFFSET
	bool                                               bHasROCData;                                              // 0x0B00(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x17];                                      // 0x0B01(0x0017) MISSED OFFSET
	struct FName                                       UsedOtherMaterialName;                                    // 0x0B18(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x20];                                      // 0x0B20(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGeometryAsset
// 0x0168 (0x0198 - 0x0030)
class ULandscapeGeometryAsset : public UDataAsset
{
public:
	TArray<struct FVector>                             Vertex;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             Normals;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector2D>                           UV;                                                       // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        Indices;                                                  // 0x0060(0x0010) (Edit, ZeroConstructor)
	TMap<struct FIntPoint, int>                        ComponentIndexOffset;                                     // 0x0070(0x0050) (Edit, ZeroConstructor)
	int                                                ComponentIndexCount;                                      // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ComponentVertexCount;                                     // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FLevelComponentMapValue> SubLevelComponentMap;                                     // 0x00C8(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Landscape.LandscapeGeometryAsset.HighQualityMesh
	float                                              HighQualityMeshDestroyHight;                              // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	TMap<struct FIntPoint, int>                        ComponentVertexIndexOffset;                               // 0x0148(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGeometryAsset");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x03C0 - 0x03C0)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0410 - 0x03C0)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03C0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x0760 - 0x0760)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0030 (0x0058 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0038(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0040(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0044(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0050(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0051(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x0840 - 0x0760)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                      // 0x0760(0x0010) (ZeroConstructor)
	int                                                SectionBaseX;                                             // 0x0770(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0774(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0778(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x077C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x0780(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0788(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x0798(0x0010) (IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x07A8(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x07C4(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x07E0(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x07F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0800(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return pStaticClass;
	}

};


// Class Landscape.IdeaGrassFieldFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UIdeaGrassFieldFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.IdeaGrassFieldFunctionLibrary");
		return pStaticClass;
	}


	void IdeaGrassRenderForceTextureTrample(const struct FIdeaGrassFieldData& GrassFieldData);
	void IdeaGrassRenderForceTextureSkill(const struct FIdeaGrassFieldData& GrassFieldData);
	void IdeaGrassRenderForceTextureFade(const struct FIdeaGrassFieldData& GrassFieldData);
	void IdeaGrassRenderForceTexture(const struct FIdeaGrassFieldData& GrassFieldData);
};


// Class Landscape.LandscapeInfo
// 0x03C8 (0x03F0 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x244];                                     // 0x006C(0x0244) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x006C(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData02[0xF0];                                      // 0x0300(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfo");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0058 (0x0080 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0050 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (0x0220 - 0x0218)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x0218(0x0001)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x0218(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0219(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0020 (0x0860 - 0x0840)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                 // 0x0840(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0850(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x03C8 - 0x03C0)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x08C0 - 0x0890)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x0890(0x0010) (IsPlainOldData)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x08A0(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x08B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x08B1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x0790 - 0x0760)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                            // 0x0760(0x0010) (ZeroConstructor)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x0770(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0780(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x0098 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (Edit, IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0070(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0870 - 0x0850)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0850(0x001C) (Edit, IsPlainOldData)
	bool                                               bLandscapeProxyUseSceenSizeLOD;                           // 0x086C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x086D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenCoords
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionLandscapeFlattenCoords : public UMaterialExpression
{
public:
	struct FExpressionInput                            UVScaleBias;                                              // 0x0060(0x0038)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenCoords");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenTexture
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionLandscapeFlattenTexture : public UMaterialExpression
{
public:
	struct FExpressionInput                            Coordinates;                                              // 0x0060(0x0038)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenTexture");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenBaseColor
// 0x0000 (0x0098 - 0x0098)
class UMaterialExpressionLandscapeFlattenBaseColor : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenBaseColor");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenNormal
// 0x0000 (0x0098 - 0x0098)
class UMaterialExpressionLandscapeFlattenNormal : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenNormal");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeFlattenRSM
// 0x0000 (0x0098 - 0x0098)
class UMaterialExpressionLandscapeFlattenRSM : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenRSM");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0070(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0050 (0x00B0 - 0x0060)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	struct FExpressionInput                            MappingScaleOverride;                                     // 0x0068(0x0038)
	float                                              MappingScale;                                             // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x006C(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x00F0 - 0x0060)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0060(0x0038)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00D8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x00DC(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x00F8 - 0x0060)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0060(0x0038)
	struct FExpressionInput                            Layer;                                                    // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00DC(0x000C) (Edit, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00E8(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0060(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return pStaticClass;
	}

};


}

