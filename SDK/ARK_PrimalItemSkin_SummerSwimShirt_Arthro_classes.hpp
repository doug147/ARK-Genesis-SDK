#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_SummerSwimShirt_Arthro_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_SummerSwimShirt_Arthro.PrimalItemSkin_SummerSwimShirt_Arthro_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_SummerSwimShirt_Arthro_C : public UPrimalItemSkin_SummerSwimShirt_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_SummerSwimShirt_Arthro.PrimalItemSkin_SummerSwimShirt_Arthro_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_SummerSwimShirt_Arthro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif