// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bat_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bat_AIController_BP.Bat_AIController_BP_C.UserConstructionScript
// ()

void ABat_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bat_AIController_BP.Bat_AIController_BP_C.UserConstructionScript");

	ABat_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bat_AIController_BP.Bat_AIController_BP_C.ExecuteUbergraph_Bat_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABat_AIController_BP_C::ExecuteUbergraph_Bat_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bat_AIController_BP.Bat_AIController_BP_C.ExecuteUbergraph_Bat_AIController_BP");

	ABat_AIController_BP_C_ExecuteUbergraph_Bat_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
