#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Pescavore_Medium_Baryonyx_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Pescavore_Medium_Baryonyx.DinoSettings_Pescavore_Medium_Baryonyx_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Pescavore_Medium_Baryonyx_C : public UDinoSettings_Pescavore_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Pescavore_Medium_Baryonyx.DinoSettings_Pescavore_Medium_Baryonyx_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Pescavore_Medium_Baryonyx(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
