#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponStonePick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponStonePick.PrimalItem_WeaponStonePick_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponStonePick_C : public UPrimalItem_WeaponBasePick_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponStonePick.PrimalItem_WeaponStonePick_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponStonePick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
