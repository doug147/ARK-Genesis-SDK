// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Otter_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Otter_Character_BP_Aberrant.Otter_Character_BP_Aberrant_C.UserConstructionScript
// ()

void AOtter_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP_Aberrant.Otter_Character_BP_Aberrant_C.UserConstructionScript");

	AOtter_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP_Aberrant.Otter_Character_BP_Aberrant_C.ExecuteUbergraph_Otter_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_Aberrant_C::ExecuteUbergraph_Otter_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP_Aberrant.Otter_Character_BP_Aberrant_C.ExecuteUbergraph_Otter_Character_BP_Aberrant");

	AOtter_Character_BP_Aberrant_C_ExecuteUbergraph_Otter_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
