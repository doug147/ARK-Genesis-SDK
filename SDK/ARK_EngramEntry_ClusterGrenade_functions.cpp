// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_ClusterGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ClusterGrenade.EngramEntry_ClusterGrenade_C.ExecuteUbergraph_EngramEntry_ClusterGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ClusterGrenade_C::ExecuteUbergraph_EngramEntry_ClusterGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ClusterGrenade.EngramEntry_ClusterGrenade_C.ExecuteUbergraph_EngramEntry_ClusterGrenade");

	UEngramEntry_ClusterGrenade_C_ExecuteUbergraph_EngramEntry_ClusterGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
