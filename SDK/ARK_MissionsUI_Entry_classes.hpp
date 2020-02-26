#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionsUI_Entry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MissionsUI_Entry.MissionsUI_Entry_C
// 0x0020 (0x0558 - 0x0538)
class UMissionsUI_Entry_C : public UMissionListEntryWidget
{
public:
	class UImage*                                      Image_229;                                                // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         MissionEntryButton;                                       // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionNameText;                                          // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      PlayersIcon;                                              // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionsUI_Entry.MissionsUI_Entry_C");
		return ptr;
	}


	void ExecuteUbergraph_MissionsUI_Entry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
