#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function WoodMines_BalconyS.WoodMines_BalconyS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWoodMines_BalconyS_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("WoodMines_BalconyS_C", "UserConstructionScript");

	Params::AWoodMines_BalconyS_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
