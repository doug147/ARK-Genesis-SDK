#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSpawnEntriesRedwoods_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesRedwoods.DinoSpawnEntriesRedwoods_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesRedwoods_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesRedwoods.DinoSpawnEntriesRedwoods_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesRedwoods(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
