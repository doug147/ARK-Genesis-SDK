#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Soup_ShadowSteak_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Soup_ShadowSteak.PrimalItemConsumable_Soup_ShadowSteak_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Soup_ShadowSteak_C : public UPrimalItemConsumableEatable_BuffingSoup_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Soup_ShadowSteak.PrimalItemConsumable_Soup_ShadowSteak_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Soup_ShadowSteak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
