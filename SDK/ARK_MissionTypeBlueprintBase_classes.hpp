#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTypeBlueprintBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionTypeBlueprintBase.MissionTypeBlueprintBase_C
// 0x00A3 (0x09CB - 0x0928)
class AMissionTypeBlueprintBase_C : public AMissionType
{
public:
	TArray<TEnumAsByte<EMissionMetaTags>>              MissionMetaTags;                                          // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EMissionMetaTags>                      RequireMetaTagMissionsInactive;                           // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0939(0x0003) MISSED OFFSET
	struct FName                                       PhaseNameForIntroMusic;                                   // 0x093C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	class USoundBase*                                  IntroMusic;                                               // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PhaseNameToStartDefaultMissionMusic;                      // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DefaultMissionMusic;                                      // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FMissionAudioData>                   MissionPhaseMusic;                                        // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLeaderboardRow>                     CallFunc_GetMissionLeaderboardRows_OutRows;               // 0x0970(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_GetMissionLeaderboardRows_ReturnValue;           // 0x0980(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x0981(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0982(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0984(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0988(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x098C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x098D(0x0003) MISSED OFFSET
	struct FName                                       K2Node_Event_OldPhase;                                    // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_NewPhase;                                    // 0x0998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x09A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x09A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue3;                // 0x09A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode;                // 0x09A3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x09A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x09A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue4;                // 0x09A6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x09A7(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x09A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09AC(0x0004) MISSED OFFSET
	struct FMissionAudioData                           CallFunc_Array_Get_Item;                                  // 0x09B0(0x0018) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x09C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x09C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue5;                // 0x09CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionTypeBlueprintBase.MissionTypeBlueprintBase_C");
		return ptr;
	}


	void STATIC_PlaySoundForPlayersOnMission(class USoundBase* Sound);
	bool BPStaticIsPlayerEligibleForMission(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, class APrimalBuff_MissionData** PlayerMissionData, class FString* OutReason);
	void BPGetMetaTagsAsInts(TArray<int>* OutTagIds);
	void UserConstructionScript();
	void OnMissionPhaseStarted(struct FName* OldPhase, struct FName* NewPhase);
	void BPOnMissionDeactivated();
	void ExecuteUbergraph_MissionTypeBlueprintBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
