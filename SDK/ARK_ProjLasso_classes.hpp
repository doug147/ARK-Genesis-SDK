#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjLasso_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjLasso.ProjLasso_C
// 0x0034 (0x06CC - 0x0698)
class AProjLasso_C : public APrimalProjectileGrapplingHook
{
public:
	struct FVector                                     ExtraVelocity;                                            // 0x0698(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttached;                                                // 0x06A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetVelocityRot;                                          // 0x06A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x06A6(0x0002) MISSED OFFSET
	struct FRotator                                    PreviousWorldRotation;                                    // 0x06A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachmentOffset;                                         // 0x06B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrapHookAttachmentOffset;                                 // 0x06C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjLasso.ProjLasso_C");
		return ptr;
	}


	void STATIC_ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void BPInitializedVelocity(float* CustomSpeed, struct FVector* InVelocity);
	void UserConstructionScript();
	void ExecuteUbergraph_ProjLasso(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
