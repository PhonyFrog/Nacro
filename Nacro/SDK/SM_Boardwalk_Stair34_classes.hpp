#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0xFD8 - 0xFD0)
// BlueprintGeneratedClass SM_Boardwalk_Stair34.SM_Boardwalk_Stair34_C
class ASM_Boardwalk_Stair34_C : public ABuildingStairs
{
public:
	class UAudioComponent*                       WoodCreakSound;                                    // 0xFD0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SM_Boardwalk_Stair34_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
