#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_ChibiDino_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C
// 0x0019 (0x09C9 - 0x09B0)
class UPrimalItemSkin_ChibiDino_Base_C : public UPrimalItem_Base_C
{
public:
	int                                                ChibiLevel;                                               // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ChibiXP;                                                  // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TArray<float>                                      LevelExperienceRequirements;                              // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasLoadedNetItemInfo;                                    // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Base.PrimalItemSkin_ChibiDino_Base_C");
		return ptr;
	}


	class FString BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC);
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void BPSetupHUDIconMaterial(class UMaterialInstanceDynamic** theMID);
	void Get_XPRequired_for_PreviousLevel(float* XPOut);
	class FString BPGetCustomInventoryWidgetText();
	void GetXPRequiredForNextLevel(float* XPOut);
	float BPGetItemDurabilityPercentage();
	void BPClientHandleItemNetExecCommand(struct FName* CommandName, class AShooterPlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void STATIC_RefreshLevelData(class APrimalCharacter* forChar);
	void STATIC_AddXP(float XPAmount, class APrimalCharacter* forChar);
	void BPEquippedItemOnXPEarning(class APrimalCharacter** forChar, float* howMuchXP, TEnumAsByte<EXPType>* TheXPType);
	void BPInitFromItemNetInfo();
	class FString BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void BPAddedAttachments();
	void ExecuteUbergraph_PrimalItemSkin_ChibiDino_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
