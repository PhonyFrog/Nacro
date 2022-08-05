#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x24 (0x10F8 - 0x10D4)
// BlueprintGeneratedClass Street_Light__2.Street_Light__2_C
class AStreet_Light__2_C : public AParent_BuildingPropActor_C
{
public:
	uint8                                        Pad_29D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10D8(0x8)(Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x10E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Coneintensity;                                     // 0x10E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Emissivemult;                                      // 0x10F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Street_Light__2_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ExecuteUbergraph_Street_Light__2(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
