#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_BaseSign_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_BaseSign.PrimalItemStructure_BaseSign_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_BaseSign_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_BaseSign.PrimalItemStructure_BaseSign_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_BaseSign(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
