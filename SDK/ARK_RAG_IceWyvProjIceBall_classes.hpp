#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RAG_IceWyvProjIceBall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C
// 0x0000 (0x0658 - 0x0658)
class ARAG_IceWyvProjIceBall_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RAG_IceWyvProjIceBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
