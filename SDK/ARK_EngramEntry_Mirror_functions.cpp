// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Mirror_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Mirror.EngramEntry_Mirror_C.ExecuteUbergraph_EngramEntry_Mirror
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Mirror_C::ExecuteUbergraph_EngramEntry_Mirror(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Mirror.EngramEntry_Mirror_C.ExecuteUbergraph_EngramEntry_Mirror");

	UEngramEntry_Mirror_C_ExecuteUbergraph_EngramEntry_Mirror_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
