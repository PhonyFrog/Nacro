#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Kitchen_StoveHood_01.Kitchen_StoveHood_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKitchen_StoveHood_01_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Kitchen_StoveHood_01_C", "UserConstructionScript");

	Params::AKitchen_StoveHood_01_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
