#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_SpaceWhale_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_SpaceWhale.DinoCharacterStatusComponent_BP_SpaceWhale_C
// 0x0000 (0x1089 - 0x1089)
class UDinoCharacterStatusComponent_BP_SpaceWhale_C : public UDinoCharacterStatusComponent_BP_TorpidityControl_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_SpaceWhale.DinoCharacterStatusComponent_BP_SpaceWhale_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_SpaceWhale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
