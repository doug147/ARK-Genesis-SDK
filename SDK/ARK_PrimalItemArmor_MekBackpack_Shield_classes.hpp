#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_MekBackpack_Shield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_MekBackpack_Shield.PrimalItemArmor_MekBackpack_Shield_C
// 0x0000 (0x09BC - 0x09BC)
class UPrimalItemArmor_MekBackpack_Shield_C : public UPrimalItemArmor_MekBackpack_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MekBackpack_Shield.PrimalItemArmor_MekBackpack_Shield_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_MekBackpack_Shield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
