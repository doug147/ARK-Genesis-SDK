#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leech_Character_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Leech_Character.Leech_Character_C
// 0x0008 (0x2110 - 0x2108)
class ALeech_Character_C : public AInsect_Character_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Leech_C*    DinoCharacterStatus_BP_Leech_C1;                          // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Leech_Character.Leech_Character_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Leech_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
