#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function LCD_JunkPile_01a.LCD_JunkPile_01a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALCD_JunkPile_01a_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("LCD_JunkPile_01a_C", "UserConstructionScript");

	Params::ALCD_JunkPile_01a_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
