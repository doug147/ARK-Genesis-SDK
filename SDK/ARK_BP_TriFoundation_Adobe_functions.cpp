// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_TriFoundation_Adobe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TriFoundation_Adobe.BP_TriFoundation_Adobe_C.UserConstructionScript
// ()

void ABP_TriFoundation_Adobe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriFoundation_Adobe.BP_TriFoundation_Adobe_C.UserConstructionScript");

	ABP_TriFoundation_Adobe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TriFoundation_Adobe.BP_TriFoundation_Adobe_C.ExecuteUbergraph_BP_TriFoundation_Adobe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TriFoundation_Adobe_C::ExecuteUbergraph_BP_TriFoundation_Adobe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriFoundation_Adobe.BP_TriFoundation_Adobe_C.ExecuteUbergraph_BP_TriFoundation_Adobe");

	ABP_TriFoundation_Adobe_C_ExecuteUbergraph_BP_TriFoundation_Adobe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
