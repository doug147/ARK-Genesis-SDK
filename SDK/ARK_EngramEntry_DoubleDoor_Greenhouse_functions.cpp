// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_DoubleDoor_Greenhouse_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DoubleDoor_Greenhouse.EngramEntry_DoubleDoor_Greenhouse_C.ExecuteUbergraph_EngramEntry_DoubleDoor_Greenhouse
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DoubleDoor_Greenhouse_C::ExecuteUbergraph_EngramEntry_DoubleDoor_Greenhouse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DoubleDoor_Greenhouse.EngramEntry_DoubleDoor_Greenhouse_C.ExecuteUbergraph_EngramEntry_DoubleDoor_Greenhouse");

	UEngramEntry_DoubleDoor_Greenhouse_C_ExecuteUbergraph_EngramEntry_DoubleDoor_Greenhouse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
