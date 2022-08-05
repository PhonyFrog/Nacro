#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x440 - 0x358)
// AnimBlueprintGeneratedClass BP_Shotgun_RG_Break_OU.BP_Shotgun_RG_Break_OU_C
class UBP_Shotgun_RG_Break_OU_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_6FC06595478FE407A561BB8507CBDB2F; // 0x360(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_240DC6FA493AE63DF597D685B65A9F5B; // 0x3A8(0x38)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_A7E340FA47243B00C8FA98BE375B2ADB; // 0x3E0(0x60)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Shotgun_RG_Break_OU_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Shotgun_RG_Break_OU(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
