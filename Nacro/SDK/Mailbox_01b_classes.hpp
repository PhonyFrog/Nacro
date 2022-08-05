#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x15 (0x11FD - 0x11E8)
// BlueprintGeneratedClass Mailbox_01b.Mailbox_01b_C
class AMailbox_01b_C : public AParentBuildingContainerBlueprint_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11E8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Effect_Mail;                                       // 0x11F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        MailBoxesSpawned;                                  // 0x11F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHandled;                                          // 0x11FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mailbox_01b_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLootRepeat();
	void OnLoot();
	void OnBeginSearch();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Mailbox_01b(int32 EntryPoint, bool CallFunc_RegisterForMissionEvents_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
