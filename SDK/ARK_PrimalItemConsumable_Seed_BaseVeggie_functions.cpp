// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Seed_BaseVeggie_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_BaseVeggie.PrimalItemConsumable_Seed_BaseVeggie_C.ExecuteUbergraph_PrimalItemConsumable_Seed_BaseVeggie
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_BaseVeggie_C::ExecuteUbergraph_PrimalItemConsumable_Seed_BaseVeggie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_BaseVeggie.PrimalItemConsumable_Seed_BaseVeggie_C.ExecuteUbergraph_PrimalItemConsumable_Seed_BaseVeggie");

	UPrimalItemConsumable_Seed_BaseVeggie_C_ExecuteUbergraph_PrimalItemConsumable_Seed_BaseVeggie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
