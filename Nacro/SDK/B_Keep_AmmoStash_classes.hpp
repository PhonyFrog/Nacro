#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x90 (0x11D0 - 0x1140)
// BlueprintGeneratedClass B_Keep_AmmoStash.B_Keep_AmmoStash_C
class AB_Keep_AmmoStash_C : public AKeepItemContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1140(0x8)(Transient, DuplicateTransient)
	class UTextRenderComponent*                  TextRender1;                                       // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Placement8;                                        // 0x1150(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Placement7;                                        // 0x1158(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Placement6;                                        // 0x1160(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Placement5;                                        // 0x1168(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Placement4;                                        // 0x1170(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Placement3;                                        // 0x1178(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Placement2;                                        // 0x1180(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Placement_1;                                       // 0x1188(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Ammo;                                              // 0x1190(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 AmmoPositions;                                     // 0x1198(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                        AmmoNumber;                                        // 0x11A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Cooldown;                                          // 0x11AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPickups;                                        // 0x11B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F01[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AKeepItemContainer*>            Pickups;                                           // 0x11B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Warmup;                                            // 0x11C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PickupTier;                                        // 0x11CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Keep_AmmoStash_C");
		return Clss;
	}

	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, int32 CallFunc_GetLootTierOverride_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void AmmoTaken(int32 AmmoPos, class AKeepItemContainer* Reference, bool Temp_bool_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void UserConstructionScript();
	void HandleMissionEvent_OnDefenseStarted(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_OnDefenseStopped(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Keep_AmmoStash(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue4, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue3, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue6, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue5, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue6, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue8, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue7, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue8, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue7, class AAmmo_Spawn_C* CallFunc_FinishSpawningActor_ReturnValue8, bool Temp_bool_Has_Been_Initd_Variable2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2, class UObject* K2Node_HandleMissionEvent_EventFocus2, class UDataAsset* K2Node_HandleMissionEvent_EventContent2, class AActor* K2Node_HandleMissionEvent_EventInstigator2, int32 K2Node_HandleMissionEvent_GenericInt2, float K2Node_HandleMissionEvent_GenericFloat2, class FText K2Node_HandleMissionEvent_GenericText2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent2, class FName CallFunc_GetContainerNameAndLevelKey_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFortKeepAmmoStash& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool K2Node_SwitchInteger2_CmpSuccess, bool Temp_bool_IsClosed_Variable2, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue8, int32 CallFunc_Array_Add_ReturnValue9, class AKeepItemContainer* CallFunc_Array_Get_Item2, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
