// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Angler_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Angler_AIController_BP.Angler_AIController_BP_C.UserConstructionScript
// ()

void AAngler_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Angler_AIController_BP.Angler_AIController_BP_C.UserConstructionScript");

	AAngler_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Angler_AIController_BP.Angler_AIController_BP_C.ExecuteUbergraph_Angler_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAngler_AIController_BP_C::ExecuteUbergraph_Angler_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Angler_AIController_BP.Angler_AIController_BP_C.ExecuteUbergraph_Angler_AIController_BP");

	AAngler_AIController_BP_C_ExecuteUbergraph_Angler_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
