#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_ChitinShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ChitinShirt.PrimalItemArmor_ChitinShirt_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArmor_ChitinShirt_C : public UPrimalItemArmor_BaseShirt_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ChitinShirt.PrimalItemArmor_ChitinShirt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ChitinShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
