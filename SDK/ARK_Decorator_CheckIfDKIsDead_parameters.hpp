#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Decorator_CheckIfDKIsDead_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ReceiveConditionCheck
struct UDecorator_CheckIfDKIsDead_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ExecuteUbergraph_Decorator_CheckIfDKIsDead
struct UDecorator_CheckIfDKIsDead_C_ExecuteUbergraph_Decorator_CheckIfDKIsDead_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
