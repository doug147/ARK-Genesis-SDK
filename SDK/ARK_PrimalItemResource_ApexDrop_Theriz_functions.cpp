// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_ApexDrop_Theriz_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_Theriz.PrimalItemResource_ApexDrop_Theriz_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Theriz
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_Theriz_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_Theriz(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_Theriz.PrimalItemResource_ApexDrop_Theriz_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Theriz");

	UPrimalItemResource_ApexDrop_Theriz_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_Theriz_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
