// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_ChibiDino_Pairosaurs_VDay_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Pairosaurs_VDay.PrimalItemSkin_ChibiDino_Pairosaurs_VDay_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Pairosaurs_VDay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Pairosaurs_VDay_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Pairosaurs_VDay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Pairosaurs_VDay.PrimalItemSkin_ChibiDino_Pairosaurs_VDay_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Pairosaurs_VDay");

	UPrimalItemSkin_ChibiDino_Pairosaurs_VDay_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Pairosaurs_VDay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
