// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_AdobeWallWithWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeWallWithWindow.PrimalItemStructure_AdobeWallWithWindow_C.ExecuteUbergraph_PrimalItemStructure_AdobeWallWithWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeWallWithWindow_C::ExecuteUbergraph_PrimalItemStructure_AdobeWallWithWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeWallWithWindow.PrimalItemStructure_AdobeWallWithWindow_C.ExecuteUbergraph_PrimalItemStructure_AdobeWallWithWindow");

	UPrimalItemStructure_AdobeWallWithWindow_C_ExecuteUbergraph_PrimalItemStructure_AdobeWallWithWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
