#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SpindlesMinigun_Impacts_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C
// 0x0008 (0x0848 - 0x0840)
class ASpindlesMinigun_Impacts_C : public AShooterImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpindlesMinigun_Impacts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
