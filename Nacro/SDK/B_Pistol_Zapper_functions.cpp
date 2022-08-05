#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.DisableAllVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pistol_Zapper_C::DisableAllVisuals()
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "DisableAllVisuals");

	Params::AB_Pistol_Zapper_C_DisableAllVisuals_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.StopAndResetTimeline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pistol_Zapper_C::StopAndResetTimeline()
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "StopAndResetTimeline");

	Params::AB_Pistol_Zapper_C_StopAndResetTimeline_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.UpdateVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ammo_Check                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pistol_Zapper_C::UpdateVisuals(bool Ammo_Check, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "UpdateVisuals");

	Params::AB_Pistol_Zapper_C_UpdateVisuals_Params Parms;
	Parms.Ammo_Check = Ammo_Check;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pistol_Zapper_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "UserConstructionScript");

	Params::AB_Pistol_Zapper_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.Scale Glow Up__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Pistol_Zapper_C::Scale_Glow_Up__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "Scale Glow Up__FinishedFunc");

	Params::AB_Pistol_Zapper_C_Scale_Glow_Up__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.Scale Glow Up__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Pistol_Zapper_C::Scale_Glow_Up__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "Scale Glow Up__UpdateFunc");

	Params::AB_Pistol_Zapper_C_Scale_Glow_Up__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.Scale Glow Up__Event__EventFunc
// (BlueprintEvent)
// Parameters:

