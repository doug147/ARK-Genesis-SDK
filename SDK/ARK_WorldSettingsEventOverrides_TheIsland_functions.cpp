// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WorldSettingsEventOverrides_TheIsland_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WorldSettingsEventOverrides_TheIsland.WorldSettingsEventOverrides_TheIsland_C.ExecuteUbergraph_WorldSettingsEventOverrides_TheIsland
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWorldSettingsEventOverrides_TheIsland_C::ExecuteUbergraph_WorldSettingsEventOverrides_TheIsland(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_TheIsland.WorldSettingsEventOverrides_TheIsland_C.ExecuteUbergraph_WorldSettingsEventOverrides_TheIsland");

	UWorldSettingsEventOverrides_TheIsland_C_ExecuteUbergraph_WorldSettingsEventOverrides_TheIsland_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
