// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSpawnEntriesGigant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesGigant.DinoSpawnEntriesGigant_C.ExecuteUbergraph_DinoSpawnEntriesGigant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesGigant_C::ExecuteUbergraph_DinoSpawnEntriesGigant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesGigant.DinoSpawnEntriesGigant_C.ExecuteUbergraph_DinoSpawnEntriesGigant");

	UDinoSpawnEntriesGigant_C_ExecuteUbergraph_DinoSpawnEntriesGigant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
