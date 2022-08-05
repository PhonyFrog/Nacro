#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnRep_DestroyBalloon
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DamageBalloon_Athena_C::OnRep_DestroyBalloon(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "OnRep_DestroyBalloon");

	Params::ABP_DamageBalloon_Athena_C_OnRep_DestroyBalloon_Params Parms;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 EventInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_DamageBalloon_Athena_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "ShouldDie");

	Params::ABP_DamageBalloon_Athena_C_ShouldDie_Params Parms;
	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DamageBalloon_Athena_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "UserConstructionScript");

	Params::ABP_DamageBalloon_Athena_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void ABP_DamageBalloon_Athena_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "OnDamageServer");

	Params::ABP_DamageBalloon_Athena_C_OnDamageServer_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.CrateIsGone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DamageBalloon_Athena_C::CrateIsGone()
{
	static auto Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "CrateIsGone");

	Params::ABP_DamageBalloon_Athena_C_CrateIsGone_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.WeHaveLanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DamageBalloon_Athena_C::WeHaveLanded()
{
	static auto Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "WeHaveLanded");

	Params::ABP_DamageBalloon_Athena_C_WeHaveLanded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DamageBalloon_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "ReceiveBeginPlay");

	Params::ABP_DamageBalloon_Athena_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ExecuteUbergraph_BP_DamageBalloon_Athena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetParentActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthenaSupplyDrop_02_C*      K2Node_DynamicCast_AsAthena_Supply_Drop_02                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DamageBalloon_Athena_C::ExecuteUbergraph_BP_DamageBalloon_Athena(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, float CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, class AAthenaSupplyDrop_02_C* K2Node_DynamicCast_AsAthena_Supply_Drop_02, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable)
{
	static auto Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "ExecuteUbergraph_BP_DamageBalloon_Athena");

	Params::ABP_DamageBalloon_Athena_C_ExecuteUbergraph_BP_DamageBalloon_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetParentActor_ReturnValue = CallFunc_GetParentActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Supply_Drop_02 = K2Node_DynamicCast_AsAthena_Supply_Drop_02;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
