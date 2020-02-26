#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CherufeNest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CherufeNest.CherufeNest_C
// 0x0000 (0x0AC4 - 0x0AC4)
class ACherufeNest_C : public AWyvernNest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CherufeNest.CherufeNest_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CherufeNest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
