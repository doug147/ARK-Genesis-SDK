#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjDilo_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjDilo.ProjDilo_C.UserConstructionScript
struct AProjDilo_C_UserConstructionScript_Params
{
};

// Function ProjDilo.ProjDilo_C.ExecuteUbergraph_ProjDilo
struct AProjDilo_C_ExecuteUbergraph_ProjDilo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
