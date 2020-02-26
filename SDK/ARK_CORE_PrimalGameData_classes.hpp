#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CORE_PrimalGameData_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C
// 0x0020 (0x1F58 - 0x1F38)
class UCORE_PrimalGameData_C : public UPrimalGameData
{
public:
	TArray<struct FHairMetaData>                       FemaleHairStylesMetaDatas;                                // 0x1F38(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FHairMetaData>                       MaleHairStylesMetaDatas;                                  // 0x1F48(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C");
		return ptr;
	}


	void ExecuteUbergraph_CORE_PrimalGameData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
