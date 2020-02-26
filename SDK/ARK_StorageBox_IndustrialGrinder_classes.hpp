#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StorageBox_IndustrialGrinder_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C
// 0x003C (0x0E0C - 0x0DD0)
class AStorageBox_IndustrialGrinder_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class UPrimalInventoryBP_IndustrialGrinder_C*      PrimalInventoryBP_IndustrialGrinder_C1;                   // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              GrindGiveItemFrom;                                        // 0x0DE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              GrindGiveItemTo;                                          // 0x0DF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxQuantityToGrind;                                       // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxItemsToGivePerGrind;                                   // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrindGiveItemsPercent;                                    // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C");
		return ptr;
	}


	void BPPreGetMultiUseEntries(class APlayerController** ForPC);
	void HasCraftingRequirementsGreaterThanOne(class UPrimalItem* InItem, bool* TRUE);
	void GetReplacementItem(class UClass* InItemClass, class UClass** OutItemClass);
	void IsValidGrindingItem(class UPrimalItem* ItemToCheck, bool* IsValid);
	void STATIC_GrindItem(class UPrimalItem* ItemToGrind, class AShooterPlayerController* ForPC, bool GrindStack);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_IndustrialGrinder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
