#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x31 (0xE19 - 0xDE8)
// BlueprintGeneratedClass B_FireCracker_Gun.B_FireCracker_Gun_C
class AB_FireCracker_Gun_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Pistol_Firecracker_FuseLight;                    // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SpringVal_springValCurve_D2668C68430C8B91DB30A5B63C821A2F; // 0xDF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SpringVal__Direction_D2668C68430C8B91DB30A5B63C821A2F; // 0xDFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SpringVal;                                         // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DataRow;                                           // 0xE08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         CanPlay_;                                          // 0xE18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_FireCracker_Gun_C");
		return Clss;
	}

	void UserConstructionScript();
	void SpringVal__FinishedFunc();
	void SpringVal__UpdateFunc();
	void ReceiveBeginPlay();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnWeaponAttached();
	void ExecuteUbergraph_B_FireCracker_Gun(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USK_FireCrackerGun_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsSK_Fire_Cracker_Gun_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
