// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Phoenix_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Phoenix.DinoColorSet_Phoenix_C.ExecuteUbergraph_DinoColorSet_Phoenix
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Phoenix_C::ExecuteUbergraph_DinoColorSet_Phoenix(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Phoenix.DinoColorSet_Phoenix_C.ExecuteUbergraph_DinoColorSet_Phoenix");

	UDinoColorSet_Phoenix_C_ExecuteUbergraph_DinoColorSet_Phoenix_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
