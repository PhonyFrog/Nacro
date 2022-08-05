#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.HandleFallTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaSupplyDrop_02_C::HandleFallTime(float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "HandleFallTime");

	Params::AAthenaSupplyDrop_02_C_HandleFallTime_Params Parms;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue = CallFunc_EvaluateCurveTableRow_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UpdateDropAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FallPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaSupplyDrop_02_C::UpdateDropAudio(float FallPercent, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "UpdateDropAudio");

	Params::AAthenaSupplyDrop_02_C_UpdateDropAudio_Params Parms;
	Parms.FallPercent = FallPercent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.StartDropAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaSupplyDrop_02_C::StartDropAudio(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "StartDropAudio");

	Params::AAthenaSupplyDrop_02_C_StartDropAudio_Params Parms;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OnRep_bLooted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaSupplyDrop_02_C::OnRep_bLooted(bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_IsClosed_Variable)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "OnRep_bLooted");

	Params::AAthenaSupplyDrop_02_C_OnRep_bLooted_Params Parms;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OnRep_NewLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::OnRep_NewLocation()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "OnRep_NewLocation");

	Params::AAthenaSupplyDrop_02_C_OnRep_NewLocation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.GetFallLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetImpactLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AAthenaSupplyDrop_02_C::GetFallLocation(const struct FVector& CallFunc_GetImpactLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "GetFallLocation");

	Params::AAthenaSupplyDrop_02_C_GetFallLocation_Params Parms;
	Parms.CallFunc_GetImpactLocation_ReturnValue = CallFunc_GetImpactLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.GetImpactLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AAthenaSupplyDrop_02_C::GetImpactLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "GetImpactLocation");

	Params::AAthenaSupplyDrop_02_C_GetImpactLocation_Params Parms;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ToggleFallingFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bToggleOn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaSupplyDrop_02_C::ToggleFallingFX(bool bToggleOn)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "ToggleFallingFX");

	Params::AAthenaSupplyDrop_02_C_ToggleFallingFX_Params Parms;
	Parms.bToggleOn = bToggleOn;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ClientPlayDropFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaSupplyDrop_02_C::ClientPlayDropFX(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "ClientPlayDropFX");

	Params::AAthenaSupplyDrop_02_C_ClientPlayDropFX_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnTierDrops
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LootTableIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLootLevel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LootSpawnPosition_OutPos                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemEntry>      CallFunc_PickLootDrops_OutLootToDrop                             (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_PickLootDrops_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemEntry              CallFunc_Array_Get_Item2                                         ()
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPickup*                 CallFunc_K2_SpawnPickupInWorld_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaSupplyDrop_02_C::SpawnTierDrops(int32 LootTableIndex, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetLootLevel_ReturnValue, const struct FVector& CallFunc_LootSpawnPosition_OutPos, class FName CallFunc_Array_Get_Item, TArray<struct FFortItemEntry>& CallFunc_PickLootDrops_OutLootToDrop, bool CallFunc_PickLootDrops_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFortItemEntry& CallFunc_Array_Get_Item2, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "SpawnTierDrops");

	Params::AAthenaSupplyDrop_02_C_SpawnTierDrops_Params Parms;
	Parms.LootTableIndex = LootTableIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetLootLevel_ReturnValue = CallFunc_GetLootLevel_ReturnValue;
	Parms.CallFunc_LootSpawnPosition_OutPos = CallFunc_LootSpawnPosition_OutPos;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_PickLootDrops_OutLootToDrop = CallFunc_PickLootDrops_OutLootToDrop;
	Parms.CallFunc_PickLootDrops_ReturnValue = CallFunc_PickLootDrops_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition = K2Node_DynamicCast_AsFort_World_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_SpawnPickupInWorld_ReturnValue = CallFunc_K2_SpawnPickupInWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LootSpawnPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     OutPos                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaSupplyDrop_02_C::LootSpawnPosition(struct FVector* OutPos, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "LootSpawnPosition");

	Params::AAthenaSupplyDrop_02_C_LootSpawnPosition_Params Parms;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomUnitVector_ReturnValue = CallFunc_RandomUnitVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
	if (OutPos != nullptr)
		*OutPos = Parms.OutPos;

}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.InitDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSupplyDropUnlocks          InUnlocks                                                        (Parm, HasGetValueTypeHash)

