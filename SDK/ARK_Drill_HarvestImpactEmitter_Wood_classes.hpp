#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Drill_HarvestImpactEmitter_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C
// 0x0000 (0x0510 - 0x0510)
class ADrill_HarvestImpactEmitter_Wood_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Drill_HarvestImpactEmitter_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
