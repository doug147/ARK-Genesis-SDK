#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire.PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_C : public UPrimalItemConsumable_Egg_Wyvern_Fertilized_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire.PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
