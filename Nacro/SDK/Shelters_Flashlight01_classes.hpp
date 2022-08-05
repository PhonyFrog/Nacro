#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xC (0x10E0 - 0x10D4)
// BlueprintGeneratedClass Shelters_Flashlight01.Shelters_Flashlight01_C
class AShelters_Flashlight01_C : public AParent_BuildingPropActor_C
{
public:
	uint8                                        Pad_2CAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpotLightComponent*                   SpotLight;                                         // 0x10D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Shelters_Flashlight01_C");
		return Clss;
	}

	void UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
