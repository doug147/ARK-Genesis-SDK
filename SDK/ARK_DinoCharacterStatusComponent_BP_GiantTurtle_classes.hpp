#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_GiantTurtle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_GiantTurtle.DinoCharacterStatusComponent_BP_GiantTurtle_C
// 0x0000 (0x1088 - 0x1088)
class UDinoCharacterStatusComponent_BP_GiantTurtle_C : public UDinoCharacterStatusComponent_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_GiantTurtle.DinoCharacterStatusComponent_BP_GiantTurtle_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_GiantTurtle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
