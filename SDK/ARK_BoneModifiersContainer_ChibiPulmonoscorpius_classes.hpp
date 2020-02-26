#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoneModifiersContainer_ChibiPulmonoscorpius_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiPulmonoscorpius.BoneModifiersContainer_ChibiPulmonoscorpius_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiPulmonoscorpius_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiPulmonoscorpius.BoneModifiersContainer_ChibiPulmonoscorpius_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiPulmonoscorpius(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
