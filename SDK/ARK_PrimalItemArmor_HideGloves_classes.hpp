#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_HideGloves_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HideGloves.PrimalItemArmor_HideGloves_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArmor_HideGloves_C : public UPrimalItemArmor_BaseGloves_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HideGloves.PrimalItemArmor_HideGloves_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_HideGloves(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
