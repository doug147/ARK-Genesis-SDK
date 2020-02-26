#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AnimNotifyState_MuteIKLeg_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimNotifyState_MuteIKLeg.AnimNotifyState_MuteIKLeg_C.Received_NotifyEnd
struct UAnimNotifyState_MuteIKLeg_C_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimNotifyState_MuteIKLeg.AnimNotifyState_MuteIKLeg_C.Received_NotifyBegin
struct UAnimNotifyState_MuteIKLeg_C_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif