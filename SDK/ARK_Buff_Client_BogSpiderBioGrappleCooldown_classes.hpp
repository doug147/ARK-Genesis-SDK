#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Client_BogSpiderBioGrappleCooldown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Client_BogSpiderBioGrappleCooldown.Buff_Client_BogSpiderBioGrappleCooldown_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_Client_BogSpiderBioGrappleCooldown_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Client_BogSpiderBioGrappleCooldown.Buff_Client_BogSpiderBioGrappleCooldown_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Client_BogSpiderBioGrappleCooldown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
