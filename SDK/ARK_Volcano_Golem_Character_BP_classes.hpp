#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Golem_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Volcano_Golem_Character_BP.Volcano_Golem_Character_BP_C
// 0x0000 (0x22F5 - 0x22F5)
class AVolcano_Golem_Character_BP_C : public ARockGolem_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Volcano_Golem_Character_BP.Volcano_Golem_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Volcano_Golem_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
