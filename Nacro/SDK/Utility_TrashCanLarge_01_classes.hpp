#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x28 (0x10F8 - 0x10D0)
// BlueprintGeneratedClass Utility_TrashCanLarge_01.Utility_TrashCanLarge_01_C
class AUtility_TrashCanLarge_01_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10D0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Effect_Flies_On_Player;                            // 0x10D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Effect_Flies;                                      // 0x10E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          ObjectTypeArray;                                   // 0x10E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Utility_TrashCanLarge_01_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoot();
	void ExecuteUbergraph_Utility_TrashCanLarge_01(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool Temp_bool_Has_Been_Initd_Variable, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
