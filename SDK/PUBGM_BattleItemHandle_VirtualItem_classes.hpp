#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_VirtualItem.BattleItemHandle_VirtualItem_C
// 0x0000 (0x0140 - 0x0140)
class UBattleItemHandle_VirtualItem_C : public UBattleItemHandleBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_VirtualItem.BattleItemHandle_VirtualItem_C");
		return pStaticClass;
	}

};


}

