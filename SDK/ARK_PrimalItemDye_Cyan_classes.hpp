#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemDye_Cyan_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Cyan.PrimalItemDye_Cyan_C
// 0x0000 (0x09D0 - 0x09D0)
class UPrimalItemDye_Cyan_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Cyan.PrimalItemDye_Cyan_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Cyan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
