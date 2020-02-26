#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjGrenadeTek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjGrenadeTek.ProjGrenadeTek_C.BPAttachedRootComponent
struct AProjGrenadeTek_C_BPAttachedRootComponent_Params
{
};

// Function ProjGrenadeTek.ProjGrenadeTek_C.UserConstructionScript
struct AProjGrenadeTek_C_UserConstructionScript_Params
{
};

// Function ProjGrenadeTek.ProjGrenadeTek_C.OnExplode
struct AProjGrenadeTek_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjGrenadeTek.ProjGrenadeTek_C.ExecuteUbergraph_ProjGrenadeTek
struct AProjGrenadeTek_C_ExecuteUbergraph_ProjGrenadeTek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
