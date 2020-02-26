// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Door_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Door_Tek.Door_Tek_C.UserConstructionScript
// ()

void ADoor_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek.Door_Tek_C.UserConstructionScript");

	ADoor_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek.Door_Tek_C.ExecuteUbergraph_Door_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoor_Tek_C::ExecuteUbergraph_Door_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek.Door_Tek_C.ExecuteUbergraph_Door_Tek");

	ADoor_Tek_C_ExecuteUbergraph_Door_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
