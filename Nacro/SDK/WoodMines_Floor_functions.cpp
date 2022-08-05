#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function WoodMines_Floor.WoodMines_Floor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWoodMines_Floor_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("WoodMines_Floor_C", "UserConstructionScript");

	Params::AWoodMines_Floor_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
