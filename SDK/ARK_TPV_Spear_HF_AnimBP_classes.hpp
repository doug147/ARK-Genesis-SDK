#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TPV_Spear_HF_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_Spear_HF_AnimBP.TPV_Spear_HF_AnimBP_C
// 0x0000 (0x3A14 - 0x3A14)
class UTPV_Spear_HF_AnimBP_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_Spear_HF_AnimBP.TPV_Spear_HF_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_TPV_Spear_HF_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
