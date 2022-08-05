#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass TT_Ninja_ShadowStance.TT_Ninja_ShadowStance_C
class UTT_Ninja_ShadowStance_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TT_Ninja_ShadowStance_C");
		return Clss;
	}

	bool BP_GetTokenizedDescriptionText(class UObject* ObjectToDescribe, struct FGameplayTag& Tag, class UFortTooltipContext* Context, TArray<class FText>* OutDescription, TArray<class FText>& K2Node_MakeArray_Array);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class FText ShadowierStanceDamageResist, class FText ShadowStanceDamageResist, class FText MoveLikeShadowDuration, class FText ShadowStanceDuration, bool Temp_bool_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Ninja_ShadowStance_C* K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable2, class FText K2Node_Select_Default, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable3, class FText K2Node_Select2_Default, bool Temp_bool_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, bool Temp_bool_Variable5, class FText Temp_text_Variable7, class FText K2Node_Select3_Default, class FText Temp_text_Variable8, bool Temp_bool_Variable6, class FText Temp_text_Variable9, class FText K2Node_Select4_Default, class FText Temp_text_Variable10, class FText K2Node_Select5_Default, class FText K2Node_Select6_Default, bool Temp_bool_Variable7, class FText Temp_text_Variable11, class FText K2Node_Select7_Default, class FText Temp_text_Variable12, bool Temp_bool_Variable8, class FText K2Node_Select8_Default);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Ninja_ShadowStance_C* K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
