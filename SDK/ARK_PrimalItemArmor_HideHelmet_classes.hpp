#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_HideHelmet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HideHelmet.PrimalItemArmor_HideHelmet_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArmor_HideHelmet_C : public UPrimalItemArmor_BaseHelmet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HideHelmet.PrimalItemArmor_HideHelmet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_HideHelmet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif