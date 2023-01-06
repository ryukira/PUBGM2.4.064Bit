#pragma once

// PUBG (2.4.0) SDKGen By @R_Boriel

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
struct USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params
{
	bool                                               bInAutoRegisterWithBudgetAllocator;                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
struct UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationBudgetAllocatorParameters         InParameters;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
struct UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

