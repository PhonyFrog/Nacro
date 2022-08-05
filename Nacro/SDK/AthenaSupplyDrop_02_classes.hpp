#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x224 (0xA74 - 0x850)
// BlueprintGeneratedClass AthenaSupplyDrop_02.AthenaSupplyDrop_02_C
class AAthenaSupplyDrop_02_C : public AFortAthenaSupplyDrop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x850(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       ReminderAudio;                                     // 0x858(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       FlareAudio;                                        // 0x860(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ReticleAudio;                                      // 0x868(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         InterceptCollision;                                // 0x870(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Flare;                                           // 0x878(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  BP_DamageBalloon_Athena;                           // 0x880(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x888(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Reticle;                                         // 0x890(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_SupplydropCrate_Explosion;                       // 0x898(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Collision;                                         // 0x8A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SupplyDrop_Mesh_Open;                              // 0x8A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Trail;                                             // 0x8B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SupplyDrop_Mesh;                                   // 0x8B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        LerpFallRate_lerp_FE7E27BB426803D6C67CB1B938DEA932; // 0x8C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                LerpFallRate__Direction_FE7E27BB426803D6C67CB1B938DEA932; // 0x8C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3553[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    LerpFallRate;                                      // 0x8C8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FallingTimeline_FallCrossfadeAudioCurve_9BECDABA4A72652B113789B5C4B94027; // 0x8D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FallingTimeline_FallCurve_9BECDABA4A72652B113789B5C4B94027; // 0x8D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FallingTimeline__Direction_9BECDABA4A72652B113789B5C4B94027; // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3554[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FallingTimeline;                                   // 0x8E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Allow_SupplyDrop_Interact;                         // 0x8E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3555[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Activate_Sound;                                    // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Impact_Sound;                                      // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Loot_Sound;                                        // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventHit;                                          // 0x908(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData;                                         // 0x910(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               LootSpawnOffset;                                   // 0x9B8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FallHeight;                                        // 0x9C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSupplyDropUnlocks                    Unlocks;                                           // 0x9C8(0x5)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_3556[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LootTableNames;                                    // 0x9D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                          SelfDestructTimerHandle;                           // 0x9E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class ABuildingActor*                        Floor;                                             // 0x9E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewLocation;                                       // 0x9F0(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        FallTime;                                          // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SecondaryFallingTimerHandle;                       // 0xA00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bLooted;                                           // 0xA08(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3557[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  CrateLanded;                                       // 0xA10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        FallingPlayrate;                                   // 0xA20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3558[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       FallingAudio;                                      // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBalloonPopped;                                    // 0xA30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3559[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurveTableRowHandle                  NewVar_0;                                          // 0xA38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AActor*                                MySpawner;                                         // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  CurveTable_FallTime;                               // 0xA50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCurveTableRowHandle                  CurveTable_FallHeight;                             // 0xA60(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        NewVar_1;                                          // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSupplyDrop_02_C");
		return Clss;
	}

	void HandleFallTime(float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void UpdateDropAudio(float FallPercent, bool CallFunc_IsValid_ReturnValue);
	void StartDropAudio(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void OnRep_bLooted(bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_IsClosed_Variable);
	void OnRep_NewLocation();
	struct FVector GetFallLocation(const struct FVector& CallFunc_GetImpactLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	struct FVector GetImpactLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void ToggleFallingFX(bool bToggleOn);
	void ClientPlayDropFX(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void SpawnTierDrops(int32 LootTableIndex, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetLootLevel_ReturnValue, const struct FVector& CallFunc_LootSpawnPosition_OutPos, class FName CallFunc_Array_Get_Item, TArray<struct FFortItemEntry>& CallFunc_PickLootDrops_OutLootToDrop, bool CallFunc_PickLootDrops_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFortItemEntry& CallFunc_Array_Get_Item2, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue);
	void LootSpawnPosition(struct FVector* OutPos, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2);
	void InitDrop(const struct FSupplyDropUnlocks& InUnlocks);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	void Landed(class ABP_DamageBalloon_Athena_C* K2Node_DynamicCast_AsBP_Damage_Balloon_Athena, bool K2Node_DynamicCast_bSuccess);
	bool IsAcceptablePositionForPlacement(struct FVector& InLocation, struct FRotator& InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, class FText* OutFailureReason, bool Temp_bool_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, class FText Temp_text_Variable, class FText Temp_text_Variable2, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit, bool CallFunc_BoxTraceSingle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default);
	void UpdateLocation(float Time, const struct FVector& CallFunc_GetFallLocation_ReturnValue, const struct FVector& CallFunc_GetImpactLocation_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void TurnOnInteract(bool bNewActorEnableCollision);
	void SpawnLoot(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable);
	void UserConstructionScript();
	void FallingTimeline__FinishedFunc();
	void FallingTimeline__UpdateFunc();
	void FallingTimeline__Almost_Landed__EventFunc();
	void FallingTimeline__DisableFlare__EventFunc();
	void LerpFallRate__FinishedFunc();
	void LerpFallRate__UpdateFunc();
	void ImpactFX();
	void OverlappingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void PlayDrop();
	void SpawnLootDestroyActor();
	void PlayDropNewTime();
	void SecondaryFallTick();
	void BalloonDestroyed();
	void ReceiveBeginPlay();
	void StopBeep();
	void BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void DropIntercepted();
	void ExecuteUbergraph_AthenaSupplyDrop_02(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, const struct FVector& CallFunc_GetImpactLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, const struct FHitResult& CallFunc_GroundTrace_OutHit, bool CallFunc_GroundTrace_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult2, bool CallFunc_K2_SetActorLocation_ReturnValue2, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_Post_SupplyDrop_Impact_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_Lerp_ReturnValue, class ABP_DamageBalloon_Athena_C* K2Node_DynamicCast_AsBP_Damage_Balloon_Athena, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult3, bool CallFunc_K2_SetActorLocation_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue);
	void CrateLanded__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
