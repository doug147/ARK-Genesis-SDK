#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Kibble_Vulture_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_Vulture.PrimalItemConsumable_Kibble_Vulture_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Kibble_Vulture_C : public UPrimalItemConsumable_Kibble_Base_XSmall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_Vulture.PrimalItemConsumable_Kibble_Vulture_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_Vulture(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
