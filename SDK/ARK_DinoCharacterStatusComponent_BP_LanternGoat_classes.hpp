#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_LanternGoat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_LanternGoat.DinoCharacterStatusComponent_BP_LanternGoat_C
// 0x0000 (0x1088 - 0x1088)
class UDinoCharacterStatusComponent_BP_LanternGoat_C : public UDinoCharacterStatusComponent_BP_LanternBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_LanternGoat.DinoCharacterStatusComponent_BP_LanternGoat_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_LanternGoat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
