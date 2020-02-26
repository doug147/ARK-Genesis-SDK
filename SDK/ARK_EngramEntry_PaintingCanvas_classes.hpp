#pragma once

// ARK (291.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_PaintingCanvas_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_PaintingCanvas.EngramEntry_PaintingCanvas_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_PaintingCanvas_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_PaintingCanvas.EngramEntry_PaintingCanvas_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_PaintingCanvas(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