void AAthenaSupplyDrop_02_C::InitDrop(const struct FSupplyDropUnlocks& InUnlocks)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "InitDrop");

	Params::AAthenaSupplyDrop_02_C_InitDrop_Params Parms;
	Parms.InUnlocks = InUnlocks;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText AAthenaSupplyDrop_02_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "BlueprintGetInteractionString");

	Params::AAthenaSupplyDrop_02_C_BlueprintGetInteractionString_Params Parms;
	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.Landed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DamageBalloon_Athena_C*  K2Node_DynamicCast_AsBP_Damage_Balloon_Athena                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaSupplyDrop_02_C::Landed(class ABP_DamageBalloon_Athena_C* K2Node_DynamicCast_AsBP_Damage_Balloon_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "Landed");

	Params::AAthenaSupplyDrop_02_C_Landed_Params Parms;
	Parms.K2Node_DynamicCast_AsBP_Damage_Balloon_Athena = K2Node_DynamicCast_AsBP_Damage_Balloon_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.IsAcceptablePositionForPlacement
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     InLocation                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    InRotation                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class AFortDecoTool*               DecoTool                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsCDO                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        OutFailureReason                                                 (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit                                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

bool AAthenaSupplyDrop_02_C::IsAcceptablePositionForPlacement(struct FVector& InLocation, struct FRotator& InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, class FText* OutFailureReason, bool Temp_bool_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, class FText Temp_text_Variable, class FText Temp_text_Variable2, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit, bool CallFunc_BoxTraceSingle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "IsAcceptablePositionForPlacement");

	Params::AAthenaSupplyDrop_02_C_IsAcceptablePositionForPlacement_Params Parms;
	Parms.InLocation = InLocation;
	Parms.InRotation = InRotation;
	Parms.DecoTool = DecoTool;
	Parms.bIsCDO = bIsCDO;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_BoxTraceSingle_OutHit = CallFunc_BoxTraceSingle_OutHit;
	Parms.CallFunc_BoxTraceSingle_ReturnValue = CallFunc_BoxTraceSingle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (OutFailureReason != nullptr)
		*OutFailureReason = Parms.OutFailureReason;

	return Parms.ReturnValue;

}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UpdateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetFallLocation_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetImpactLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AAthenaSupplyDrop_02_C::UpdateLocation(float Time, const struct FVector& CallFunc_GetFallLocation_ReturnValue, const struct FVector& CallFunc_GetImpactLocation_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "UpdateLocation");

	Params::AAthenaSupplyDrop_02_C_UpdateLocation_Params Parms;
	Parms.Time = Time;
	Parms.CallFunc_GetFallLocation_ReturnValue = CallFunc_GetFallLocation_ReturnValue;
	Parms.CallFunc_GetImpactLocation_ReturnValue = CallFunc_GetImpactLocation_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AAthenaSupplyDrop_02_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "BlueprintCanInteract");

	Params::AAthenaSupplyDrop_02_C_BlueprintCanInteract_Params Parms;
	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.TurnOnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewActorEnableCollision                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaSupplyDrop_02_C::TurnOnInteract(bool bNewActorEnableCollision)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "TurnOnInteract");

	Params::AAthenaSupplyDrop_02_C_TurnOnInteract_Params Parms;
	Parms.bNewActorEnableCollision = bNewActorEnableCollision;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaSupplyDrop_02_C::SpawnLoot(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "SpawnLoot");

	Params::AAthenaSupplyDrop_02_C_SpawnLoot_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "UserConstructionScript");

	Params::AAthenaSupplyDrop_02_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::FallingTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "FallingTimeline__FinishedFunc");

	Params::AAthenaSupplyDrop_02_C_FallingTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::FallingTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "FallingTimeline__UpdateFunc");

	Params::AAthenaSupplyDrop_02_C_FallingTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__Almost Landed__EventFunc
// (BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::FallingTimeline__Almost_Landed__EventFunc()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "FallingTimeline__Almost Landed__EventFunc");

	Params::AAthenaSupplyDrop_02_C_FallingTimeline__Almost_Landed__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.FallingTimeline__DisableFlare__EventFunc
