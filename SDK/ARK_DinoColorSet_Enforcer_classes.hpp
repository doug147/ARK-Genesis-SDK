#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Enforcer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Enforcer.DinoColorSet_Enforcer_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Enforcer_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Enforcer.DinoColorSet_Enforcer_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Enforcer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
