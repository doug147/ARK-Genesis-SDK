// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Yeti_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Yeti.DinoCharacterStatusComponent_BP_Yeti_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Yeti
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Yeti_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Yeti(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Yeti.DinoCharacterStatusComponent_BP_Yeti_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Yeti");

	UDinoCharacterStatusComponent_BP_Yeti_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Yeti_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
