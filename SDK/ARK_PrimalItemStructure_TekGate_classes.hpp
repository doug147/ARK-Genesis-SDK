#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_TekGate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekGate.PrimalItemStructure_TekGate_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_TekGate_C : public UPrimalItemStructure_BaseGate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekGate.PrimalItemStructure_TekGate_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekGate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
