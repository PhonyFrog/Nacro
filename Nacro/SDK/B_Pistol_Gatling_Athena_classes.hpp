#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x3D (0xE25 - 0xDE8)
// BlueprintGeneratedClass B_Pistol_Gatling_Athena.B_Pistol_Gatling_Athena_C
class AB_Pistol_Gatling_Athena_C : public AB_Pistol_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Reload_QuickReload;                                // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_GatlingSpunUp;                                   // 0xDF8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpinDownSound;                                     // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpinUpSound;                                       // 0xE08(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_0_ChargingTime_780CA4C742F229329AE940B67D540EF1; // 0xE10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0_0__Direction_780CA4C742F229329AE940B67D540EF1; // 0xE14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0_0;                                      // 0xE18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentChargeTime;                                 // 0xE20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Fade_Out_SpinDownSound_Reload;                     // 0xE24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pistol_Gatling_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void OnChargeDown();
	void OnChargeUp();
	void OnEndCharge();
	void OnStartCharge();
	void ReceiveTick(float DeltaSeconds);
	void Reset_SpinDown_Sound();
	void ExecuteUbergraph_B_Pistol_Gatling_Athena(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsReloading_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsReloading_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
