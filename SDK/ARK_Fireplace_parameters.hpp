#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Fireplace_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Fireplace.Fireplace_C.UserConstructionScript
struct AFireplace_C_UserConstructionScript_Params
{
};

// Function Fireplace.Fireplace_C.ExecuteUbergraph_Fireplace
struct AFireplace_C_ExecuteUbergraph_Fireplace_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
