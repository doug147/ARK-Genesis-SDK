#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_FPVReloadCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPVReloadCameraShake.FPVReloadCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UFPVReloadCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FPVReloadCameraShake.FPVReloadCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_FPVReloadCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
