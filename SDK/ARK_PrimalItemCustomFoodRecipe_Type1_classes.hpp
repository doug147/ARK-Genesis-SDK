#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemCustomFoodRecipe_Type1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCustomFoodRecipe_Type1.PrimalItemCustomFoodRecipe_Type1_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemCustomFoodRecipe_Type1_C : public UPrimalItemCustomFoodRecipe_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomFoodRecipe_Type1.PrimalItemCustomFoodRecipe_Type1_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
