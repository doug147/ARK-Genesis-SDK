#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_UnlockEmote_Caroling_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Caroling.PrimalItemConsumable_UnlockEmote_Caroling_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_UnlockEmote_Caroling_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Caroling.PrimalItemConsumable_UnlockEmote_Caroling_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Caroling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif