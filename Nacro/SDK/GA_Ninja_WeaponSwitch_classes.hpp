#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x4E (0xB58 - 0xB0A)
// BlueprintGeneratedClass GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C
class UGA_Ninja_WeaponSwitch_C : public UGAT_NinjaTriggeredAbility_C
{
public:
	uint8                                        Pad_388C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB10(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 TC_IsEdged;                                        // 0xB18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_IsAssassinate;                                  // 0xB38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Ninja_WeaponSwitch_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Ninja_WeaponSwitch(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon2, bool K2Node_DynamicCast_bSuccess2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
