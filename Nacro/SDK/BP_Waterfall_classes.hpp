#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xB5 (0x500 - 0x44B)
// BlueprintGeneratedClass BP_Waterfall.BP_Waterfall_C
class ABP_Waterfall_C : public A_WaterMeshBlueprintMaster_C
{
public:
	uint8                                        Pad_3AFF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       WaterFall_Base_Sound_L;                            // 0x450(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       WaterFall_Base_Sound_R;                            // 0x458(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              WaterFallVFX;                                      // 0x460(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SplashFX_Position_Manual;                          // 0x468(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SplashFX_Rotation;                                 // 0x474(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               SplashFX_Scale;                                    // 0x480(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FoamColor;                                         // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SplashFX_Color;                                    // 0x498(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Foam_Position_01;                                  // 0x4A8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Foam_Position_02;                                  // 0x4B4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Foam_Position_03;                                  // 0x4C0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Foam_Position_04;                                  // 0x4CC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_SplashFX_Height_01;                            // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Use_SplashFX_Height_02;                            // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Use_SplashFX_Height_03;                            // 0x4DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Use_SplashFX_Height_04;                            // 0x4DB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Audio_Z_offset;                                    // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Waterfall_Sound_R_Cue;                             // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Waterfall_Sound_L_Cue;                             // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Audio_LR_Offset;                                   // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B01[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Terrain_Material;                                  // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Waterfall_C");
		return Clss;
	}

	void UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult4, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult5, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult6, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, float CallFunc_BreakVector_X6, float CallFunc_BreakVector_Y6, float CallFunc_BreakVector_Z6, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue9, const struct FVector& CallFunc_MakeVector_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue6, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult7, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult8, float CallFunc_BreakVector_X7, float CallFunc_BreakVector_Y7, float CallFunc_BreakVector_Z7, float CallFunc_Add_FloatFloat_ReturnValue10, float CallFunc_Subtract_FloatFloat_ReturnValue4, float CallFunc_BreakVector_X8, float CallFunc_BreakVector_Y8, float CallFunc_BreakVector_Z8, const struct FVector& CallFunc_MakeVector_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue11, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult9, float CallFunc_Add_FloatFloat_ReturnValue12, const struct FVector& CallFunc_MakeVector_ReturnValue8, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult10, float CallFunc_BreakVector_X9, float CallFunc_BreakVector_Y9, float CallFunc_BreakVector_Z9, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue13, float CallFunc_Subtract_FloatFloat_ReturnValue5, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult2, const struct FVector& CallFunc_MakeVector_ReturnValue9, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult11, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult4, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult5, float CallFunc_BreakVector_X10, float CallFunc_BreakVector_Y10, float CallFunc_BreakVector_Z10, float CallFunc_Add_FloatFloat_ReturnValue14, float CallFunc_Add_FloatFloat_ReturnValue15, const struct FVector& CallFunc_MakeVector_ReturnValue10, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
