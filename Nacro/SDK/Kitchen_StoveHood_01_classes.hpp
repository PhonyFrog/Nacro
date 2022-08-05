#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x10D8 - 0x10D0)
// BlueprintGeneratedClass Kitchen_StoveHood_01.Kitchen_StoveHood_01_C
class AKitchen_StoveHood_01_C : public ABuildingContainer
{
public:
	class UParticleSystemComponent*              Effect_Loot;                                       // 0x10D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Kitchen_StoveHood_01_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
