#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponBaseHatchet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponBaseHatchet.PrimalItem_WeaponBaseHatchet_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponBaseHatchet_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponBaseHatchet.PrimalItem_WeaponBaseHatchet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponBaseHatchet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
