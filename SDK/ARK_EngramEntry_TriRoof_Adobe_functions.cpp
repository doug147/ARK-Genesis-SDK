// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_TriRoof_Adobe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TriRoof_Adobe.EngramEntry_TriRoof_Adobe_C.ExecuteUbergraph_EngramEntry_TriRoof_Adobe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TriRoof_Adobe_C::ExecuteUbergraph_EngramEntry_TriRoof_Adobe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TriRoof_Adobe.EngramEntry_TriRoof_Adobe_C.ExecuteUbergraph_EngramEntry_TriRoof_Adobe");

	UEngramEntry_TriRoof_Adobe_C_ExecuteUbergraph_EngramEntry_TriRoof_Adobe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
