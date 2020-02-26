#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TEKHoverSkiff_AnimBlueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.UpdateHoveringRootRotationOffset
struct UTEKHoverSkiff_AnimBlueprint_C_UpdateHoveringRootRotationOffset_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.UpdateLandedRootRotationOffset
struct UTEKHoverSkiff_AnimBlueprint_C_UpdateLandedRootRotationOffset_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTraces;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.ProcessHoverIK
struct UTEKHoverSkiff_AnimBlueprint_C_ProcessHoverIK_Params
{
	struct FRotator                                    NewTargetOffset_Rotation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.ComposeMeshTransformOffsets
struct UTEKHoverSkiff_AnimBlueprint_C_ComposeMeshTransformOffsets_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.HoverIK
struct UTEKHoverSkiff_AnimBlueprint_C_HoverIK_Params
{
	bool                                               bOverrideStartTransform;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          NewStartTransform;                                        // (Parm, IsPlainOldData)
	bool                                               bResetting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewTargetRotOffset;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewTargetLocOffset;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewPlaneNormal;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.UpdateCarriedDinoWeightRatio
struct UTEKHoverSkiff_AnimBlueprint_C_UpdateCarriedDinoWeightRatio_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.CalculateMeshRotationOffset
struct UTEKHoverSkiff_AnimBlueprint_C_CalculateMeshRotationOffset_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.BlueprintPlayAnimationEvent
struct UTEKHoverSkiff_AnimBlueprint_C_BlueprintPlayAnimationEvent_Params
{
	class UAnimMontage**                               AnimationMontage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              playedAnimLength;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_816
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_816_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4882
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4882_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_310
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_310_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_309
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_309_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_108
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_108_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4881
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4881_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4880
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4880_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4879
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4879_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4878
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4878_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4877
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4877_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4876
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4876_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_308
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_308_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_107
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_107_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4875
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4875_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4874
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4874_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4873
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4873_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4872
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4872_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4871
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4871_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_418
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_418_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4870
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4870_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4869
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4869_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4868
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4868_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4867
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4867_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4866
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4866_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4865
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4865_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.BlueprintUpdateAnimation
struct UTEKHoverSkiff_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint
struct UTEKHoverSkiff_AnimBlueprint_C_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
