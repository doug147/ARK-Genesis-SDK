#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RageEffect_Cherufe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RageEffect_Cherufe.Buff_RageEffect_Cherufe_C
// 0x0000 (0x0964 - 0x0964)
class ABuff_RageEffect_Cherufe_C : public ABuff_RageEffect_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RageEffect_Cherufe.Buff_RageEffect_Cherufe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RageEffect_Cherufe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
