#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackStateRangedMedium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateRangedMedium.DinoAttackStateRangedMedium_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackStateRangedMedium_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRangedMedium.DinoAttackStateRangedMedium_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateRangedMedium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
