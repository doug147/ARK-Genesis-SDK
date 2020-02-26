// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_DoubleDoor_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DoubleDoor_Wood.BP_DoubleDoor_Wood_C.UserConstructionScript
// ()

void ABP_DoubleDoor_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleDoor_Wood.BP_DoubleDoor_Wood_C.UserConstructionScript");

	ABP_DoubleDoor_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoubleDoor_Wood.BP_DoubleDoor_Wood_C.ExecuteUbergraph_BP_DoubleDoor_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DoubleDoor_Wood_C::ExecuteUbergraph_BP_DoubleDoor_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleDoor_Wood.BP_DoubleDoor_Wood_C.ExecuteUbergraph_BP_DoubleDoor_Wood");

	ABP_DoubleDoor_Wood_C_ExecuteUbergraph_BP_DoubleDoor_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
