// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Cruise_Missile_MaintainCameraClient_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.BPHandleOnStartFire
// (NetReliable, NetRequest, Event, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Cruise_Missile_MaintainCameraClient_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.BPHandleOnStartFire");

	ABuff_Cruise_Missile_MaintainCameraClient_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Cruise_Missile_MaintainCameraClient_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.BPPreventFirstPerson");

	ABuff_Cruise_Missile_MaintainCameraClient_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.BPOverrideCameraViewTarget
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName*                  CurrentCameraMode              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DesiredCameraLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DesiredCameraRotation          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredFOV                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraRotation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraFOV             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Cruise_Missile_MaintainCameraClient_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.BPOverrideCameraViewTarget");

	ABuff_Cruise_Missile_MaintainCameraClient_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverrideCameraLocation != nullptr)
		*bOverrideCameraLocation = params.bOverrideCameraLocation;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (bOverrideCameraRotation != nullptr)
		*bOverrideCameraRotation = params.bOverrideCameraRotation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (bOverrideCameraFOV != nullptr)
		*bOverrideCameraFOV = params.bOverrideCameraFOV;
	if (CameraFOV != nullptr)
		*CameraFOV = params.CameraFOV;
}


// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.UserConstructionScript
// ()

void ABuff_Cruise_Missile_MaintainCameraClient_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.UserConstructionScript");

	ABuff_Cruise_Missile_MaintainCameraClient_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraClient
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Cruise_Missile_MaintainCameraClient_C::ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraClient(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraClient");

	ABuff_Cruise_Missile_MaintainCameraClient_C_ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraClient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
