#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dino_Character_BP_IgnoredByWebs_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_IgnoredByWebs.Dino_Character_BP_IgnoredByWebs_C
// 0x0000 (0x2108 - 0x2108)
class ADino_Character_BP_IgnoredByWebs_C : public ADino_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_IgnoredByWebs.Dino_Character_BP_IgnoredByWebs_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dino_Character_BP_IgnoredByWebs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
