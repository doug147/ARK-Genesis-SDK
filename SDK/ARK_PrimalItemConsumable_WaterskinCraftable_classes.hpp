#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_WaterskinCraftable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_WaterskinCraftable.PrimalItemConsumable_WaterskinCraftable_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_WaterskinCraftable_C : public UPrimalItemConsumableEatable_WaterContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_WaterskinCraftable.PrimalItemConsumable_WaterskinCraftable_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
