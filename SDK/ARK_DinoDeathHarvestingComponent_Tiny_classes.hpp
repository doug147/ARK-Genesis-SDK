#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Tiny_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Tiny.DinoDeathHarvestingComponent_Tiny_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Tiny_C : public UDinoDeathHarvestingComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Tiny.DinoDeathHarvestingComponent_Tiny_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
