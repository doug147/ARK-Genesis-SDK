// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AttachToOverlappingTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AttachToOverlappingTree.AttachToOverlappingTree_C.ReceiveExecute
// (NetReliable, Exec, Native, NetMulticast, Public, Private, Delegate, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttachToOverlappingTree_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachToOverlappingTree.AttachToOverlappingTree_C.ReceiveExecute");

	UAttachToOverlappingTree_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachToOverlappingTree.AttachToOverlappingTree_C.ExecuteUbergraph_AttachToOverlappingTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttachToOverlappingTree_C::ExecuteUbergraph_AttachToOverlappingTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachToOverlappingTree.AttachToOverlappingTree_C.ExecuteUbergraph_AttachToOverlappingTree");

	UAttachToOverlappingTree_C_ExecuteUbergraph_AttachToOverlappingTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
