#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x11 (0x10D9 - 0x10C8)
// BlueprintGeneratedClass WoodMines_Archway.WoodMines_Archway_C
class AWoodMines_Archway_C : public AParent_BuildingWall_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10C8(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       WoodCreakSound;                                    // 0x10D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayCreakSound;                                    // 0x10D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WoodMines_Archway_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WoodMines_Archway(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
