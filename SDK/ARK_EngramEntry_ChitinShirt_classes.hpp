#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_ChitinShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_ChitinShirt.EngramEntry_ChitinShirt_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_ChitinShirt_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_ChitinShirt.EngramEntry_ChitinShirt_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_ChitinShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
