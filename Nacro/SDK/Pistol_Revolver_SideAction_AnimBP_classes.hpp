#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x120 (0x478 - 0x358)
// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C
class UPistol_Revolver_SideAction_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4B9C316E43FA08653813BBBCA2D3C1CC; // 0x360(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7B68B15D437D89F24C3E878507F22BD7; // 0x3A8(0x60)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13AC6DBF4FB71657F72EF3BFDFE4EBE8; // 0x408(0x70)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Pistol_Revolver_SideAction_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
