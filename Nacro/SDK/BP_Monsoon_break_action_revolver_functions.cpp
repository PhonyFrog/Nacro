#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C
// (BlueprintEvent)
// Parameters:

void UBP_Monsoon_break_action_revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C()
{
	static auto Func = Class->GetFunction("BP_Monsoon_break_action_revolver_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C");

	Params::UBP_Monsoon_break_action_revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Monsoon_break_action_revolver_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("BP_Monsoon_break_action_revolver_C", "BlueprintUpdateAnimation");

	Params::UBP_Monsoon_break_action_revolver_C_BlueprintUpdateAnimation_Params Parms;
	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C.ExecuteUbergraph_BP_Monsoon_break_action_revolver
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Pistol_Gatling_C*         K2Node_DynamicCast_AsB_Pistol_Gatling                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Monsoon_break_action_revolver_C::ExecuteUbergraph_BP_Monsoon_break_action_revolver(int32 EntryPoint, float K2Node_Event_DeltaTimeX, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Pistol_Gatling_C* K2Node_DynamicCast_AsB_Pistol_Gatling, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Monsoon_break_action_revolver_C", "ExecuteUbergraph_BP_Monsoon_break_action_revolver");

	Params::UBP_Monsoon_break_action_revolver_C_ExecuteUbergraph_BP_Monsoon_break_action_revolver_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Pistol_Gatling = K2Node_DynamicCast_AsB_Pistol_Gatling;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
