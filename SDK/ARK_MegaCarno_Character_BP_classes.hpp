#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MegaCarno_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MegaCarno_Character_BP.MegaCarno_Character_BP_C
// 0x0008 (0x2118 - 0x2110)
class AMegaCarno_Character_BP_C : public ACarno_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_MegaCarno_C* DinoCharacterStatus_BP_MegaCarno_C1;                      // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaCarno_Character_BP.MegaCarno_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MegaCarno_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
