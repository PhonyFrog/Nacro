#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x11F0 - 0x11E8)
// BlueprintGeneratedClass Plant_Shrub_bush_sm_01.Plant_Shrub_bush_sm_01_C
class APlant_Shrub_bush_sm_01_C : public AParentBuildingContainerBlueprint_C
{
public:
	class UParticleSystemComponent*              Loot_Effect;                                       // 0x11E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Plant_Shrub_bush_sm_01_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
