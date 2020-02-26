#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSpawnEntries_DarkWater_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntries_DarkWater.DinoSpawnEntries_DarkWater_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntries_DarkWater_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntries_DarkWater.DinoSpawnEntries_DarkWater_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntries_DarkWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
