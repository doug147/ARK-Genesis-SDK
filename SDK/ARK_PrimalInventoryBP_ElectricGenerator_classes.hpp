#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_ElectricGenerator_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_ElectricGenerator.PrimalInventoryBP_ElectricGenerator_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_ElectricGenerator_C : public UPrimalInventoryBP_BaseGasolineBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_ElectricGenerator.PrimalInventoryBP_ElectricGenerator_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_ElectricGenerator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
