#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x24 (0x120C - 0x11E8)
// BlueprintGeneratedClass Plant_Shrub_03.Plant_Shrub_03_C
class APlant_Shrub_03_C : public AParentBuildingContainerBlueprint_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11E8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Effect;                                            // 0x11F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Bugs;                                              // 0x11F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Dust_Mesh_Particles;                               // 0x1200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PercentChanceOfAddedFX;                            // 0x1208(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Plant_Shrub_03_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Plant_Shrub_03(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
