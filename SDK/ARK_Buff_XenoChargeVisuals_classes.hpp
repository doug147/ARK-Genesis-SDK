#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_XenoChargeVisuals_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_XenoChargeVisuals.Buff_XenoChargeVisuals_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_XenoChargeVisuals_C : public ABuff_Base_OnlyRelevantToOwner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_XenoChargeVisuals.Buff_XenoChargeVisuals_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_XenoChargeVisuals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
