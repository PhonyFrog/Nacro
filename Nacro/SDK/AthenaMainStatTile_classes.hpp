#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x40 (0x278 - 0x238)
// WidgetBlueprintGeneratedClass AthenaMainStatTile.AthenaMainStatTile_C
class UAthenaMainStatTile_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      NameTextBlock;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ValueTextBlock;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  StatName;                                          // 0x250(0x18)(Edit, BlueprintVisible)
	class FString                                BaseTagName;                                       // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMainStatTile_C");
		return Clss;
	}

	void SetStatValue(class FText StatValueAsText);
	void SetTagAndDisplayName(const class FString& Tag, class FText DisplayName);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaMainStatTile(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
