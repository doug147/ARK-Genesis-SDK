// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_AllColors_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_AllColors.DinoColorSet_AllColors_C.ExecuteUbergraph_DinoColorSet_AllColors
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_AllColors_C::ExecuteUbergraph_DinoColorSet_AllColors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_AllColors.DinoColorSet_AllColors_C.ExecuteUbergraph_DinoColorSet_AllColors");

	UDinoColorSet_AllColors_C_ExecuteUbergraph_DinoColorSet_AllColors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
