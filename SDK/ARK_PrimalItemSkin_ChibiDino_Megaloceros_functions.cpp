// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_ChibiDino_Megaloceros_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Megaloceros.PrimalItemSkin_ChibiDino_Megaloceros_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Megaloceros
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Megaloceros_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Megaloceros(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Megaloceros.PrimalItemSkin_ChibiDino_Megaloceros_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Megaloceros");

	UPrimalItemSkin_ChibiDino_Megaloceros_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Megaloceros_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
