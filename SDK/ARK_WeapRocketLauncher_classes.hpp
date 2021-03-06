#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapRocketLauncher_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapRocketLauncher.WeapRocketLauncher_C
// 0x0000 (0x0DF8 - 0x0DF8)
class AWeapRocketLauncher_C : public AShooterWeapon_Projectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapRocketLauncher.WeapRocketLauncher_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapRocketLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
