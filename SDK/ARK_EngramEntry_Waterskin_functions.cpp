// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Waterskin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Waterskin.EngramEntry_Waterskin_C.ExecuteUbergraph_EngramEntry_Waterskin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Waterskin_C::ExecuteUbergraph_EngramEntry_Waterskin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Waterskin.EngramEntry_Waterskin_C.ExecuteUbergraph_EngramEntry_Waterskin");

	UEngramEntry_Waterskin_C_ExecuteUbergraph_EngramEntry_Waterskin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
