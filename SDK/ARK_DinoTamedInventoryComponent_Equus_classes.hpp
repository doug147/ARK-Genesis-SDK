#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Equus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Equus.DinoTamedInventoryComponent_Equus_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Equus_C : public UDinoTamedInventoryComponent_BP_MortarCapable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Equus.DinoTamedInventoryComponent_Equus_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Equus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
