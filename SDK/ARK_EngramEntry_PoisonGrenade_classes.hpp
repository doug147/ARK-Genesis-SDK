#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_PoisonGrenade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_PoisonGrenade.EngramEntry_PoisonGrenade_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_PoisonGrenade_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_PoisonGrenade.EngramEntry_PoisonGrenade_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_PoisonGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif