// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_RWingDestroyed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_RWingDestroyed.Task_RWingDestroyed_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_RWingDestroyed_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_RWingDestroyed.Task_RWingDestroyed_C.ReceiveExecute");

	UTask_RWingDestroyed_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_RWingDestroyed.Task_RWingDestroyed_C.ExecuteUbergraph_Task_RWingDestroyed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_RWingDestroyed_C::ExecuteUbergraph_Task_RWingDestroyed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_RWingDestroyed.Task_RWingDestroyed_C.ExecuteUbergraph_Task_RWingDestroyed");

	UTask_RWingDestroyed_C_ExecuteUbergraph_Task_RWingDestroyed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif