#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x74 (0xE5C - 0xDE8)
// BlueprintGeneratedClass B_Pistol_Zapper.B_Pistol_Zapper_C
class AB_Pistol_Zapper_C : public AB_Pistol_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_ZapZap_CoreReloadArcs_01;                        // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_ZapZap_CoreReload_01;                            // 0xDF8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_ZapZap_Core_01;                                  // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Scale_Glow_Up_Size_D24648EE45B04D4B02AE1187715E1632; // 0xE08(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale_Glow_Up_LERP_Particle_D24648EE45B04D4B02AE1187715E1632; // 0xE14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale_Glow_Up_LERP_Color_D24648EE45B04D4B02AE1187715E1632; // 0xE18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Scale_Glow_Up__Direction_D24648EE45B04D4B02AE1187715E1632; // 0xE1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Scale_Glow_Up;                                     // 0xE20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              WeaponMesh_MID;                                    // 0xE28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GlowColor_Charged;                                 // 0xE30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AmmoCountChangedBeUsed_;                           // 0xE40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DD0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GetTimeToNextFire;                                 // 0xE44(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        bAmmoCountDelay;                                   // 0xE48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Core_Reload_Start_Speed;                           // 0xE4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Core_Reload_End_Speed;                             // 0xE50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Core_Reload_Start_Spawn_Rate;                      // 0xE54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Core_Reload_End_Spawn_Rate;                        // 0xE58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pistol_Zapper_C");
		return Clss;
	}

	void DisableAllVisuals();
	void StopAndResetTimeline();
	void UpdateVisuals(bool Ammo_Check, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Scale_Glow_Up__FinishedFunc();
	void Scale_Glow_Up__UpdateFunc();
	void Scale_Glow_Up__Event__EventFunc();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ReceiveBeginPlay();
	void Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection);
	void OnAmmoCountChanged();
	void ExecuteUbergraph_B_Pistol_Zapper(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue, const struct FFortRangedWeaponStats& CallFunc_GetRangedWeaponStatsRow_OutRow, bool CallFunc_GetRangedWeaponStatsRow_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue3, int32 CallFunc_GetMagazineAmmoCount_ReturnValue2, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue2, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FFortRangedWeaponStats& CallFunc_GetRangedWeaponStatsRow_OutRow2, bool CallFunc_GetRangedWeaponStatsRow_ReturnValue2, int32 CallFunc_SelectInt_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, enum class EFortReloadFXState K2Node_Event_Selection, bool K2Node_SwitchEnum_CmpSuccess, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue3, const struct FFortRangedWeaponStats& CallFunc_GetRangedWeaponStatsRow_OutRow3, bool CallFunc_GetRangedWeaponStatsRow_ReturnValue3, int32 CallFunc_SelectInt_ReturnValue3, int32 CallFunc_GetMagazineAmmoCount_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, float CallFunc_GetTimeToNextFire_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue4, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FFortRangedWeaponStats& CallFunc_GetRangedWeaponStatsRow_OutRow4, bool CallFunc_GetRangedWeaponStatsRow_ReturnValue4, float K2Node_Select_Default, int32 CallFunc_SelectInt_ReturnValue4, bool CallFunc_GreaterEqual_IntInt_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_GetMagazineAmmoCount_ReturnValue4, bool CallFunc_GreaterEqual_IntInt_ReturnValue4, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
