#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoneModifiersContainer_ChibiGigantopithecus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiGigantopithecus.BoneModifiersContainer_ChibiGigantopithecus_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiGigantopithecus_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiGigantopithecus.BoneModifiersContainer_ChibiGigantopithecus_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiGigantopithecus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
