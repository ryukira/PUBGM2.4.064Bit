#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameLogicManagerBase.GameLogicManagerBase_C
// 0x0000 (0x0170 - 0x0170)
class UGameLogicManagerBase_C : public UGameBusinessManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GameLogicManagerBase.GameLogicManagerBase_C");
		return pStaticClass;
	}

};


}

