// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_TekTrough_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekTrough.EngramEntry_TekTrough_C.ExecuteUbergraph_EngramEntry_TekTrough
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekTrough_C::ExecuteUbergraph_EngramEntry_TekTrough(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekTrough.EngramEntry_TekTrough_C.ExecuteUbergraph_EngramEntry_TekTrough");

	UEngramEntry_TekTrough_C_ExecuteUbergraph_EngramEntry_TekTrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
