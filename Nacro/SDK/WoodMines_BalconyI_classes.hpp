#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0xFD8 - 0xFD0)
// BlueprintGeneratedClass WoodMines_BalconyI.WoodMines_BalconyI_C
class AWoodMines_BalconyI_C : public ABuildingFloor
{
public:
	class UAudioComponent*                       WoodCreakSound;                                    // 0xFD0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WoodMines_BalconyI_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
