#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RockGolem_RockEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RockGolem_RockEmitter.RockGolem_RockEmitter_C
// 0x0000 (0x0510 - 0x0510)
class ARockGolem_RockEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RockGolem_RockEmitter.RockGolem_RockEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RockGolem_RockEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
