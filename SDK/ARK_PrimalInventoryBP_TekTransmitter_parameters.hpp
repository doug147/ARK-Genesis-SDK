#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_TekTransmitter_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.BPRemoteInventoryAllowViewing
struct UPrimalInventoryBP_TekTransmitter_C_BPRemoteInventoryAllowViewing_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.ExecuteUbergraph_PrimalInventoryBP_TekTransmitter
struct UPrimalInventoryBP_TekTransmitter_C_ExecuteUbergraph_PrimalInventoryBP_TekTransmitter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
