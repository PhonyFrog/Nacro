#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ChestSkipToResultFocusTimelineStops
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::ChestSkipToResultFocusTimelineStops(bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue2, bool CallFunc_IsPlaying_ReturnValue3, bool CallFunc_IsPlaying_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "ChestSkipToResultFocusTimelineStops");

	Params::ABP_PlayerSpawnTeleportPAd_C_ChestSkipToResultFocusTimelineStops_Params Parms;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue2 = CallFunc_IsPlaying_ReturnValue2;
	Parms.CallFunc_IsPlaying_ReturnValue3 = CallFunc_IsPlaying_ReturnValue3;
	Parms.CallFunc_IsPlaying_ReturnValue4 = CallFunc_IsPlaying_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SpawnLootChests
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  NextChestSpawnTransform                                          (Edit, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue3                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::SpawnLootChests(const struct FTransform& NextChestSpawnTransform, int32 Temp_int_Array_Index_Variable, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "SpawnLootChests");

	Params::ABP_PlayerSpawnTeleportPAd_C_SpawnLootChests_Params Parms;
	Parms.NextChestSpawnTransform = NextChestSpawnTransform;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue3 = CallFunc_Add_VectorVector_ReturnValue3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
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
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.InitializeCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::InitializeCamera(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACameraActor* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "InitializeCamera");

	Params::ABP_PlayerSpawnTeleportPAd_C_InitializeCamera_Params Parms;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ForceThirdPerson
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::ForceThirdPerson(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "ForceThirdPerson");

	Params::ABP_PlayerSpawnTeleportPAd_C_ForceThirdPerson_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.InitPlayerData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::InitPlayerData()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "InitPlayerData");

	Params::ABP_PlayerSpawnTeleportPAd_C_InitPlayerData_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.StartDroneSpawnOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::StartDroneSpawnOut(class AFortPlayerPawn* PlayerPawn, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "StartDroneSpawnOut");

	Params::ABP_PlayerSpawnTeleportPAd_C_StartDroneSpawnOut_Params Parms;
	Parms.PlayerPawn = PlayerPawn;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SetBannerVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::SetBannerVisibility(bool bVisible, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* K2Node_Select_Default, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "SetBannerVisibility");

	Params::ABP_PlayerSpawnTeleportPAd_C_SetBannerVisibility_Params Parms;
	Parms.bVisible = bVisible;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.CreateBannerMID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIdx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::CreateBannerMID(int32 PlayerIdx, int32 Temp_int_Variable, class UStaticMeshComponent* K2Node_Select_Default, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FSpawnTeleportPadPlayerData& K2Node_SetFieldsInStruct_StructOut)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "CreateBannerMID");

	Params::ABP_PlayerSpawnTeleportPAd_C_CreateBannerMID_Params Parms;
	Parms.PlayerIdx = PlayerIdx;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnReceivedPlayerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult2                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult3                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult4                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsNewRewardFlowEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PlayerSpawnTeleportPAd_C::OnReceivedPlayerData(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult4, bool CallFunc_IsNewRewardFlowEnabled_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "OnReceivedPlayerData");

	Params::ABP_PlayerSpawnTeleportPAd_C_OnReceivedPlayerData_Params Parms;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult2 = CallFunc_K2_SetRelativeLocation_SweepHitResult2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult3 = CallFunc_K2_SetRelativeLocation_SweepHitResult3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult4 = CallFunc_K2_SetRelativeLocation_SweepHitResult4;
	Parms.CallFunc_IsNewRewardFlowEnabled_ReturnValue = CallFunc_IsNewRewardFlowEnabled_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SetBannerMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerState*            K2Node_DynamicCast_AsFort_Player_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::SetBannerMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "SetBannerMaterials");

	Params::ABP_PlayerSpawnTeleportPAd_C_SetBannerMaterials_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State = K2Node_DynamicCast_AsFort_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.InitBannerMIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::InitBannerMIDs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "InitBannerMIDs");

	Params::ABP_PlayerSpawnTeleportPAd_C_InitBannerMIDs_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.GetPlayerIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::GetPlayerIndex(class AFortPlayerPawn* PlayerPawn, int32* PlayerIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "GetPlayerIndex");

	Params::ABP_PlayerSpawnTeleportPAd_C_GetPlayerIndex_Params Parms;
	Parms.PlayerPawn = PlayerPawn;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.StartSpawnInSequenceForPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortNewPlayerParams*        NewPlayerParams                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::StartSpawnInSequenceForPlayer(class UFortNewPlayerParams* NewPlayerParams)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "StartSpawnInSequenceForPlayer");

	Params::ABP_PlayerSpawnTeleportPAd_C_StartSpawnInSequenceForPlayer_Params Parms;
	Parms.NewPlayerParams = NewPlayerParams;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TriggerLevelUpEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             LevelingUpPawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerPawn*>     CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns                (ZeroConstructor, ReferenceParm)
