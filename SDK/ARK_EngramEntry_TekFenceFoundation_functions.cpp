// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_TekFenceFoundation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekFenceFoundation.EngramEntry_TekFenceFoundation_C.ExecuteUbergraph_EngramEntry_TekFenceFoundation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekFenceFoundation_C::ExecuteUbergraph_EngramEntry_TekFenceFoundation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekFenceFoundation.EngramEntry_TekFenceFoundation_C.ExecuteUbergraph_EngramEntry_TekFenceFoundation");

	UEngramEntry_TekFenceFoundation_C_ExecuteUbergraph_EngramEntry_TekFenceFoundation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
