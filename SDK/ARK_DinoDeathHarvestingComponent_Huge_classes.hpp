#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Huge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Huge.DinoDeathHarvestingComponent_Huge_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Huge_C : public UDinoDeathHarvestingComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Huge.DinoDeathHarvestingComponent_Huge_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Huge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
