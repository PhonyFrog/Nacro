#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x40 (0x3E0 - 0x3A0)
// BlueprintGeneratedClass Athena_TheFarmstead_5x9_Barn_a_226.Athena_TheFarmstead_5x9_Barn_a_C
class AAthena_TheFarmstead_5x9_Barn_a_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)
	class ASM_Farm_Wall_4_C*                     SM_Farm_Wall_11_ExecuteUbergraph_Athena_TheFarmstead_5x9_Barn_a_RefProperty; // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASM_Farm_Wall_4_C*                     SM_Farm_Wall_8_ExecuteUbergraph_Athena_TheFarmstead_5x9_Barn_a_RefProperty; // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASM_Farm_Wall_3_C*                     SM_Farm_Wall_52_ExecuteUbergraph_Athena_TheFarmstead_5x9_Barn_a_RefProperty; // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASM_Farm_Wall_3_C*                     SM_Farm_Wall_29_ExecuteUbergraph_Athena_TheFarmstead_5x9_Barn_a_RefProperty; // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASM_Farm_Wall_1_C*                     SM_Farm_Wall_24_ExecuteUbergraph_Athena_TheFarmstead_5x9_Barn_a_RefProperty; // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASM_Farm_Wall_1_C*                     SM_Farm_Wall_34_ExecuteUbergraph_Athena_TheFarmstead_5x9_Barn_a_RefProperty; // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASM_Farm_Doorway_2_C*                  SM_Farm_Wall_3_ExecuteUbergraph_Athena_TheFarmstead_5x9_Barn_a_RefProperty; // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_TheFarmstead_5x9_Barn_a_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void BndEvt__SM_Farm_Wall_11_K2Node_ActorBoundEvent_37_ActorDestroyedSignature__DelegateSignature(class AActor* DestroyedActor);
	void BndEvt__SM_Farm_Wall_8_K2Node_ActorBoundEvent_54_ActorDestroyedSignature__DelegateSignature(class AActor* DestroyedActor);
	void BndEvt__SM_Farm_Wall_52_K2Node_ActorBoundEvent_88_ActorDestroyedSignature__DelegateSignature(class AActor* DestroyedActor);
	void BndEvt__SM_Farm_Wall_29_K2Node_ActorBoundEvent_107_ActorDestroyedSignature__DelegateSignature(class AActor* DestroyedActor);
	void BndEvt__SM_Farm_Wall_3_K2Node_ActorBoundEvent_1006_ActorDestroyedSignature__DelegateSignature(class AActor* DestroyedActor);
	void BndEvt__SM_Farm_Wall_24_K2Node_ActorBoundEvent_1027_ActorDestroyedSignature__DelegateSignature(class AActor* DestroyedActor);
	void BndEvt__SM_Farm_Wall_34_K2Node_ActorBoundEvent_1049_ActorDestroyedSignature__DelegateSignature(class AActor* DestroyedActor);
	void ExecuteUbergraph_Athena_TheFarmstead_5x9_Barn_a(int32 EntryPoint, class AActor* K2Node_ActorBoundEvent_DestroyedActor, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_ApplyDamage_ReturnValue2, float CallFunc_ApplyDamage_ReturnValue3, float CallFunc_ApplyDamage_ReturnValue4, float CallFunc_ApplyDamage_ReturnValue5, float CallFunc_ApplyDamage_ReturnValue6, class AActor* K2Node_ActorBoundEvent_DestroyedActor7, class AActor* K2Node_ActorBoundEvent_DestroyedActor6, class AActor* K2Node_ActorBoundEvent_DestroyedActor5, class AActor* K2Node_ActorBoundEvent_DestroyedActor4, class AActor* K2Node_ActorBoundEvent_DestroyedActor3, float CallFunc_ApplyDamage_ReturnValue7, class AActor* K2Node_ActorBoundEvent_DestroyedActor2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
