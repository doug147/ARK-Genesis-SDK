// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Crossbow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Crossbow.EngramEntry_Crossbow_C.ExecuteUbergraph_EngramEntry_Crossbow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Crossbow_C::ExecuteUbergraph_EngramEntry_Crossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Crossbow.EngramEntry_Crossbow_C.ExecuteUbergraph_EngramEntry_Crossbow");

	UEngramEntry_Crossbow_C_ExecuteUbergraph_EngramEntry_Crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
