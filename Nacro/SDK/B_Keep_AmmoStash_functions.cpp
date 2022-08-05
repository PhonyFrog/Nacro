#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLootTierOverride_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AB_Keep_AmmoStash_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, int32 CallFunc_GetLootTierOverride_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Keep_AmmoStash_C", "BlueprintCanInteract");

	Params::AB_Keep_AmmoStash_C_BlueprintCanInteract_Params Parms;
	Parms.InteractingPawn = InteractingPawn;
	Parms.CallFunc_GetLootTierOverride_ReturnValue = CallFunc_GetLootTierOverride_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.AmmoTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmmoPos                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKeepItemContainer*          Reference                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Keep_AmmoStash_C::AmmoTaken(int32 AmmoPos, class AKeepItemContainer* Reference, bool Temp_bool_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Keep_AmmoStash_C", "AmmoTaken");

	Params::AB_Keep_AmmoStash_C_AmmoTaken_Params Parms;
	Parms.AmmoPos = AmmoPos;
	Parms.Reference = Reference;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Keep_AmmoStash_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Keep_AmmoStash_C", "UserConstructionScript");

	Params::AB_Keep_AmmoStash_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.HandleMissionEvent_OnDefenseStarted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       MissionGuid                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (Parm)
// class UFortMissionEventParams*     Params                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void AB_Keep_AmmoStash_C::HandleMissionEvent_OnDefenseStarted(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("B_Keep_AmmoStash_C", "HandleMissionEvent_OnDefenseStarted");

	Params::AB_Keep_AmmoStash_C_HandleMissionEvent_OnDefenseStarted_Params Parms;
	Parms.MissionGuid = MissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.HandleMissionEvent_OnDefenseStopped
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       MissionGuid                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (Parm)
// class UFortMissionEventParams*     Params                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void AB_Keep_AmmoStash_C::HandleMissionEvent_OnDefenseStopped(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("B_Keep_AmmoStash_C", "HandleMissionEvent_OnDefenseStopped");

	Params::AB_Keep_AmmoStash_C_HandleMissionEvent_OnDefenseStopped_Params Parms;
	Parms.MissionGuid = MissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Keep_AmmoStash_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Keep_AmmoStash_C", "ReceiveBeginPlay");

	Params::AB_Keep_AmmoStash_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.ExecuteUbergraph_B_Keep_AmmoStash
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue2                     (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmmo_Spawn_C*               CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmmo_Spawn_C*               CallFunc_FinishSpawningActor_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue3                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue4                     (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmmo_Spawn_C*               CallFunc_FinishSpawningActor_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmmo_Spawn_C*               CallFunc_FinishSpawningActor_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue5                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue6                     (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmmo_Spawn_C*               CallFunc_FinishSpawningActor_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmmo_Spawn_C*               CallFunc_FinishSpawningActor_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue7                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue8                     (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue7           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue8           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmmo_Spawn_C*               CallFunc_FinishSpawningActor_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmmo_Spawn_C*               CallFunc_FinishSpawningActor_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_HandleMissionEvent_MissionGuid2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle2                       ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent2                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText2                           (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags2                          ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent2                          (ConstParm)
// class FName                        CallFunc_GetContainerNameAndLevelKey_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortKeepAmmoStash          CallFunc_GetDataTableRowFromName_OutRow                          ()
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetAllFortPlayerControllers_ReturnValue                 (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger2_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       K2Node_HandleMissionEvent_MissionGuid                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle                        ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText                            (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags                           ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent                           (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKeepItemContainer*          CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Keep_AmmoStash_C::ExecuteUbergraph_B_Keep_AmmoStash(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue3, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue5, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue6, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue8, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue7, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue8, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue7, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue8, bool Temp_bool_Has_Been_Initd_Variable2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2, class UObject* K2Node_HandleMissionEvent_EventFocus2, class UDataAsset* K2Node_HandleMissionEvent_EventContent2, class AActor* K2Node_HandleMissionEvent_EventInstigator2, int32 K2Node_HandleMissionEvent_GenericInt2, float K2Node_HandleMissionEvent_GenericFloat2, class FText K2Node_HandleMissionEvent_GenericText2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent2, class FName CallFunc_GetContainerNameAndLevelKey_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFortKeepAmmoStash& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool K2Node_SwitchInteger2_CmpSuccess, bool Temp_bool_IsClosed_Variable2, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue8, int32 CallFunc_Array_Add_ReturnValue9, class AKeepItemContainer* CallFunc_Array_Get_Item2, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Keep_AmmoStash_C", "ExecuteUbergraph_B_Keep_AmmoStash");

	Params::AB_Keep_AmmoStash_C_ExecuteUbergraph_B_Keep_AmmoStash_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue2 = CallFunc_K2_GetComponentToWorld_ReturnValue2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue2 = CallFunc_FinishSpawningActor_ReturnValue2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue3 = CallFunc_K2_GetComponentToWorld_ReturnValue3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue4 = CallFunc_K2_GetComponentToWorld_ReturnValue4;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue3 = CallFunc_FinishSpawningActor_ReturnValue3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue4 = CallFunc_FinishSpawningActor_ReturnValue4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue5 = CallFunc_K2_GetComponentToWorld_ReturnValue5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue6 = CallFunc_K2_GetComponentToWorld_ReturnValue6;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6;
	Parms.CallFunc_FinishSpawningActor_ReturnValue5 = CallFunc_FinishSpawningActor_ReturnValue5;
	Parms.CallFunc_FinishSpawningActor_ReturnValue6 = CallFunc_FinishSpawningActor_ReturnValue6;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue7 = CallFunc_K2_GetComponentToWorld_ReturnValue7;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue8 = CallFunc_K2_GetComponentToWorld_ReturnValue8;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue7 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue7;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue8 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue8;
	Parms.CallFunc_FinishSpawningActor_ReturnValue7 = CallFunc_FinishSpawningActor_ReturnValue7;
	Parms.CallFunc_FinishSpawningActor_ReturnValue8 = CallFunc_FinishSpawningActor_ReturnValue8;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_HandleMissionEvent_MissionGuid2 = K2Node_HandleMissionEvent_MissionGuid2;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle2 = K2Node_HandleMissionEvent_ObjectiveHandle2;
	Parms.K2Node_HandleMissionEvent_Params2 = K2Node_HandleMissionEvent_Params2;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2;
	Parms.K2Node_HandleMissionEvent_EventFocus2 = K2Node_HandleMissionEvent_EventFocus2;
	Parms.K2Node_HandleMissionEvent_EventContent2 = K2Node_HandleMissionEvent_EventContent2;
	Parms.K2Node_HandleMissionEvent_EventInstigator2 = K2Node_HandleMissionEvent_EventInstigator2;
	Parms.K2Node_HandleMissionEvent_GenericInt2 = K2Node_HandleMissionEvent_GenericInt2;
	Parms.K2Node_HandleMissionEvent_GenericFloat2 = K2Node_HandleMissionEvent_GenericFloat2;
	Parms.K2Node_HandleMissionEvent_GenericText2 = K2Node_HandleMissionEvent_GenericText2;
	Parms.K2Node_HandleMissionEvent_GameplayTags2 = K2Node_HandleMissionEvent_GameplayTags2;
	Parms.K2Node_HandleMissionEvent_MissionEvent2 = K2Node_HandleMissionEvent_MissionEvent2;
	Parms.CallFunc_GetContainerNameAndLevelKey_ReturnValue = CallFunc_GetContainerNameAndLevelKey_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetAllFortPlayerControllers_ReturnValue = CallFunc_GetAllFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.K2Node_SwitchInteger2_CmpSuccess = K2Node_SwitchInteger2_CmpSuccess;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.K2Node_HandleMissionEvent_MissionGuid = K2Node_HandleMissionEvent_MissionGuid;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle = K2Node_HandleMissionEvent_ObjectiveHandle;
	Parms.K2Node_HandleMissionEvent_Params = K2Node_HandleMissionEvent_Params;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.K2Node_HandleMissionEvent_EventFocus = K2Node_HandleMissionEvent_EventFocus;
	Parms.K2Node_HandleMissionEvent_EventContent = K2Node_HandleMissionEvent_EventContent;
	Parms.K2Node_HandleMissionEvent_EventInstigator = K2Node_HandleMissionEvent_EventInstigator;
	Parms.K2Node_HandleMissionEvent_GenericInt = K2Node_HandleMissionEvent_GenericInt;
	Parms.K2Node_HandleMissionEvent_GenericFloat = K2Node_HandleMissionEvent_GenericFloat;
	Parms.K2Node_HandleMissionEvent_GenericText = K2Node_HandleMissionEvent_GenericText;
	Parms.K2Node_HandleMissionEvent_GameplayTags = K2Node_HandleMissionEvent_GameplayTags;
	Parms.K2Node_HandleMissionEvent_MissionEvent = K2Node_HandleMissionEvent_MissionEvent;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
