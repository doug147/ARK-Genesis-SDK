#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapPistol_FireCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPistol_FireCameraShake.WeapPistol_FireCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UWeapPistol_FireCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPistol_FireCameraShake.WeapPistol_FireCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_WeapPistol_FireCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
