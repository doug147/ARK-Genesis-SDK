#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_TrophyWall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TrophyWall.PrimalInventoryBP_TrophyWall_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_TrophyWall_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TrophyWall.PrimalInventoryBP_TrophyWall_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_TrophyWall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
