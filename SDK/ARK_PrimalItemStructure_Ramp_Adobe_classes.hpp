#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Ramp_Adobe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Ramp_Adobe.PrimalItemStructure_Ramp_Adobe_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_Ramp_Adobe_C : public UPrimalItemStructure_BaseRamp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Ramp_Adobe.PrimalItemStructure_Ramp_Adobe_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Ramp_Adobe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
