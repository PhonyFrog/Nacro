#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x14 (0xFE4 - 0xFD0)
// BlueprintGeneratedClass FORT_Pizza_Clown.FORT_Pizza_Clown_C
class AFORT_Pizza_Clown_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFD0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  FORT_Pizza_Clown;                                  // 0xFD8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RotateSpeed;                                       // 0xFE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FORT_Pizza_Clown_C");
		return Clss;
	}

	void UserConstructionScript();
	void Clown_Spinner();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FORT_Pizza_Clown(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
