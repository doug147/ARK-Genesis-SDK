#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_ParaSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ParaSaddle.PrimalItemArmor_ParaSaddle_C
// 0x0000 (0x09B8 - 0x09B8)
class UPrimalItemArmor_ParaSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ParaSaddle.PrimalItemArmor_ParaSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ParaSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
