#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Carnivore_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Carnivore.DinoSettings_Carnivore_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Carnivore_C : public UDinoSettings_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore.DinoSettings_Carnivore_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Carnivore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
