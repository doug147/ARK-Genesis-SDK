#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_C4Tripwire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass C4Tripwire.C4Tripwire_C
// 0x0008 (0x0BB8 - 0x0BB0)
class AC4Tripwire_C : public APrimalStructureTripwire
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass C4Tripwire.C4Tripwire_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_C4Tripwire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif