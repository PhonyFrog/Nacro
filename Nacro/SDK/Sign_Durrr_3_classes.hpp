#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xC (0x10E0 - 0x10D4)
// BlueprintGeneratedClass Sign_Durrr_3.Sign_Durrr_3_C
class ASign_Durrr_3_C : public AParent_BuildingPropActor_C
{
public:
	uint8                                        Pad_2AE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPointLightComponent*                  PointLight;                                        // 0x10D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Sign_Durrr_3_C");
		return Clss;
	}

	void UserConstructionScript(TArray<class ULightComponent*>& K2Node_MakeArray_Array);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
