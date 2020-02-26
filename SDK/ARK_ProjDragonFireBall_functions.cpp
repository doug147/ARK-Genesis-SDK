// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjDragonFireBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDragonFireBall.ProjDragonFireBall_C.UserConstructionScript
// ()

void AProjDragonFireBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDragonFireBall.ProjDragonFireBall_C.UserConstructionScript");

	AProjDragonFireBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDragonFireBall.ProjDragonFireBall_C.ExecuteUbergraph_ProjDragonFireBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDragonFireBall_C::ExecuteUbergraph_ProjDragonFireBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDragonFireBall.ProjDragonFireBall_C.ExecuteUbergraph_ProjDragonFireBall");

	AProjDragonFireBall_C_ExecuteUbergraph_ProjDragonFireBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
