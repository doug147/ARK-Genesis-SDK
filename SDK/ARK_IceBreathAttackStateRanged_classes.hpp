#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IceBreathAttackStateRanged_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceBreathAttackStateRanged.IceBreathAttackStateRanged_C
// 0x0000 (0x00A0 - 0x00A0)
class UIceBreathAttackStateRanged_C : public UPrimalAIStateBPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceBreathAttackStateRanged.IceBreathAttackStateRanged_C");
		return ptr;
	}


	bool BPShouldEndAttack();
	void OnEndEvent();
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void OnTickEvent(float* DeltaSeconds);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void ExecuteUbergraph_IceBreathAttackStateRanged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
