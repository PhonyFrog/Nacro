#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x10E0 - 0x10D0)
// BlueprintGeneratedClass Mailbox_02.Mailbox_02_C
class AMailbox_02_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10D0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Effect_Mail;                                       // 0x10D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mailbox_02_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoot();
	void OnLootRepeat();
	void ExecuteUbergraph_Mailbox_02(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
