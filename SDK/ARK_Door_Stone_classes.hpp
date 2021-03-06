#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Door_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Door_Stone.Door_Stone_C
// 0x0000 (0x0B38 - 0x0B38)
class ADoor_Stone_C : public ADoor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Door_Stone.Door_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Door_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
