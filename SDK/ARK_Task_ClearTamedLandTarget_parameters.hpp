#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_ClearTamedLandTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_ClearTamedLandTarget.Task_ClearTamedLandTarget_C.ReceiveExecute
struct UTask_ClearTamedLandTarget_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ClearTamedLandTarget.Task_ClearTamedLandTarget_C.ExecuteUbergraph_Task_ClearTamedLandTarget
struct UTask_ClearTamedLandTarget_C_ExecuteUbergraph_Task_ClearTamedLandTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
