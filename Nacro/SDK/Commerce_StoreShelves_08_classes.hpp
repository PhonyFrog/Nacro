#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x11F8 - 0x11E8)
// BlueprintGeneratedClass Commerce_StoreShelves_08.Commerce_StoreShelves_08_C
class ACommerce_StoreShelves_08_C : public AParentBuildingContainerBlueprint_C
{
public:
	class UPointLightComponent*                  PointLight1;                                       // 0x11E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x11F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Commerce_StoreShelves_08_C");
		return Clss;
	}

	void UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
