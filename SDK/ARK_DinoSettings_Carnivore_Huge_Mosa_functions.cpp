// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Carnivore_Huge_Mosa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Huge_Mosa.DinoSettings_Carnivore_Huge_Mosa_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_Mosa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Huge_Mosa_C::ExecuteUbergraph_DinoSettings_Carnivore_Huge_Mosa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Huge_Mosa.DinoSettings_Carnivore_Huge_Mosa_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_Mosa");

	UDinoSettings_Carnivore_Huge_Mosa_C_ExecuteUbergraph_DinoSettings_Carnivore_Huge_Mosa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
