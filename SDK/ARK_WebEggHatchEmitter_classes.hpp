#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WebEggHatchEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WebEggHatchEmitter.WebEggHatchEmitter_C
// 0x0000 (0x0510 - 0x0510)
class AWebEggHatchEmitter_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WebEggHatchEmitter.WebEggHatchEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WebEggHatchEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
