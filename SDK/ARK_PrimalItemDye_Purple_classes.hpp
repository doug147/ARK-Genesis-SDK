#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemDye_Purple_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Purple.PrimalItemDye_Purple_C
// 0x0000 (0x09D0 - 0x09D0)
class UPrimalItemDye_Purple_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Purple.PrimalItemDye_Purple_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Purple(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
