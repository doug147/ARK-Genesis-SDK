#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_HUDCustomStatusUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDCustomStatusUI.HUDCustomStatusUI_C
// 0x0000 (0x05D8 - 0x05D8)
class UHUDCustomStatusUI_C : public UHUDCustomStatusWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDCustomStatusUI.HUDCustomStatusUI_C");
		return ptr;
	}


	void ExecuteUbergraph_HUDCustomStatusUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
