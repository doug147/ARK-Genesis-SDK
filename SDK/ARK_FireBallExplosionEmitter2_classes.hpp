#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_FireBallExplosionEmitter2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FireBallExplosionEmitter2.FireBallExplosionEmitter2_C
// 0x0000 (0x0510 - 0x0510)
class AFireBallExplosionEmitter2_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FireBallExplosionEmitter2.FireBallExplosionEmitter2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FireBallExplosionEmitter2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
