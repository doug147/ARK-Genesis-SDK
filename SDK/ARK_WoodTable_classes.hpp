#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WoodTable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodTable.WoodTable_C
// 0x0000 (0x0AB8 - 0x0AB8)
class AWoodTable_C : public AStructureBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodTable.WoodTable_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WoodTable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif