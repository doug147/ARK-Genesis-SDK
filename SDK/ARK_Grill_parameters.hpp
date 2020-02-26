#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Grill_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Grill.Grill_C.UserConstructionScript
struct AGrill_C_UserConstructionScript_Params
{
};

// Function Grill.Grill_C.ExecuteUbergraph_Grill
struct AGrill_C_ExecuteUbergraph_Grill_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
