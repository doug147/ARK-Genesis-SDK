#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_FKaijuTurnToFace_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveExecute
struct UTask_FKaijuTurnToFace_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveTick
struct UTask_FKaijuTurnToFace_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveAbort
struct UTask_FKaijuTurnToFace_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ExecuteUbergraph_Task_FKaijuTurnToFace
struct UTask_FKaijuTurnToFace_C_ExecuteUbergraph_Task_FKaijuTurnToFace_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
