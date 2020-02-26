#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemTrophy_Broodmother_Gamma_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Broodmother_Gamma.PrimalItemTrophy_Broodmother_Gamma_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTrophy_Broodmother_Gamma_C : public UPrimalItemTrophy_Broodmother_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Broodmother_Gamma.PrimalItemTrophy_Broodmother_Gamma_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Broodmother_Gamma(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
