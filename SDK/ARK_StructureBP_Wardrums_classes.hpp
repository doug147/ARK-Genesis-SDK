#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StructureBP_Wardrums_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureBP_Wardrums.StructureBP_Wardrums_C
// 0x0000 (0x0EF8 - 0x0EF8)
class AStructureBP_Wardrums_C : public AStructureSeatingMusicBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_Wardrums.StructureBP_Wardrums_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureBP_Wardrums(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
