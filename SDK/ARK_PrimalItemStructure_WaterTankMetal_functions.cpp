// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_WaterTankMetal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WaterTankMetal.PrimalItemStructure_WaterTankMetal_C.ExecuteUbergraph_PrimalItemStructure_WaterTankMetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WaterTankMetal_C::ExecuteUbergraph_PrimalItemStructure_WaterTankMetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WaterTankMetal.PrimalItemStructure_WaterTankMetal_C.ExecuteUbergraph_PrimalItemStructure_WaterTankMetal");

	UPrimalItemStructure_WaterTankMetal_C_ExecuteUbergraph_PrimalItemStructure_WaterTankMetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
