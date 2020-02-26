#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GateFrame_Large_Tek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GateFrame_Large_Tek.GateFrame_Large_Tek_C.BPAllowSnappingWith
struct AGateFrame_Large_Tek_C_BPAllowSnappingWith_Params
{
	class APrimalStructure**                           OtherStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GateFrame_Large_Tek.GateFrame_Large_Tek_C.UserConstructionScript
struct AGateFrame_Large_Tek_C_UserConstructionScript_Params
{
};

// Function GateFrame_Large_Tek.GateFrame_Large_Tek_C.ExecuteUbergraph_GateFrame_Large_Tek
struct AGateFrame_Large_Tek_C_ExecuteUbergraph_GateFrame_Large_Tek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
