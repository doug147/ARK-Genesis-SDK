// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Carnivore_Tiny_Bee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Tiny_Bee.DinoSettings_Carnivore_Tiny_Bee_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Bee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Tiny_Bee_C::ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Bee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Tiny_Bee.DinoSettings_Carnivore_Tiny_Bee_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Bee");

	UDinoSettings_Carnivore_Tiny_Bee_C_ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Bee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
