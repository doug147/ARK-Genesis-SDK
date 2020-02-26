#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MovieSceneCore_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MovieSceneCore.RuntimeMovieScenePlayer.Play
struct URuntimeMovieScenePlayer_Play_Params
{
};

// Function MovieSceneCore.RuntimeMovieScenePlayer.Pause
struct URuntimeMovieScenePlayer_Pause_Params
{
};

// Function MovieSceneCore.RuntimeMovieScenePlayer.CreateRuntimeMovieScenePlayer
struct URuntimeMovieScenePlayer_CreateRuntimeMovieScenePlayer_Params
{
	class ULevel*                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneBindings*                         InMovieSceneBindings;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class URuntimeMovieScenePlayer*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
