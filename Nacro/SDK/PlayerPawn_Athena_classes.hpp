#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1C0 (0x21D8 - 0x2018)
// BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C
class APlayerPawn_Athena_C : public APlayerPawn_Athena_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2018(0x8)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                TargetHead;                                        // 0x2020(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                TargetBody;                                        // 0x2028(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            PawnHeadMaterials_0;                               // 0x2030(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnBodyMaterials_0;                               // 0x2040(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                       P_IncendiaryRound;                                 // 0x2050(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_MakeItRain;                                      // 0x2058(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_FlakVest;                                       // 0x2060(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                    Event_Data;                                        // 0x2080(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EventSpawnEffect;                                  // 0x2128(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        ShockwaveRefractionRingHeight;                     // 0x2130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       P_Shockwave;                                       // 0x2138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ShockwaveForceFeedback;                            // 0x2140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ShockwaveCameraShake;                              // 0x2148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMale;                                            // 0x2150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_277C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortWeapon*                           MenuGoingCommandowWeapon;                          // 0x2158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SafeZonePassThroughSound;                          // 0x2160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasBeenOutsideSafeZone;                           // 0x2168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_277D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ThreatColor;                                       // 0x216C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            PlayerKilledSound;                                 // 0x2180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Contrail_A;                                        // 0x2188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Contrail_B;                                        // 0x2190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Contrail_C;                                        // 0x2198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Contrail_D;                                        // 0x21A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bContrailReady;                                    // 0x21A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_277F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UParticleSystem*>               Contrails;                                         // 0x21B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                       ActiveContrail;                                    // 0x21C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLiveContrail;                                     // 0x21C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2780[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              Vapor_Effect;                                      // 0x21D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Athena_C");
		return Clss;
	}

	void InitAthenaFoleyAudio(bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable2, bool Temp_bool_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, bool Temp_bool_Variable3, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, bool Temp_bool_Variable4, class USoundBase* Temp_object_Variable7, class USoundBase* Temp_object_Variable8, bool Temp_bool_Variable5, class USoundBase* Temp_object_Variable9, class USoundBase* Temp_object_Variable10, bool Temp_bool_Variable6, class USoundBase* Temp_object_Variable11, class USoundBase* Temp_object_Variable12, bool Temp_bool_Variable7, class USoundBase* Temp_object_Variable13, class USoundBase* Temp_object_Variable14, bool CallFunc_IsLocallyControlled_ReturnValue, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select2_Default, class USoundBase* K2Node_Select3_Default, class USoundBase* K2Node_Select4_Default, class USoundBase* K2Node_Select5_Default, class USoundBase* K2Node_Select6_Default, class USoundBase* K2Node_Select7_Default);
	void UserConstructionScript();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ReceivePossessed(class AController* NewController);
	void GameplayCue_Abilities_Activation_Commando_Shockwave(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void SetMenuScreenClassName();
	void ReceiveBeginPlay();
	void SelectPawn(class UAnimInstance* AnimInst);
	void ReceiveDestroyed();
	void GameplayCue_Athena_OutsideSafeZone(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void SafeZoneStatusChanged();
	void GameplayCue_Athena_Equipping(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveTick(float DeltaSeconds);
	void ContrailCheck();
	void GameplayCue_Athena_Player_BeingRevivedFromDBNO(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PlayerPawn_Athena(int32 EntryPoint, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType6, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters6, bool K2Node_SwitchEnum_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType5, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters5, bool K2Node_SwitchEnum2_CmpSuccess, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AController* K2Node_Event_NewController, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType4, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters4, bool K2Node_SwitchEnum3_CmpSuccess, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_IsClosed_Variable, class UAnimInstance* K2Node_CustomEvent_AnimInst, bool CallFunc_IsDedicatedServer_ReturnValue2, class UMenuScreen_Commando_C* K2Node_DynamicCast_AsMenu_Screen_Commando, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_Has_Been_Initd_Variable3, bool Temp_bool_IsClosed_Variable2, bool CallFunc_IsValid_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, bool K2Node_SwitchEnum4_CmpSuccess, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, bool CallFunc_IsLocallyControlled_ReturnValue2, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_IsLocallyControlled_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsLocallyControlled_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable3, float K2Node_Event_DeltaSeconds, bool CallFunc_IsParachuteForcedOpen_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue3, bool CallFunc_IsLocallyControlled_ReturnValue5, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsParachuteOpen_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UParticleSystem* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue4, TArray<class AActor*>& Temp_object_Variable3, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue4, float CallFunc_VSize_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue3, float CallFunc_FInterpTo_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue5, bool CallFunc_IsLocallyControlled_ReturnValue6, bool CallFunc_IsLocallyControlled_ReturnValue7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, class UAnimMontage* K2Node_Select_Default, float CallFunc_PlayLocalAnimMontage_ReturnValue, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue2, bool CallFunc_IsLocallyControlled_ReturnValue8);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
