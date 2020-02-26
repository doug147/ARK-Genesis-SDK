#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WorldSettingsEventOverrides_TheCenter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSettingsEventOverrides_TheCenter.WorldSettingsEventOverrides_TheCenter_C
// 0x0000 (0x0088 - 0x0088)
class UWorldSettingsEventOverrides_TheCenter_C : public UPrimalWorldSettingsEventOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_TheCenter.WorldSettingsEventOverrides_TheCenter_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldSettingsEventOverrides_TheCenter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
