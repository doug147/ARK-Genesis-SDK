#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_RiotShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_RiotShirt.PrimalItemArmor_RiotShirt_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArmor_RiotShirt_C : public UPrimalItemArmor_BaseShirt_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_RiotShirt.PrimalItemArmor_RiotShirt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_RiotShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
