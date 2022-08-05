#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0xFF0 - 0xFD0)
// BlueprintGeneratedClass Farm_WeatherVane_01.Farm_WeatherVane_01_C
class AFarm_WeatherVane_01_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFD0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  RoosterMesh;                                       // 0xFD8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RotationAmount;                                    // 0xFE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              SecondaryMID;                                      // 0xFE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Farm_WeatherVane_01_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void ExecuteUbergraph_Farm_WeatherVane_01(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FFortBounceData& K2Node_Event_Data, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_DegSin_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue7, float CallFunc_GetTimeOfDayAccumulator_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue8, float CallFunc_DegSin_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue9, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
