#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Office_Copier_01.Office_Copier_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOffice_Copier_01_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Office_Copier_01_C", "UserConstructionScript");

	Params::AOffice_Copier_01_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
