#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapCompass_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCompass.WeapCompass_C
// 0x0000 (0x1000 - 0x1000)
class AWeapCompass_C : public AWeapGPS_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCompass.WeapCompass_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapCompass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
