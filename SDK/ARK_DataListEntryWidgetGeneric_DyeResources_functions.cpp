// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DataListEntryWidgetGeneric_DyeResources_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListEntryWidgetGeneric_DyeResources.DataListEntryWidgetGeneric_DyeResources_C.ExecuteUbergraph_DataListEntryWidgetGeneric_DyeResources
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidgetGeneric_DyeResources_C::ExecuteUbergraph_DataListEntryWidgetGeneric_DyeResources(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_DyeResources.DataListEntryWidgetGeneric_DyeResources_C.ExecuteUbergraph_DataListEntryWidgetGeneric_DyeResources");

	UDataListEntryWidgetGeneric_DyeResources_C_ExecuteUbergraph_DataListEntryWidgetGeneric_DyeResources_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
