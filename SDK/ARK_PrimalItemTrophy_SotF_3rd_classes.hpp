#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemTrophy_SotF_3rd_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_SotF_3rd.PrimalItemTrophy_SotF_3rd_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTrophy_SotF_3rd_C : public UPrimalItemTrophyGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_SotF_3rd.PrimalItemTrophy_SotF_3rd_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_SotF_3rd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
