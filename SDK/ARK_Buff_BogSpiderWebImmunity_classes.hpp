#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_BogSpiderWebImmunity_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BogSpiderWebImmunity.Buff_BogSpiderWebImmunity_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_BogSpiderWebImmunity_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BogSpiderWebImmunity.Buff_BogSpiderWebImmunity_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BogSpiderWebImmunity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
