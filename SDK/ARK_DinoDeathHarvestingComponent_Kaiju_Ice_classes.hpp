#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Kaiju_Ice_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Kaiju_Ice.DinoDeathHarvestingComponent_Kaiju_Ice_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Kaiju_Ice_C : public UDinoDeathHarvestingComponent_Kaiju_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Kaiju_Ice.DinoDeathHarvestingComponent_Kaiju_Ice_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Ice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
