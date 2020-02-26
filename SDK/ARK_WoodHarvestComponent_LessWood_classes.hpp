#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WoodHarvestComponent_LessWood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_LessWood.WoodHarvestComponent_LessWood_C
// 0x0000 (0x0240 - 0x0240)
class UWoodHarvestComponent_LessWood_C : public UWoodHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_LessWood.WoodHarvestComponent_LessWood_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_LessWood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
