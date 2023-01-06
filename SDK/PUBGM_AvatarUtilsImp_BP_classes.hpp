#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AvatarUtilsImp_BP.AvatarUtilsImp_BP_C
// 0x0000 (0x0610 - 0x0610)
class UAvatarUtilsImp_BP_C : public UAvatarBPUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass AvatarUtilsImp_BP.AvatarUtilsImp_BP_C");
		return pStaticClass;
	}


	int STATIC_GetAdjustWeaponBPID_Lobby(int* WeaponID);
	void STATIC_GetClothAvatarSuits(int* gender, struct FItemDefineID* ItemDefineID, TArray<int>* OutClothSuits);
	int GetVehicleAvatarTemplateID(struct FItemDefineID* ItemDefineID);
	int STATIC_GetClothAvatarTemplateID(struct FItemDefineID* ItemDefineID);
	int STATIC_GetBPIDByResID(int* resID);
	bool STATIC_GetVehicleDefaultStyleID(int* InVehicleSkinID, TArray<int>* OutStyleIDList);
	struct FString STATIC_GetVehicleBPPathBySkinID(int* InVehicleSkinID);
	int STATIC_GetVehicleShapeBySkinID(int* InVehicleSkinID);
	void STATIC_GetBPTableName(int Type, int TypeSpecificID, struct FString* BPTableName, int* SpecificID);
	void STATIC_ConstructAvatarDataFromTable(int* ItemType, int* TemplateID, struct FAvatarTableData* OutAvatarTableData);
	class UItemHandleBase* STATIC_CreateAvatarHandle(struct FItemDefineID* DefineID, class UObject** Outer, bool* bLobby);
	struct FString GetAvatarHandlePath(struct FItemDefineID* DefineID, bool* bLobby);
};


}

