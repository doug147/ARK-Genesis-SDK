#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapStoneClub_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapStoneClub.WeapStoneClub_C
// 0x0000 (0x0D50 - 0x0D50)
class AWeapStoneClub_C : public AWeapBaseClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneClub.WeapStoneClub_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapStoneClub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
