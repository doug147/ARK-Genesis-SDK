// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicPara_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicPara_Character_BP.BionicPara_Character_BP_C.UserConstructionScript
// ()

void ABionicPara_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicPara_Character_BP.BionicPara_Character_BP_C.UserConstructionScript");

	ABionicPara_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicPara_Character_BP.BionicPara_Character_BP_C.ExecuteUbergraph_BionicPara_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicPara_Character_BP_C::ExecuteUbergraph_BionicPara_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicPara_Character_BP.BionicPara_Character_BP_C.ExecuteUbergraph_BionicPara_Character_BP");

	ABionicPara_Character_BP_C_ExecuteUbergraph_BionicPara_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
