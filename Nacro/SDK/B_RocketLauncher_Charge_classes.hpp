#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0xE10 - 0xDF8)
// BlueprintGeneratedClass B_RocketLauncher_Charge.B_RocketLauncher_Charge_C
class AB_RocketLauncher_Charge_C : public AB_RocketLauncher_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDF8(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       ChargeAudioComp;                                   // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ChargeMuzzlePSC;                                   // 0xE08(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_RocketLauncher_Charge_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnReachedMinCharge();
	void OnEndCharge();
	void ExecuteUbergraph_B_RocketLauncher_Charge(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
