#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TT_Ninja_ShadowStance.TT_Ninja_ShadowStance_C.BP_GetTokenizedDescriptionText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     ObjectToDescribe                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                OutDescription                                                   (Parm, OutParm, ZeroConstructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

bool UTT_Ninja_ShadowStance_C::BP_GetTokenizedDescriptionText(class UObject* ObjectToDescribe, struct FGameplayTag& Tag, class UFortTooltipContext* Context, TArray<class FText>* OutDescription, TArray<class FText>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("TT_Ninja_ShadowStance_C", "BP_GetTokenizedDescriptionText");

	Params::UTT_Ninja_ShadowStance_C_BP_GetTokenizedDescriptionText_Params Parms;
	Parms.ObjectToDescribe = ObjectToDescribe;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);
	if (OutDescription != nullptr)
		*OutDescription = Parms.OutDescription;

	return Parms.ReturnValue;

}

// Function TT_Ninja_ShadowStance.TT_Ninja_ShadowStance_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Token                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FText                        ShadowierStanceDamageResist                                      (Edit)
// class FText                        ShadowStanceDamageResist                                         (Edit)
// class FText                        MoveLikeShadowDuration                                           (Edit)
// class FText                        ShadowStanceDuration                                             (Edit)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGA_Ninja_ShadowStance_C*    K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           ()
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable7                                              ()
// class FText                        K2Node_Select3_Default                                           ()
// class FText                        Temp_text_Variable8                                              ()
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable9                                              ()
// class FText                        K2Node_Select4_Default                                           ()
// class FText                        Temp_text_Variable10                                             ()
// class FText                        K2Node_Select5_Default                                           ()
// class FText                        K2Node_Select6_Default                                           ()
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable11                                             ()
// class FText                        K2Node_Select7_Default                                           ()
// class FText                        Temp_text_Variable12                                             ()
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select8_Default                                           ()

bool UTT_Ninja_ShadowStance_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class FText ShadowierStanceDamageResist, class FText ShadowStanceDamageResist, class FText MoveLikeShadowDuration, class FText ShadowStanceDuration, bool Temp_bool_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Ninja_ShadowStance_C* K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable2, class FText K2Node_Select_Default, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable3, class FText K2Node_Select2_Default, bool Temp_bool_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, bool Temp_bool_Variable5, class FText Temp_text_Variable7, class FText K2Node_Select3_Default, class FText Temp_text_Variable8, bool Temp_bool_Variable6, class FText Temp_text_Variable9, class FText K2Node_Select4_Default, class FText Temp_text_Variable10, class FText K2Node_Select5_Default, class FText K2Node_Select6_Default, bool Temp_bool_Variable7, class FText Temp_text_Variable11, class FText K2Node_Select7_Default, class FText Temp_text_Variable12, bool Temp_bool_Variable8, class FText K2Node_Select8_Default)
{
	static auto Func = Class->GetFunction("TT_Ninja_ShadowStance_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::UTT_Ninja_ShadowStance_C_GetTextForTokenFromAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.ShadowierStanceDamageResist = ShadowierStanceDamageResist;
	Parms.ShadowStanceDamageResist = ShadowStanceDamageResist;
	Parms.MoveLikeShadowDuration = MoveLikeShadowDuration;
	Parms.ShadowStanceDuration = ShadowStanceDuration;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance = K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}

// Function TT_Ninja_ShadowStance.TT_Ninja_ShadowStance_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Ninja_ShadowStance_C*    K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTT_Ninja_ShadowStance_C::InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Ninja_ShadowStance_C* K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TT_Ninja_ShadowStance_C", "InitializeAbilityInstanceInternal");

	Params::UTT_Ninja_ShadowStance_C_InitializeAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance = K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
