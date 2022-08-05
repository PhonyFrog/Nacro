#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x11F0 - 0x11E8)
// BlueprintGeneratedClass Office_Desk_02.Office_Desk_02_C
class AOffice_Desk_02_C : public AParentBuildingContainerBlueprint_C
{
public:
	class USpotLightComponent*                   SpotLight;                                         // 0x11E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Office_Desk_02_C");
		return Clss;
	}

	void UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
