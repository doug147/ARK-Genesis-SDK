// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Crab_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Crab.DinoTamedInventoryComponent_Crab_C.ExecuteUbergraph_DinoTamedInventoryComponent_Crab
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Crab_C::ExecuteUbergraph_DinoTamedInventoryComponent_Crab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Crab.DinoTamedInventoryComponent_Crab_C.ExecuteUbergraph_DinoTamedInventoryComponent_Crab");

	UDinoTamedInventoryComponent_Crab_C_ExecuteUbergraph_DinoTamedInventoryComponent_Crab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
