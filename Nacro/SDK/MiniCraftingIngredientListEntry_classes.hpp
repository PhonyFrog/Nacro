#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C
class UMiniCraftingIngredientListEntry_C : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UItemCount_C*                          ItemCountWidget;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MiniCraftingIngredientListEntry_C");
		return Clss;
	}

	void RefreshBeingPreviewed(const struct FFortItemEntryPreviewData& CallFunc_GetPreviewData_OutPreviewData, bool CallFunc_IsBeingPreviewed_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Refresh(class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue);
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void PreviewStarted();
	void PreviewEnded();
	void ExecuteUbergraph_MiniCraftingIngredientListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
