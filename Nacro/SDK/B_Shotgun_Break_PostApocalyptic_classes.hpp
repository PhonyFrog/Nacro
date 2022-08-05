#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xE54 - 0xE44)
// BlueprintGeneratedClass B_Shotgun_Break_PostApocalyptic.B_Shotgun_Break_PostApocalyptic_C
class AB_Shotgun_Break_PostApocalyptic_C : public AB_Shotgun_Break_C
{
public:
	struct FLinearColor                          MuzzleColor;                                       // 0xE44(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Shotgun_Break_PostApocalyptic_C");
		return Clss;
	}

	void UserConstructionScript(const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
