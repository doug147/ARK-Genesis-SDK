// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Client_GiantTurtleRaftState_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.BuffTickClient
// (Native, NetResponse, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Client_GiantTurtleRaftState_C::STATIC_BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.BuffTickClient");

	ABuff_Client_GiantTurtleRaftState_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.UserConstructionScript
// ()

void ABuff_Client_GiantTurtleRaftState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.UserConstructionScript");

	ABuff_Client_GiantTurtleRaftState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.ExecuteUbergraph_Buff_Client_GiantTurtleRaftState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Client_GiantTurtleRaftState_C::ExecuteUbergraph_Buff_Client_GiantTurtleRaftState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C.ExecuteUbergraph_Buff_Client_GiantTurtleRaftState");

	ABuff_Client_GiantTurtleRaftState_C_ExecuteUbergraph_Buff_Client_GiantTurtleRaftState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
