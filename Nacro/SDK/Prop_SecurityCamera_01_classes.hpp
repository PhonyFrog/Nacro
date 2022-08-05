#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x3C (0x100C - 0xFD0)
// BlueprintGeneratedClass Prop_SecurityCamera_01.Prop_SecurityCamera_01_C
class AProp_SecurityCamera_01_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFD0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  RightWing;                                         // 0xFD8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LeftWing;                                          // 0xFE0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Camera;                                            // 0xFE8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RotDuration;                                       // 0xFF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotConeInDegrees;                                  // 0xFF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomPitch;                                       // 0xFF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle;                                       // 0x1000(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        DirectionBias;                                     // 0x1008(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prop_SecurityCamera_01_C");
		return Clss;
	}

	void UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3);
	void StartTickingIfRendered();
	void ReceiveBeginPlay();
	void StartRotating();
	void ExecuteUbergraph_Prop_SecurityCamera_01(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_WasRecentlyRendered_ReturnValue, bool CallFunc_WasRecentlyRendered_ReturnValue2, enum class EMoveComponentAction Temp_byte_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
