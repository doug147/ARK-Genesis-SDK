// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_ElementDustFromElement_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ElementDustFromElement.PrimalItemResource_ElementDustFromElement_C.ExecuteUbergraph_PrimalItemResource_ElementDustFromElement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementDustFromElement_C::ExecuteUbergraph_PrimalItemResource_ElementDustFromElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementDustFromElement.PrimalItemResource_ElementDustFromElement_C.ExecuteUbergraph_PrimalItemResource_ElementDustFromElement");

	UPrimalItemResource_ElementDustFromElement_C_ExecuteUbergraph_PrimalItemResource_ElementDustFromElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif