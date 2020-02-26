#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_OilSlow_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_OilSlow.Buff_OilSlow_C.BPPreventflight
struct ABuff_OilSlow_C_BPPreventflight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_OilSlow.Buff_OilSlow_C.PreventJump
struct ABuff_OilSlow_C_PreventJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_OilSlow.Buff_OilSlow_C.BPPreventRunning
struct ABuff_OilSlow_C_BPPreventRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_OilSlow.Buff_OilSlow_C.UserConstructionScript
struct ABuff_OilSlow_C_UserConstructionScript_Params
{
};

// Function Buff_OilSlow.Buff_OilSlow_C.ExecuteUbergraph_Buff_OilSlow
struct ABuff_OilSlow_C_ExecuteUbergraph_Buff_OilSlow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
