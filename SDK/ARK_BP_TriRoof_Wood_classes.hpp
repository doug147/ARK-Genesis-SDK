#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_TriRoof_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TriRoof_Wood.BP_TriRoof_Wood_C
// 0x0000 (0x0AB9 - 0x0AB9)
class ABP_TriRoof_Wood_C : public ABase_Roof_Tri_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TriRoof_Wood.BP_TriRoof_Wood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_TriRoof_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
