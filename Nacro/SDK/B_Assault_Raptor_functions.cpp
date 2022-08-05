#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Assault_Raptor.B_Assault_Raptor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Assault_Raptor_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Assault_Raptor_C", "UserConstructionScript");

	Params::AB_Assault_Raptor_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
