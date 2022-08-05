#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x440 - 0x358)
// AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_3869FE004A7A40326F179A99947D40FD; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_42C4DC6D490B221E6A9F9A92B3FEA82E; // 0x3A8(0x60)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_844915D14C4D660AA45FB1B5C63743BF; // 0x408(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_MachineGun_Clip_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
