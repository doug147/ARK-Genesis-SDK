// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_RiotShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RiotShirt.EngramEntry_RiotShirt_C.ExecuteUbergraph_EngramEntry_RiotShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RiotShirt_C::ExecuteUbergraph_EngramEntry_RiotShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RiotShirt.EngramEntry_RiotShirt_C.ExecuteUbergraph_EngramEntry_RiotShirt");

	UEngramEntry_RiotShirt_C_ExecuteUbergraph_EngramEntry_RiotShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif