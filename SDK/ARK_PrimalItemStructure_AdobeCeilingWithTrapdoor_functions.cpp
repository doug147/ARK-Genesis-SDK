// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_AdobeCeilingWithTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeCeilingWithTrapdoor.PrimalItemStructure_AdobeCeilingWithTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeCeilingWithTrapdoor_C::ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeCeilingWithTrapdoor.PrimalItemStructure_AdobeCeilingWithTrapdoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithTrapdoor");

	UPrimalItemStructure_AdobeCeilingWithTrapdoor_C_ExecuteUbergraph_PrimalItemStructure_AdobeCeilingWithTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
