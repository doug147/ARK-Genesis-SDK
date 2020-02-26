#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_ShoulderCannon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C
// 0x0017 (0x0A18 - 0x0A01)
class UPrimalItemArmor_ShoulderCannon_C : public UPrimalItemArmor_Base_Tek_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A01(0x0007) MISSED OFFSET
	class AShooterCharacter*                           Player;                                                   // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABuff_TekArmor_ShoulderCannon_C*             Buff;                                                     // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C");
		return ptr;
	}


	void HasAmmoOrElement(bool* Allowed);
	void ConsumeAmmo(int amount, int* UpdatedAmount);
	void GetBuff();
	void InitBuff();
	void BPAddedAttachments();
	void ExecuteUbergraph_PrimalItemArmor_ShoulderCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif