#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_QueenBee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_QueenBee.DinoTamedInventoryComponent_QueenBee_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_QueenBee_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_QueenBee.DinoTamedInventoryComponent_QueenBee_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_QueenBee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
