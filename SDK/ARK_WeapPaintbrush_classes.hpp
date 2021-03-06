#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapPaintbrush_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPaintbrush.WeapPaintbrush_C
// 0x0008 (0x0D58 - 0x0D50)
class AWeapPaintbrush_C : public AShooterWeapon_Melee
{
public:
	class AShooterCharacter*                           ShooterCharRef;                                           // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPaintbrush.WeapPaintbrush_C");
		return ptr;
	}


	struct FWeaponAnim BPGetSelectedMeleeAttackAnim();
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void UserConstructionScript();
	void ExecuteUbergraph_WeapPaintbrush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
