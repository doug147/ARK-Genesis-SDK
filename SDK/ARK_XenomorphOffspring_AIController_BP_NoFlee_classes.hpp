#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_XenomorphOffspring_AIController_BP_NoFlee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C
// 0x0000 (0x0932 - 0x0932)
class AXenomorphOffspring_AIController_BP_NoFlee_C : public AXenomorphOffspring_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XenomorphOffspring_AIController_BP_NoFlee.XenomorphOffspring_AIController_BP_NoFlee_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_XenomorphOffspring_AIController_BP_NoFlee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
