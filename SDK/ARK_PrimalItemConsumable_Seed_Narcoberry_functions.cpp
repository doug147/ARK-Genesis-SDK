// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Seed_Narcoberry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Narcoberry.PrimalItemConsumable_Seed_Narcoberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Narcoberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Narcoberry_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Narcoberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Narcoberry.PrimalItemConsumable_Seed_Narcoberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Narcoberry");

	UPrimalItemConsumable_Seed_Narcoberry_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Narcoberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
