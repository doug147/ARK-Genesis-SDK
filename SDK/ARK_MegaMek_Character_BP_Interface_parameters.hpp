#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MegaMek_Character_BP_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.StartSelfDestruct
struct UMegaMek_Character_BP_Interface_C_StartSelfDestruct_Params
{
};

// Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetForceKill
struct UMegaMek_Character_BP_Interface_C_SetForceKill_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C.SetStunned
struct UMegaMek_Character_BP_Interface_C_SetStunned_Params
{
	float                                              StunDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
