#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x2C8 (0x620 - 0x358)
// AnimBlueprintGeneratedClass BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C
class UBP_Monsoon_break_action_revolver_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_1C94E973477A7924582C2F89148D196E; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C6BABD70470FD56C94485AA983ACA6E4; // 0x3A8(0x60)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7A058AEC4412E3968E57A0A3398BBE3C; // 0x408(0x60)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C; // 0x468(0xB0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_BBFF24BD43C68101DE739FA9816C4A51; // 0x518(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1C47C87540AD10FBF51A9B94919030B2; // 0x560(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7192AB5641A3839311E70187F0C48E5F; // 0x5A8(0x70)()
	float                                        MaxMinigunRotSpeed;                                // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinigunRotation;                                   // 0x61C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Monsoon_break_action_revolver_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Monsoon_break_action_revolver(int32 EntryPoint, float K2Node_Event_DeltaTimeX, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Pistol_Gatling_C* K2Node_DynamicCast_AsB_Pistol_Gatling, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
