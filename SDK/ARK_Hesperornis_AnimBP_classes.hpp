#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Hesperornis_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Hesperornis_AnimBP.Hesperornis_AnimBP_C
// 0x0000 (0x1A20 - 0x1A20)
class UHesperornis_AnimBP_C : public UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Hesperornis_AnimBP.Hesperornis_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Hesperornis_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
