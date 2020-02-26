#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSpawnEntriesCave7-Fliers_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesCave7-Fliers.DinoSpawnEntriesCave7-Fliers_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesCave7_Fliers_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave7-Fliers.DinoSpawnEntriesCave7-Fliers_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesCave7_Fliers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
