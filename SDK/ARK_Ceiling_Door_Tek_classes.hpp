#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ceiling_Door_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ceiling_Door_Tek.Ceiling_Door_Tek_C
// 0x001B (0x0D40 - 0x0D25)
class ACeiling_Door_Tek_C : public ADoor_Tek_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D25(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0D38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ceiling_Door_Tek.Ceiling_Door_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ceiling_Door_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
