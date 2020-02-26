#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_FishBasketTrappedEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FishBasketTrappedEmitter.FishBasketTrappedEmitter_C
// 0x0000 (0x0510 - 0x0510)
class AFishBasketTrappedEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FishBasketTrappedEmitter.FishBasketTrappedEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FishBasketTrappedEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
