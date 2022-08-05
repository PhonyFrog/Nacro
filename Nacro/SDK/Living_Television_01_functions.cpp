#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Living_Television_01.Living_Television_01_C.OnRep_bKillSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALiving_Television_01_C::OnRep_bKillSound()
{
	static auto Func = Class->GetFunction("Living_Television_01_C", "OnRep_bKillSound");

	Params::ALiving_Television_01_C_OnRep_bKillSound_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Living_Television_01.Living_Television_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALiving_Television_01_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Living_Television_01_C", "UserConstructionScript");

	Params::ALiving_Television_01_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Living_Television_01.Living_Television_01_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ALiving_Television_01_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("Living_Television_01_C", "Timeline_0__FinishedFunc");

	Params::ALiving_Television_01_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Living_Television_01.Living_Television_01_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ALiving_Television_01_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("Living_Television_01_C", "Timeline_0__UpdateFunc");

	Params::ALiving_Television_01_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Living_Television_01.Living_Television_01_C.OnLoot
// (Event, Public, BlueprintEvent)
// Parameters:

void ALiving_Television_01_C::OnLoot()
{
	static auto Func = Class->GetFunction("Living_Television_01_C", "OnLoot");

	Params::ALiving_Television_01_C_OnLoot_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Living_Television_01.Living_Television_01_C.OnLootRepeat
// (Event, Public, BlueprintEvent)
// Parameters:

void ALiving_Television_01_C::OnLootRepeat()
{
	static auto Func = Class->GetFunction("Living_Television_01_C", "OnLootRepeat");

	Params::ALiving_Television_01_C_OnLootRepeat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Living_Television_01.Living_Television_01_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void ALiving_Television_01_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("Living_Television_01_C", "OnDeathServer");

	Params::ALiving_Television_01_C_OnDeathServer_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Living_Television_01.Living_Television_01_C.ExecuteUbergraph_Living_Television_01
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetAnimatingMID_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()

void ALiving_Television_01_C::ExecuteUbergraph_Living_Television_01(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable2, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext)
{
	static auto Func = Class->GetFunction("Living_Television_01_C", "ExecuteUbergraph_Living_Television_01");

	Params::ALiving_Television_01_C_ExecuteUbergraph_Living_Television_01_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetAnimatingMID_ReturnValue = CallFunc_GetAnimatingMID_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
