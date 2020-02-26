// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Decorator_GasBags_MinDangerLevel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_GasBags_MinDangerLevel.Decorator_GasBags_MinDangerLevel_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_GasBags_MinDangerLevel_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinDangerLevel.Decorator_GasBags_MinDangerLevel_C.ReceiveConditionCheck");

	UDecorator_GasBags_MinDangerLevel_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_GasBags_MinDangerLevel.Decorator_GasBags_MinDangerLevel_C.ExecuteUbergraph_Decorator_GasBags_MinDangerLevel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_GasBags_MinDangerLevel_C::ExecuteUbergraph_Decorator_GasBags_MinDangerLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_GasBags_MinDangerLevel.Decorator_GasBags_MinDangerLevel_C.ExecuteUbergraph_Decorator_GasBags_MinDangerLevel");

	UDecorator_GasBags_MinDangerLevel_C_ExecuteUbergraph_Decorator_GasBags_MinDangerLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
