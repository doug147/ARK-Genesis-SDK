#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Trilobite_Character_Aberrant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trilobite_Character_Aberrant.Trilobite_Character_Aberrant_C
// 0x0000 (0x2110 - 0x2110)
class ATrilobite_Character_Aberrant_C : public ATrilobite_Character_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trilobite_Character_Aberrant.Trilobite_Character_Aberrant_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Trilobite_Character_Aberrant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
