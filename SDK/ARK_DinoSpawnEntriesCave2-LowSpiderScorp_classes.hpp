#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSpawnEntriesCave2-LowSpiderScorp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCave2-LowSpiderScorp.DinoSpawnEntriesCave2-LowSpiderScorp_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCave2_LowSpiderScorp_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave2-LowSpiderScorp.DinoSpawnEntriesCave2-LowSpiderScorp_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCave2_LowSpiderScorp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
