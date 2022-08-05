#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x24 (0x10A4 - 0x1080)
// BlueprintGeneratedClass LF_3x3_Parent.LF_3x3_Parent_C
class ALF_3x3_Parent_C : public ABuildingFoundation3x3
{
public:
	class UTextRenderComponent*                  RenderTextComponent;                               // 0x1080(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  EditorDisplayNameText;                             // 0x1088(0x18)(Edit, BlueprintVisible)
	float                                        TextSize;                                          // 0x10A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LF_3x3_Parent_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
