#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoWildInventoryComponent_Pegomastax_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoWildInventoryComponent_Pegomastax.DinoWildInventoryComponent_Pegomastax_C
// 0x0000 (0x0570 - 0x0570)
class UDinoWildInventoryComponent_Pegomastax_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoWildInventoryComponent_Pegomastax.DinoWildInventoryComponent_Pegomastax_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoWildInventoryComponent_Pegomastax(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
