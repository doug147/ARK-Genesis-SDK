#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CropPlotLarge_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CropPlotLarge_SM.CropPlotLarge_SM_C
// 0x0010 (0x0EC8 - 0x0EB8)
class ACropPlotLarge_SM_C : public ACropPlotBaseBP_C
{
public:
	class UPrimalInventoryBP_CropPlot_Large_C*         PrimalInventoryBP_CropPlot_Large_C2;                      // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CropPlotLarge_SM.CropPlotLarge_SM_C");
		return ptr;
	}


	bool AllowManualMultiUseActivation(class APlayerController** ForPC);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ExecuteUbergraph_CropPlotLarge_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
