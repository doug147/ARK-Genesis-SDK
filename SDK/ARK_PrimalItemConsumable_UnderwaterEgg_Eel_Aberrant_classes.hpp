#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant.PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C : public UPrimalItemConsumable_UnderwaterEgg_Eel_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant.PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
