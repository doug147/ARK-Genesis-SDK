#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekGravityGrenadeExplosionEmitter_Repel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C
// 0x0000 (0x0568 - 0x0568)
class ATekGravityGrenadeExplosionEmitter_Repel_C : public ATekGravityGrenadeExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Repel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
