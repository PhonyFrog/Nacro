#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SM_Boardwalk_Stair44.SM_Boardwalk_Stair44_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASM_Boardwalk_Stair44_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("SM_Boardwalk_Stair44_C", "UserConstructionScript");

	Params::ASM_Boardwalk_Stair44_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
