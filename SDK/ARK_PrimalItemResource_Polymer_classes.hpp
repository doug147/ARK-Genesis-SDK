#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_Polymer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Polymer.PrimalItemResource_Polymer_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_Polymer_C : public UPrimalItemResource_Craftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Polymer.PrimalItemResource_Polymer_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Polymer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
