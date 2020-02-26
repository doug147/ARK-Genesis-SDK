#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SetShouldGlide_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SetShouldGlide.SetShouldGlide_C.ReceiveExecute
struct USetShouldGlide_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SetShouldGlide.SetShouldGlide_C.ExecuteUbergraph_SetShouldGlide
struct USetShouldGlide_C_ExecuteUbergraph_SetShouldGlide_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
