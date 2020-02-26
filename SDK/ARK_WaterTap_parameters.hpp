#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WaterTap_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WaterTap.WaterTap_C.UserConstructionScript
struct AWaterTap_C_UserConstructionScript_Params
{
};

// Function WaterTap.WaterTap_C.ExecuteUbergraph_WaterTap
struct AWaterTap_C_ExecuteUbergraph_WaterTap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
