#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UUICommonFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C");
		return pStaticClass;
	}


	void STATIC_SetAdaptationByOffset(class UWidget* Widget, class UObject* __WorldContext);
	void STATIC_SetAdaptation_Lobby(class UWidget* Widget, class UObject* __WorldContext);
	void STATIC_FormatSecondsToString(int Seconds, class UObject* __WorldContext, struct FText* Ret);
	void STATIC_SetAdaptation(class UWidget* Widget, class UObject* __WorldContext);
};


}

