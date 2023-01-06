#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C
// 0x00C8 (0x0398 - 0x02D0)
class UCommon_RankIntegralLevel_Style_Small_UIBP_C : public ULuaUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                Root;                                                     // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<ERankIntegralType>                     RankIntegralType;                                         // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	class UUserWidget*                                 RankIntegralUIBP;                                         // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 RankTextColor;                                            // 0x02F0(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 RankTextShadowColor;                                      // 0x0318(0x0028) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              RankFontInfo;                                             // 0x0340(0x0058) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C");
		return pStaticClass;
	}


	void STATIC_IsSegmentStarSwitchOpen(bool* isStarOpen);
	void SetArenaRankInteralWithCustomColor(int RankInteral, class UTextBlock* textIntegralName, const struct FSlateColor& Color);
	void SetRankInteralBySeason(int rankIntegral, class UTextBlock* textIntegralName, int SeasonID);
	void SetRankCustomColor(int rankIntegral, class UTextBlock* textIntegralName, const struct FSlateColor& Color, int SeasonID);
	void SetRankInteralJaguar(int rankIntegral, class UTextBlock* textIntegralName);
	void SetRankInteral(int rankIntegral, class UTextBlock* textIntegralName);
	void SetRankInteralInXMission(int rankIntegral, class UTextBlock* textIntegralName);
	void SetArenaRankInteral(int rankIntegral, class UTextBlock* textIntegralName);
	void SetRankInteralCommon(int rankIntegral, class UTextBlock* textIntegralName, int SeasonID);
	void STATIC_PreConstruct(bool* IsDesignTime);
	void Construct();
	void ConstructItem();
	void Destruct();
	void ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP(int EntryPoint);
};


}

