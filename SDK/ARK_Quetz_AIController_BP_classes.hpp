#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Quetz_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Quetz_AIController_BP.Quetz_AIController_BP_C
// 0x0000 (0x0911 - 0x0911)
class AQuetz_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quetz_AIController_BP.Quetz_AIController_BP_C");
		return ptr;
	}


	struct FVector2D BP_TamedOverrideHorizontalLandingRange();
	void UserConstructionScript();
	void ExecuteUbergraph_Quetz_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
