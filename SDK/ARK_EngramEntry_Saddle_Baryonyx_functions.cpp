// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Saddle_Baryonyx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Baryonyx.EngramEntry_Saddle_Baryonyx_C.ExecuteUbergraph_EngramEntry_Saddle_Baryonyx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Baryonyx_C::ExecuteUbergraph_EngramEntry_Saddle_Baryonyx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Baryonyx.EngramEntry_Saddle_Baryonyx_C.ExecuteUbergraph_EngramEntry_Saddle_Baryonyx");

	UEngramEntry_Saddle_Baryonyx_C_ExecuteUbergraph_EngramEntry_Saddle_Baryonyx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
