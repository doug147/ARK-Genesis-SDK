// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_WoodTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodTrapdoor.EngramEntry_WoodTrapdoor_C.ExecuteUbergraph_EngramEntry_WoodTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodTrapdoor_C::ExecuteUbergraph_EngramEntry_WoodTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodTrapdoor.EngramEntry_WoodTrapdoor_C.ExecuteUbergraph_EngramEntry_WoodTrapdoor");

	UEngramEntry_WoodTrapdoor_C_ExecuteUbergraph_EngramEntry_WoodTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
