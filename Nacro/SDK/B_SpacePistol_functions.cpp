#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_SpacePistol.B_SpacePistol_C.SetReloadVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetBulletsPerClip_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRemainingAmmo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBulletsPerClip_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpacePistol_C::SetReloadVariables(int32 CallFunc_GetBulletsPerClip_ReturnValue, int32 CallFunc_GetRemainingAmmo_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_GetBulletsPerClip_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "SetReloadVariables");

	Params::AB_SpacePistol_C_SetReloadVariables_Params Parms;
	Parms.CallFunc_GetBulletsPerClip_ReturnValue = CallFunc_GetBulletsPerClip_ReturnValue;
	Parms.CallFunc_GetRemainingAmmo_ReturnValue = CallFunc_GetRemainingAmmo_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetBulletsPerClip_ReturnValue2 = CallFunc_GetBulletsPerClip_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue = CallFunc_GetMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue4 = CallFunc_Conv_IntToFloat_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.SetAmmoBarVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetRemainingAmmo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBulletsPerClip_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBulletsPerClip_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpacePistol_C::SetAmmoBarVariables(int32 CallFunc_GetRemainingAmmo_ReturnValue, int32 CallFunc_GetBulletsPerClip_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetBulletsPerClip_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue2, int32 CallFunc_GetMagazineAmmoCount_ReturnValue)
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "SetAmmoBarVariables");

	Params::AB_SpacePistol_C_SetAmmoBarVariables_Params Parms;
	Parms.CallFunc_GetRemainingAmmo_ReturnValue = CallFunc_GetRemainingAmmo_ReturnValue;
	Parms.CallFunc_GetBulletsPerClip_ReturnValue = CallFunc_GetBulletsPerClip_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetBulletsPerClip_ReturnValue2 = CallFunc_GetBulletsPerClip_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue3 = CallFunc_Conv_IntToFloat_ReturnValue3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue4 = CallFunc_Conv_IntToFloat_ReturnValue4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue = CallFunc_GetMagazineAmmoCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpacePistol_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "UserConstructionScript");

	Params::AB_SpacePistol_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.ScaleBarBetweenClipCounts__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::ScaleBarBetweenClipCounts__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "ScaleBarBetweenClipCounts__FinishedFunc");

	Params::AB_SpacePistol_C_ScaleBarBetweenClipCounts__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.ScaleBarBetweenClipCounts__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::ScaleBarBetweenClipCounts__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "ScaleBarBetweenClipCounts__UpdateFunc");

	Params::AB_SpacePistol_C_ScaleBarBetweenClipCounts__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.ReloadLERPstate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::ReloadLERPstate__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "ReloadLERPstate__FinishedFunc");

	Params::AB_SpacePistol_C_ReloadLERPstate__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.ReloadLERPstate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::ReloadLERPstate__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "ReloadLERPstate__UpdateFunc");

	Params::AB_SpacePistol_C_ReloadLERPstate__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.EmptyLERPstate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::EmptyLERPstate__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "EmptyLERPstate__FinishedFunc");

	Params::AB_SpacePistol_C_EmptyLERPstate__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.EmptyLERPstate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::EmptyLERPstate__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "EmptyLERPstate__UpdateFunc");

	Params::AB_SpacePistol_C_EmptyLERPstate__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.ScaleBarReload__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::ScaleBarReload__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "ScaleBarReload__FinishedFunc");

	Params::AB_SpacePistol_C_ScaleBarReload__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.ScaleBarReload__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::ScaleBarReload__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "ScaleBarReload__UpdateFunc");

	Params::AB_SpacePistol_C_ScaleBarReload__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_SpacePistol_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "OnPlayWeaponFireFX");

	Params::AB_SpacePistol_C_OnPlayWeaponFireFX_Params Parms;
	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "ReceiveBeginPlay");

	Params::AB_SpacePistol_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      ReloadStage                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpacePistol_C::OnPlayReloadFX(enum class EFortReloadFXState ReloadStage)
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "OnPlayReloadFX");

	Params::AB_SpacePistol_C_OnPlayReloadFX_Params Parms;
	Parms.ReloadStage = ReloadStage;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.OnAmmoCountChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::OnAmmoCountChanged()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "OnAmmoCountChanged");

	Params::AB_SpacePistol_C_OnAmmoCountChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.ClearEmptyLERP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_SpacePistol_C::ClearEmptyLERP()
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "ClearEmptyLERP");

	Params::AB_SpacePistol_C_ClearEmptyLERP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.OnPlayImpactFX
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EPhysicalSurface        ImpactPhysicalSurface                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    SpawnedPSC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpacePistol_C::OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC)
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "OnPlayImpactFX");

	Params::AB_SpacePistol_C_OnPlayImpactFX_Params Parms;
	Parms.HitResult = HitResult;
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_SpacePistol.B_SpacePistol_C.ExecuteUbergraph_B_SpacePistol
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EPhysicalSurface        K2Node_Event_ImpactPhysicalSurface                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    K2Node_Event_SpawnedPSC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortReloadFXState      K2Node_Event_ReloadStage                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRemainingAmmo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetReloadTime_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue2                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SpacePistol_C::ExecuteUbergraph_B_SpacePistol(int32 EntryPoint, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UParticleSystemComponent* K2Node_Event_SpawnedPSC, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_GetRemainingAmmo_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetReloadTime_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue2, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue3, float CallFunc_Lerp_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_SpacePistol_C", "ExecuteUbergraph_B_SpacePistol");

	Params::AB_SpacePistol_C_ExecuteUbergraph_B_SpacePistol_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_ImpactPhysicalSurface = K2Node_Event_ImpactPhysicalSurface;
	Parms.K2Node_Event_SpawnedPSC = K2Node_Event_SpawnedPSC;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_Event_ReloadStage = K2Node_Event_ReloadStage;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue = CallFunc_GetMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetRemainingAmmo_ReturnValue = CallFunc_GetRemainingAmmo_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetReloadTime_ReturnValue = CallFunc_GetReloadTime_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue2 = CallFunc_LinearColorLerp_ReturnValue2;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue2 = CallFunc_Conv_LinearColorToVector_ReturnValue2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
