#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PoisonTrap_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PoisonTrap.PoisonTrap_C.UserConstructionScript
struct APoisonTrap_C_UserConstructionScript_Params
{
};

// Function PoisonTrap.PoisonTrap_C.ExecuteUbergraph_PoisonTrap
struct APoisonTrap_C_ExecuteUbergraph_PoisonTrap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
