// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_TekTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekTrapdoor.PrimalItemStructure_TekTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_TekTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekTrapdoor_C::ExecuteUbergraph_PrimalItemStructure_TekTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekTrapdoor.PrimalItemStructure_TekTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_TekTrapdoor");

	UPrimalItemStructure_TekTrapdoor_C_ExecuteUbergraph_PrimalItemStructure_TekTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
