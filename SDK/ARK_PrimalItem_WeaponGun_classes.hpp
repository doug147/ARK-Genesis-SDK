#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponGun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponGun.PrimalItem_WeaponGun_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponGun_C : public UPrimalItemWeaponGenericGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponGun.PrimalItem_WeaponGun_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
