#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PostPoisonousTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PostPoisonousTrap.Buff_PostPoisonousTrap_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_PostPoisonousTrap_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PostPoisonousTrap.Buff_PostPoisonousTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PostPoisonousTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
