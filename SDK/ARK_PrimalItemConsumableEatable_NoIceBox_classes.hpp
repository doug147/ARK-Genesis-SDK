#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumableEatable_NoIceBox_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumableEatable_NoIceBox.PrimalItemConsumableEatable_NoIceBox_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumableEatable_NoIceBox_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableEatable_NoIceBox.PrimalItemConsumableEatable_NoIceBox_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumableEatable_NoIceBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif