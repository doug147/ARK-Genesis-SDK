#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ClusterBombGroundImpact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClusterBombGroundImpact.ClusterBombGroundImpact_C
// 0x0000 (0x0510 - 0x0510)
class AClusterBombGroundImpact_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ClusterBombGroundImpact.ClusterBombGroundImpact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ClusterBombGroundImpact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
