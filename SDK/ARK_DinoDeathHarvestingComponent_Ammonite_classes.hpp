#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Ammonite_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Ammonite.DinoDeathHarvestingComponent_Ammonite_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Ammonite_C : public UDinoDeathHarvestingComponent_Tiny_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Ammonite.DinoDeathHarvestingComponent_Ammonite_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Ammonite(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
