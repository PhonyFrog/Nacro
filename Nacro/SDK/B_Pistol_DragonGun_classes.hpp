#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0xE00 - 0xDE8)
// BlueprintGeneratedClass B_Pistol_DragonGun.B_Pistol_DragonGun_C
class AB_Pistol_DragonGun_C : public AB_Pistol_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_DragonPistol_NostrilSmoke_01_R;                  // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_DragonPistol_NostrilSmoke_01_L;                  // 0xDF8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pistol_DragonGun_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue2);
	void Muzzle_Flash_FX(bool Condition);
	void ExecuteUbergraph_B_Pistol_DragonGun(int32 EntryPoint, bool K2Node_Event_Condition);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
