#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_WW_XmasSweaterChibi_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_WW_XmasSweaterChibi.PrimalItemSkin_WW_XmasSweaterChibi_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_WW_XmasSweaterChibi_C : public UPrimalItemSkin_SummerSwimShirt_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_WW_XmasSweaterChibi.PrimalItemSkin_WW_XmasSweaterChibi_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_WW_XmasSweaterChibi(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
