#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_MosaSaddle_Platform_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_MosaSaddle_Platform.PrimalItemArmor_MosaSaddle_Platform_C
// 0x0000 (0x09B8 - 0x09B8)
class UPrimalItemArmor_MosaSaddle_Platform_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MosaSaddle_Platform.PrimalItemArmor_MosaSaddle_Platform_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_MosaSaddle_Platform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
