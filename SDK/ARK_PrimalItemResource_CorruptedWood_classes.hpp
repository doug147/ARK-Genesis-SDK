#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_CorruptedWood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_CorruptedWood.PrimalItemResource_CorruptedWood_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_CorruptedWood_C : public UPrimalItemResource_FungalWood_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_CorruptedWood.PrimalItemResource_CorruptedWood_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_CorruptedWood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
