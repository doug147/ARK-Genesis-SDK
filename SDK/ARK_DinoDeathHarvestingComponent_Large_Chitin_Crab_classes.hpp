#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Large_Chitin_Crab_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Large_Chitin_Crab.DinoDeathHarvestingComponent_Large_Chitin_Crab_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Large_Chitin_Crab_C : public UDinoDeathHarvestingComponent_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Large_Chitin_Crab.DinoDeathHarvestingComponent_Large_Chitin_Crab_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Large_Chitin_Crab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