void AB_Pistol_Zapper_C::Scale_Glow_Up__Event__EventFunc()
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "Scale Glow Up__Event__EventFunc");

	Params::AB_Pistol_Zapper_C_Scale_Glow_Up__Event__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pistol_Zapper_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "OnPlayWeaponFireFX");

	Params::AB_Pistol_Zapper_C_OnPlayWeaponFireFX_Params Parms;
	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Pistol_Zapper_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "ReceiveBeginPlay");

	Params::AB_Pistol_Zapper_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.Muzzle Play Reload FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      Selection                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pistol_Zapper_C::Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection)
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "Muzzle Play Reload FX");

	Params::AB_Pistol_Zapper_C_Muzzle_Play_Reload_FX_Params Parms;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.OnAmmoCountChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Pistol_Zapper_C::OnAmmoCountChanged()
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "OnAmmoCountChanged");

	Params::AB_Pistol_Zapper_C_OnAmmoCountChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Zapper.B_Pistol_Zapper_C.ExecuteUbergraph_B_Pistol_Zapper
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetWeaponStatHandle_ReturnValue                         (NoDestructor)
// struct FFortRangedWeaponStats      CallFunc_GetRangedWeaponStatsRow_OutRow                          ()
// bool                               CallFunc_GetRangedWeaponStatsRow_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetWeaponStatHandle_ReturnValue2                        (NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRangedWeaponStats      CallFunc_GetRangedWeaponStatsRow_OutRow2                         ()
// bool                               CallFunc_GetRangedWeaponStatsRow_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortReloadFXState      K2Node_Event_Selection                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         CallFunc_GetWeaponStatHandle_ReturnValue3                        (NoDestructor)
// struct FFortRangedWeaponStats      CallFunc_GetRangedWeaponStatsRow_OutRow3                         ()
// bool                               CallFunc_GetRangedWeaponStatsRow_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeToNextFire_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetWeaponStatHandle_ReturnValue4                        (NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRangedWeaponStats      CallFunc_GetRangedWeaponStatsRow_OutRow4                         ()
// bool                               CallFunc_GetRangedWeaponStatsRow_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pistol_Zapper_C::ExecuteUbergraph_B_Pistol_Zapper(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue, const struct FFortRangedWeaponStats& CallFunc_GetRangedWeaponStatsRow_OutRow, bool CallFunc_GetRangedWeaponStatsRow_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue3, int32 CallFunc_GetMagazineAmmoCount_ReturnValue2, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue2, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FFortRangedWeaponStats& CallFunc_GetRangedWeaponStatsRow_OutRow2, bool CallFunc_GetRangedWeaponStatsRow_ReturnValue2, int32 CallFunc_SelectInt_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, enum class EFortReloadFXState K2Node_Event_Selection, bool K2Node_SwitchEnum_CmpSuccess, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue3, const struct FFortRangedWeaponStats& CallFunc_GetRangedWeaponStatsRow_OutRow3, bool CallFunc_GetRangedWeaponStatsRow_ReturnValue3, int32 CallFunc_SelectInt_ReturnValue3, int32 CallFunc_GetMagazineAmmoCount_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, float CallFunc_GetTimeToNextFire_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue4, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FFortRangedWeaponStats& CallFunc_GetRangedWeaponStatsRow_OutRow4, bool CallFunc_GetRangedWeaponStatsRow_ReturnValue4, float K2Node_Select_Default, int32 CallFunc_SelectInt_ReturnValue4, bool CallFunc_GreaterEqual_IntInt_ReturnValue3, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_GetMagazineAmmoCount_ReturnValue4, bool CallFunc_GreaterEqual_IntInt_ReturnValue4, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_Pistol_Zapper_C", "ExecuteUbergraph_B_Pistol_Zapper");

	Params::AB_Pistol_Zapper_C_ExecuteUbergraph_B_Pistol_Zapper_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetWeaponStatHandle_ReturnValue = CallFunc_GetWeaponStatHandle_ReturnValue;
	Parms.CallFunc_GetRangedWeaponStatsRow_OutRow = CallFunc_GetRangedWeaponStatsRow_OutRow;
	Parms.CallFunc_GetRangedWeaponStatsRow_ReturnValue = CallFunc_GetRangedWeaponStatsRow_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue = CallFunc_GetMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue2 = CallFunc_GetMagazineAmmoCount_ReturnValue2;
	Parms.CallFunc_GetWeaponStatHandle_ReturnValue2 = CallFunc_GetWeaponStatHandle_ReturnValue2;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.CallFunc_GetRangedWeaponStatsRow_OutRow2 = CallFunc_GetRangedWeaponStatsRow_OutRow2;
	Parms.CallFunc_GetRangedWeaponStatsRow_ReturnValue2 = CallFunc_GetRangedWeaponStatsRow_ReturnValue2;
	Parms.CallFunc_SelectInt_ReturnValue2 = CallFunc_SelectInt_ReturnValue2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_Event_Selection = K2Node_Event_Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWeaponStatHandle_ReturnValue3 = CallFunc_GetWeaponStatHandle_ReturnValue3;
	Parms.CallFunc_GetRangedWeaponStatsRow_OutRow3 = CallFunc_GetRangedWeaponStatsRow_OutRow3;
	Parms.CallFunc_GetRangedWeaponStatsRow_ReturnValue3 = CallFunc_GetRangedWeaponStatsRow_ReturnValue3;
	Parms.CallFunc_SelectInt_ReturnValue3 = CallFunc_SelectInt_ReturnValue3;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue3 = CallFunc_GetMagazineAmmoCount_ReturnValue3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue2 = CallFunc_GreaterEqual_IntInt_ReturnValue2;
	Parms.CallFunc_GetTimeToNextFire_ReturnValue = CallFunc_GetTimeToNextFire_ReturnValue;
	Parms.CallFunc_GetWeaponStatHandle_ReturnValue4 = CallFunc_GetWeaponStatHandle_ReturnValue4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRangedWeaponStatsRow_OutRow4 = CallFunc_GetRangedWeaponStatsRow_OutRow4;
	Parms.CallFunc_GetRangedWeaponStatsRow_ReturnValue4 = CallFunc_GetRangedWeaponStatsRow_ReturnValue4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectInt_ReturnValue4 = CallFunc_SelectInt_ReturnValue4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue3 = CallFunc_GreaterEqual_IntInt_ReturnValue3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue4 = CallFunc_GetMagazineAmmoCount_ReturnValue4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue4 = CallFunc_GreaterEqual_IntInt_ReturnValue4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
