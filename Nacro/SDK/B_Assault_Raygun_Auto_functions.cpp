#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Assault_Raygun_Auto_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "UserConstructionScript");

	Params::AB_Assault_Raygun_Auto_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.WeaponGlowTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Assault_Raygun_Auto_C::WeaponGlowTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "WeaponGlowTimeline__FinishedFunc");

	Params::AB_Assault_Raygun_Auto_C_WeaponGlowTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.WeaponGlowTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Assault_Raygun_Auto_C::WeaponGlowTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "WeaponGlowTimeline__UpdateFunc");

	Params::AB_Assault_Raygun_Auto_C_WeaponGlowTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.KnobSpeedupTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Assault_Raygun_Auto_C::KnobSpeedupTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "KnobSpeedupTimeline__FinishedFunc");

	Params::AB_Assault_Raygun_Auto_C_KnobSpeedupTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.KnobSpeedupTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Assault_Raygun_Auto_C::KnobSpeedupTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "KnobSpeedupTimeline__UpdateFunc");

	Params::AB_Assault_Raygun_Auto_C_KnobSpeedupTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Assault_Raygun_Auto_C::OnStopWeaponFireFX()
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "OnStopWeaponFireFX");

	Params::AB_Assault_Raygun_Auto_C_OnStopWeaponFireFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Assault_Raygun_Auto_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "ReceiveBeginPlay");

	Params::AB_Assault_Raygun_Auto_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_Raygun_Auto_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "OnPlayWeaponFireFX");

	Params::AB_Assault_Raygun_Auto_C_OnPlayWeaponFireFX_Params Parms;
	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      ReloadStage                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Assault_Raygun_Auto_C::OnPlayReloadFX(enum class EFortReloadFXState ReloadStage)
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "OnPlayReloadFX");

	Params::AB_Assault_Raygun_Auto_C_OnPlayReloadFX_Params Parms;
	Parms.ReloadStage = ReloadStage;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.ExecuteUbergraph_B_Assault_Raygun_Auto
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortReloadFXState      K2Node_Event_ReloadStage                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_Raygun_Auto_C::ExecuteUbergraph_B_Assault_Raygun_Auto(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_Lerp_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("B_Assault_Raygun_Auto_C", "ExecuteUbergraph_B_Assault_Raygun_Auto");

	Params::AB_Assault_Raygun_Auto_C_ExecuteUbergraph_B_Assault_Raygun_Auto_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_Event_ReloadStage = K2Node_Event_ReloadStage;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
