#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Plant_Shrub_03.Plant_Shrub_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlant_Shrub_03_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Plant_Shrub_03_C", "UserConstructionScript");

	Params::APlant_Shrub_03_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Plant_Shrub_03.Plant_Shrub_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlant_Shrub_03_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Plant_Shrub_03_C", "ReceiveBeginPlay");

	Params::APlant_Shrub_03_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Plant_Shrub_03.Plant_Shrub_03_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void APlant_Shrub_03_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("Plant_Shrub_03_C", "ReceiveDestroyed");

	Params::APlant_Shrub_03_C_ReceiveDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Plant_Shrub_03.Plant_Shrub_03_C.ExecuteUbergraph_Plant_Shrub_03
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlant_Shrub_03_C::ExecuteUbergraph_Plant_Shrub_03(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("Plant_Shrub_03_C", "ExecuteUbergraph_Plant_Shrub_03");

	Params::APlant_Shrub_03_C_ExecuteUbergraph_Plant_Shrub_03_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
