// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_oilPump_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_oilPump.PrimalItemStructure_oilPump_C.ExecuteUbergraph_PrimalItemStructure_oilPump
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_oilPump_C::ExecuteUbergraph_PrimalItemStructure_oilPump(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_oilPump.PrimalItemStructure_oilPump_C.ExecuteUbergraph_PrimalItemStructure_oilPump");

	UPrimalItemStructure_oilPump_C_ExecuteUbergraph_PrimalItemStructure_oilPump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
