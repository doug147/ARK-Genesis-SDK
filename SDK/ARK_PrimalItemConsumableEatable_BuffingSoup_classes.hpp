#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumableEatable_BuffingSoup_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumableEatable_BuffingSoup.PrimalItemConsumableEatable_BuffingSoup_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumableEatable_BuffingSoup_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableEatable_BuffingSoup.PrimalItemConsumableEatable_BuffingSoup_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumableEatable_BuffingSoup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
