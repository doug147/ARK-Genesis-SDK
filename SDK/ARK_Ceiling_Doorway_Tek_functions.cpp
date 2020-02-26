// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ceiling_Doorway_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.BPAllowSnappingWith
// ()
// Parameters:
// class APrimalStructure**       OtherStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACeiling_Doorway_Tek_C::BPAllowSnappingWith(class APrimalStructure** OtherStructure, class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.BPAllowSnappingWith");

	ACeiling_Doorway_Tek_C_BPAllowSnappingWith_Params params;
	params.OtherStructure = OtherStructure;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.UserConstructionScript
// ()

void ACeiling_Doorway_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.UserConstructionScript");

	ACeiling_Doorway_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.ExecuteUbergraph_Ceiling_Doorway_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACeiling_Doorway_Tek_C::ExecuteUbergraph_Ceiling_Doorway_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Tek.Ceiling_Doorway_Tek_C.ExecuteUbergraph_Ceiling_Doorway_Tek");

	ACeiling_Doorway_Tek_C_ExecuteUbergraph_Ceiling_Doorway_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
