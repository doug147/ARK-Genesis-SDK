#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_PipeFlex_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PipeFlex_Stone.BP_PipeFlex_Stone_C
// 0x0000 (0x0C00 - 0x0C00)
class ABP_PipeFlex_Stone_C : public ABase_Pipe_Flex_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PipeFlex_Stone.BP_PipeFlex_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_PipeFlex_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
