// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_StoneGateframe_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneGateframe_Large.PrimalItemStructure_StoneGateframe_Large_C.ExecuteUbergraph_PrimalItemStructure_StoneGateframe_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneGateframe_Large_C::ExecuteUbergraph_PrimalItemStructure_StoneGateframe_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneGateframe_Large.PrimalItemStructure_StoneGateframe_Large_C.ExecuteUbergraph_PrimalItemStructure_StoneGateframe_Large");

	UPrimalItemStructure_StoneGateframe_Large_C_ExecuteUbergraph_PrimalItemStructure_StoneGateframe_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
