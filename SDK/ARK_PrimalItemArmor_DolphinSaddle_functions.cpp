// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_DolphinSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DolphinSaddle.PrimalItemArmor_DolphinSaddle_C.ExecuteUbergraph_PrimalItemArmor_DolphinSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DolphinSaddle_C::ExecuteUbergraph_PrimalItemArmor_DolphinSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DolphinSaddle.PrimalItemArmor_DolphinSaddle_C.ExecuteUbergraph_PrimalItemArmor_DolphinSaddle");

	UPrimalItemArmor_DolphinSaddle_C_ExecuteUbergraph_PrimalItemArmor_DolphinSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
