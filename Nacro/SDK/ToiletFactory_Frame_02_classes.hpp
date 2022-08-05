#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x10D8 - 0x10D0)
// BlueprintGeneratedClass ToiletFactory_Frame_02.ToiletFactory_Frame_02_C
class AToiletFactory_Frame_02_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10D0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToiletFactory_Frame_02_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoot();
	void OnLootRepeat();
	void OnBeginSearch();
	void ExecuteUbergraph_ToiletFactory_Frame_02(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
