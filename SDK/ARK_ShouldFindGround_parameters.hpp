#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ShouldFindGround_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShouldFindGround.ShouldFindGround_C.ReceiveConditionCheck
struct UShouldFindGround_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShouldFindGround.ShouldFindGround_C.ExecuteUbergraph_ShouldFindGround
struct UShouldFindGround_C_ExecuteUbergraph_ShouldFindGround_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
