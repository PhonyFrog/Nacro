#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x68 (0x1038 - 0xFD0)
// BlueprintGeneratedClass Prop_WildWest_WoodenWindmill_01.Prop_WildWest_WoodenWindmill_01_C
class AProp_WildWest_WoodenWindmill_01_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFD0(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       Windmill_creaking_Cue;                             // 0xFD8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WildWest_Windmill_Blades_WildWestWindmill_Blades;  // 0xFE0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WildWest_Windmill_ZRotationElement;                // 0xFE8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentBladeSpeed;                                 // 0xFF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewBladeSpeed;                                     // 0xFF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Left_Spin_Amount;                                  // 0xFF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Right_Spin_Amount;                                 // 0xFFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ConstantSpin;                                      // 0x1000(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              StartRotation;                                     // 0x1004(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        SpinSpeedWhenConstant;                             // 0x1010(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time_Accum;                                        // 0x1014(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Initial_wind_mill_rotation;                        // 0x1018(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Z_Rotation_Amount;                                 // 0x1024(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UCurveFloat*                           ZRotationCurve;                                    // 0x1028(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_0;                                          // 0x1030(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Z_rotation_Rate;                                   // 0x1034(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prop_WildWest_WoodenWindmill_01_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void NewSpin();
	void SpinUpdate();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_Prop_WildWest_WoodenWindmill_01(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue4, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue3, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_HasAuthority_ReturnValue2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, float CallFunc_Fraction_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
