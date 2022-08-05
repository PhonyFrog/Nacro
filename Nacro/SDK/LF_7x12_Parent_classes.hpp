#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x24 (0x10A4 - 0x1080)
// BlueprintGeneratedClass LF_7x12_Parent.LF_7x12_Parent_C
class ALF_7x12_Parent_C : public ABuildingFoundation5x5
{
public:
	class UTextRenderComponent*                  RenderTextComponent;                               // 0x1080(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  EditorDisplayNameText;                             // 0x1088(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TextSize;                                          // 0x10A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LF_7x12_Parent_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
