#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Seed_PlantSpeciesY_SpeedHack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_PlantSpeciesY_SpeedHack.PrimalItemConsumable_Seed_PlantSpeciesY_SpeedHack_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Seed_PlantSpeciesY_SpeedHack_C : public UPrimalItemConsumableSeed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_PlantSpeciesY_SpeedHack.PrimalItemConsumable_Seed_PlantSpeciesY_SpeedHack_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesY_SpeedHack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
