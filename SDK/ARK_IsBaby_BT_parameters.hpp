#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IsBaby_BT_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IsBaby_BT.IsBaby_BT_C.ReceiveConditionCheck
struct UIsBaby_BT_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IsBaby_BT.IsBaby_BT_C.ExecuteUbergraph_IsBaby_BT
struct UIsBaby_BT_C_ExecuteUbergraph_IsBaby_BT_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
