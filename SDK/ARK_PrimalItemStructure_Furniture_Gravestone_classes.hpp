#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Furniture_Gravestone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Furniture_Gravestone.PrimalItemStructure_Furniture_Gravestone_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_Furniture_Gravestone_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Furniture_Gravestone.PrimalItemStructure_Furniture_Gravestone_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Furniture_Gravestone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
