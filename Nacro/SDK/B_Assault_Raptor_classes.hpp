#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xDF8 - 0xDE8)
// BlueprintGeneratedClass B_Assault_Raptor.B_Assault_Raptor_C
class AB_Assault_Raptor_C : public AB_Assault_Generic_C
{
public:
	struct FLinearColor                          MuzzleColor;                                       // 0xDE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Assault_Raptor_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
