#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_WallTorch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WallTorch.PrimalItemStructure_WallTorch_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_WallTorch_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WallTorch.PrimalItemStructure_WallTorch_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WallTorch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
