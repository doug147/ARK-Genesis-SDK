// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Kibble_Camelsaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_Camelsaurus.PrimalItemConsumable_Kibble_Camelsaurus_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Camelsaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_Camelsaurus_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Camelsaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Camelsaurus.PrimalItemConsumable_Kibble_Camelsaurus_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Camelsaurus");

	UPrimalItemConsumable_Kibble_Camelsaurus_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Camelsaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
