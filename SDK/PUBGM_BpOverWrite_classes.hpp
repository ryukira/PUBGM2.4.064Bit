#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BpOverWrite.BpOverWrite_C
// 0x0000 (0x0190 - 0x0190)
class UBpOverWrite_C : public UBPClassManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BpOverWrite.BpOverWrite_C");
		return pStaticClass;
	}

};


}

