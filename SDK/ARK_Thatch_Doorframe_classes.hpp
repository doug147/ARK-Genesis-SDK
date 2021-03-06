#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Thatch_Doorframe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thatch_Doorframe.Thatch_Doorframe_C
// 0x0000 (0x0AC8 - 0x0AC8)
class AThatch_Doorframe_C : public ADoorframe_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thatch_Doorframe.Thatch_Doorframe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Thatch_Doorframe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
