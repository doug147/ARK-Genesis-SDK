// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_DoubleDoorframe_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DoubleDoorframe_Tek.BP_DoubleDoorframe_Tek_C.UserConstructionScript
// ()

void ABP_DoubleDoorframe_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleDoorframe_Tek.BP_DoubleDoorframe_Tek_C.UserConstructionScript");

	ABP_DoubleDoorframe_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoubleDoorframe_Tek.BP_DoubleDoorframe_Tek_C.ExecuteUbergraph_BP_DoubleDoorframe_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DoubleDoorframe_Tek_C::ExecuteUbergraph_BP_DoubleDoorframe_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleDoorframe_Tek.BP_DoubleDoorframe_Tek_C.ExecuteUbergraph_BP_DoubleDoorframe_Tek");

	ABP_DoubleDoorframe_Tek_C_ExecuteUbergraph_BP_DoubleDoorframe_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
