#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_GhilliePants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_GhilliePants.PrimalItemArmor_GhilliePants_C
// 0x0000 (0x09D8 - 0x09D8)
class UPrimalItemArmor_GhilliePants_C : public UPrimalItemArmor_BasePants_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_GhilliePants.PrimalItemArmor_GhilliePants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_GhilliePants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
