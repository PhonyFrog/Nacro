#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Athena_GameMode.Athena_GameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_GameMode_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Athena_GameMode_C", "UserConstructionScript");

	Params::AAthena_GameMode_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
