// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Direwolf_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Direwolf_AIController_BP.Direwolf_AIController_BP_C.UserConstructionScript
// ()

void ADirewolf_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_AIController_BP.Direwolf_AIController_BP_C.UserConstructionScript");

	ADirewolf_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_AIController_BP.Direwolf_AIController_BP_C.ExecuteUbergraph_Direwolf_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_AIController_BP_C::ExecuteUbergraph_Direwolf_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_AIController_BP.Direwolf_AIController_BP_C.ExecuteUbergraph_Direwolf_AIController_BP");

	ADirewolf_AIController_BP_C_ExecuteUbergraph_Direwolf_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
