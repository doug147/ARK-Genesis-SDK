// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Saddle_Spider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Spider.EngramEntry_Saddle_Spider_C.ExecuteUbergraph_EngramEntry_Saddle_Spider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Spider_C::ExecuteUbergraph_EngramEntry_Saddle_Spider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Spider.EngramEntry_Saddle_Spider_C.ExecuteUbergraph_EngramEntry_Saddle_Spider");

	UEngramEntry_Saddle_Spider_C_ExecuteUbergraph_EngramEntry_Saddle_Spider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
