#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Kibble_PegomastaxEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_PegomastaxEgg.PrimalItemConsumable_Kibble_PegomastaxEgg_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Kibble_PegomastaxEgg_C : public UPrimalItemConsumable_Kibble_Base_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_PegomastaxEgg.PrimalItemConsumable_Kibble_PegomastaxEgg_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_PegomastaxEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
