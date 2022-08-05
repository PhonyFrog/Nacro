#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::HandleInsideOutsideMix()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "HandleInsideOutsideMix");

	Params::ASafeZoneIndicator_C_HandleInsideOutsideMix_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::InitClosestPointAudio(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue4)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "InitClosestPointAudio");

	Params::ASafeZoneIndicator_C_InitClosestPointAudio_Params Parms;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue3 = CallFunc_SpawnSoundAttached_ReturnValue3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue4 = CallFunc_SpawnSoundAttached_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.UpdateClosestPointAudioLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetClosestPointOnSafeZone_Location                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::UpdateClosestPointAudioLocation(const struct FVector& Location, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetClosestPointOnSafeZone_Location)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "UpdateClosestPointAudioLocation");

	Params::ASafeZoneIndicator_C_UpdateClosestPointAudioLocation_Params Parms;
	Parms.Location = Location;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult2 = CallFunc_K2_SetWorldLocation_SweepHitResult2;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetClosestPointOnSafeZone_Location = CallFunc_GetClosestPointOnSafeZone_Location;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.GetClosestPointOnSafeZone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     PlayerLocation                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::GetClosestPointOnSafeZone(const struct FVector& PlayerLocation, struct FVector* Location, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_MakeVector_ReturnValue3)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "GetClosestPointOnSafeZone");

	Params::ASafeZoneIndicator_C_GetClosestPointOnSafeZone_Params Parms;
	Parms.PlayerLocation = PlayerLocation;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);
	if (Location != nullptr)
		*Location = Parms.Location;

}

// Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "UserConstructionScript");

	Params::ASafeZoneIndicator_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Movement_Audio_Crossfader__FinishedFunc()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "Movement Audio Crossfader__FinishedFunc");

	Params::ASafeZoneIndicator_C_Movement_Audio_Crossfader__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Movement_Audio_Crossfader__UpdateFunc()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "Movement Audio Crossfader__UpdateFunc");

	Params::ASafeZoneIndicator_C_Movement_Audio_Crossfader__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Holding_Audio_Crossfader__FinishedFunc()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "Holding Audio Crossfader__FinishedFunc");

	Params::ASafeZoneIndicator_C_Holding_Audio_Crossfader__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Holding_Audio_Crossfader__UpdateFunc()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "Holding Audio Crossfader__UpdateFunc");

	Params::ASafeZoneIndicator_C_Holding_Audio_Crossfader__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveBeginPlay");

	Params::ASafeZoneIndicator_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveTick");

	Params::ASafeZoneIndicator_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortSafeZoneState      NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASafeZoneIndicator_C::OnSafeZoneStateChange(enum class EFortSafeZoneState NewState)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "OnSafeZoneStateChange");

	Params::ASafeZoneIndicator_C_OnSafeZoneStateChange_Params Parms;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSafeZoneState      K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::ExecuteUbergraph_SafeZoneIndicator(int32 EntryPoint, float CallFunc_MapRangeUnclamped_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EFortSafeZoneState K2Node_Event_NewState, bool K2Node_SwitchEnum_CmpSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue2, float CallFunc_GetServerWorldTimeSeconds_ReturnValue3, float CallFunc_MapRangeClamped_ReturnValue2)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "ExecuteUbergraph_SafeZoneIndicator");

	Params::ASafeZoneIndicator_C_ExecuteUbergraph_SafeZoneIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue = CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue2 = CallFunc_GetServerWorldTimeSeconds_ReturnValue2;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue3 = CallFunc_GetServerWorldTimeSeconds_ReturnValue3;
	Parms.CallFunc_MapRangeClamped_ReturnValue2 = CallFunc_MapRangeClamped_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
