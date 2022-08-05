#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue3                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Ninja_Assassination_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue3)
{
	static auto Func = Class->GetFunction("GA_Ninja_Assassination_C", "SetupAbility");

	Params::UGA_Ninja_Assassination_C_SetupAbility_Params Parms;
	Parms.AbilitySystem = AbilitySystem;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue3 = CallFunc_HasAllMatchingGameplayTags_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.ApplyStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        GameplayTags                                                     (Edit, ZeroConstructor)
// bool                               bAssassin                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2              (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3              (NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_Assassination_C::ApplyStack(const TArray<struct FGameplayTag>& GameplayTags, bool bAssassin, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3)
{
	static auto Func = Class->GetFunction("GA_Ninja_Assassination_C", "ApplyStack");

	Params::UGA_Ninja_Assassination_C_ApplyStack_Params Parms;
	Parms.GameplayTags = GameplayTags;
	Parms.bAssassin = bAssassin;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllTags_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Ninja_Assassination_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_HasAllTags_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("GA_Ninja_Assassination_C", "K2_ShouldAbilityRespondToEvent");

	Params::UGA_Ninja_Assassination_C_K2_ShouldAbilityRespondToEvent_Params Parms;
	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.CallFunc_HasAllTags_ReturnValue = CallFunc_HasAllTags_ReturnValue;
	Parms.CallFunc_HasAllTags_ReturnValue2 = CallFunc_HasAllTags_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_Ninja_Assassination_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Ninja_Assassination_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Ninja_Assassination_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.ExecuteUbergraph_GA_Ninja_Assassination
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGA_Ninja_Assassination_C::ExecuteUbergraph_GA_Ninja_Assassination(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static auto Func = Class->GetFunction("GA_Ninja_Assassination_C", "ExecuteUbergraph_GA_Ninja_Assassination");

	Params::UGA_Ninja_Assassination_C_ExecuteUbergraph_GA_Ninja_Assassination_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
