#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientLakeAudioActor_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_AmbientLakeAudioActor_C", "UserConstructionScript");

	Params::ABP_AmbientLakeAudioActor_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AmbientLakeAudioActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_AmbientLakeAudioActor_C", "ReceiveTick");

	Params::ABP_AmbientLakeAudioActor_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C.ExecuteUbergraph_BP_AmbientLakeAudioActor
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AmbientLakeAudioActor_C::ExecuteUbergraph_BP_AmbientLakeAudioActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_AmbientLakeAudioActor_C", "ExecuteUbergraph_BP_AmbientLakeAudioActor");

	Params::ABP_AmbientLakeAudioActor_C_ExecuteUbergraph_BP_AmbientLakeAudioActor_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
