// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_CreativeModeHelper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD");

	ABuff_CreativeModeHelper_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer
// (NetReliable, Native, Static, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer");

	ABuff_CreativeModeHelper_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino
// ()
// Parameters:
// bool                           NotRidingDino                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::IsNotRidingDino(bool* NotRidingDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino");

	ABuff_CreativeModeHelper_C_IsNotRidingDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotRidingDino != nullptr)
		*NotRidingDino = params.NotRidingDino;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand
// ()
// Parameters:
// class FString                  Command                        (Parm, ZeroConstructor)

void ABuff_CreativeModeHelper_C::ExecConsoleCommand(const class FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand");

	ABuff_CreativeModeHelper_C_ExecConsoleCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated");

	ABuff_CreativeModeHelper_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated");

	ABuff_CreativeModeHelper_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator");

	ABuff_CreativeModeHelper_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.UserConstructionScript
// ()

void ABuff_CreativeModeHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.UserConstructionScript");

	ABuff_CreativeModeHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_216
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Jump_K2Node_InputActionEvent_216()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_216");

	ABuff_CreativeModeHelper_C_InpActEvt_Jump_K2Node_InputActionEvent_216_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_215
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_215()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_215");

	ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_215_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_214
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_214()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_214");

	ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_214_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Prone_K2Node_InputActionEvent_213
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Prone_K2Node_InputActionEvent_213()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Prone_K2Node_InputActionEvent_213");

	ABuff_CreativeModeHelper_C_InpActEvt_Prone_K2Node_InputActionEvent_213_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_212
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_212()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_212");

	ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_212_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_211
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_211()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_211");

	ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_211_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_210
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_210()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_210");

	ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_210_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_62
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_62()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_62");

	ABuff_CreativeModeHelper_C_InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_62_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight
// ()
// Parameters:
// bool                           IsFlying                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ServerSetFlight(bool IsFlying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight");

	ABuff_CreativeModeHelper_C_ServerSetFlight_Params params;
	params.IsFlying = IsFlying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed
// ()
// Parameters:
// float                          NewSpeed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ServerSetFlySpeed(float NewSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed");

	ABuff_CreativeModeHelper_C_ServerSetFlySpeed_Params params;
	params.NewSpeed = NewSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed
// ()
// Parameters:
// float                          New_Speed                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::SetFlySpeed(float New_Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed");

	ABuff_CreativeModeHelper_C_SetFlySpeed_Params params;
	params.New_Speed = New_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure
// ()
// Parameters:
// class APrimalStructure*        StructureToDestroy             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::NetServerDestroyStructure(class APrimalStructure* StructureToDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure");

	ABuff_CreativeModeHelper_C_NetServerDestroyStructure_Params params;
	params.StructureToDestroy = StructureToDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus
// ()
// Parameters:
// bool                           IsFlying                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ClientUpdateFlightStatus(bool IsFlying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus");

	ABuff_CreativeModeHelper_C_ClientUpdateFlightStatus_Params params;
	params.IsFlying = IsFlying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData
// ()
// Parameters:
// TArray<struct FHitResult>      Hits                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         HitStarts                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         HitEnds                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct UObject_FTransform> Chars                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::MultiReplicationDebugData(const struct FVector& Player, TArray<struct FHitResult>* Hits, TArray<struct FVector>* HitStarts, TArray<struct FVector>* HitEnds, TArray<struct UObject_FTransform>* Chars)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData");

	ABuff_CreativeModeHelper_C_MultiReplicationDebugData_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
	if (HitStarts != nullptr)
		*HitStarts = params.HitStarts;
	if (HitEnds != nullptr)
		*HitEnds = params.HitEnds;
	if (Chars != nullptr)
		*Chars = params.Chars;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient");

	ABuff_CreativeModeHelper_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ServerRequestReplicationDebugging(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging");

	ABuff_CreativeModeHelper_C_ServerRequestReplicationDebugging_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ExecuteUbergraph_Buff_CreativeModeHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper");

	ABuff_CreativeModeHelper_C_ExecuteUbergraph_Buff_CreativeModeHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
