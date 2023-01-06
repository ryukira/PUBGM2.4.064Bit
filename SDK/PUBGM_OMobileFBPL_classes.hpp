#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OMobileFBPL.OMobileFBPL
// 0x0000 (0x0028 - 0x0028)
class UOMobileFBPL : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OMobileFBPL.OMobileFBPL");
		return pStaticClass;
	}


	bool IsRunningOnBattery();
	bool IsBatteryStateCharging();
	int GetVolumeState();
	struct FString GetDeviceName();
	float GetBatteryTemperature();
	int GetBatteryLevel();
	bool AreHeadphonesPluggedIn();
};


}

