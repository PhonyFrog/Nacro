#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x440 - 0x358)
// AnimBlueprintGeneratedClass BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C
class UBP_Shotgun_BreakAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BA976D5D4DB7967075F7CDB8A77EDD8C; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_40047C1541B43E34DADF6696EC1EDEBE; // 0x3A8(0x60)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_EADE6A484AF7A66F69258C8F614628BF; // 0x408(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Shotgun_BreakAction_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Shotgun_BreakAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
