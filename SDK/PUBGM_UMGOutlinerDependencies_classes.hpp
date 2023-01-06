#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UMGOutlinerDependencies.UMGOutlinerBorderPanelWidget
// 0x0010 (0x0110 - 0x0100)
class UUMGOutlinerBorderPanelWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMGOutlinerDependencies.UMGOutlinerBorderPanelWidget");
		return pStaticClass;
	}

};


// Class UMGOutlinerDependencies.UMGOutlinerBorderPanel
// 0x0008 (0x0268 - 0x0260)
class UUMGOutlinerBorderPanel : public UUserWidget
{
public:
	class UUMGOutlinerBorderPanelWidget*               BorderPanelWidget;                                        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMGOutlinerDependencies.UMGOutlinerBorderPanel");
		return pStaticClass;
	}

};


}

