// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_TekRexSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekRexSaddle.EngramEntry_TekRexSaddle_C.ExecuteUbergraph_EngramEntry_TekRexSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekRexSaddle_C::ExecuteUbergraph_EngramEntry_TekRexSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekRexSaddle.EngramEntry_TekRexSaddle_C.ExecuteUbergraph_EngramEntry_TekRexSaddle");

	UEngramEntry_TekRexSaddle_C_ExecuteUbergraph_EngramEntry_TekRexSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
