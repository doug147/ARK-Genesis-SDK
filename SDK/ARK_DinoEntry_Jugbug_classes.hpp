#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Jugbug_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Jugbug.DinoEntry_Jugbug_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Jugbug_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Jugbug.DinoEntry_Jugbug_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Jugbug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
