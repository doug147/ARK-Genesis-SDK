// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_MetalSign_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalSign_Large.PrimalItemStructure_MetalSign_Large_C.ExecuteUbergraph_PrimalItemStructure_MetalSign_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalSign_Large_C::ExecuteUbergraph_PrimalItemStructure_MetalSign_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalSign_Large.PrimalItemStructure_MetalSign_Large_C.ExecuteUbergraph_PrimalItemStructure_MetalSign_Large");

	UPrimalItemStructure_MetalSign_Large_C_ExecuteUbergraph_PrimalItemStructure_MetalSign_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
