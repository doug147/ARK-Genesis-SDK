#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapStonePick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapStonePick.WeapStonePick_C
// 0x0000 (0x0D50 - 0x0D50)
class AWeapStonePick_C : public AWeapBasePick_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapStonePick.WeapStonePick_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapStonePick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
