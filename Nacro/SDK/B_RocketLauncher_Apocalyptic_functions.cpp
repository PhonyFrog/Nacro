#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RocketLauncher_Apocalyptic_C::UserConstructionScript(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Apocalyptic_C", "UserConstructionScript");

	Params::AB_RocketLauncher_Apocalyptic_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.RotateNeedle__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_RocketLauncher_Apocalyptic_C::RotateNeedle__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Apocalyptic_C", "RotateNeedle__FinishedFunc");

	Params::AB_RocketLauncher_Apocalyptic_C_RotateNeedle__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.RotateNeedle__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_RocketLauncher_Apocalyptic_C::RotateNeedle__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Apocalyptic_C", "RotateNeedle__UpdateFunc");

	Params::AB_RocketLauncher_Apocalyptic_C_RotateNeedle__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_RocketLauncher_Apocalyptic_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Apocalyptic_C", "OnWeaponAttached");

	Params::AB_RocketLauncher_Apocalyptic_C_OnWeaponAttached_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RocketLauncher_Apocalyptic_C::Muzzle_Flash_FX(bool Condition)
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Apocalyptic_C", "Muzzle Flash FX");

	Params::AB_RocketLauncher_Apocalyptic_C_Muzzle_Flash_FX_Params Parms;
	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      ReloadStage                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_RocketLauncher_Apocalyptic_C::OnPlayReloadFX(enum class EFortReloadFXState ReloadStage)
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Apocalyptic_C", "OnPlayReloadFX");

	Params::AB_RocketLauncher_Apocalyptic_C_OnPlayReloadFX_Params Parms;
	Parms.ReloadStage = ReloadStage;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.ExecuteUbergraph_B_RocketLauncher_Apocalyptic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Condition                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult2                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EFortReloadFXState      K2Node_Event_ReloadStage                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RocketLauncher_Apocalyptic_C::ExecuteUbergraph_B_RocketLauncher_Apocalyptic(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, bool K2Node_Event_Condition, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult2, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Apocalyptic_C", "ExecuteUbergraph_B_RocketLauncher_Apocalyptic");

	Params::AB_RocketLauncher_Apocalyptic_C_ExecuteUbergraph_B_RocketLauncher_Apocalyptic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.K2Node_Event_Condition = K2Node_Event_Condition;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult2 = CallFunc_K2_SetRelativeRotation_SweepHitResult2;
	Parms.K2Node_Event_ReloadStage = K2Node_Event_ReloadStage;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
