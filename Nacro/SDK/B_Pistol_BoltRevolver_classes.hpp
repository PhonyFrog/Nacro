#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xDF8 - 0xDE8)
// BlueprintGeneratedClass B_Pistol_BoltRevolver.B_Pistol_BoltRevolver_C
class AB_Pistol_BoltRevolver_C : public AB_Pistol_Generic_C
{
public:
	class UStaticMeshComponent*                  Reload_QuickReload;                                // 0xDE8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Reload_Ammo;                                       // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pistol_BoltRevolver_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
