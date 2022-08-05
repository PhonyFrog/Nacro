#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_FireCracker_Gun.B_FireCracker_Gun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FireCracker_Gun_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_FireCracker_Gun_C", "UserConstructionScript");

	Params::AB_FireCracker_Gun_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_FireCracker_Gun.B_FireCracker_Gun_C.springVal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_FireCracker_Gun_C::SpringVal__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_FireCracker_Gun_C", "springVal__FinishedFunc");

	Params::AB_FireCracker_Gun_C_SpringVal__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_FireCracker_Gun.B_FireCracker_Gun_C.springVal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_FireCracker_Gun_C::SpringVal__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_FireCracker_Gun_C", "springVal__UpdateFunc");

	Params::AB_FireCracker_Gun_C_SpringVal__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_FireCracker_Gun.B_FireCracker_Gun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_FireCracker_Gun_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_FireCracker_Gun_C", "ReceiveBeginPlay");

	Params::AB_FireCracker_Gun_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_FireCracker_Gun.B_FireCracker_Gun_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_FireCracker_Gun_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static auto Func = Class->GetFunction("B_FireCracker_Gun_C", "OnPlayWeaponFireFX");

	Params::AB_FireCracker_Gun_C_OnPlayWeaponFireFX_Params Parms;
	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_FireCracker_Gun.B_FireCracker_Gun_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FireCracker_Gun_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_FireCracker_Gun_C", "OnWeaponAttached");

	Params::AB_FireCracker_Gun_C_OnWeaponAttached_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_FireCracker_Gun.B_FireCracker_Gun_C.ExecuteUbergraph_B_FireCracker_Gun
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USK_FireCrackerGun_Skeleton_AnimBlueprint_C*K2Node_DynamicCast_AsSK_Fire_Cracker_Gun_Skeleton_Anim_Blueprint (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_FireCracker_Gun_C::ExecuteUbergraph_B_FireCracker_Gun(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USK_FireCrackerGun_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsSK_Fire_Cracker_Gun_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("B_FireCracker_Gun_C", "ExecuteUbergraph_B_FireCracker_Gun");

	Params::AB_FireCracker_Gun_C_ExecuteUbergraph_B_FireCracker_Gun_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSK_Fire_Cracker_Gun_Skeleton_Anim_Blueprint = K2Node_DynamicCast_AsSK_Fire_Cracker_Gun_Skeleton_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
