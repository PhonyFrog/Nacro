#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x11F8 - 0x11E8)
// BlueprintGeneratedClass Plant_PalmBush1.Plant_PalmBush1_C
class APlant_PalmBush1_C : public AParentBuildingContainerBlueprint_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11E8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Effect;                                            // 0x11F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Plant_PalmBush1_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoot();
	void ExecuteUbergraph_Plant_PalmBush1(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
