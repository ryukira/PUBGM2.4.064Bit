#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C
// 0x000E (0x0B30 - 0x0B22)
class UVirtualBattleItemHandle_AvatarBP_C : public UBattleItemHandle_AvatarBP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B22(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B28(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C");
		return pStaticClass;
	}


	void GetWrapperClass(class UClass** WrapperClass);
	void STATIC_Constuct(struct FItemDefineID* InDefineID);
	void ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP(int EntryPoint);
};


}

