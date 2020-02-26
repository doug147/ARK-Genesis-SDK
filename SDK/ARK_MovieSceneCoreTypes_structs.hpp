#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_CoreUObject_classes.hpp"
#include "ARK_Engine_classes.hpp"
#include "ARK_MovieSceneCore_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MovieSceneCoreTypes.MovieSceneParticleSection.EParticleKey
enum class EParticleKey : uint8_t
{
	EParticleKey__Toggle           = 0,
	EParticleKey__Trigger          = 1,
	EParticleKey__EParticleKey_MAX = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
