// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_HudOverlayUITop_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HudOverlayUITop.HudOverlayUITop_C.ExecuteUbergraph_HudOverlayUITop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHudOverlayUITop_C::ExecuteUbergraph_HudOverlayUITop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudOverlayUITop.HudOverlayUITop_C.ExecuteUbergraph_HudOverlayUITop");

	UHudOverlayUITop_C_ExecuteUbergraph_HudOverlayUITop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
