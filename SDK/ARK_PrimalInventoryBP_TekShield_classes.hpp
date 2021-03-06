#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_TekShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TekShield.PrimalInventoryBP_TekShield_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_TekShield_C : public UPrimalInventoryBP_BaseGasolineBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekShield.PrimalInventoryBP_TekShield_C");
		return ptr;
	}


	bool BPRemoteInventoryAllowViewing(class AShooterPlayerController** PC);
	void ExecuteUbergraph_PrimalInventoryBP_TekShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
