// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_SpaceWhale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_SpaceWhale.DinoColorSet_SpaceWhale_C.ExecuteUbergraph_DinoColorSet_SpaceWhale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_SpaceWhale_C::ExecuteUbergraph_DinoColorSet_SpaceWhale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_SpaceWhale.DinoColorSet_SpaceWhale_C.ExecuteUbergraph_DinoColorSet_SpaceWhale");

	UDinoColorSet_SpaceWhale_C_ExecuteUbergraph_DinoColorSet_SpaceWhale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
