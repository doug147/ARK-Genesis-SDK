#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_Turret_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_Turret.PrimalInventoryBP_Turret_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_Turret_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Turret.PrimalInventoryBP_Turret_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_Turret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
