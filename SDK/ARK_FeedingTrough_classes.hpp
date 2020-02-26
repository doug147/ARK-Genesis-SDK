#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_FeedingTrough_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FeedingTrough.FeedingTrough_C
// 0x0008 (0x0E08 - 0x0E00)
class AFeedingTrough_C : public AFeedingTroughBaseBP_C
{
public:
	class UPrimalInventoryBP_FeedingTrough_C*          PrimalInventoryBP_FeedingTrough_C1;                       // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FeedingTrough.FeedingTrough_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FeedingTrough(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
