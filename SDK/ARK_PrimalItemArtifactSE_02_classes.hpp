#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArtifactSE_02_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifactSE_02.PrimalItemArtifactSE_02_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemArtifactSE_02_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifactSE_02.PrimalItemArtifactSE_02_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifactSE_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
