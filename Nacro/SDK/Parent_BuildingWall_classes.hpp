#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x10C8 - 0x10B0)
// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
class AParent_BuildingWall_C : public ABuildingWall
{
public:
	struct FVector                               BuildingBoundsMax;                                 // 0x10B0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               BuildingBoundsMin;                                 // 0x10BC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Parent_BuildingWall_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
