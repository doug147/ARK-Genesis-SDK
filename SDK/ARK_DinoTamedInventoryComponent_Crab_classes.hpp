#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Crab_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Crab.DinoTamedInventoryComponent_Crab_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Crab_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Crab.DinoTamedInventoryComponent_Crab_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Crab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
