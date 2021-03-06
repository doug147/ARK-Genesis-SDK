#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TPV_CruiseMissile_HF_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C
// 0x0004 (0x3A18 - 0x3A14)
class UTPV_CruiseMissile_HF_AnimBP_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x3A14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_TPV_CruiseMissile_HF_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
