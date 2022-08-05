#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x440 - 0x358)
// AnimBlueprintGeneratedClass breakAction_skeleton_AnimBlueprint.breakAction_skeleton_AnimBlueprint_C
class UbreakAction_skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_FCA2C32840AE0562B71D1D9520A0E478; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F180AF974683BDE297A1DBA8D198369C; // 0x3A8(0x60)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_1A80D12A457DFB61958C2291333B766A; // 0x408(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("breakAction_skeleton_AnimBlueprint_C");
		return Clss;
	}

	void ExecuteUbergraph_breakAction_skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
