#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DeinonychusPinned_Debuff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DeinonychusPinned_Debuff.Buff_DeinonychusPinned_Debuff_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_DeinonychusPinned_Debuff_C : public ABuff_Pinned_Debuff_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DeinonychusPinned_Debuff.Buff_DeinonychusPinned_Debuff_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DeinonychusPinned_Debuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
