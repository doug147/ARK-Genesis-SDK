#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Huge_MeatOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Huge_MeatOnly.DinoDeathHarvestingComponent_Huge_MeatOnly_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Huge_MeatOnly_C : public UDinoDeathHarvestingComponent_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Huge_MeatOnly.DinoDeathHarvestingComponent_Huge_MeatOnly_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_MeatOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
