// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Ramp_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Ramp_Stone.EngramEntry_Ramp_Stone_C.ExecuteUbergraph_EngramEntry_Ramp_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Ramp_Stone_C::ExecuteUbergraph_EngramEntry_Ramp_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Ramp_Stone.EngramEntry_Ramp_Stone_C.ExecuteUbergraph_EngramEntry_Ramp_Stone");

	UEngramEntry_Ramp_Stone_C_ExecuteUbergraph_EngramEntry_Ramp_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif