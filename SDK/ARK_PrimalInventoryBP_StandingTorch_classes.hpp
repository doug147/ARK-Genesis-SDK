#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_StandingTorch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_StandingTorch.PrimalInventoryBP_StandingTorch_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_StandingTorch_C : public UPrimalInventoryBP_BaseFuelBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_StandingTorch.PrimalInventoryBP_StandingTorch_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_StandingTorch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
