#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Railing_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Railing_Metal.Railing_Metal_C
// 0x0000 (0x0AB8 - 0x0AB8)
class ARailing_Metal_C : public ARailing_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Railing_Metal.Railing_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Railing_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
