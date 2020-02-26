#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StructureSeatingBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSeatingBaseBP.StructureSeatingBaseBP_C
// 0x0011 (0x0EA1 - 0x0E90)
class AStructureSeatingBaseBP_C : public APrimalStructureSeating
{
public:
	class UChildActorComponent*                        TargetingEmitter;                                         // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFishing;                                            // 0x0EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSeatingBaseBP.StructureSeatingBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureSeatingBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif