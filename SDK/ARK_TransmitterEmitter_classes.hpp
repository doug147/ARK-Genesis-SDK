#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TransmitterEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TransmitterEmitter.TransmitterEmitter_C
// 0x0000 (0x0510 - 0x0510)
class ATransmitterEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TransmitterEmitter.TransmitterEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TransmitterEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
