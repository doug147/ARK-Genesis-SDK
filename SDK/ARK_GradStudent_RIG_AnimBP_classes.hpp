#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GradStudent_RIG_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass GradStudent_RIG_AnimBP.GradStudent_RIG_AnimBP_C
// 0x0007 (0x04F0 - 0x04E9)
class UGradStudent_RIG_AnimBP_C : public UBaseNoteMeshAnimBP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x04EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass GradStudent_RIG_AnimBP.GradStudent_RIG_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_GradStudent_RIG_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
