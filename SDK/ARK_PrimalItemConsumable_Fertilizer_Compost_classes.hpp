#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Fertilizer_Compost_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Fertilizer_Compost.PrimalItemConsumable_Fertilizer_Compost_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Fertilizer_Compost_C : public UPrimalItemConsumable_Fertilizer_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Fertilizer_Compost.PrimalItemConsumable_Fertilizer_Compost_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Fertilizer_Compost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
