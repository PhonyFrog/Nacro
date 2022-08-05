#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x14 (0x10E8 - 0x10D4)
// BlueprintGeneratedClass Street_Light_Urban02.Street_Light_Urban02_C
class AStreet_Light_Urban02_C : public AParent_BuildingPropActor_C
{
public:
	uint8                                        Pad_3D6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpotLightComponent*                   SpotLight1;                                        // 0x10D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x10E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Street_Light_Urban02_C");
		return Clss;
	}

	void UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
