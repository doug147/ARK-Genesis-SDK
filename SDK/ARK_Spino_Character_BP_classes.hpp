#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Spino_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spino_Character_BP.Spino_Character_BP_C
// 0x01EB (0x22F3 - 0x2108)
class ASpino_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Spino_C*    DinoCharacterStatus_BP_Spino_C1;                          // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBiped;                                                 // 0x2110(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2111(0x0007) MISSED OFFSET
	double                                             LastTimeSinceStanceSwitch;                                // 0x2118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stanceSwitchDelay;                                        // 0x2120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwitchingStances;                                      // 0x2124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2125(0x0003) MISSED OFFSET
	float                                              stanceSwitchBlendTime;                                    // 0x2128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToSwitchStance;                                     // 0x212C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToAttack;                                           // 0x212D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x212E(0x0002) MISSED OFFSET
	float                                              BipedRunSpeedMultiplier;                                  // 0x2130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BipedMeleeMultiplier;                                     // 0x2134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_MoveFwd;                                    // 0x2138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_RunFwd;                                     // 0x2140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_MoveLeft;                                   // 0x2148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_RunLeft;                                    // 0x2150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_MoveRight;                                  // 0x2158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_RunRight;                                   // 0x2160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_Idle;                                       // 0x2168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_Startled;                                   // 0x2170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_Hurt;                                       // 0x2178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_QuadToBiped_Move;                           // 0x2180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_QuadToBiped_Run;                            // 0x2188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_QuadToBiped_Idle;                           // 0x2190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_BipedToQuad_Move;                           // 0x2198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_BipedToQuad_Run;                            // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_BipedToQuad_Idle;                           // 0x21A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BipedMaxWalkSpeedMultiplier;                              // 0x21B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BipedRotationMultiplier;                                  // 0x21B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Biped_TamedRunningRotationRateModifier;                   // 0x21B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x21BC(0x0004) MISSED OFFSET
	class UClass*                                      AquaticBuffClass;                                         // 0x21C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeSinceInWater;                                     // 0x21C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuffTimeExpiration;                                       // 0x21D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAquatic;                                               // 0x21D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x21D5(0x0003) MISSED OFFSET
	struct FName                                       StanceSwitchNotifyName;                                   // 0x21D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_BipedTorpid;                                // 0x21E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        AdditiveAnims_Quad;                                       // 0x21E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        AdditiveAnims_Biped;                                      // 0x21F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AIStanceSwitchCooldown;                                   // 0x2208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x220C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2210(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x2211(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2212(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x2213(0x0005) MISSED OFFSET
	class AActor*                                      K2Node_Event_OtherActor2;                                 // 0x2218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APhysicsVolume*                              K2Node_DynamicCast_AsPhysicsVolume;                       // 0x2220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2228(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuff_ReturnValue;                             // 0x2229(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x222A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x222B(0x0005) MISSED OFFSET
	class AActor*                                      K2Node_Event_OtherActor;                                  // 0x2230(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APhysicsVolume*                              K2Node_DynamicCast_AsPhysicsVolume2;                      // 0x2238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2240(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuff_ReturnValue2;                            // 0x2241(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2242(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bIsActive;                             // 0x2243(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x2244(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x2248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_SpinoAqua_C*                           K2Node_DynamicCast_AsBuff_SpinoAqua_C;                    // 0x2250(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2258(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x2259(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ResetBuffStart_ReturnValue;                      // 0x2268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x2269(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_Array_Get_Item;                                  // 0x2270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_Array_Get_Item2;                                 // 0x2278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2280(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x2284(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_Array_Get_Item3;                                 // 0x2288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x2290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x2298(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x229C(0x0004) MISSED OFFSET
	class USpinoBipedAnimBlueprint_C*                  K2Node_DynamicCast_AsSpinoBipedAnimBlueprint_C;           // 0x22A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x22A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x22A9(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_Array_Get_Item4;                                 // 0x22B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue4;                         // 0x22B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x22BC(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_Array_Get_Item5;                                 // 0x22C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue5;                         // 0x22C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x22CC(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x22D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_Array_Get_Item6;                                 // 0x22D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue6;                         // 0x22E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Find_ReturnValue;                          // 0x22E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue;                 // 0x22E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x22E9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Find_ReturnValue2;                         // 0x22EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue2;                // 0x22F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x22F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x22F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spino_Character_BP.Spino_Character_BP_C");
		return ptr;
	}


	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void BPDoAttack(int* AttackIndex);
	void CanSwitchStances(bool isBiped, bool* CanSwitch);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void GetStanceSwitchAnim(class UAnimMontage** AnimMontage);
	void SS_SetCurrentStance(bool isBiped, bool bUseCooldown);
	void ToggleStance();
	void BPTimerServer();
	void PreInit_SwitchStance();
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void GetDefaultDino(class ASpino_Character_BP_C** Dino);
	void UpdateMoveSpeed();
	void UpdateStance();
	void OnRep_bIsBiped();
	void CS_Set_Biped_State(bool isBiped);
	void UserConstructionScript();
	void SS_RequestStanceSwitch();
	void StanceSwitch_Delay(float Delay);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void Multi_UpdateBuffTime(bool bIsActive);
	void AdditiveRoar();
	void ExecuteUbergraph_Spino_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
