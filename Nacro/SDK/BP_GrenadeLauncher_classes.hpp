#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x120 (0x478 - 0x358)
// AnimBlueprintGeneratedClass BP_GrenadeLauncher.BP_GrenadeLauncher_C
class UBP_GrenadeLauncher_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_545A1542415580C93B2F2CB92FFE6BF9; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_35ADB9784B260E9E0D5321BC72AC51A5; // 0x3A8(0x60)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CCD9E03141024373207EA19F7FABC7E4; // 0x408(0x70)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_GrenadeLauncher_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_GrenadeLauncher(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
