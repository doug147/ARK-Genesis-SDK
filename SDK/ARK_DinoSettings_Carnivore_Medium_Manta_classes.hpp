#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Carnivore_Medium_Manta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Carnivore_Medium_Manta.DinoSettings_Carnivore_Medium_Manta_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Carnivore_Medium_Manta_C : public UDinoSettings_Carnivore_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore_Medium_Manta.DinoSettings_Carnivore_Medium_Manta_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Carnivore_Medium_Manta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif