#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0xFF0 - 0xFD0)
// BlueprintGeneratedClass BigClock_01.BigClock_01_C
class ABigClock_01_C : public ABuildingDeco
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFD0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  MinuteHandMesh;                                    // 0xFD8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  HourHandMesh;                                      // 0xFE0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box1;                                              // 0xFE8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BigClock_01_C");
		return Clss;
	}

	void UpdateTime(float CallFunc_GetTimeOfDay_ReturnValue, float CallFunc_GetTimeOfDay_ReturnValue2, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult2);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BigClock_01(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
