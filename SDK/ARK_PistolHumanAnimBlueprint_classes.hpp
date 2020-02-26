#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PistolHumanAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PistolHumanAnimBlueprint.PistolHumanAnimBlueprint_C
// 0x0000 (0x3A14 - 0x3A14)
class UPistolHumanAnimBlueprint_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PistolHumanAnimBlueprint.PistolHumanAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_PistolHumanAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
