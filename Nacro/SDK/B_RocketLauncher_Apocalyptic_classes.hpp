#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x44 (0xE3C - 0xDF8)
// BlueprintGeneratedClass B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C
class AB_RocketLauncher_Apocalyptic_C : public AB_RocketLauncher_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDF8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_RocketLauncher_Apocalyptic_ReloadSteam_01;       // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sm_Post_Apocalyptic_Launcher_Needle;               // 0xE08(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ExhaustRefraction;                                 // 0xE10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  ExhaustLight;                                      // 0xE18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RotateNeedle_Rotation_56EC414F4274AFBE049A3A86CDD956C7; // 0xE20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                RotateNeedle__Direction_56EC414F4274AFBE049A3A86CDD956C7; // 0xE24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    RotateNeedle;                                      // 0xE28(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              NeedleRestingRotation;                             // 0xE30(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_RocketLauncher_Apocalyptic_C");
		return Clss;
	}

	void UserConstructionScript(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue);
	void RotateNeedle__FinishedFunc();
	void RotateNeedle__UpdateFunc();
	void OnWeaponAttached();
	void Muzzle_Flash_FX(bool Condition);
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void ExecuteUbergraph_B_RocketLauncher_Apocalyptic(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, bool K2Node_Event_Condition, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult2, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
