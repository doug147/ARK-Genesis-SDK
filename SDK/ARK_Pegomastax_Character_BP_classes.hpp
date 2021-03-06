#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pegomastax_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pegomastax_Character_BP.Pegomastax_Character_BP_C
// 0x01B4 (0x22BC - 0x2108)
class APegomastax_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UStaticMeshComponent*                        BackPack;                                                 // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             LeapLoop;                                                 // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Pegomastax_C* DinoCharacterStatus_BP_Pegomastax_C1;                     // 0x2118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeapAttackImpulseForward;                                 // 0x2120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZLeapMultiplier;                                          // 0x2124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastRoarDecisionTime;                                     // 0x2128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              roarChance;                                               // 0x2130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2134(0x0004) MISSED OFFSET
	TArray<float>                                      harvestAmountMultipliers;                                 // 0x2138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              harvestClasses;                                           // 0x2148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      harvestWeightMultipliers;                                 // 0x2158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               onlyStealFromPlayers;                                     // 0x2168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2169(0x0003) MISSED OFFSET
	int                                                stealItemsWildMin;                                        // 0x216C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                stealItemsTamedMax;                                       // 0x2170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                stealItemsWildMax;                                        // 0x2174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                stealItemsTamedMin;                                       // 0x2178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isFleeingWithLoot;                                        // 0x217C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x217D(0x0003) MISSED OFFSET
	float                                              fleeWithLootTime;                                         // 0x2180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2184(0x0004) MISSED OFFSET
	double                                             lastFleeWithLootTime;                                     // 0x2188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                numTimesAddedAffinity;                                    // 0x2190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              affinityMultiplier;                                       // 0x2194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              groupCheckRadius;                                         // 0x2198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                maxNumPegosInGroup;                                       // 0x219C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isStealing;                                               // 0x21A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x21A1(0x0007) MISSED OFFSET
	class APlayerController*                           lastPlayerOrder;                                          // 0x21A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                pickPocketingMode;                                        // 0x21B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              fleeWithLootTimeTamed;                                    // 0x21B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxBuffTimeWild;                                          // 0x21B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentNumPegosInGroup;                                   // 0x21BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               pendingHoldPose;                                          // 0x21C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x21C1(0x0003) MISSED OFFSET
	struct FRotator                                    savedRotationRate;                                        // 0x21C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                savedFoodAnim;                                            // 0x21D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                savedPoopAnim;                                            // 0x21D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                savedHarvestingAnim;                                      // 0x21E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeHoldItemAfterPickpocketing;                           // 0x21E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x21EC(0x0004) MISSED OFFSET
	double                                             LastHoldRunStartTime;                                     // 0x21F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               wasRecentlyTamed;                                         // 0x21F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x21F9(0x0003) MISSED OFFSET
	float                                              minBuffTimeWild;                                          // 0x21FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minBuffTimeTamed;                                         // 0x2200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxBuffTimeTamed;                                         // 0x2204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      immuneToStealingBuff;                                     // 0x2208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      itemStolenString;                                         // 0x2210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                NotificationColor;                                        // 0x2220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2231(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2232(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x2233(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_stopIdleHoldingAnim;                   // 0x2234(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_stopRunHoldingAnim;                    // 0x2235(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_hideBag2;                              // 0x2236(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x2237(0x0001) MISSED OFFSET
	float                                              K2Node_CustomEvent_idleBlendOutTime;                      // 0x2238(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Can_Play_Holding_Anim_canPlay;                   // 0x223C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x223D(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Delay;                                 // 0x2240(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay2;                                // 0x2244(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Time;                                  // 0x2248(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_preDelay2;                             // 0x224C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_idle2;                                 // 0x2250(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_hideBag3;                              // 0x2251(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2252(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2253(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x2254(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x2255(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x2256(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_timeBeforeRun;                         // 0x2258(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_preDelay;                              // 0x225C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_hideBag;                               // 0x2260(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2261(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_runHoldDuration;                       // 0x2264(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       K2Node_CustomEvent_owner;                                 // 0x2268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x2270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_WillRunToOwner_willRun;                          // 0x2278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2279(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x227A(0x0002) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x227C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x2280(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x2284(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2285(0x0003) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue2;                  // 0x2288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x2298(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x2299(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue2;                          // 0x229A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x5];                                       // 0x229B(0x0005) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue3;                  // 0x22A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue4;            // 0x22A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue5;            // 0x22A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x22AA(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x22AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x22B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x22B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Idle;                                  // 0x22B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x22B6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x22B7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Array_Set_Item_RefProperty;                      // 0x22B8(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pegomastax_Character_BP.Pegomastax_Character_BP_C");
		return ptr;
	}


	bool STATIC_BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void UpdateWaitingState(class APrimalCharacter* TargetCharacter, bool* isInWaitingState);
	void isInWaitingState(class APrimalCharacter* TargetCharacter, bool* isWaiting);
	void WillRunToOwner(class APawn* ownerPawn, bool* willRun);
	void BPTimerServer();
	void FindPawnToGoBackTo(class APawn** selectedPawn);
	void BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer);
	void RestoreSecondaryAnims();
	void ClearSecondaryAnims();
	void PostAttackActions(bool stoleItem);
	void ShouldStopHolding(bool* ShouldStop);
	void Can_Play_Holding_Anim(bool* CanPlay);
	void BPOnClearMountedDino();
	void BPOnSetMountedDino();
	void UpdateHoldingStatus();
	void BPCharacterSleeped();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void CreateTamedInventory();
	void ProcessUsedItem(class UPrimalItem* Item);
	void CalculateBuffTimeForGroup(class APrimalBuff* Buff, float* extraTime);
	void NextPickPocketingMode();
	void CanReturnToCharacter(class AShooterPlayerController* PlayerController, bool* returnPossible);
	void CanStealItem(class UPrimalItem* Item, bool* canSteal);
	void GoBackToOwner(class APawn* Pawn);
	void Get_NumPegosInGroup(int* maxExtraItems);
	void STATIC_IsValidItemForTaming(class UPrimalItem* PrimalItem, bool* IsValid);
	void BPInventoryItemUsed(class UObject** InventoryItemObject);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale, struct FColor* K2Node_Select_ReturnValue);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void AddAffinityFromFood(class UPrimalItem* Item);
	void StealItemInSlot(int slotNumber, class APrimalCharacter* Character, bool* Success);
	void Can_StealFromCharacter(class APrimalCharacter* Character, bool* canSteal);
	void StealRandom_Items(int NumItems, bool includeHotBarItems, float totalChance, float chancePerItem, class APrimalCharacter* Character, bool* succeeded);
	void Stop_FleeingWithLoot();
	void StartFleeingWithLoot();
	bool BPShouldForceFlee();
	void Do_StealItem(class APrimalCharacter* CharacterToStealFrom, class UPrimalItem* itemToSteal, bool consumeItem, bool* Success);
	void Steal_from_Character(class APrimalCharacter* Character, bool* succeeded);
	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void CreateWildInventory();
	void OnJumped();
	void BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut);
	float BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected);
	bool STATIC_BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void UserConstructionScript();
	void BPUnstasis();
	void PlayHoldingForTime(float Time, float preDelay, bool Idle, bool HideBag);
	void HideBag();
	void StopHoldingAfterFleeing(float Delay);
	void StopHoldingImmediate(bool stopIdleHoldingAnim, bool stopRunHoldingAnim, bool HideBag, float idleBlendOutTime);
	void PlayHoldingImmediate(bool Idle);
	void ShowBag();
	void ShowBagAfterDelay();
	void FleeAfterTime(float Delay);
	void PlayCombinedHolding(float timeBeforeRun, float preDelay, bool HideBag, float runHoldDuration, class APawn* Owner);
	void ExecuteUbergraph_Pegomastax_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
