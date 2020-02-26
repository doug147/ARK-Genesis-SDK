#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Jerboa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Jerboa.DinoTamedInventoryComponent_Jerboa_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Jerboa_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Jerboa.DinoTamedInventoryComponent_Jerboa_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Jerboa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
