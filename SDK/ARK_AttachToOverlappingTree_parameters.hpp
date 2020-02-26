#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AttachToOverlappingTree_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AttachToOverlappingTree.AttachToOverlappingTree_C.ReceiveExecute
struct UAttachToOverlappingTree_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachToOverlappingTree.AttachToOverlappingTree_C.ExecuteUbergraph_AttachToOverlappingTree
struct UAttachToOverlappingTree_C_ExecuteUbergraph_AttachToOverlappingTree_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
