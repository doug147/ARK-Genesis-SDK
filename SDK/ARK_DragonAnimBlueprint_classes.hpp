#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DragonAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DragonAnimBlueprint.DragonAnimBlueprint_C
// 0x0000 (0x1570 - 0x1570)
class UDragonAnimBlueprint_C : public UDinoBlueprintBase_RootTransformIK_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DragonAnimBlueprint.DragonAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_DragonAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
