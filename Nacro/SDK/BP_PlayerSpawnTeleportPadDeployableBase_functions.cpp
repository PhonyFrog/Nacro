#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPadDeployableBase_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPadDeployableBase_C", "UserConstructionScript");

	Params::ABP_PlayerSpawnTeleportPadDeployableBase_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.ClearArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPadDeployableBase_C::ClearArea()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPadDeployableBase_C", "ClearArea");

	Params::ABP_PlayerSpawnTeleportPadDeployableBase_C_ClearArea_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.OnWorldReady
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPadDeployableBase_C::OnWorldReady()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPadDeployableBase_C", "OnWorldReady");

	Params::ABP_PlayerSpawnTeleportPadDeployableBase_C_OnWorldReady_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.HandleMissionEvent_TeleportHordePlayers
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

void ABP_PlayerSpawnTeleportPadDeployableBase_C::HandleMissionEvent_TeleportHordePlayers(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPadDeployableBase_C", "HandleMissionEvent_TeleportHordePlayers");

	Params::ABP_PlayerSpawnTeleportPadDeployableBase_C_HandleMissionEvent_TeleportHordePlayers_Params Parms;
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

// Function BP_PlayerSpawnTeleportPadDeployableBase.BP_PlayerSpawnTeleportPadDeployableBase_C.ExecuteUbergraph_BP_PlayerSpawnTeleportPadDeployableBase
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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

void ABP_PlayerSpawnTeleportPadDeployableBase_C::ExecuteUbergraph_BP_PlayerSpawnTeleportPadDeployableBase(int32 EntryPoint, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPadDeployableBase_C", "ExecuteUbergraph_BP_PlayerSpawnTeleportPadDeployableBase");

	Params::ABP_PlayerSpawnTeleportPadDeployableBase_C_ExecuteUbergraph_BP_PlayerSpawnTeleportPadDeployableBase_Params Parms;
	Parms.EntryPoint = EntryPoint;
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

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
