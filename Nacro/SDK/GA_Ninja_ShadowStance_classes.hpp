#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1AE (0xCB8 - 0xB0A)
// BlueprintGeneratedClass GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C
class UGA_Ninja_ShadowStance_C : public UGAT_NinjaTriggeredAbility_C
{
public:
	uint8                                        Pad_3CF4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB10(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          EventActivation;                                   // 0xB18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventComplete;                                     // 0xB20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_ShadowStance;                                   // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_ShadowStanceActivate;                           // 0xB30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_EdgedWeapons;                                   // 0xB50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_MoveLikeShadow;                                 // 0xB70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         MoveLikeShadow;                                    // 0xB90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_ShadowierStance;                                // 0xB98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShadowierStance;                                   // 0xBB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_ShroudOfTheDragon;                              // 0xBC0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_NowYouSeeMe;                                    // 0xBE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_MantisShroud;                                   // 0xC00(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_DimMak;                                         // 0xC20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_ThreeRiversTechnique;                           // 0xC40(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_LegendarySword;                                 // 0xC60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShroudOfTheDragon;                                 // 0xC80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NowYouSeeMe;                                       // 0xC81(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MantisShroud;                                      // 0xC82(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DimMak;                                            // 0xC83(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ThreeRiversTechnique;                              // 0xC84(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LegendarySword;                                    // 0xC85(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_SneakySneaky;                                   // 0xC88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SneakySneaky;                                      // 0xCA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_SneakySneaky;                                   // 0xCB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Ninja_ShadowStance_C");
		return Clss;
	}

	void SetupAbility(class UAbilitySystemComponent* Ability_System, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue3, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue4, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue5, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface6_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue6, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface7_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue7, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface8_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue8, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface9_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue9);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Ninja_ShadowStance(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
