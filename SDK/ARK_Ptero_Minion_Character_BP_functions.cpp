// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ptero_Minion_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ptero_Minion_Character_BP.Ptero_Minion_Character_BP_C.UserConstructionScript
// ()

void APtero_Minion_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ptero_Minion_Character_BP.Ptero_Minion_Character_BP_C.UserConstructionScript");

	APtero_Minion_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ptero_Minion_Character_BP.Ptero_Minion_Character_BP_C.ExecuteUbergraph_Ptero_Minion_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APtero_Minion_Character_BP_C::ExecuteUbergraph_Ptero_Minion_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ptero_Minion_Character_BP.Ptero_Minion_Character_BP_C.ExecuteUbergraph_Ptero_Minion_Character_BP");

	APtero_Minion_Character_BP_C_ExecuteUbergraph_Ptero_Minion_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
