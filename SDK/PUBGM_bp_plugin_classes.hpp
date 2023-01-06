#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class bp_plugin.bp_pluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class Ubp_pluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class bp_plugin.bp_pluginBPLibrary");
		return pStaticClass;
	}


	void bp_pluginTestEvent(const struct FString& jsonEventCmd);
	void bp_pluginSendEvent(const struct FString& jsonEventCmd);
	float bp_pluginLaunchMeemoFunction(const struct FString& Param);
};


}

