#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArtifact_12_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifact_12.PrimalItemArtifact_11_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArtifact_11_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifact_12.PrimalItemArtifact_11_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifact_12(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
