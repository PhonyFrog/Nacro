#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x5C (0xE44 - 0xDE8)
// BlueprintGeneratedClass B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C
class AB_Assault_Raygun_Auto_C : public AB_Assault_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       Power_Loop_AudioComponent;                         // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        WeaponGlowTimeline_LERP_C258D6FF46D677090111C0B2CB91D0E8; // 0xDF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                WeaponGlowTimeline__Direction_C258D6FF46D677090111C0B2CB91D0E8; // 0xDFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    WeaponGlowTimeline;                                // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnobSpeedupTimeline_Speed_3FE69DBE4BA3AC82D00932A40FE91D70; // 0xE08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                KnobSpeedupTimeline__Direction_3FE69DBE4BA3AC82D00932A40FE91D70; // 0xE0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    KnobSpeedupTimeline;                               // 0xE10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              KnobMID;                                           // 0xE18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnobSpinSpeed_Max_;                                // 0xE20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          KnobIdleColor;                                     // 0xE24(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          KnobActiveColor;                                   // 0xE34(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Assault_Raygun_Auto_C");
		return Clss;
	}

	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void WeaponGlowTimeline__FinishedFunc();
	void WeaponGlowTimeline__UpdateFunc();
	void KnobSpeedupTimeline__FinishedFunc();
	void KnobSpeedupTimeline__UpdateFunc();
	void OnStopWeaponFireFX();
	void ReceiveBeginPlay();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void ExecuteUbergraph_B_Assault_Raygun_Auto(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_Lerp_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
