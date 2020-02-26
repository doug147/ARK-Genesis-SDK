#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StructureSettings_BrokenByPlasma_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_BrokenByPlasma.StructureSettings_BrokenByPlasma_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_BrokenByPlasma_C : public UStructureSettings_BrokenByExplosives_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByPlasma.StructureSettings_BrokenByPlasma_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_BrokenByPlasma(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
