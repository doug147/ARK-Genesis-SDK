#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponBoomerang_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponBoomerang.PrimalItem_WeaponBoomerang_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponBoomerang_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponBoomerang.PrimalItem_WeaponBoomerang_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponBoomerang(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
