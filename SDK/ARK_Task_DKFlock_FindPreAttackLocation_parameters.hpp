#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_DKFlock_FindPreAttackLocation_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_DKFlock_FindPreAttackLocation.Task_DKFlock_FindPreAttackLocation_C.ReceiveExecute
struct UTask_DKFlock_FindPreAttackLocation_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_DKFlock_FindPreAttackLocation.Task_DKFlock_FindPreAttackLocation_C.ExecuteUbergraph_Task_DKFlock_FindPreAttackLocation
struct UTask_DKFlock_FindPreAttackLocation_C_ExecuteUbergraph_Task_DKFlock_FindPreAttackLocation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
