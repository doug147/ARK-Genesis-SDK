#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_WoodRamp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WoodRamp.PrimalItemStructure_WoodRamp_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_WoodRamp_C : public UPrimalItemStructure_BaseRamp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodRamp.PrimalItemStructure_WoodRamp_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WoodRamp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
