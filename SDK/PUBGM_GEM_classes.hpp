#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GEM.FpsReportActor
// 0x0000 (0x03C0 - 0x03C0)
class AFpsReportActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GEM.FpsReportActor");
		return pStaticClass;
	}

};


}

