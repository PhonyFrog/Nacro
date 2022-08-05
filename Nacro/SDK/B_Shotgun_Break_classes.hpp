#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x5C (0xE44 - 0xDE8)
// BlueprintGeneratedClass B_Shotgun_Break.B_Shotgun_Break_C
class AB_Shotgun_Break_C : public AB_Shotgun_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0xDF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FXTraceYawFullAngle;                               // 0xDF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FXTracePitchFullAngle;                             // 0xDF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndOfCenterFXTrace;                                // 0xDFC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       AllFXTraceEndPoints;                               // 0xE08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               CurrentFXTraceEnd;                                 // 0xE18(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentFXTraceWasHit;                              // 0xE24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       AllFXTracerSpawnPoints;                            // 0xE28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         SpawnTracersInsteadOfDummyImpactFX;                // 0xE38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MysteriousRangeBufferForTracers;                   // 0xE3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RangeLong;                                         // 0xE40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Shotgun_Break_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ExecuteUbergraph_B_Shotgun_Break(int32 EntryPoint, const struct FVector& CallFunc_GetDamageStartLocation_AimDir, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_GetDamageStartLocation_AimDir2, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue2, class APawn* CallFunc_GetInstigator_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class APawn* CallFunc_GetInstigator_ReturnValue2, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetDamageStartLocation_AimDir3, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue3, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FHitResult& K2Node_Select_Default, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_SelectVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, const struct FVector& CallFunc_GetDamageStartLocation_AimDir4, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue4, class UFortWeaponRangedItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Ranged_Item_Definition, bool K2Node_DynamicCast_bSuccess2, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue, const struct FFortRangedWeaponStats& CallFunc_GetRangedWeaponStatsRow_OutRow, bool CallFunc_GetRangedWeaponStatsRow_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, const struct FVector& CallFunc_GetDamageStartLocation_AimDir5, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue5, const struct FVector& CallFunc_GetDamageStartLocation_AimDir6, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue6, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_GetDamageStartLocation_AimDir7, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue7, const struct FVector& CallFunc_BreakRotIntoAxes_X, const struct FVector& CallFunc_BreakRotIntoAxes_Y, const struct FVector& CallFunc_BreakRotIntoAxes_Z, int32 Temp_int_Array_Index_Variable2, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Array_Get_Item2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_GetDamageStartLocation_AimDir8, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue8, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue3, class AFortTracerBase* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_BreakRotIntoAxes_X2, const struct FVector& CallFunc_BreakRotIntoAxes_Y2, const struct FVector& CallFunc_BreakRotIntoAxes_Z2, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue3, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_DegTan_ReturnValue, float CallFunc_DegTan_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue5, int32 Temp_int_Loop_Counter_Variable2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue7, bool CallFunc_Less_IntInt_ReturnValue2, TArray<struct FVector>& K2Node_MakeArray_Array2, int32 CallFunc_Add_IntInt_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
