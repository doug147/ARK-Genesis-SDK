// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_CropPlot_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_CropPlot_Medium.PrimalItemStructure_CropPlot_Medium_C.ExecuteUbergraph_PrimalItemStructure_CropPlot_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_CropPlot_Medium_C::ExecuteUbergraph_PrimalItemStructure_CropPlot_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_CropPlot_Medium.PrimalItemStructure_CropPlot_Medium_C.ExecuteUbergraph_PrimalItemStructure_CropPlot_Medium");

	UPrimalItemStructure_CropPlot_Medium_C_ExecuteUbergraph_PrimalItemStructure_CropPlot_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif