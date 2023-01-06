#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaCompositing.MediaPlane
// 0x0008 (0x03C8 - 0x03C0)
class AMediaPlane : public AActor
{
public:
	class UMediaPlaneComponent*                        MediaPlane;                                               // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlane");
		return pStaticClass;
	}

};


// Class MediaCompositing.MediaPlaneComponent
// 0x00D0 (0x0830 - 0x0760)
class UMediaPlaneComponent : public UPrimitiveComponent
{
public:
	struct FMediaPlaneParameters                       Plane;                                                    // 0x0760(0x0038) (Edit)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0798(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlaneComponent");
		return pStaticClass;
	}


	void SetMediaPlane(const struct FMediaPlaneParameters& Plane);
	void OnRenderTextureChanged();
	struct FMediaPlaneParameters GetPlane();
};


// Class MediaCompositing.MediaPlaneFrustumComponent
// 0x0000 (0x0760 - 0x0760)
class UMediaPlaneFrustumComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlaneFrustumComponent");
		return pStaticClass;
	}

};


// Class MediaCompositing.MovieSceneMediaSection
// 0x0030 (0x00E0 - 0x00B0)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              StartTimeOffset;                                          // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseExternalMediaPlayer;                                  // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	class UMediaPlayer*                                ExternalMediaPlayer;                                      // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MovieSceneMediaSection");
		return pStaticClass;
	}

};


// Class MediaCompositing.MovieSceneMediaTrack
// 0x0000 (0x0080 - 0x0080)
class UMovieSceneMediaTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MovieSceneMediaTrack");
		return pStaticClass;
	}

};


}

