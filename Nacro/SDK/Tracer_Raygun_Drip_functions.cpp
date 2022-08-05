#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Tracer_Raygun_Drip.Tracer_Raygun_Drip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATracer_Raygun_Drip_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Tracer_Raygun_Drip_C", "UserConstructionScript");

	Params::ATracer_Raygun_Drip_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Tracer_Raygun_Drip.Tracer_Raygun_Drip_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATracer_Raygun_Drip_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Tracer_Raygun_Drip_C", "ReceiveBeginPlay");

	Params::ATracer_Raygun_Drip_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Tracer_Raygun_Drip.Tracer_Raygun_Drip_C.ExecuteUbergraph_Tracer_Raygun_Drip
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATracer_Raygun_Drip_C::ExecuteUbergraph_Tracer_Raygun_Drip(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Tracer_Raygun_Drip_C", "ExecuteUbergraph_Tracer_Raygun_Drip");

	Params::ATracer_Raygun_Drip_C_ExecuteUbergraph_Tracer_Raygun_Drip_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
