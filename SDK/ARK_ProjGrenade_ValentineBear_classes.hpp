#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjGrenade_ValentineBear_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjGrenade_ValentineBear.ProjGrenade_ValentineBear_C
// 0x0000 (0x06E8 - 0x06E8)
class AProjGrenade_ValentineBear_C : public AProjGrenade_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGrenade_ValentineBear.ProjGrenade_ValentineBear_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjGrenade_ValentineBear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
