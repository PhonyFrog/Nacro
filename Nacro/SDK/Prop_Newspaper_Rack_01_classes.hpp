#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x10D8 - 0x10D0)
// BlueprintGeneratedClass Prop_Newspaper_Rack_01.Prop_Newspaper_Rack_01_C
class AProp_Newspaper_Rack_01_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10D0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prop_Newspaper_Rack_01_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnBeginSearch();
	void OnLootRepeat();
	void ExecuteUbergraph_Prop_Newspaper_Rack_01(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
