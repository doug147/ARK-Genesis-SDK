#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bee_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bee_AIController_BP.Bee_AIController_BP_C
// 0x0000 (0x0911 - 0x0911)
class ABee_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bee_AIController_BP.Bee_AIController_BP_C");
		return ptr;
	}


	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ExecuteUbergraph_Bee_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
