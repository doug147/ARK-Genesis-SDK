#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_HardImpactCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HardImpactCameraShake.HardImpactCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UHardImpactCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HardImpactCameraShake.HardImpactCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_HardImpactCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
