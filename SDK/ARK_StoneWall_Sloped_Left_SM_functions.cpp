// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StoneWall_Sloped_Left_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneWall_Sloped_Left_SM.StoneWall_Sloped_Left_SM_C.UserConstructionScript
// ()

void AStoneWall_Sloped_Left_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneWall_Sloped_Left_SM.StoneWall_Sloped_Left_SM_C.UserConstructionScript");

	AStoneWall_Sloped_Left_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoneWall_Sloped_Left_SM.StoneWall_Sloped_Left_SM_C.ExecuteUbergraph_StoneWall_Sloped_Left_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStoneWall_Sloped_Left_SM_C::ExecuteUbergraph_StoneWall_Sloped_Left_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneWall_Sloped_Left_SM.StoneWall_Sloped_Left_SM_C.ExecuteUbergraph_StoneWall_Sloped_Left_SM");

	AStoneWall_Sloped_Left_SM_C_ExecuteUbergraph_StoneWall_Sloped_Left_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
