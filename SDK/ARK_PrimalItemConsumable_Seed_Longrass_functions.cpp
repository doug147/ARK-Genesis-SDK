// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Seed_Longrass_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Longrass.PrimalItemConsumable_Seed_Longrass_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Longrass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Longrass_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Longrass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Longrass.PrimalItemConsumable_Seed_Longrass_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Longrass");

	UPrimalItemConsumable_Seed_Longrass_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Longrass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
