#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Greenhouse_Window_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Greenhouse_Window.Greenhouse_Window_C
// 0x0000 (0x0B38 - 0x0B38)
class AGreenhouse_Window_C : public ADoor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Greenhouse_Window.Greenhouse_Window_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Greenhouse_Window(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
