// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_ScarySkull_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ScarySkull.PrimalItemSkin_ScarySkull_C.ExecuteUbergraph_PrimalItemSkin_ScarySkull
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ScarySkull_C::ExecuteUbergraph_PrimalItemSkin_ScarySkull(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ScarySkull.PrimalItemSkin_ScarySkull_C.ExecuteUbergraph_PrimalItemSkin_ScarySkull");

	UPrimalItemSkin_ScarySkull_C_ExecuteUbergraph_PrimalItemSkin_ScarySkull_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
