#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Editor_login.Editor_login_C
// 0x0008 (0x03C8 - 0x03C0)
class AEditor_login_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Editor_login.Editor_login_C");
		return pStaticClass;
	}


	void STATIC_SetFpsByIndex(int idx);
	void STATIC_InpActEvt_Android_Back_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Editor_login(int EntryPoint);
};


}

