#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemCostume_BoneWyvern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_BoneWyvern.PrimalItemCostume_BoneWyvern_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemCostume_BoneWyvern_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_BoneWyvern.PrimalItemCostume_BoneWyvern_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_BoneWyvern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
