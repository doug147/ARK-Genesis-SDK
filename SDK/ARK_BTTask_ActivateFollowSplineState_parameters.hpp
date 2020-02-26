#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTTask_ActivateFollowSplineState_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTTask_ActivateFollowSplineState.BTTask_ActivateFollowSplineState_C.ReceiveExecute
struct UBTTask_ActivateFollowSplineState_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_ActivateFollowSplineState.BTTask_ActivateFollowSplineState_C.ExecuteUbergraph_BTTask_ActivateFollowSplineState
struct UBTTask_ActivateFollowSplineState_C_ExecuteUbergraph_BTTask_ActivateFollowSplineState_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
