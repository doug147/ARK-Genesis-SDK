// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSpawnEntries_ShallowWater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntries_ShallowWater.DinoSpawnEntries_ShallowWater_C.ExecuteUbergraph_DinoSpawnEntries_ShallowWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntries_ShallowWater_C::ExecuteUbergraph_DinoSpawnEntries_ShallowWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntries_ShallowWater.DinoSpawnEntries_ShallowWater_C.ExecuteUbergraph_DinoSpawnEntries_ShallowWater");

	UDinoSpawnEntries_ShallowWater_C_ExecuteUbergraph_DinoSpawnEntries_ShallowWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
