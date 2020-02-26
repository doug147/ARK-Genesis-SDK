#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WaterSplashEmitter_Ichthyornis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C
// 0x0000 (0x0510 - 0x0510)
class AWaterSplashEmitter_Ichthyornis_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterSplashEmitter_Ichthyornis.WaterSplashEmitter_Ichthyornis_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterSplashEmitter_Ichthyornis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
