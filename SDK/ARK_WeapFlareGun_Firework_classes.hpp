#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapFlareGun_Firework_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFlareGun_Firework.WeapFlareGun_Firework_C
// 0x0000 (0x0DF8 - 0x0DF8)
class AWeapFlareGun_Firework_C : public AWeapFlareGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFlareGun_Firework.WeapFlareGun_Firework_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFlareGun_Firework(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
