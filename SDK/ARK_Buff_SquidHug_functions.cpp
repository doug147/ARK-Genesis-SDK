// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_SquidHug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SquidHug.Buff_SquidHug_C.UserConstructionScript
// ()

void ABuff_SquidHug_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SquidHug.Buff_SquidHug_C.UserConstructionScript");

	ABuff_SquidHug_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SquidHug.Buff_SquidHug_C.ExecuteUbergraph_Buff_SquidHug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SquidHug_C::ExecuteUbergraph_Buff_SquidHug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SquidHug.Buff_SquidHug_C.ExecuteUbergraph_Buff_SquidHug");

	ABuff_SquidHug_C_ExecuteUbergraph_Buff_SquidHug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
