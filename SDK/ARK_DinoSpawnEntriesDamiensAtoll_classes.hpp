#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSpawnEntriesDamiensAtoll_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSpawnEntriesDamiensAtoll.DinoSpawnEntriesDamiensAtoll_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesDamiensAtoll_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesDamiensAtoll.DinoSpawnEntriesDamiensAtoll_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesDamiensAtoll(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif