#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x244 (0x59C - 0x358)
// AnimBlueprintGeneratedClass SK_FireCrackerGun_Skeleton_AnimBlueprint.SK_FireCrackerGun_Skeleton_AnimBlueprint_C
class USK_FireCrackerGun_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_A6B2CE6C427B3F55A6E933B68D923318; // 0x360(0x48)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_FB5E013C425C2F46CF1C60A55090971B; // 0x3A8(0xC8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_ED1A16E643B5645CE7F8E2A6F66DF1C2; // 0x470(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_D49895404EF4B5042C8E12A0A427EA3F; // 0x4B8(0x60)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_448F9E804E2E6CDC610B27B1C784FBE5; // 0x518(0x38)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2D02AF9B41173CBB3211959E57E138BA; // 0x550(0x48)()
	float                                        SpringVal;                                         // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_FireCrackerGun_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_FireCrackerGun_Skeleton_AnimBlueprint_AnimGraphNode_SpringBone_FB5E013C425C2F46CF1C60A55090971B();
	void ExecuteUbergraph_SK_FireCrackerGun_Skeleton_AnimBlueprint(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
