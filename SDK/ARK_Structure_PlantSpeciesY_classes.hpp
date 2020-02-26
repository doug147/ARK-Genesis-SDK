#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Structure_PlantSpeciesY_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_PlantSpeciesY.Structure_PlantSpeciesY_C
// 0x0009 (0x0B59 - 0x0B50)
class AStructure_PlantSpeciesY_C : public ABaseBearTrap_C
{
public:
	float                                              DecayRate;                                                // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmountOfDecay;                                            // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_PlantSpeciesY.Structure_PlantSpeciesY_C");
		return ptr;
	}


	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPNotifyImmobilizedCharacterIsDeadOrInConscious(bool* IsDead, bool* IsConscious);
	void BPNotifyImmobilizedCharacterIsDead();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PeriodicDamage();
	void ExecuteUbergraph_Structure_PlantSpeciesY(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
