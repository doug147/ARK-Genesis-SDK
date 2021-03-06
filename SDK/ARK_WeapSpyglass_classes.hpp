#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapSpyglass_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSpyglass.WeapSpyglass_C
// 0x0000 (0x0D50 - 0x0D50)
class AWeapSpyglass_C : public AShooterWeapon_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSpyglass.WeapSpyglass_C");
		return ptr;
	}


	bool BPCanToggleAccessory();
	void UserConstructionScript();
	void ExecuteUbergraph_WeapSpyglass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
