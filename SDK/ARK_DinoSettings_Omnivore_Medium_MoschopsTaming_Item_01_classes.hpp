#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_01_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Omnivore_Medium_MoschopsTaming_Item_01.DinoSettings_Omnivore_Medium_MoschopsTaming_Item_01_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Omnivore_Medium_MoschopsTaming_Item_01_C : public UDinoSettings_Omnivore_Medium_Moschops_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Omnivore_Medium_MoschopsTaming_Item_01.DinoSettings_Omnivore_Medium_MoschopsTaming_Item_01_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Omnivore_Medium_MoschopsTaming_Item_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
