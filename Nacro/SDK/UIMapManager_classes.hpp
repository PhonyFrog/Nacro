#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x4F0 - 0x4E8)
// BlueprintGeneratedClass UIMapManager.UIMapManager_C
class AUIMapManager_C : public AFortInGameMapManager
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UIMapManager_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
