#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Wyvern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Wyvern.DinoTamedInventoryComponent_Wyvern_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Wyvern_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Wyvern.DinoTamedInventoryComponent_Wyvern_C");
		return ptr;
	}


	bool BPAllowUseInInventory(class UPrimalItem** theItem, bool* bIsRemoteInventory, class AShooterPlayerController** ByPC);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Wyvern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
