// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_UnlockHair_Head_Mohawk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHair_Head_Mohawk.PrimalItemConsumable_UnlockHair_Head_Mohawk_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Mohawk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHair_Head_Mohawk_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Mohawk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHair_Head_Mohawk.PrimalItemConsumable_UnlockHair_Head_Mohawk_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Mohawk");

	UPrimalItemConsumable_UnlockHair_Head_Mohawk_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Mohawk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
