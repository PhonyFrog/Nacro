#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x440 - 0x358)
// AnimBlueprintGeneratedClass BP_Launcher_FrontAction.BP_Launcher_FrontAction_C
class UBP_Launcher_FrontAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_497F340240F0CC64E94B6DAF83B9813F; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_90E8D6E744D2D9DA5DE75A8AA3FAEEDC; // 0x3A8(0x60)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_509BFA8742C047DE9209E1B642963779; // 0x408(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Launcher_FrontAction_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Launcher_FrontAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
