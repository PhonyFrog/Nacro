#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_RocketLauncher_Charge.B_RocketLauncher_Charge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_RocketLauncher_Charge_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Charge_C", "UserConstructionScript");

	Params::AB_RocketLauncher_Charge_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Charge.B_RocketLauncher_Charge_C.OnReachedMinCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_RocketLauncher_Charge_C::OnReachedMinCharge()
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Charge_C", "OnReachedMinCharge");

	Params::AB_RocketLauncher_Charge_C_OnReachedMinCharge_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Charge.B_RocketLauncher_Charge_C.OnEndCharge
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_RocketLauncher_Charge_C::OnEndCharge()
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Charge_C", "OnEndCharge");

	Params::AB_RocketLauncher_Charge_C_OnEndCharge_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Charge.B_RocketLauncher_Charge_C.ExecuteUbergraph_B_RocketLauncher_Charge
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_RocketLauncher_Charge_C::ExecuteUbergraph_B_RocketLauncher_Charge(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Charge_C", "ExecuteUbergraph_B_RocketLauncher_Charge");

	Params::AB_RocketLauncher_Charge_C_ExecuteUbergraph_B_RocketLauncher_Charge_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
