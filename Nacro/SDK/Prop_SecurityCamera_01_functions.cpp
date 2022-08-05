#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_SecurityCamera_01_C::UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3)
{
	static auto Func = Class->GetFunction("Prop_SecurityCamera_01_C", "UserConstructionScript");

	Params::AProp_SecurityCamera_01_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.StartTickingIfRendered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AProp_SecurityCamera_01_C::StartTickingIfRendered()
{
	static auto Func = Class->GetFunction("Prop_SecurityCamera_01_C", "StartTickingIfRendered");

	Params::AProp_SecurityCamera_01_C_StartTickingIfRendered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProp_SecurityCamera_01_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Prop_SecurityCamera_01_C", "ReceiveBeginPlay");

	Params::AProp_SecurityCamera_01_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.StartRotating
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AProp_SecurityCamera_01_C::StartRotating()
{
	static auto Func = Class->GetFunction("Prop_SecurityCamera_01_C", "StartRotating");

	Params::AProp_SecurityCamera_01_C_StartRotating_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Prop_SecurityCamera_01.Prop_SecurityCamera_01_C.ExecuteUbergraph_Prop_SecurityCamera_01
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_WasRecentlyRendered_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasRecentlyRendered_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMoveComponentAction    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_SecurityCamera_01_C::ExecuteUbergraph_Prop_SecurityCamera_01(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_WasRecentlyRendered_ReturnValue, bool CallFunc_WasRecentlyRendered_ReturnValue2, enum class EMoveComponentAction Temp_byte_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3)
{
	static auto Func = Class->GetFunction("Prop_SecurityCamera_01_C", "ExecuteUbergraph_Prop_SecurityCamera_01");

	Params::AProp_SecurityCamera_01_C_ExecuteUbergraph_Prop_SecurityCamera_01_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_WasRecentlyRendered_ReturnValue = CallFunc_WasRecentlyRendered_ReturnValue;
	Parms.CallFunc_WasRecentlyRendered_ReturnValue2 = CallFunc_WasRecentlyRendered_ReturnValue2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
