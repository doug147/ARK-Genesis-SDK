// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_MetalSign_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalSign.EngramEntry_MetalSign_C.ExecuteUbergraph_EngramEntry_MetalSign
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalSign_C::ExecuteUbergraph_EngramEntry_MetalSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalSign.EngramEntry_MetalSign_C.ExecuteUbergraph_EngramEntry_MetalSign");

	UEngramEntry_MetalSign_C_ExecuteUbergraph_EngramEntry_MetalSign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