// (BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::FallingTimeline__DisableFlare__EventFunc()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "FallingTimeline__DisableFlare__EventFunc");

	Params::AAthenaSupplyDrop_02_C_FallingTimeline__DisableFlare__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LerpFallRate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::LerpFallRate__FinishedFunc()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "LerpFallRate__FinishedFunc");

	Params::AAthenaSupplyDrop_02_C_LerpFallRate__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.LerpFallRate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::LerpFallRate__UpdateFunc()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "LerpFallRate__UpdateFunc");

	Params::AAthenaSupplyDrop_02_C_LerpFallRate__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ImpactFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::ImpactFX()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "ImpactFX");

	Params::AAthenaSupplyDrop_02_C_ImpactFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.OverlappingDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaSupplyDrop_02_C::OverlappingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "OverlappingDied");

	Params::AAthenaSupplyDrop_02_C_OverlappingDied_Params Parms;
	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaSupplyDrop_02_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "BlueprintOnInteract");

	Params::AAthenaSupplyDrop_02_C_BlueprintOnInteract_Params Parms;
	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.PlayDrop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::PlayDrop()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "PlayDrop");

	Params::AAthenaSupplyDrop_02_C_PlayDrop_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SpawnLootDestroyActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::SpawnLootDestroyActor()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "SpawnLootDestroyActor");

	Params::AAthenaSupplyDrop_02_C_SpawnLootDestroyActor_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.PlayDropNewTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::PlayDropNewTime()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "PlayDropNewTime");

	Params::AAthenaSupplyDrop_02_C_PlayDropNewTime_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.SecondaryFallTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::SecondaryFallTick()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "SecondaryFallTick");

	Params::AAthenaSupplyDrop_02_C_SecondaryFallTick_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BalloonDestroyed
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::BalloonDestroyed()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "BalloonDestroyed");

	Params::AAthenaSupplyDrop_02_C_BalloonDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "ReceiveBeginPlay");

	Params::AAthenaSupplyDrop_02_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.StopBeep
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::StopBeep()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "StopBeep");

	Params::AAthenaSupplyDrop_02_C_StopBeep_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AAthenaSupplyDrop_02_C::BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AAthenaSupplyDrop_02_C_BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.DropIntercepted
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::DropIntercepted()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "DropIntercepted");

	Params::AAthenaSupplyDrop_02_C_DropIntercepted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.ExecuteUbergraph_AthenaSupplyDrop_02
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetImpactLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GroundTrace_OutHit                                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_GroundTrace_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue4                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Post_SupplyDrop_Impact_C* CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DamageBalloon_Athena_C*  K2Node_DynamicCast_AsBP_Damage_Balloon_Athena                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue5                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult3                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaSupplyDrop_02_C::ExecuteUbergraph_AthenaSupplyDrop_02(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, const struct FVector& CallFunc_GetImpactLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, const struct FHitResult& CallFunc_GroundTrace_OutHit, bool CallFunc_GroundTrace_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult2, bool CallFunc_K2_SetActorLocation_ReturnValue2, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_Post_SupplyDrop_Impact_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_Lerp_ReturnValue, class ABP_DamageBalloon_Athena_C* K2Node_DynamicCast_AsBP_Damage_Balloon_Athena, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult3, bool CallFunc_K2_SetActorLocation_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "ExecuteUbergraph_AthenaSupplyDrop_02");

	Params::AAthenaSupplyDrop_02_C_ExecuteUbergraph_AthenaSupplyDrop_02_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.CallFunc_GetImpactLocation_ReturnValue = CallFunc_GetImpactLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
	Parms.CallFunc_GroundTrace_OutHit = CallFunc_GroundTrace_OutHit;
	Parms.CallFunc_GroundTrace_ReturnValue = CallFunc_GroundTrace_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue4 = CallFunc_K2_GetActorLocation_ReturnValue4;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_BreakVector_X4 = CallFunc_BreakVector_X4;
	Parms.CallFunc_BreakVector_Y4 = CallFunc_BreakVector_Y4;
	Parms.CallFunc_BreakVector_Z4 = CallFunc_BreakVector_Z4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult2 = CallFunc_K2_SetActorLocation_SweepHitResult2;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue2 = CallFunc_K2_SetActorLocation_ReturnValue2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Damage_Balloon_Athena = K2Node_DynamicCast_AsBP_Damage_Balloon_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue5 = CallFunc_K2_GetActorLocation_ReturnValue5;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult3 = CallFunc_K2_SetActorLocation_SweepHitResult3;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue3 = CallFunc_K2_SetActorLocation_ReturnValue3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue2 = CallFunc_NotEqual_ObjectObject_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue = CallFunc_EvaluateCurveTableRow_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSupplyDrop_02.AthenaSupplyDrop_02_C.CrateLanded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaSupplyDrop_02_C::CrateLanded__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaSupplyDrop_02_C", "CrateLanded__DelegateSignature");

	Params::AAthenaSupplyDrop_02_C_CrateLanded__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
