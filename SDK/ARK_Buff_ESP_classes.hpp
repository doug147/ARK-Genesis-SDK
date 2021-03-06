#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ESP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ESP.Buff_ESP_C
// 0x002D (0x095D - 0x0930)
class ABuff_ESP_C : public APrimalBuff
{
public:
	float                                              detectionRadius;                                          // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               enableNamePlates;                                         // 0x0934(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0935(0x0003) MISSED OFFSET
	struct FVector2D                                   standardBoxSize;                                          // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              standardDistance;                                         // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boxThickness;                                             // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              surroundingTargets;                                       // 0x0948(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              detectionFrequency;                                       // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               showsCompass;                                             // 0x095C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ESP.Buff_ESP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ESP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
