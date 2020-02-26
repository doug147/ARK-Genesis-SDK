#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_MetalSign_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalSign_Large.PrimalItemStructure_MetalSign_Large_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_MetalSign_Large_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalSign_Large.PrimalItemStructure_MetalSign_Large_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalSign_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
