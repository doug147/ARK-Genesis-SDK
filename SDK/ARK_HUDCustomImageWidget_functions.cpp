// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_HUDCustomImageWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUDCustomImageWidget.HUDCustomImageWidget_C.ExecuteUbergraph_HUDCustomImageWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUDCustomImageWidget_C::ExecuteUbergraph_HUDCustomImageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDCustomImageWidget.HUDCustomImageWidget_C.ExecuteUbergraph_HUDCustomImageWidget");

	UHUDCustomImageWidget_C_ExecuteUbergraph_HUDCustomImageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
