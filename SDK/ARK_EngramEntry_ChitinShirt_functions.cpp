// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_ChitinShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ChitinShirt.EngramEntry_ChitinShirt_C.ExecuteUbergraph_EngramEntry_ChitinShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ChitinShirt_C::ExecuteUbergraph_EngramEntry_ChitinShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ChitinShirt.EngramEntry_ChitinShirt_C.ExecuteUbergraph_EngramEntry_ChitinShirt");

	UEngramEntry_ChitinShirt_C_ExecuteUbergraph_EngramEntry_ChitinShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif