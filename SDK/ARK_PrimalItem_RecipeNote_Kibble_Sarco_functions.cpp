// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_RecipeNote_Kibble_Sarco_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Kibble_Sarco.PrimalItem_RecipeNote_Kibble_Sarco_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Sarco
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Kibble_Sarco_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Sarco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble_Sarco.PrimalItem_RecipeNote_Kibble_Sarco_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Sarco");

	UPrimalItem_RecipeNote_Kibble_Sarco_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Sarco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
