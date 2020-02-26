#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DK_BogSpider_IsStuckToWall_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ReceiveConditionCheck
struct UDK_BogSpider_IsStuckToWall_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ExecuteUbergraph_DK_BogSpider_IsStuckToWall
struct UDK_BogSpider_IsStuckToWall_C_ExecuteUbergraph_DK_BogSpider_IsStuckToWall_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
