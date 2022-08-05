#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATracer_Shotgun_Break_01_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("Tracer_Shotgun_Break_01_C", "UserConstructionScript");

	Params::ATracer_Shotgun_Break_01_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATracer_Shotgun_Break_01_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Tracer_Shotgun_Break_01_C", "ReceiveBeginPlay");

	Params::ATracer_Shotgun_Break_01_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C.ExecuteUbergraph_Tracer_Shotgun_Break_01
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATracer_Shotgun_Break_01_C::ExecuteUbergraph_Tracer_Shotgun_Break_01(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Tracer_Shotgun_Break_01_C", "ExecuteUbergraph_Tracer_Shotgun_Break_01");

	Params::ATracer_Shotgun_Break_01_C_ExecuteUbergraph_Tracer_Shotgun_Break_01_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
