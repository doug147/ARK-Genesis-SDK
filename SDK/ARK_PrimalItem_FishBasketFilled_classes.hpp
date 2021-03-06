#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_FishBasketFilled_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_FishBasketFilled_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C");
		return ptr;
	}


	void STATIC_BPDrawItemIcon(class UCanvas** ItemCanvas, bool* bItemEnabled, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, struct FLinearColor* TheTintColor);
	void SlottedTick(float* DeltaSeconds);
	void BlueprintUsed();
	class FString BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	bool BPCanUse(bool* bIgnoreCooldown);
	void ExecuteUbergraph_PrimalItem_FishBasketFilled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
