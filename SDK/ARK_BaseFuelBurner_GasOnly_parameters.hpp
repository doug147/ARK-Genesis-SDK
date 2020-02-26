#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BaseFuelBurner_GasOnly_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.NotifyCraftingFinished
struct ABaseFuelBurner_GasOnly_C_NotifyCraftingFinished_Params
{
};

// Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.UserConstructionScript
struct ABaseFuelBurner_GasOnly_C_UserConstructionScript_Params
{
};

// Function BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C.ExecuteUbergraph_BaseFuelBurner_GasOnly
struct ABaseFuelBurner_GasOnly_C_ExecuteUbergraph_BaseFuelBurner_GasOnly_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
