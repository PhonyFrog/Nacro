#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0xE00 - 0xDE8)
// BlueprintGeneratedClass B_Assault_Hydraulic_Drum_Athena.B_Assault_Hydraulic_Drum_Athena_C
class AB_Assault_Hydraulic_Drum_Athena_C : public AB_Assault_Bulletswarm_C
{
public:
	struct FVector                               LaserScaleUntargeted;                              // 0xDE8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaserScaleTargeted;                                // 0xDF4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Assault_Hydraulic_Drum_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
