#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_NightVisionGoggles_ESP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_NightVisionGoggles_ESP.Buff_NightVisionGoggles_ESP_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_NightVisionGoggles_ESP_C : public ABuff_NightVisionGoggles_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NightVisionGoggles_ESP.Buff_NightVisionGoggles_ESP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_NightVisionGoggles_ESP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
