#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_TriRoof_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TriRoof_Wood.PrimalItemStructure_TriRoof_Wood_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_TriRoof_Wood_C : public UPrimalItemStructure_BaseWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TriRoof_Wood.PrimalItemStructure_TriRoof_Wood_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TriRoof_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
