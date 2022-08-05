#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x11F8 - 0x11E8)
// BlueprintGeneratedClass Mailbox_01a.Mailbox_01a_C
class AMailbox_01a_C : public AParentBuildingContainerBlueprint_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11E8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Effect_Mail;                                       // 0x11F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mailbox_01a_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoot();
	void OnLootRepeat();
	void ExecuteUbergraph_Mailbox_01a(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
