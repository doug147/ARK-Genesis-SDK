#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalGlobalsBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C
// 0x0000 (0x0198 - 0x0198)
class UPrimalGlobalsBlueprint_C : public UPrimalGlobals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalGlobalsBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
