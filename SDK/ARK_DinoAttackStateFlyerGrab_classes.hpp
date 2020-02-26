#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackStateFlyerGrab_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateFlyerGrab.DinoAttackStateFlyerGrab_C
// 0x0000 (0x0098 - 0x0098)
class UDinoAttackStateFlyerGrab_C : public UPrimalAIStateDinoFlyerGrab
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateFlyerGrab.DinoAttackStateFlyerGrab_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateFlyerGrab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
