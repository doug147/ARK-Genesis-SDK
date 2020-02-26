#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjPoop_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjPoop.ProjPoop_C
// 0x0010 (0x0668 - 0x0658)
class AProjPoop_C : public APrimalProjectileDilo
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjPoop.ProjPoop_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjPoop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
