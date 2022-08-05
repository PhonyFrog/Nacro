#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x120 (0x478 - 0x358)
// AnimBlueprintGeneratedClass SK_Magnum_Skeleton_AnimBlueprint.SK_Magnum_Skeleton_AnimBlueprint_C
class USK_Magnum_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F586A6804FB20307A25670A7746479C3; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1EBD124B476304C3CB2D51BF9A7BE9B8; // 0x3A8(0x60)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4A7A2F334293CE7E436D43B263D3B0E7; // 0x408(0x70)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Magnum_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Magnum_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
