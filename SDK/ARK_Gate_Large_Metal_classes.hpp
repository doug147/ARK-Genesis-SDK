#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gate_Large_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gate_Large_Metal.Gate_Large_Metal_C
// 0x0010 (0x0B48 - 0x0B38)
class AGate_Large_Metal_C : public ADoor_Base_SM_C
{
public:
	class UStaticMeshComponent*                        SecondDoor;                                               // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SecondDoorTransform;                                      // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gate_Large_Metal.Gate_Large_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gate_Large_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
