#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Torch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Torch.EngramEntry_Torch_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Torch_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Torch.EngramEntry_Torch_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Torch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
