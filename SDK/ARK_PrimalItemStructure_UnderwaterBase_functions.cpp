// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_UnderwaterBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_UnderwaterBase.PrimalItemStructure_UnderwaterBase_C.ExecuteUbergraph_PrimalItemStructure_UnderwaterBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_UnderwaterBase_C::ExecuteUbergraph_PrimalItemStructure_UnderwaterBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_UnderwaterBase.PrimalItemStructure_UnderwaterBase_C.ExecuteUbergraph_PrimalItemStructure_UnderwaterBase");

	UPrimalItemStructure_UnderwaterBase_C_ExecuteUbergraph_PrimalItemStructure_UnderwaterBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
