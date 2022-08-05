#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x10D8 - 0x10D0)
// BlueprintGeneratedClass LCD_JunkPile_01a.LCD_JunkPile_01a_C
class ALCD_JunkPile_01a_C : public ABuildingContainer
{
public:
	class UAudioComponent*                       Loot_Audio;                                        // 0x10D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LCD_JunkPile_01a_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
