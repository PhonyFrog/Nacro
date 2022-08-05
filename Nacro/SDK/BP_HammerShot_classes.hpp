#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x440 - 0x358)
// AnimBlueprintGeneratedClass BP_HammerShot.BP_HammerShot_C
class UBP_HammerShot_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_965289F4480E53083BBF909C95B4723E; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3BDFB108417CE8C60B42B588A22C10B3; // 0x3A8(0x60)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_ABAE228F43B417507B512E82A2B75862; // 0x408(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_HammerShot_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_HammerShot(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
