// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_DiplodocusSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DiplodocusSaddle.PrimalItemArmor_DiplodocusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DiplodocusSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DiplodocusSaddle_C::ExecuteUbergraph_PrimalItemArmor_DiplodocusSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DiplodocusSaddle.PrimalItemArmor_DiplodocusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DiplodocusSaddle");

	UPrimalItemArmor_DiplodocusSaddle_C_ExecuteUbergraph_PrimalItemArmor_DiplodocusSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
