#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CannonExplosion_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CannonExplosion_Emitter.CannonExplosion_Emitter_C
// 0x0000 (0x0510 - 0x0510)
class ACannonExplosion_Emitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CannonExplosion_Emitter.CannonExplosion_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CannonExplosion_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
