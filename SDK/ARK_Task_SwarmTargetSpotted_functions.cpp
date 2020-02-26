// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_SwarmTargetSpotted_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_SwarmTargetSpotted.Task_SwarmTargetSpotted_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_SwarmTargetSpotted_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SwarmTargetSpotted.Task_SwarmTargetSpotted_C.ReceiveExecute");

	UTask_SwarmTargetSpotted_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_SwarmTargetSpotted.Task_SwarmTargetSpotted_C.ExecuteUbergraph_Task_SwarmTargetSpotted
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_SwarmTargetSpotted_C::ExecuteUbergraph_Task_SwarmTargetSpotted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SwarmTargetSpotted.Task_SwarmTargetSpotted_C.ExecuteUbergraph_Task_SwarmTargetSpotted");

	UTask_SwarmTargetSpotted_C_ExecuteUbergraph_Task_SwarmTargetSpotted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
