#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xE08 - 0xDF8)
// BlueprintGeneratedClass B_Launcher_Pumpkin_RPG.B_Launcher_Pumpkin_RPG_C
class AB_Launcher_Pumpkin_RPG_C : public AB_RocketLauncher_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDF8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              RearMuzzle_0;                                      // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Launcher_Pumpkin_RPG_C");
		return Clss;
	}

	void UserConstructionScript();
	void Muzzle_Flash_FX(bool Condition);
	void ExecuteUbergraph_B_Launcher_Pumpkin_RPG(int32 EntryPoint, bool K2Node_Event_Condition);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
