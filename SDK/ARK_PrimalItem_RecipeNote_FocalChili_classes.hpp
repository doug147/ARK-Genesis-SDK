#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_RecipeNote_FocalChili_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_FocalChili.PrimalItem_RecipeNote_FocalChili_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_RecipeNote_FocalChili_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_FocalChili.PrimalItem_RecipeNote_FocalChili_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_FocalChili(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
