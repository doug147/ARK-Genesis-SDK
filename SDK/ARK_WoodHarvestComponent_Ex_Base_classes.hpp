#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WoodHarvestComponent_Ex_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodHarvestComponent_Ex_Base.WoodHarvestComponent_Ex_Base_C
// 0x0000 (0x0240 - 0x0240)
class UWoodHarvestComponent_Ex_Base_C : public UAttackHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_Ex_Base.WoodHarvestComponent_Ex_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_WoodHarvestComponent_Ex_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
