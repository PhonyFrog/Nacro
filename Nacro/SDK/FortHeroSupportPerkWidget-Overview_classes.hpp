#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x11 (0x5C9 - 0x5B8)
// WidgetBlueprintGeneratedClass FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C
class UFortHeroSupportPerkWidget_Overview_C : public UFortHeroSupportPerkWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B8(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      TypeText;                                          // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortBrushSize                    IconSize;                                          // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHeroSupportPerkWidget-Overview_C");
		return Clss;
	}

	void OnHeroUpdated();
	void OnSupportTypeUpdated();
	void ExecuteUbergraph_FortHeroSupportPerkWidget_Overview(int32 EntryPoint, bool CallFunc_IsPerkEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
