#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_CureLow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_CureLow.PrimalItemConsumable_CureLow_C
// 0x0008 (0x09B8 - 0x09B0)
class UPrimalItemConsumable_CureLow_C : public UPrimalItemConsumableGeneric_C
{
public:
	class UPrimalItem*                                 SelfObj;                                                  // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CureLow.PrimalItemConsumable_CureLow_C");
		return ptr;
	}


	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumable_CureLow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
