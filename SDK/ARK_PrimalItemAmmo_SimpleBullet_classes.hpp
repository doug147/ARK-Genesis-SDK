#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemAmmo_SimpleBullet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_SimpleBullet.PrimalItemAmmo_SimpleBullet_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemAmmo_SimpleBullet_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_SimpleBullet.PrimalItemAmmo_SimpleBullet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_SimpleBullet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
