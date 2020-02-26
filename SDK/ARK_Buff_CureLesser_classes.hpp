#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_CureLesser_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_CureLesser.Buff_CureLesser_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_CureLesser_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CureLesser.Buff_CureLesser_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_CureLesser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
