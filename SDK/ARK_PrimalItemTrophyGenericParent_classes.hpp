#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemTrophyGenericParent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophyGenericParent.PrimalItemTrophyGenericParent_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTrophyGenericParent_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophyGenericParent.PrimalItemTrophyGenericParent_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophyGenericParent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
