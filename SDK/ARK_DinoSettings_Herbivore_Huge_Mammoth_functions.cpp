// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Herbivore_Huge_Mammoth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Huge_Mammoth.DinoSettings_Herbivore_Huge_Mammoth_C.ExecuteUbergraph_DinoSettings_Herbivore_Huge_Mammoth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Huge_Mammoth_C::ExecuteUbergraph_DinoSettings_Herbivore_Huge_Mammoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Huge_Mammoth.DinoSettings_Herbivore_Huge_Mammoth_C.ExecuteUbergraph_DinoSettings_Herbivore_Huge_Mammoth");

	UDinoSettings_Herbivore_Huge_Mammoth_C_ExecuteUbergraph_DinoSettings_Herbivore_Huge_Mammoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
