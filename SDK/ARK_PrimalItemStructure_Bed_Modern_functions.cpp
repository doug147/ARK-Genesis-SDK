// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Bed_Modern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Bed_Modern.PrimalItemStructure_Bed_Modern_C.ExecuteUbergraph_PrimalItemStructure_Bed_Modern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Bed_Modern_C::ExecuteUbergraph_PrimalItemStructure_Bed_Modern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Bed_Modern.PrimalItemStructure_Bed_Modern_C.ExecuteUbergraph_PrimalItemStructure_Bed_Modern");

	UPrimalItemStructure_Bed_Modern_C_ExecuteUbergraph_PrimalItemStructure_Bed_Modern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
