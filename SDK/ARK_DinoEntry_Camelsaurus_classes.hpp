#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Camelsaurus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Camelsaurus.DinoEntry_Camelsaurus_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Camelsaurus_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Camelsaurus.DinoEntry_Camelsaurus_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Camelsaurus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
