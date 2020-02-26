#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CustomRadialSelectorBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CustomRadialSelectorBP.CustomRadialSelectorBP_C
// 0x0000 (0x0140 - 0x0140)
class UCustomRadialSelectorBP_C : public URadialSelectorHUD_Custom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CustomRadialSelectorBP.CustomRadialSelectorBP_C");
		return ptr;
	}


	void ExecuteUbergraph_CustomRadialSelectorBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
