#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemC4Ammo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemC4Ammo.PrimalItemC4Ammo_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemC4Ammo_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemC4Ammo.PrimalItemC4Ammo_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemC4Ammo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
