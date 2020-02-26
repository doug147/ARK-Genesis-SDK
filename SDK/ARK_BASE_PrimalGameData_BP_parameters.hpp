#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BASE_PrimalGameData_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.BPMergeModGameData
struct UBASE_PrimalGameData_BP_C_BPMergeModGameData_Params
{
	class UPrimalGameData*                             AnotherGameData;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.ExecuteUbergraph_BASE_PrimalGameData_BP
struct UBASE_PrimalGameData_BP_C_ExecuteUbergraph_BASE_PrimalGameData_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
