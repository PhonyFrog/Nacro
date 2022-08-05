#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TheaterMapViewer.TheaterMapViewer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATheaterMapViewer_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("TheaterMapViewer_C", "UserConstructionScript");

	Params::ATheaterMapViewer_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
