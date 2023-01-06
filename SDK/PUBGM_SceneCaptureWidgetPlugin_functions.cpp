// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SceneCaptureWidgetPlugin.SceneCaptureWidget.SetSceneCaptureCameraActor
// ()
// Parameters:
// class ASceneCaptureCameraActor* InSceneCaptureCameraActor      (Parm, ZeroConstructor, IsPlainOldData)

void USceneCaptureWidget::SetSceneCaptureCameraActor(class ASceneCaptureCameraActor* InSceneCaptureCameraActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SceneCaptureWidgetPlugin.SceneCaptureWidget.SetSceneCaptureCameraActor");

	USceneCaptureWidget_SetSceneCaptureCameraActor_Params params;
	params.InSceneCaptureCameraActor = InSceneCaptureCameraActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

