#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponBow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponBow.PrimalItem_WeaponBow_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponBow_C : public UPrimalItemWeaponGenericGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponBow.PrimalItem_WeaponBow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
