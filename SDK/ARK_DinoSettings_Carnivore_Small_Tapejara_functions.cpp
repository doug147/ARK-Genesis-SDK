// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Carnivore_Small_Tapejara_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Small_Tapejara.DinoSettings_Carnivore_Small_Tapejara_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Tapejara
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Small_Tapejara_C::ExecuteUbergraph_DinoSettings_Carnivore_Small_Tapejara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Small_Tapejara.DinoSettings_Carnivore_Small_Tapejara_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Tapejara");

	UDinoSettings_Carnivore_Small_Tapejara_C_ExecuteUbergraph_DinoSettings_Carnivore_Small_Tapejara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
