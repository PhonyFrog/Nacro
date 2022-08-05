#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function LF_7x12_Parent.LF_7x12_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALF_7x12_Parent_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("LF_7x12_Parent_C", "UserConstructionScript");

	Params::ALF_7x12_Parent_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
