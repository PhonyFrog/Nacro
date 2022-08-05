#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TT_Ninja_Assassination.TT_Ninja_Assassination_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Token                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FText                        LongSassinDuration                                               (Edit)
// class FText                        AssassinationDuration                                            (Edit)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGA_Ninja_Assassination_C*   K2Node_DynamicCast_AsGA_Ninja_Assassination                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        K2Node_Select2_Default                                           ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select3_Default                                           ()

bool UTT_Ninja_Assassination_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class FText LongSassinDuration, class FText AssassinationDuration, bool Temp_bool_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Ninja_Assassination_C* K2Node_DynamicCast_AsGA_Ninja_Assassination, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable2, class FText K2Node_Select_Default, class FText K2Node_Select2_Default, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable3, class FText K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("TT_Ninja_Assassination_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::UTT_Ninja_Assassination_C_GetTextForTokenFromAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.LongSassinDuration = LongSassinDuration;
	Parms.AssassinationDuration = AssassinationDuration;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGA_Ninja_Assassination = K2Node_DynamicCast_AsGA_Ninja_Assassination;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}

// Function TT_Ninja_Assassination.TT_Ninja_Assassination_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Ninja_Assassination_C*   K2Node_DynamicCast_AsGA_Ninja_Assassination                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTT_Ninja_Assassination_C::InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Ninja_Assassination_C* K2Node_DynamicCast_AsGA_Ninja_Assassination, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TT_Ninja_Assassination_C", "InitializeAbilityInstanceInternal");

	Params::UTT_Ninja_Assassination_C_InitializeAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsGA_Ninja_Assassination = K2Node_DynamicCast_AsGA_Ninja_Assassination;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
