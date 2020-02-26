#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekTrough_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekTrough.TekTrough_C
// 0x0008 (0x0E08 - 0x0E00)
class ATekTrough_C : public AFeedingTroughBaseBP_C
{
public:
	class UPrimalInventoryBP_TekTrough_C*              PrimalInventoryBP_TekTrough_C1;                           // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekTrough.TekTrough_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekTrough(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
