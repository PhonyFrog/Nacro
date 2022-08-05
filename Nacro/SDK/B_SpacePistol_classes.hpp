#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xAC (0xE94 - 0xDE8)
// BlueprintGeneratedClass B_SpacePistol.B_SpacePistol_C
class AB_SpacePistol_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleScreenLight;                               // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleBarReload_LERP_612F07E847F4C3FDBA6909B00CBC221E; // 0xDF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleBarReload__Direction_612F07E847F4C3FDBA6909B00CBC221E; // 0xDFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleBarReload;                                    // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmptyLERPstate_LERP_3582F24D4732165472C05D875D493CB2; // 0xE08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EmptyLERPstate__Direction_3582F24D4732165472C05D875D493CB2; // 0xE0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EmptyLERPstate;                                    // 0xE10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReloadLERPstate_LERP_B77803F349E7B91DBA427FBDF293E307; // 0xE18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ReloadLERPstate__Direction_B77803F349E7B91DBA427FBDF293E307; // 0xE1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ReloadLERPstate;                                   // 0xE20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleBarBetweenClipCounts_Bolt_Flash_230D3A92479C25873AABFAA2040107DD; // 0xE28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleBarBetweenClipCounts_LERP_Ammo_Count_230D3A92479C25873AABFAA2040107DD; // 0xE2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleBarBetweenClipCounts__Direction_230D3A92479C25873AABFAA2040107DD; // 0xE30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleBarBetweenClipCounts;                         // 0xE38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ScreenMat;                                         // 0xE40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Screen_Empty_Color__Light_;                        // 0xE48(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Screen_Reload_Color__Light_;                       // 0xE58(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Screen_Full_Color__Light_;                         // 0xE68(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentClipCount;                                  // 0xE78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousClipCount;                                 // 0xE7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleBarStart;                                     // 0xE80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleBarEnd;                                       // 0xE84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEmpty_;                                          // 0xE88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         JustReloaded_;                                     // 0xE89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_257F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Reload_Start;                                      // 0xE8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Reload_End;                                        // 0xE90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_SpacePistol_C");
		return Clss;
	}

	void SetReloadVariables(int32 CallFunc_GetBulletsPerClip_ReturnValue, int32 CallFunc_GetRemainingAmmo_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_GetBulletsPerClip_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue2);
	void SetAmmoBarVariables(int32 CallFunc_GetRemainingAmmo_ReturnValue, int32 CallFunc_GetBulletsPerClip_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetBulletsPerClip_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue2, int32 CallFunc_GetMagazineAmmoCount_ReturnValue);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void ScaleBarBetweenClipCounts__FinishedFunc();
	void ScaleBarBetweenClipCounts__UpdateFunc();
	void ReloadLERPstate__FinishedFunc();
	void ReloadLERPstate__UpdateFunc();
	void EmptyLERPstate__FinishedFunc();
	void EmptyLERPstate__UpdateFunc();
	void ScaleBarReload__FinishedFunc();
	void ScaleBarReload__UpdateFunc();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ReceiveBeginPlay();
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void OnAmmoCountChanged();
	void ClearEmptyLERP();
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC);
	void ExecuteUbergraph_B_SpacePistol(int32 EntryPoint, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UParticleSystemComponent* K2Node_Event_SpawnedPSC, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_GetRemainingAmmo_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetReloadTime_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue2, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue3, float CallFunc_Lerp_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
