#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_Melee_HighTorpidity_StoneWeapon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_HighTorpidity_StoneWeapon.DmgType_Melee_HighTorpidity_StoneWeapon_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_HighTorpidity_StoneWeapon_C : public UDmgType_Melee_Torpidity_StoneWeapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_HighTorpidity_StoneWeapon.DmgType_Melee_HighTorpidity_StoneWeapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
