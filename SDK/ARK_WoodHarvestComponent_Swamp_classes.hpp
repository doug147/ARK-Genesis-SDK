#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WoodHarvestComponent_Swamp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_Swamp.WoodHarvestComponent_Swamp_C
// 0x0000 (0x0240 - 0x0240)
class UWoodHarvestComponent_Swamp_C : public UWoodHarvestComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_Swamp.WoodHarvestComponent_Swamp_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_Swamp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
