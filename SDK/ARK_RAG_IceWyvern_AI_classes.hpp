#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RAG_IceWyvern_AI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RAG_IceWyvern_AI.RAG_IceWyvern_AI_C
// 0x0000 (0x0911 - 0x0911)
class ARAG_IceWyvern_AI_C : public AWyvern_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RAG_IceWyvern_AI.RAG_IceWyvern_AI_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RAG_IceWyvern_AI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
