#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ForgeFireEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ForgeFireEmitter.ForgeFireEmitter_C
// 0x0000 (0x0510 - 0x0510)
class AForgeFireEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForgeFireEmitter.ForgeFireEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ForgeFireEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
