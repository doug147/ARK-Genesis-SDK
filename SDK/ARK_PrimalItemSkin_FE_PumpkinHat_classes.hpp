#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_FE_PumpkinHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_FE_PumpkinHat.PrimalItemSkin_FE_PumpkinHat_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_FE_PumpkinHat_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_FE_PumpkinHat.PrimalItemSkin_FE_PumpkinHat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_FE_PumpkinHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif