// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_MosaSaddle_Platform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MosaSaddle_Platform.PrimalItemArmor_MosaSaddle_Platform_C.ExecuteUbergraph_PrimalItemArmor_MosaSaddle_Platform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MosaSaddle_Platform_C::ExecuteUbergraph_PrimalItemArmor_MosaSaddle_Platform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MosaSaddle_Platform.PrimalItemArmor_MosaSaddle_Platform_C.ExecuteUbergraph_PrimalItemArmor_MosaSaddle_Platform");

	UPrimalItemArmor_MosaSaddle_Platform_C_ExecuteUbergraph_PrimalItemArmor_MosaSaddle_Platform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
