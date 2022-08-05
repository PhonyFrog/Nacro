#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x440 - 0x358)
// AnimBlueprintGeneratedClass SK_TMP_Skeleton_AnimBlueprint.SK_TMP_Skeleton_AnimBlueprint_C
class USK_TMP_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_8781D25A4D4A52788B496D8587C81C76; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_192ADBE447C514B2B9978290B7A8D439; // 0x3A8(0x60)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_5F4CEE2442CDAA3D9BAEA3B14CF05A76; // 0x408(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_TMP_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_TMP_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
