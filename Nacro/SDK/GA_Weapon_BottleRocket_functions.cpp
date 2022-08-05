#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.SetupBottleRocket
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Spawn_Location                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Spawn_Rotation                                                   (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecHolder_Explosion                                                 (Parm, OutParm)
// struct FFortGameplayEffectContainerSpecBottleRocket_Explosion                                           (Parm, OutParm)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue2            ()
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetAimLocationNearestPawn_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Weapon_BottleRocket_C::SetupBottleRocket(struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, struct FFortGameplayEffectContainerSpec* Holder_Explosion, struct FFortGameplayEffectContainerSpec* BottleRocket_Explosion, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetAimLocationNearestPawn_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "SetupBottleRocket");

	Params::UGA_Weapon_BottleRocket_C_SetupBottleRocket_Params Parms;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue2 = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetAimLocationNearestPawn_ReturnValue = CallFunc_GetAimLocationNearestPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Spawn_Location != nullptr)
		*Spawn_Location = Parms.Spawn_Location;

	if (Spawn_Rotation != nullptr)
		*Spawn_Rotation = Parms.Spawn_Rotation;

	if (Holder_Explosion != nullptr)
		*Holder_Explosion = Parms.Holder_Explosion;

	if (BottleRocket_Explosion != nullptr)
		*BottleRocket_Explosion = Parms.BottleRocket_Explosion;

}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Destroyed_A96E7CE646F59ADF104A45B078D9E99D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_BottleRocket_C::Destroyed_A96E7CE646F59ADF104A45B078D9E99D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "Destroyed_A96E7CE646F59ADF104A45B078D9E99D");

	Params::UGA_Weapon_BottleRocket_C_Destroyed_A96E7CE646F59ADF104A45B078D9E99D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Exploded_A96E7CE646F59ADF104A45B078D9E99D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_BottleRocket_C::Exploded_A96E7CE646F59ADF104A45B078D9E99D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "Exploded_A96E7CE646F59ADF104A45B078D9E99D");

	Params::UGA_Weapon_BottleRocket_C_Exploded_A96E7CE646F59ADF104A45B078D9E99D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Stopped_A96E7CE646F59ADF104A45B078D9E99D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_BottleRocket_C::Stopped_A96E7CE646F59ADF104A45B078D9E99D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "Stopped_A96E7CE646F59ADF104A45B078D9E99D");

	Params::UGA_Weapon_BottleRocket_C_Stopped_A96E7CE646F59ADF104A45B078D9E99D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Bounced_A96E7CE646F59ADF104A45B078D9E99D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_BottleRocket_C::Bounced_A96E7CE646F59ADF104A45B078D9E99D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "Bounced_A96E7CE646F59ADF104A45B078D9E99D");

	Params::UGA_Weapon_BottleRocket_C_Bounced_A96E7CE646F59ADF104A45B078D9E99D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Touched_A96E7CE646F59ADF104A45B078D9E99D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_BottleRocket_C::Touched_A96E7CE646F59ADF104A45B078D9E99D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "Touched_A96E7CE646F59ADF104A45B078D9E99D");

	Params::UGA_Weapon_BottleRocket_C_Touched_A96E7CE646F59ADF104A45B078D9E99D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Created_A96E7CE646F59ADF104A45B078D9E99D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData        ProjectileData                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGA_Weapon_BottleRocket_C::Created_A96E7CE646F59ADF104A45B078D9E99D(struct FProjectileEventData& ProjectileData)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "Created_A96E7CE646F59ADF104A45B078D9E99D");

	Params::UGA_Weapon_BottleRocket_C_Created_A96E7CE646F59ADF104A45B078D9E99D_Params Parms;
	Parms.ProjectileData = ProjectileData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Completed_E681BEBE41400253FC4386BC6916BCCA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Weapon_BottleRocket_C::Completed_E681BEBE41400253FC4386BC6916BCCA(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "Completed_E681BEBE41400253FC4386BC6916BCCA");

	Params::UGA_Weapon_BottleRocket_C_Completed_E681BEBE41400253FC4386BC6916BCCA_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Cancelled_E681BEBE41400253FC4386BC6916BCCA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Weapon_BottleRocket_C::Cancelled_E681BEBE41400253FC4386BC6916BCCA(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "Cancelled_E681BEBE41400253FC4386BC6916BCCA");

	Params::UGA_Weapon_BottleRocket_C_Cancelled_E681BEBE41400253FC4386BC6916BCCA_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Triggered_E681BEBE41400253FC4386BC6916BCCA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Weapon_BottleRocket_C::Triggered_E681BEBE41400253FC4386BC6916BCCA(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "Triggered_E681BEBE41400253FC4386BC6916BCCA");

	Params::UGA_Weapon_BottleRocket_C_Triggered_E681BEBE41400253FC4386BC6916BCCA_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Weapon_BottleRocket_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "K2_ActivateAbility");

	Params::UGA_Weapon_BottleRocket_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.ExecuteUbergraph_GA_Weapon_BottleRocket
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData5                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData4                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData3                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData2                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData                                (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FProjectileEventData        Temp_struct_Variable                                             (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData3                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag3                               (NoDestructor, HasGetValueTypeHash)
// class AB_Prj_BottleRocket_Holder_C*K2Node_DynamicCast_AsB_Prj_Bottle_Rocket_Holder                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData2                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag2                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable2                                            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable3                                            ()
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// struct FProjectileEventData        K2Node_CustomEvent_ProjectileData6                               (ConstParm, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SetupBottleRocket_Spawn_Location                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SetupBottleRocket_Spawn_Rotation                        (IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecCallFunc_SetupBottleRocket_Holder_Explosion                      ()
// struct FFortGameplayEffectContainerSpecCallFunc_SetupBottleRocket_BottleRocket_Explosion                ()
// class UFortAbilityTask_SpawnProjectileAndWait*CallFunc_SpawnProjectileAndWait_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         CallFunc_BeginSpawningActor_SpawnedActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BeginSpawningActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Weapon_BottleRocket_C::ExecuteUbergraph_GA_Weapon_BottleRocket(int32 EntryPoint, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FProjectileEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, class AB_Prj_BottleRocket_Holder_C* K2Node_DynamicCast_AsB_Prj_Bottle_Rocket_Holder, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FGameplayTag& Temp_struct_Variable2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable3, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_SetupBottleRocket_Spawn_Location, const struct FRotator& CallFunc_SetupBottleRocket_Spawn_Rotation, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupBottleRocket_Holder_Explosion, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupBottleRocket_BottleRocket_Explosion, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue2, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("GA_Weapon_BottleRocket_C", "ExecuteUbergraph_GA_Weapon_BottleRocket");

	Params::UGA_Weapon_BottleRocket_C_ExecuteUbergraph_GA_Weapon_BottleRocket_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ProjectileData5 = K2Node_CustomEvent_ProjectileData5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ProjectileData4 = K2Node_CustomEvent_ProjectileData4;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_ProjectileData3 = K2Node_CustomEvent_ProjectileData3;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_ProjectileData2 = K2Node_CustomEvent_ProjectileData2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CustomEvent_ProjectileData = K2Node_CustomEvent_ProjectileData;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CustomEvent_TargetData3 = K2Node_CustomEvent_TargetData3;
	Parms.K2Node_CustomEvent_ApplicationTag3 = K2Node_CustomEvent_ApplicationTag3;
	Parms.K2Node_DynamicCast_AsB_Prj_Bottle_Rocket_Holder = K2Node_DynamicCast_AsB_Prj_Bottle_Rocket_Holder;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_TargetData2 = K2Node_CustomEvent_TargetData2;
	Parms.K2Node_CustomEvent_ApplicationTag2 = K2Node_CustomEvent_ApplicationTag2;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.K2Node_CustomEvent_ProjectileData6 = K2Node_CustomEvent_ProjectileData6;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetupBottleRocket_Spawn_Location = CallFunc_SetupBottleRocket_Spawn_Location;
	Parms.CallFunc_SetupBottleRocket_Spawn_Rotation = CallFunc_SetupBottleRocket_Spawn_Rotation;
	Parms.CallFunc_SetupBottleRocket_Holder_Explosion = CallFunc_SetupBottleRocket_Holder_Explosion;
	Parms.CallFunc_SetupBottleRocket_BottleRocket_Explosion = CallFunc_SetupBottleRocket_BottleRocket_Explosion;
	Parms.CallFunc_SpawnProjectileAndWait_ReturnValue = CallFunc_SpawnProjectileAndWait_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue2 = CallFunc_K2_CommitAbility_ReturnValue2;
	Parms.CallFunc_BeginSpawningActor_SpawnedActor = CallFunc_BeginSpawningActor_SpawnedActor;
	Parms.CallFunc_BeginSpawningActor_ReturnValue = CallFunc_BeginSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
