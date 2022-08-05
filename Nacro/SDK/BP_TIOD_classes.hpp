#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x261 (0x5B9 - 0x358)
// AnimBlueprintGeneratedClass BP_TIOD.BP_TIOD_C
class UBP_TIOD_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_83C4C1084383E83710A18D985E078875; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7ACE95EF4F6DA814A0F98691AA59D3D1; // 0x3A8(0x60)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_053152B34144F51F7E0FC3BC1136DCA1; // 0x408(0xD0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3D4143D04F36289018E2CAB8DEC07678; // 0x4D8(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_01D6515642246830C4BFA6AB316A5420; // 0x548(0x70)()
	bool                                         HasReloaded;                                       // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_TIOD_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TIOD_AnimGraphNode_BlendListByBool_053152B34144F51F7E0FC3BC1136DCA1();
	void AnimNotify_HasFiredRocket();
	void AnimNotify_HasReloadedRocket();
	void ExecuteUbergraph_BP_TIOD(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