// class AFortPlayerPawn*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::TriggerLevelUpEffect(class AFortPlayerPawn* LevelingUpPawn, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, class AFortPlayerPawn* CallFunc_Array_Get_Item, class UParticleSystemComponent* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TriggerLevelUpEffect");

	Params::ABP_PlayerSpawnTeleportPAd_C_TriggerLevelUpEffect_Params Parms;
	Parms.LevelingUpPawn = LevelingUpPawn;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns = CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SpawnAllDrones
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::SpawnAllDrones(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "SpawnAllDrones");

	Params::ABP_PlayerSpawnTeleportPAd_C_SpawnAllDrones_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.GetDroneTeleportTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              PlayerIdx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  DroneTransform                                                   (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetPlayerTeleportTransform_Teleport_Transform           (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::GetDroneTeleportTransform(int32 PlayerIdx, struct FTransform* DroneTransform, const struct FTransform& CallFunc_GetPlayerTeleportTransform_Teleport_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "GetDroneTeleportTransform");

	Params::ABP_PlayerSpawnTeleportPAd_C_GetDroneTeleportTransform_Params Parms;
	Parms.PlayerIdx = PlayerIdx;
	Parms.CallFunc_GetPlayerTeleportTransform_Teleport_Transform = CallFunc_GetPlayerTeleportTransform_Teleport_Transform;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (DroneTransform != nullptr)
		*DroneTransform = Parms.DroneTransform;

}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.SpawnDrone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetDroneTeleportTransform_DroneTransform                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class ABP_VictoryDrone_C*          CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item2                                         (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::SpawnDrone(int32 PlayerIndex, const struct FTransform& CallFunc_GetDroneTeleportTransform_DroneTransform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FSpawnTeleportPadPlayerData& K2Node_SetFieldsInStruct_StructOut, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "SpawnDrone");

	Params::ABP_PlayerSpawnTeleportPAd_C_SpawnDrone_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_GetDroneTeleportTransform_DroneTransform = CallFunc_GetDroneTeleportTransform_DroneTransform;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ClearArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::ClearArea(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "ClearArea");

	Params::ABP_PlayerSpawnTeleportPAd_C_ClearArea_Params Parms;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ViewCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::ViewCamera(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "ViewCamera");

	Params::ABP_PlayerSpawnTeleportPAd_C_ViewCamera_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.EnableLocalPlayerInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingEmote_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::EnableLocalPlayerInput(bool bEnable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPlayingEmote_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "EnableLocalPlayerInput");

	Params::ABP_PlayerSpawnTeleportPAd_C_EnableLocalPlayerInput_Params Parms;
	Parms.bEnable = bEnable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsPlayingEmote_ReturnValue = CallFunc_IsPlayingEmote_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TeleportAllPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFortPlayerPawn*>     PlayerPawns                                                      (Edit, ZeroConstructor, DisableEditOnTemplate)
// TArray<class AFortPlayerPawn*>     CallFunc_GetPossessedPlayerPawnsByID_SortedPlayerPawns           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNewRewardFlowEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerPawn*>     CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue        (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetPlayerTeleportTransform_Teleport_Transform           (IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item2                                         (HasGetValueTypeHash)
// struct FSpawnTeleportPadPlayerData K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::TeleportAllPlayers(const TArray<class AFortPlayerPawn*>& PlayerPawns, TArray<class AFortPlayerPawn*>& CallFunc_GetPossessedPlayerPawnsByID_SortedPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsNewRewardFlowEnabled_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FTransform& CallFunc_GetPlayerTeleportTransform_Teleport_Transform, class AFortPlayerPawn* CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AController* CallFunc_GetController_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item2, const struct FSpawnTeleportPadPlayerData& K2Node_SetFieldsInStruct_StructOut)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TeleportAllPlayers");

	Params::ABP_PlayerSpawnTeleportPAd_C_TeleportAllPlayers_Params Parms;
	Parms.PlayerPawns = PlayerPawns;
	Parms.CallFunc_GetPossessedPlayerPawnsByID_SortedPlayerPawns = CallFunc_GetPossessedPlayerPawnsByID_SortedPlayerPawns;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsNewRewardFlowEnabled_ReturnValue = CallFunc_IsNewRewardFlowEnabled_ReturnValue;
	Parms.CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue = CallFunc_AuthorityGetFortPossessedPlayerPawns_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerTeleportTransform_Teleport_Transform = CallFunc_GetPlayerTeleportTransform_Teleport_Transform;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.GetPlayerTeleportTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Teleport_Transform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::GetPlayerTeleportTransform(int32 PlayerIndex, struct FTransform* Teleport_Transform, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "GetPlayerTeleportTransform");

	Params::ABP_PlayerSpawnTeleportPAd_C_GetPlayerTeleportTransform_Params Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Teleport_Transform != nullptr)
		*Teleport_Transform = Parms.Teleport_Transform;

}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "UserConstructionScript");

	Params::ABP_PlayerSpawnTeleportPAd_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestCameraIntro__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestCameraIntro__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestCameraIntro__FinishedFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestCameraIntro__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestCameraIntro__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestCameraIntro__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestCameraIntro__UpdateFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestCameraIntro__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestAddBadge__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestAddBadge__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestAddBadge__FinishedFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestAddBadge__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestAddBadge__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestAddBadge__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestAddBadge__UpdateFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestAddBadge__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestProgression__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestProgression__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestProgression__FinishedFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestProgression__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestProgression__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestProgression__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestProgression__UpdateFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestProgression__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestProgression__PrimaryChestHide__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestProgression__PrimaryChestHide__EventFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestProgression__PrimaryChestHide__EventFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestProgression__PrimaryChestHide__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestFinalFocus__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestFinalFocus__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestFinalFocus__FinishedFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestFinalFocus__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestFinalFocus__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestFinalFocus__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestFinalFocus__UpdateFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestFinalFocus__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestCameraOutro__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestCameraOutro__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestCameraOutro__FinishedFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestCameraOutro__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestCameraOutro__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestCameraOutro__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestCameraOutro__UpdateFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestCameraOutro__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestIntroNextChest__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestIntroNextChest__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestIntroNextChest__FinishedFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestIntroNextChest__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestIntroNextChest__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestIntroNextChest__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestIntroNextChest__UpdateFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestIntroNextChest__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestOutro__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestOutro__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestOutro__FinishedFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestOutro__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineChestOutro__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineChestOutro__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineChestOutro__UpdateFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineChestOutro__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineCameraIntro__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineCameraIntro__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineCameraIntro__FinishedFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineCameraIntro__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.TimelineCameraIntro__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::TimelineCameraIntro__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "TimelineCameraIntro__UpdateFunc");

	Params::ABP_PlayerSpawnTeleportPAd_C_TimelineCameraIntro__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnHomeTeleporterBound
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OldHomeActor                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::OnHomeTeleporterBound(class AFortPlayerPawn* PlayerPawn, class AActor* OldHomeActor)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "OnHomeTeleporterBound");

	Params::ABP_PlayerSpawnTeleportPAd_C_OnHomeTeleporterBound_Params Parms;
	Parms.PlayerPawn = PlayerPawn;
	Parms.OldHomeActor = OldHomeActor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnHomeTeleporterBoundServer
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OldHomeActor                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::OnHomeTeleporterBoundServer(class AFortPlayerPawn* PlayerPawn, class AActor* OldHomeActor)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "OnHomeTeleporterBoundServer");

	Params::ABP_PlayerSpawnTeleportPAd_C_OnHomeTeleporterBoundServer_Params Parms;
	Parms.PlayerPawn = PlayerPawn;
	Parms.OldHomeActor = OldHomeActor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnHomeTeleporterUnbound
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewHomeActor                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::OnHomeTeleporterUnbound(class AFortPlayerPawn* PlayerPawn, class AActor* NewHomeActor)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "OnHomeTeleporterUnbound");

	Params::ABP_PlayerSpawnTeleportPAd_C_OnHomeTeleporterUnbound_Params Parms;
	Parms.PlayerPawn = PlayerPawn;
	Parms.NewHomeActor = NewHomeActor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnHomeTeleporterUnboundServer
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewHomeActor                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::OnHomeTeleporterUnboundServer(class AFortPlayerPawn* PlayerPawn, class AActor* NewHomeActor)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "OnHomeTeleporterUnboundServer");

	Params::ABP_PlayerSpawnTeleportPAd_C_OnHomeTeleporterUnboundServer_Params Parms;
	Parms.PlayerPawn = PlayerPawn;
	Parms.NewHomeActor = NewHomeActor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.Chest Intro Next Chest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::Chest_Intro_Next_Chest()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "Chest Intro Next Chest");

	Params::ABP_PlayerSpawnTeleportPAd_C_Chest_Intro_Next_Chest_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestIntro
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::HandleClientEvent_ChestIntro(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleClientEvent_ChestIntro");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestIntro_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestAddBadge
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::HandleClientEvent_ChestAddBadge(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleClientEvent_ChestAddBadge");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestAddBadge_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestProgression
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::HandleClientEvent_ChestProgression(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleClientEvent_ChestProgression");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestProgression_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestResultFocus
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::HandleClientEvent_ChestResultFocus(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleClientEvent_ChestResultFocus");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestResultFocus_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestOutro
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::HandleClientEvent_ChestOutro(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleClientEvent_ChestOutro");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestOutro_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_ChestSkipToResultFocus
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::HandleClientEvent_ChestSkipToResultFocus(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleClientEvent_ChestSkipToResultFocus");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_ChestSkipToResultFocus_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleMissionEvent_PlayTeleportOnToSpawnPad
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       MissionGuid                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (Parm)
// class UFortMissionEventParams*     Params                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_PlayerSpawnTeleportPAd_C::HandleMissionEvent_PlayTeleportOnToSpawnPad(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleMissionEvent_PlayTeleportOnToSpawnPad");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleMissionEvent_PlayTeleportOnToSpawnPad_Params Parms;
	Parms.MissionGuid = MissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ClientInitSpawnOut
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSpawnTeleportPadPlayerData>NewPlayerData                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerSpawnTeleportPAd_C::ClientInitSpawnOut(TArray<struct FSpawnTeleportPadPlayerData>& NewPlayerData)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "ClientInitSpawnOut");

	Params::ABP_PlayerSpawnTeleportPAd_C_ClientInitSpawnOut_Params Parms;
	Parms.NewPlayerData = NewPlayerData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.OnWorldReady
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::OnWorldReady()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "OnWorldReady");

	Params::ABP_PlayerSpawnTeleportPAd_C_OnWorldReady_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleMissionEvent_SetupTeleportOutCamera
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       MissionGuid                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (Parm)
// class UFortMissionEventParams*     Params                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_PlayerSpawnTeleportPAd_C::HandleMissionEvent_SetupTeleportOutCamera(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleMissionEvent_SetupTeleportOutCamera");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleMissionEvent_SetupTeleportOutCamera_Params Parms;
	Parms.MissionGuid = MissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_PlayerLeavingEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::HandleClientEvent_PlayerLeavingEvent(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleClientEvent_PlayerLeavingEvent");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_PlayerLeavingEvent_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_HeroLevelUpEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::HandleClientEvent_HeroLevelUpEvent(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleClientEvent_HeroLevelUpEvent");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_HeroLevelUpEvent_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.PlayerLeavingEndedEvent
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSpawnTeleportPAd_C::PlayerLeavingEndedEvent(class AFortPlayerPawn*& PlayerPawn)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "PlayerLeavingEndedEvent");

	Params::ABP_PlayerSpawnTeleportPAd_C_PlayerLeavingEndedEvent_Params Parms;
	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "ReceiveBeginPlay");

	Params::ABP_PlayerSpawnTeleportPAd_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ClientStartSpawnInCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::ClientStartSpawnInCamera()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "ClientStartSpawnInCamera");

	Params::ABP_PlayerSpawnTeleportPAd_C_ClientStartSpawnInCamera_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleMissionEvent_StartLeavingZone
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       MissionGuid                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (Parm)
// class UFortMissionEventParams*     Params                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_PlayerSpawnTeleportPAd_C::HandleMissionEvent_StartLeavingZone(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleMissionEvent_StartLeavingZone");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleMissionEvent_StartLeavingZone_Params Parms;
	Parms.MissionGuid = MissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.LogoutTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerSpawnTeleportPAd_C::LogoutTick()
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "LogoutTick");

	Params::ABP_PlayerSpawnTeleportPAd_C_LogoutTick_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleMissionEvent_PlayerSpawned
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       MissionGuid                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (Parm)
// class UFortMissionEventParams*     Params                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_PlayerSpawnTeleportPAd_C::HandleMissionEvent_PlayerSpawned(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleMissionEvent_PlayerSpawned");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleMissionEvent_PlayerSpawned_Params Parms;
	Parms.MissionGuid = MissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.HandleClientEvent_CameraIntro
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerSpawnTeleportPAd_C::HandleClientEvent_CameraIntro(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "HandleClientEvent_CameraIntro");

	Params::ABP_PlayerSpawnTeleportPAd_C_HandleClientEvent_CameraIntro_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_PlayerSpawnTeleportPad.BP_PlayerSpawnTeleportPAd_C.ExecuteUbergraph_BP_PlayerSpawnTeleportPAd
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_Event_PlayerPawn4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OldHomeActor2                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_Event_PlayerPawn3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OldHomeActor                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_Event_PlayerPawn2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_NewHomeActor2                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_NewHomeActor                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult2                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue3                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult3                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue4                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult4                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item10                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent9                            (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent8                            (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent7                            (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent6                            (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent5                            (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent4                            (ConstParm, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue2                                (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult2                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult5                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult3                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item11                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item13                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item14                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item15                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult6                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item16                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item17                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRewardedChestLevel_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       K2Node_HandleMissionEvent_MissionGuid4                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle4                       ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW4    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent4                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText4                           (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags4                          ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent4                          (ConstParm)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSpawnTeleportPadPlayerData>K2Node_CustomEvent_NewPlayerData                                 (ConstParm, ZeroConstructor, ReferenceParm)
// struct FGuid                       K2Node_HandleMissionEvent_MissionGuid3                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle3                       ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW3    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent3                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText3                           (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags3                          ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent3                          (ConstParm)
// int32                              Temp_int_Array_Index_Variable4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item18                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent3                            (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent2                            (ConstParm, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_CustomEvent_PlayerPawn                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RegisterForMissionEvents_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       K2Node_HandleMissionEvent_MissionGuid2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle2                       ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent2                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText2                           (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags2                          ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent2                          (ConstParm)
// class UFortStartLeavingZoneParams* K2Node_DynamicCast_AsFort_Start_Leaving_Zone_Params              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_BreakParams__PlayerRequestingLeaving                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item19                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpawnTeleportPadPlayerData CallFunc_Array_Get_Item20                                        (HasGetValueTypeHash)
// struct FGuid                       K2Node_HandleMissionEvent_MissionGuid                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle                        ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText                            (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags                           ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent                           (ConstParm)
// int32                              Temp_int_Loop_Counter_Variable4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue5                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult7                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PlayerSpawnTeleportPAd_C::ExecuteUbergraph_BP_PlayerSpawnTeleportPAd(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue2, bool CallFunc_HasAuthority_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, class AFortPlayerPawn* K2Node_Event_PlayerPawn4, class AActor* K2Node_Event_OldHomeActor2, class AFortPlayerPawn* K2Node_Event_PlayerPawn3, class AActor* K2Node_Event_OldHomeActor, class AFortPlayerPawn* K2Node_Event_PlayerPawn2, class AActor* K2Node_Event_NewHomeActor2, class AFortPlayerPawn* K2Node_Event_PlayerPawn, class AActor* K2Node_Event_NewHomeActor, class UStaticMeshComponent* CallFunc_Array_Get_Item, class UStaticMeshComponent* CallFunc_Array_Get_Item2, class UStaticMeshComponent* CallFunc_Array_Get_Item3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item4, class UStaticMeshComponent* CallFunc_Array_Get_Item5, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, int32 CallFunc_Subtract_IntInt_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult2, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult3, class UStaticMeshComponent* CallFunc_Array_Get_Item7, class UStaticMeshComponent* CallFunc_Array_Get_Item8, class UStaticMeshComponent* CallFunc_Array_Get_Item9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult4, class UStaticMeshComponent* CallFunc_Array_Get_Item10, int32 CallFunc_Array_Length_ReturnValue3, class UObject* K2Node_HandleClientEvent_EventSource9, class UObject* K2Node_HandleClientEvent_EventFocus9, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent9, class UObject* K2Node_HandleClientEvent_EventSource8, class UObject* K2Node_HandleClientEvent_EventFocus8, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent8, class UObject* K2Node_HandleClientEvent_EventSource7, class UObject* K2Node_HandleClientEvent_EventFocus7, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent7, class UObject* K2Node_HandleClientEvent_EventSource6, class UObject* K2Node_HandleClientEvent_EventFocus6, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent6, class UObject* K2Node_HandleClientEvent_EventSource5, class UObject* K2Node_HandleClientEvent_EventFocus5, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent5, class UObject* K2Node_HandleClientEvent_EventSource4, class UObject* K2Node_HandleClientEvent_EventFocus4, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent4, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult2, int32 CallFunc_Add_IntInt_ReturnValue4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult5, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult3, class UStaticMeshComponent* CallFunc_Array_Get_Item11, class UStaticMeshComponent* CallFunc_Array_Get_Item12, int32 CallFunc_Add_IntInt_ReturnValue5, class UStaticMeshComponent* CallFunc_Array_Get_Item13, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue2, class UStaticMeshComponent* CallFunc_Array_Get_Item14, class UStaticMeshComponent* CallFunc_Array_Get_Item15, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult6, class UStaticMeshComponent* CallFunc_Array_Get_Item16, int32 CallFunc_Array_Length_ReturnValue6, bool CallFunc_Greater_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable3, bool CallFunc_NotEqual_IntInt_ReturnValue2, class UStaticMeshComponent* CallFunc_Array_Get_Item17, int32 CallFunc_Array_Length_ReturnValue7, int32 CallFunc_Subtract_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetRewardedChestLevel_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue3, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid4, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle4, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params4, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW4, class UObject* K2Node_HandleMissionEvent_EventFocus4, class UDataAsset* K2Node_HandleMissionEvent_EventContent4, class AActor* K2Node_HandleMissionEvent_EventInstigator4, int32 K2Node_HandleMissionEvent_GenericInt4, float K2Node_HandleMissionEvent_GenericFloat4, class FText K2Node_HandleMissionEvent_GenericText4, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags4, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent4, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FSpawnTeleportPadPlayerData>& K2Node_CustomEvent_NewPlayerData, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid3, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle3, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params3, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW3, class UObject* K2Node_HandleMissionEvent_EventFocus3, class UDataAsset* K2Node_HandleMissionEvent_EventContent3, class AActor* K2Node_HandleMissionEvent_EventInstigator3, int32 K2Node_HandleMissionEvent_GenericInt3, float K2Node_HandleMissionEvent_GenericFloat3, class FText K2Node_HandleMissionEvent_GenericText3, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags3, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent3, int32 Temp_int_Array_Index_Variable4, class UStaticMeshComponent* CallFunc_Array_Get_Item18, class UObject* K2Node_HandleClientEvent_EventSource3, class UObject* K2Node_HandleClientEvent_EventFocus3, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent3, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess2, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess3, class AFortPlayerPawn* K2Node_CustomEvent_PlayerPawn, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_RegisterForMissionEvents_ReturnValue, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2, class UObject* K2Node_HandleMissionEvent_EventFocus2, class UDataAsset* K2Node_HandleMissionEvent_EventContent2, class AActor* K2Node_HandleMissionEvent_EventInstigator2, int32 K2Node_HandleMissionEvent_GenericInt2, float K2Node_HandleMissionEvent_GenericFloat2, class FText K2Node_HandleMissionEvent_GenericText2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent2, class UFortStartLeavingZoneParams* K2Node_DynamicCast_AsFort_Start_Leaving_Zone_Params, bool K2Node_DynamicCast_bSuccess4, class AFortPlayerPawn* CallFunc_BreakParams__PlayerRequestingLeaving, float CallFunc_Array_Get_Item19, int32 CallFunc_Array_Length_ReturnValue8, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FSpawnTeleportPadPlayerData& CallFunc_Array_Get_Item20, const struct FGuid& K2Node_HandleMissionEvent_MissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, int32 Temp_int_Loop_Counter_Variable4, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue6, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue5, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult7)
{
	static auto Func = Class->GetFunction("BP_PlayerSpawnTeleportPAd_C", "ExecuteUbergraph_BP_PlayerSpawnTeleportPAd");

	Params::ABP_PlayerSpawnTeleportPAd_C_ExecuteUbergraph_BP_PlayerSpawnTeleportPAd_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.CallFunc_HasAuthority_ReturnValue3 = CallFunc_HasAuthority_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.K2Node_Event_PlayerPawn4 = K2Node_Event_PlayerPawn4;
	Parms.K2Node_Event_OldHomeActor2 = K2Node_Event_OldHomeActor2;
	Parms.K2Node_Event_PlayerPawn3 = K2Node_Event_PlayerPawn3;
	Parms.K2Node_Event_OldHomeActor = K2Node_Event_OldHomeActor;
	Parms.K2Node_Event_PlayerPawn2 = K2Node_Event_PlayerPawn2;
	Parms.K2Node_Event_NewHomeActor2 = K2Node_Event_NewHomeActor2;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_NewHomeActor = K2Node_Event_NewHomeActor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult2 = CallFunc_K2_SetRelativeLocation_SweepHitResult2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Add_VectorVector_ReturnValue3 = CallFunc_Add_VectorVector_ReturnValue3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult3 = CallFunc_K2_SetRelativeLocation_SweepHitResult3;
	Parms.CallFunc_Array_Get_Item7 = CallFunc_Array_Get_Item7;
	Parms.CallFunc_Array_Get_Item8 = CallFunc_Array_Get_Item8;
	Parms.CallFunc_Array_Get_Item9 = CallFunc_Array_Get_Item9;
	Parms.CallFunc_Add_VectorVector_ReturnValue4 = CallFunc_Add_VectorVector_ReturnValue4;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult4 = CallFunc_K2_SetRelativeLocation_SweepHitResult4;
	Parms.CallFunc_Array_Get_Item10 = CallFunc_Array_Get_Item10;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.K2Node_HandleClientEvent_EventSource9 = K2Node_HandleClientEvent_EventSource9;
	Parms.K2Node_HandleClientEvent_EventFocus9 = K2Node_HandleClientEvent_EventFocus9;
	Parms.K2Node_HandleClientEvent_ClientEvent9 = K2Node_HandleClientEvent_ClientEvent9;
	Parms.K2Node_HandleClientEvent_EventSource8 = K2Node_HandleClientEvent_EventSource8;
	Parms.K2Node_HandleClientEvent_EventFocus8 = K2Node_HandleClientEvent_EventFocus8;
	Parms.K2Node_HandleClientEvent_ClientEvent8 = K2Node_HandleClientEvent_ClientEvent8;
	Parms.K2Node_HandleClientEvent_EventSource7 = K2Node_HandleClientEvent_EventSource7;
	Parms.K2Node_HandleClientEvent_EventFocus7 = K2Node_HandleClientEvent_EventFocus7;
	Parms.K2Node_HandleClientEvent_ClientEvent7 = K2Node_HandleClientEvent_ClientEvent7;
	Parms.K2Node_HandleClientEvent_EventSource6 = K2Node_HandleClientEvent_EventSource6;
	Parms.K2Node_HandleClientEvent_EventFocus6 = K2Node_HandleClientEvent_EventFocus6;
	Parms.K2Node_HandleClientEvent_ClientEvent6 = K2Node_HandleClientEvent_ClientEvent6;
	Parms.K2Node_HandleClientEvent_EventSource5 = K2Node_HandleClientEvent_EventSource5;
	Parms.K2Node_HandleClientEvent_EventFocus5 = K2Node_HandleClientEvent_EventFocus5;
	Parms.K2Node_HandleClientEvent_ClientEvent5 = K2Node_HandleClientEvent_ClientEvent5;
	Parms.K2Node_HandleClientEvent_EventSource4 = K2Node_HandleClientEvent_EventSource4;
	Parms.K2Node_HandleClientEvent_EventFocus4 = K2Node_HandleClientEvent_EventFocus4;
	Parms.K2Node_HandleClientEvent_ClientEvent4 = K2Node_HandleClientEvent_ClientEvent4;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll2 = CallFunc_BreakRotator_Roll2;
	Parms.CallFunc_BreakRotator_Pitch2 = CallFunc_BreakRotator_Pitch2;
	Parms.CallFunc_BreakRotator_Yaw2 = CallFunc_BreakRotator_Yaw2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeRotator_ReturnValue2 = CallFunc_MakeRotator_ReturnValue2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult2 = CallFunc_K2_SetRelativeRotation_SweepHitResult2;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult5 = CallFunc_K2_SetRelativeLocation_SweepHitResult5;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult3 = CallFunc_K2_SetRelativeRotation_SweepHitResult3;
	Parms.CallFunc_Array_Get_Item11 = CallFunc_Array_Get_Item11;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.CallFunc_Array_Get_Item13 = CallFunc_Array_Get_Item13;
	Parms.CallFunc_Array_Length_ReturnValue5 = CallFunc_Array_Length_ReturnValue5;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item14 = CallFunc_Array_Get_Item14;
	Parms.CallFunc_Array_Get_Item15 = CallFunc_Array_Get_Item15;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult6 = CallFunc_K2_SetRelativeLocation_SweepHitResult6;
	Parms.CallFunc_Array_Get_Item16 = CallFunc_Array_Get_Item16;
	Parms.CallFunc_Array_Length_ReturnValue6 = CallFunc_Array_Length_ReturnValue6;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue2 = CallFunc_NotEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item17 = CallFunc_Array_Get_Item17;
	Parms.CallFunc_Array_Length_ReturnValue7 = CallFunc_Array_Length_ReturnValue7;
	Parms.CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Subtract_IntInt_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetRewardedChestLevel_ReturnValue = CallFunc_GetRewardedChestLevel_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue3 = CallFunc_NotEqual_IntInt_ReturnValue3;
	Parms.K2Node_HandleMissionEvent_MissionGuid4 = K2Node_HandleMissionEvent_MissionGuid4;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle4 = K2Node_HandleMissionEvent_ObjectiveHandle4;
	Parms.K2Node_HandleMissionEvent_Params4 = K2Node_HandleMissionEvent_Params4;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW4 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW4;
	Parms.K2Node_HandleMissionEvent_EventFocus4 = K2Node_HandleMissionEvent_EventFocus4;
	Parms.K2Node_HandleMissionEvent_EventContent4 = K2Node_HandleMissionEvent_EventContent4;
	Parms.K2Node_HandleMissionEvent_EventInstigator4 = K2Node_HandleMissionEvent_EventInstigator4;
	Parms.K2Node_HandleMissionEvent_GenericInt4 = K2Node_HandleMissionEvent_GenericInt4;
	Parms.K2Node_HandleMissionEvent_GenericFloat4 = K2Node_HandleMissionEvent_GenericFloat4;
	Parms.K2Node_HandleMissionEvent_GenericText4 = K2Node_HandleMissionEvent_GenericText4;
	Parms.K2Node_HandleMissionEvent_GameplayTags4 = K2Node_HandleMissionEvent_GameplayTags4;
	Parms.K2Node_HandleMissionEvent_MissionEvent4 = K2Node_HandleMissionEvent_MissionEvent4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_NewPlayerData = K2Node_CustomEvent_NewPlayerData;
	Parms.K2Node_HandleMissionEvent_MissionGuid3 = K2Node_HandleMissionEvent_MissionGuid3;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle3 = K2Node_HandleMissionEvent_ObjectiveHandle3;
	Parms.K2Node_HandleMissionEvent_Params3 = K2Node_HandleMissionEvent_Params3;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW3 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW3;
	Parms.K2Node_HandleMissionEvent_EventFocus3 = K2Node_HandleMissionEvent_EventFocus3;
	Parms.K2Node_HandleMissionEvent_EventContent3 = K2Node_HandleMissionEvent_EventContent3;
	Parms.K2Node_HandleMissionEvent_EventInstigator3 = K2Node_HandleMissionEvent_EventInstigator3;
	Parms.K2Node_HandleMissionEvent_GenericInt3 = K2Node_HandleMissionEvent_GenericInt3;
	Parms.K2Node_HandleMissionEvent_GenericFloat3 = K2Node_HandleMissionEvent_GenericFloat3;
	Parms.K2Node_HandleMissionEvent_GenericText3 = K2Node_HandleMissionEvent_GenericText3;
	Parms.K2Node_HandleMissionEvent_GameplayTags3 = K2Node_HandleMissionEvent_GameplayTags3;
	Parms.K2Node_HandleMissionEvent_MissionEvent3 = K2Node_HandleMissionEvent_MissionEvent3;
	Parms.Temp_int_Array_Index_Variable4 = Temp_int_Array_Index_Variable4;
	Parms.CallFunc_Array_Get_Item18 = CallFunc_Array_Get_Item18;
	Parms.K2Node_HandleClientEvent_EventSource3 = K2Node_HandleClientEvent_EventSource3;
	Parms.K2Node_HandleClientEvent_EventFocus3 = K2Node_HandleClientEvent_EventFocus3;
	Parms.K2Node_HandleClientEvent_ClientEvent3 = K2Node_HandleClientEvent_ClientEvent3;
	Parms.K2Node_HandleClientEvent_EventSource2 = K2Node_HandleClientEvent_EventSource2;
	Parms.K2Node_HandleClientEvent_EventFocus2 = K2Node_HandleClientEvent_EventFocus2;
	Parms.K2Node_HandleClientEvent_ClientEvent2 = K2Node_HandleClientEvent_ClientEvent2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn2 = K2Node_DynamicCast_AsFort_Player_Pawn2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_CustomEvent_PlayerPawn = K2Node_CustomEvent_PlayerPawn;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_RegisterForMissionEvents_ReturnValue = CallFunc_RegisterForMissionEvents_ReturnValue;
	Parms.K2Node_HandleMissionEvent_MissionGuid2 = K2Node_HandleMissionEvent_MissionGuid2;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle2 = K2Node_HandleMissionEvent_ObjectiveHandle2;
	Parms.K2Node_HandleMissionEvent_Params2 = K2Node_HandleMissionEvent_Params2;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2;
	Parms.K2Node_HandleMissionEvent_EventFocus2 = K2Node_HandleMissionEvent_EventFocus2;
	Parms.K2Node_HandleMissionEvent_EventContent2 = K2Node_HandleMissionEvent_EventContent2;
	Parms.K2Node_HandleMissionEvent_EventInstigator2 = K2Node_HandleMissionEvent_EventInstigator2;
	Parms.K2Node_HandleMissionEvent_GenericInt2 = K2Node_HandleMissionEvent_GenericInt2;
	Parms.K2Node_HandleMissionEvent_GenericFloat2 = K2Node_HandleMissionEvent_GenericFloat2;
	Parms.K2Node_HandleMissionEvent_GenericText2 = K2Node_HandleMissionEvent_GenericText2;
	Parms.K2Node_HandleMissionEvent_GameplayTags2 = K2Node_HandleMissionEvent_GameplayTags2;
	Parms.K2Node_HandleMissionEvent_MissionEvent2 = K2Node_HandleMissionEvent_MissionEvent2;
	Parms.K2Node_DynamicCast_AsFort_Start_Leaving_Zone_Params = K2Node_DynamicCast_AsFort_Start_Leaving_Zone_Params;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_BreakParams__PlayerRequestingLeaving = CallFunc_BreakParams__PlayerRequestingLeaving;
	Parms.CallFunc_Array_Get_Item19 = CallFunc_Array_Get_Item19;
	Parms.CallFunc_Array_Length_ReturnValue8 = CallFunc_Array_Length_ReturnValue8;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item20 = CallFunc_Array_Get_Item20;
	Parms.K2Node_HandleMissionEvent_MissionGuid = K2Node_HandleMissionEvent_MissionGuid;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle = K2Node_HandleMissionEvent_ObjectiveHandle;
	Parms.K2Node_HandleMissionEvent_Params = K2Node_HandleMissionEvent_Params;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.K2Node_HandleMissionEvent_EventFocus = K2Node_HandleMissionEvent_EventFocus;
	Parms.K2Node_HandleMissionEvent_EventContent = K2Node_HandleMissionEvent_EventContent;
	Parms.K2Node_HandleMissionEvent_EventInstigator = K2Node_HandleMissionEvent_EventInstigator;
	Parms.K2Node_HandleMissionEvent_GenericInt = K2Node_HandleMissionEvent_GenericInt;
	Parms.K2Node_HandleMissionEvent_GenericFloat = K2Node_HandleMissionEvent_GenericFloat;
	Parms.K2Node_HandleMissionEvent_GenericText = K2Node_HandleMissionEvent_GenericText;
	Parms.K2Node_HandleMissionEvent_GameplayTags = K2Node_HandleMissionEvent_GameplayTags;
	Parms.K2Node_HandleMissionEvent_MissionEvent = K2Node_HandleMissionEvent_MissionEvent;
	Parms.Temp_int_Loop_Counter_Variable4 = Temp_int_Loop_Counter_Variable4;
	Parms.CallFunc_Less_IntInt_ReturnValue4 = CallFunc_Less_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue6 = CallFunc_Add_IntInt_ReturnValue6;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue5 = CallFunc_Add_VectorVector_ReturnValue5;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult7 = CallFunc_K2_SetRelativeLocation_SweepHitResult7;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
