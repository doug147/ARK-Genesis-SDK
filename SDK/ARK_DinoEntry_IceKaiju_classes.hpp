#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_IceKaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_IceKaiju.DinoEntry_IceKaiju_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_IceKaiju_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_IceKaiju.DinoEntry_IceKaiju_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_IceKaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
