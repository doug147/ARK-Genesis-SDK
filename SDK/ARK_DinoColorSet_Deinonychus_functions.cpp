// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Deinonychus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Deinonychus.DinoColorSet_Deinonychus_C.ExecuteUbergraph_DinoColorSet_Deinonychus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Deinonychus_C::ExecuteUbergraph_DinoColorSet_Deinonychus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Deinonychus.DinoColorSet_Deinonychus_C.ExecuteUbergraph_DinoColorSet_Deinonychus");

	UDinoColorSet_Deinonychus_C_ExecuteUbergraph_DinoColorSet_Deinonychus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
