#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_SummerSwimPants_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_SummerSwimPants_Alpha.PrimalItemSkin_SummerSwimPants_Alpha_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_SummerSwimPants_Alpha_C : public UPrimalItemSkin_SummerSwimPants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_SummerSwimPants_Alpha.PrimalItemSkin_SummerSwimPants_Alpha_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_SummerSwimPants_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
