// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_FenceSupport_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_FenceSupport_Stone.PrimalItemStructure_FenceSupport_Stone_C.ExecuteUbergraph_PrimalItemStructure_FenceSupport_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_FenceSupport_Stone_C::ExecuteUbergraph_PrimalItemStructure_FenceSupport_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_FenceSupport_Stone.PrimalItemStructure_FenceSupport_Stone_C.ExecuteUbergraph_PrimalItemStructure_FenceSupport_Stone");

	UPrimalItemStructure_FenceSupport_Stone_C_ExecuteUbergraph_PrimalItemStructure_FenceSupport_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
