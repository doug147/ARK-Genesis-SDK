// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_DinoChickHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_DinoChickHat.PrimalItemSkin_DinoChickHat_C.ExecuteUbergraph_PrimalItemSkin_DinoChickHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_DinoChickHat_C::ExecuteUbergraph_PrimalItemSkin_DinoChickHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_DinoChickHat.PrimalItemSkin_DinoChickHat_C.ExecuteUbergraph_PrimalItemSkin_DinoChickHat");

	UPrimalItemSkin_DinoChickHat_C_ExecuteUbergraph_PrimalItemSkin_DinoChickHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
