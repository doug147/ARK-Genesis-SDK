#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_FracturedGem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_FracturedGem.PrimalItemResource_FracturedGem_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_FracturedGem_C : public UPrimalItemResource_Gem_Fertile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_FracturedGem.PrimalItemResource_FracturedGem_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_FracturedGem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
