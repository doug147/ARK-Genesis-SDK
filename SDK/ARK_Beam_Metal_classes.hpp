#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Beam_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Beam_Metal.Beam_Metal_C
// 0x0000 (0x0AB8 - 0x0AB8)
class ABeam_Metal_C : public ABeam_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Beam_Metal.Beam_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Beam_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
