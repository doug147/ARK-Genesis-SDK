#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_Engine_classes.hpp"
#include "ARK_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MediaAssets.MediaPlayer.EMediaPlayerStreamModes
enum class EMediaPlayerStreamModes : uint8_t
{
	MASM_FromMemory                = 0,
	MASM_FromUrl                   = 1,
	MASM_MAX                       = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
