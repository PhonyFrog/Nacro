#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass TT_Ninja_Assassination.TT_Ninja_Assassination_C
class UTT_Ninja_Assassination_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TT_Ninja_Assassination_C");
		return Clss;
	}

	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class FText LongSassinDuration, class FText AssassinationDuration, bool Temp_bool_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Ninja_Assassination_C* K2Node_DynamicCast_AsGA_Ninja_Assassination, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable2, class FText K2Node_Select_Default, class FText K2Node_Select2_Default, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable3, class FText K2Node_Select3_Default);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Ninja_Assassination_C* K2Node_DynamicCast_AsGA_Ninja_Assassination, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
