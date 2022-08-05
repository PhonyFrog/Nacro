#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x140 (0xF28 - 0xDE8)
// BlueprintGeneratedClass B_Rifle_AMR_.B_Rifle_AMR__C
class AB_Rifle_AMR__C : public AB_Rifle_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sm_AMR_Glass_01;                                   // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ResidualArcsSide1;                                 // 0xDF8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ResidualArcsTop2;                                  // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ResidualArcsTop1;                                  // 0xE08(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  AMRFan;                                            // 0xE10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MuzzleLight;                                       // 0xE18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       FullCharge_AudioComponent;                         // 0xE20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Ambient_Charge_AudioComponent;                     // 0xE28(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ElectrodeParticles;                                // 0xE30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CoreParticles;                                     // 0xE38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SlowdownTimeline_LERP_A8E004BE498691F6490C7E808C9DACA6; // 0xE40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SlowdownTimeline__Direction_A8E004BE498691F6490C7E808C9DACA6; // 0xE44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SlowdownTimeline;                                  // 0xE48(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpringVal_springValCurve_19C9CAF7430F18C57C30EEB8B27BB863; // 0xE50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SpringVal__Direction_19C9CAF7430F18C57C30EEB8B27BB863; // 0xE54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SpringVal;                                         // 0xE58(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleUpParticles_SpawnRate_134097C245AF92F7626E499F105F4F08; // 0xE60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleUpParticles__Direction_134097C245AF92F7626E499F105F4F08; // 0xE64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleUpParticles;                                  // 0xE68(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleDownParticles_SpawnRate_E96B2C9C41611147588502950D688A78; // 0xE70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleDownParticles__Direction_E96B2C9C41611147588502950D688A78; // 0xE74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleDownParticles;                                // 0xE78(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Reload_PItchChange_Reload_Pitch_2ACDF03E41971FCD38582BA4D7AEF983; // 0xE80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Reload_PItchChange__Direction_2ACDF03E41971FCD38582BA4D7AEF983; // 0xE84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Reload_PItchChange;                                // 0xE88(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesSpawnRate_Uncharged_;                 // 0xE90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesSpawnRate_Charged_;                   // 0xE94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ChargedBeam;                                       // 0xE98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DefaultBeam;                                       // 0xEA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationRate_Uncharged_;                          // 0xEA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationRate_Charged_;                            // 0xEAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesTimeDilation_Uncharged_;              // 0xEB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesTimeDilation_Charged_;                // 0xEB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoreParticlesSpinRate_Charged_;                    // 0xEB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElectrodeParticlesEnergizedSpawnRate_Uncharged_;   // 0xEBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElectrodeParticlesEnergizedSpawnRate_Charged_;     // 0xEC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reached_Min_Charge;                                // 0xEC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              BarrelGlowMID;                                     // 0xEC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BarrelGlowColor_Uncharged_;                        // 0xED0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BarrelGlowColor_Charged_;                          // 0xEE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleFlash_Uncharged_;                            // 0xEF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleFlash_Charged_;                              // 0xEF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Muzzle_Flash_Light_Intensity__Charged_;            // 0xF00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Muzzle_Flash_Light_Intensity__Uncharged_;          // 0xF04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurbineSpinRate_Charged_;                          // 0xF08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurbineSpinRate_Uncharged_;                        // 0xF0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationRate_Reloading_;                          // 0xF10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargePercent;                                     // 0xF14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Delta;                                        // 0xF18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Charging;                                          // 0xF1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OutOfAmmo_Local;                                   // 0xF1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FEA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentPlayrate;                                   // 0xF20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AmmoCost_MinCharge;                                // 0xF24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Rifle_AMR__C");
		return Clss;
	}

	void VFX_SetChargedParams();
	void VFX_SetUnchargedParams();
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_K2_AttachTo_ReturnValue);
	void ScaleDownParticles__FinishedFunc();
	void ScaleDownParticles__UpdateFunc();
	void Reload_PItchChange__FinishedFunc();
	void Reload_PItchChange__UpdateFunc();
	void ScaleUpParticles__FinishedFunc();
	void ScaleUpParticles__UpdateFunc();
	void SpringVal__FinishedFunc();
	void SpringVal__UpdateFunc();
	void SlowdownTimeline__FinishedFunc();
	void SlowdownTimeline__UpdateFunc();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStartCharge();
	void OnReachedMinCharge();
	void Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection);
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void EndOfCharge();
	void OnWeaponAttached();
	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnAmmoCountChanged();
	void CameraShakeLoop();
	void OnChargeDown();
	void OnReachedMaxCharge();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_B_Rifle_AMR_(int32 EntryPoint, const struct FFortRangedWeaponStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EFortReloadFXState K2Node_Event_Selection, enum class EFortReloadFXState K2Node_Event_ReloadStage, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USK_AMR_Skeleton_AnimBP_C* K2Node_DynamicCast_AsSK_AMR_Skeleton_Anim_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetPlayRate_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue2, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetChargePercent_ReturnValue, float CallFunc_Lerp_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, float CallFunc_Lerp_ReturnValue4, float CallFunc_Lerp_ReturnValue5, float CallFunc_Lerp_ReturnValue6, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
