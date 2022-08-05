#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x1050 - 0x1020)
// BlueprintGeneratedClass Hydrant01.Hydrant01_C
class AHydrant01_C : public AFireHydrant__2_C
{
public:
	bool                                         Can_Jump_0;                                        // 0x1020(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Hydrant_Mesh;                                      // 0x1028(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           Hydrant_Broken_Mesh;                               // 0x1030(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WaterEffectOffset;                                 // 0x1038(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  LaunchForceFeedback_0;                             // 0x1048(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Hydrant01_C");
		return Clss;
	}

	void Handle_Exploded_State(class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, const class FString& CallFunc_GetCustomState_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	void UserConstructionScript(const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
