#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AttackSetRunning_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AttackSetRunning.AttackSetRunning_C.ReceiveExecute
struct UAttackSetRunning_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttackSetRunning.AttackSetRunning_C.ExecuteUbergraph_AttackSetRunning
struct UAttackSetRunning_C_ExecuteUbergraph_AttackSetRunning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
