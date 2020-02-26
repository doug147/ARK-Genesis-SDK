// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Ichthyornis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Ichthyornis.DinoEntry_Ichthyornis_C.ExecuteUbergraph_DinoEntry_Ichthyornis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Ichthyornis_C::ExecuteUbergraph_DinoEntry_Ichthyornis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Ichthyornis.DinoEntry_Ichthyornis_C.ExecuteUbergraph_DinoEntry_Ichthyornis");

	UDinoEntry_Ichthyornis_C_ExecuteUbergraph_DinoEntry_Ichthyornis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
