// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoneModifiersContainer_ChibiMegatherium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiMegatherium.BoneModifiersContainer_ChibiMegatherium_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMegatherium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiMegatherium_C::ExecuteUbergraph_BoneModifiersContainer_ChibiMegatherium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiMegatherium.BoneModifiersContainer_ChibiMegatherium_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMegatherium");

	UBoneModifiersContainer_ChibiMegatherium_C_ExecuteUbergraph_BoneModifiersContainer_ChibiMegatherium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
