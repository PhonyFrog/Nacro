#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Office_WaterCooler_01.Office_WaterCooler_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOffice_WaterCooler_01_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Office_WaterCooler_01_C", "UserConstructionScript");

	Params::AOffice_WaterCooler_01_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
