#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_Gem_Fertile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Gem_Fertile.PrimalItemResource_Gem_Fertile_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_Gem_Fertile_C : public UPrimalItemResource_Gem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Gem_Fertile.PrimalItemResource_Gem_Fertile_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Gem_Fertile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
