#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x28 (0xE10 - 0xDE8)
// BlueprintGeneratedClass B_Pistol_Double_D.B_Pistol_Double_D_C
class AB_Pistol_Double_D_C : public AB_Pistol_Vigilante_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  LaserSightBeam;                                    // 0xDF0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaserScaleUntargeted;                              // 0xDF8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaserScaleTargeted;                                // 0xE04(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pistol_Double_D_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSetTargeting(bool bNewIsTargeting);
	void ExecuteUbergraph_B_Pistol_Double_D(int32 EntryPoint, bool K2Node_Event_bNewIsTargeting, const struct FVector& CallFunc_SelectVector_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
