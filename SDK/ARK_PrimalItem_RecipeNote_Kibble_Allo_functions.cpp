// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_RecipeNote_Kibble_Allo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Kibble_Allo.PrimalItem_RecipeNote_Kibble_Allo_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Allo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Kibble_Allo_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Allo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble_Allo.PrimalItem_RecipeNote_Kibble_Allo_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Allo");

	UPrimalItem_RecipeNote_Kibble_Allo_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Allo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
