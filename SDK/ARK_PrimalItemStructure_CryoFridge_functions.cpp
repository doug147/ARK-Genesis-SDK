// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_CryoFridge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_CryoFridge.PrimalItemStructure_CryoFridge_C.ExecuteUbergraph_PrimalItemStructure_CryoFridge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_CryoFridge_C::ExecuteUbergraph_PrimalItemStructure_CryoFridge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_CryoFridge.PrimalItemStructure_CryoFridge_C.ExecuteUbergraph_PrimalItemStructure_CryoFridge");

	UPrimalItemStructure_CryoFridge_C_ExecuteUbergraph_PrimalItemStructure_CryoFridge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
