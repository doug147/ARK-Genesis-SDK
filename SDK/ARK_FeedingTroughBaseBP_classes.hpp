#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_FeedingTroughBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FeedingTroughBaseBP.FeedingTroughBaseBP_C
// 0x0008 (0x0E00 - 0x0DF8)
class AFeedingTroughBaseBP_C : public APrimalStructureItemContainer_VisualItems
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FeedingTroughBaseBP.FeedingTroughBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FeedingTroughBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
