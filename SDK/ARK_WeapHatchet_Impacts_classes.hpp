#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapHatchet_Impacts_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapHatchet_Impacts.WeapHatchet_Impacts_C
// 0x0000 (0x0848 - 0x0848)
class AWeapHatchet_Impacts_C : public AMeleeFist_Impacts_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapHatchet_Impacts.WeapHatchet_Impacts_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapHatchet_Impacts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
