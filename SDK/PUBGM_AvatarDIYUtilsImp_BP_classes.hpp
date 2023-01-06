#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C
// 0x0000 (0x0028 - 0x0028)
class UAvatarDIYUtilsImp_BP_C : public UAvatarDIYBPUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass AvatarDIYUtilsImp_BP.AvatarDIYUtilsImp_BP_C");
		return pStaticClass;
	}


	bool IsWeaponAttachmentDIYAvatarItem(int* InWeaponAttachmentID);
	bool IsWeaponDIYAvatarItem(int* InWeaponID);
	struct FDIYMatParam GetDIYMatParam(int* TextureID);
	struct FString GetDIYBaseColorString(int* ColorID);
	struct FString GetDIYBasePatternPath(int* PatternID);
};


}

