#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Mantis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Mantis.DinoTamedInventoryComponent_Mantis_C
// 0x0010 (0x0580 - 0x0570)
class UDinoTamedInventoryComponent_Mantis_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	TArray<class UClass*>                              PreventEquipItemClasses;                                  // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Mantis.DinoTamedInventoryComponent_Mantis_C");
		return ptr;
	}


	bool BPPreventEquipItem(class UPrimalItem** theItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Mantis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
