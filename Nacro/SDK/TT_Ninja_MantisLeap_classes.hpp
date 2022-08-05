#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass TT_Ninja_MantisLeap.TT_Ninja_MantisLeap_C
class UTT_Ninja_MantisLeap_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TT_Ninja_MantisLeap_C");
		return Clss;
	}

	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class FText Temp_text_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Ninja_MantisLeap_C* K2Node_DynamicCast_AsGA_Ninja_Mantis_Leap, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable2, bool Temp_bool_Variable, class FText Temp_text_Variable3, class FText K2Node_Select_Default, class FText Temp_text_Variable4, bool Temp_bool_Variable2, class FText K2Node_Select2_Default);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Ninja_MantisLeap_C* K2Node_DynamicCast_AsGA_Ninja_Mantis_Leap, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
