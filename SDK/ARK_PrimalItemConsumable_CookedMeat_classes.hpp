#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_CookedMeat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_CookedMeat.PrimalItemConsumable_CookedMeat_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_CookedMeat_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CookedMeat.PrimalItemConsumable_CookedMeat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_CookedMeat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
