#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_Rockwell_TentaShock_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Rockwell_TentaShock.DmgType_Rockwell_TentaShock_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Rockwell_TentaShock_C : public UDmgType_Melee_Dino_Carnivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Rockwell_TentaShock.DmgType_Rockwell_TentaShock_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
