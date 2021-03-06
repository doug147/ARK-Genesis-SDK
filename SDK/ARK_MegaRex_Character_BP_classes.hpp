#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MegaRex_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MegaRex_Character_BP.MegaRex_Character_BP_C
// 0x0008 (0x21C0 - 0x21B8)
class AMegaRex_Character_BP_C : public ARex_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_MegaRex_C*  DinoCharacterStatus_BP_MegaRex_C1;                        // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaRex_Character_BP.MegaRex_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MegaRex_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
