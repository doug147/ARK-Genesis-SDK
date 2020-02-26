#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapFists_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFists.WeapFists_C
// 0x0000 (0x0D50 - 0x0D50)
class AWeapFists_C : public AShooterWeapon_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFists.WeapFists_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFists(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
