#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_MetalTrapdoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalTrapdoor.PrimalItemStructure_MetalTrapdoor_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_MetalTrapdoor_C : public UPrimalItemStructure_BaseTrapdoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalTrapdoor.PrimalItemStructure_MetalTrapdoor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalTrapdoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
