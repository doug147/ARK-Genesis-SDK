#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_RecipeNote_Kibble_Pulmono_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Pulmono.PrimalItem_RecipeNote_Kibble_Pulmono_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_RecipeNote_Kibble_Pulmono_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Pulmono.PrimalItem_RecipeNote_Kibble_Pulmono_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Pulmono(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
