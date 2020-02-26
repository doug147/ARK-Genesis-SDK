#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CryoFridge_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CryoFridge.CryoFridge_C.UserConstructionScript
struct ACryoFridge_C_UserConstructionScript_Params
{
};

// Function CryoFridge.CryoFridge_C.ExecuteUbergraph_CryoFridge
struct ACryoFridge_C_ExecuteUbergraph_CryoFridge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
