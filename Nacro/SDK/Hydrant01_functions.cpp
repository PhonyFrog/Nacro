#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Hydrant01.Hydrant01_C.handle_Exploded_State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCustomState_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHydrant01_C::Handle_Exploded_State(class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, const class FString& CallFunc_GetCustomState_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static auto Func = Class->GetFunction("Hydrant01_C", "handle_Exploded_State");

	Params::AHydrant01_C_Handle_Exploded_State_Params Parms;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue = CallFunc_GetBuildingMeshComponent_ReturnValue;
	Parms.CallFunc_GetCustomState_ReturnValue = CallFunc_GetCustomState_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Hydrant01.Hydrant01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHydrant01_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue2)
{
	static auto Func = Class->GetFunction("Hydrant01_C", "UserConstructionScript");

	Params::AHydrant01_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue2 = CallFunc_SetStaticMesh_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
