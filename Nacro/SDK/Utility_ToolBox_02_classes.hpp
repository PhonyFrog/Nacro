#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x10E8 - 0x10D0)
// BlueprintGeneratedClass Utility_ToolBox_02.Utility_ToolBox_02_C
class AUtility_ToolBox_02_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10D0(0x8)(Transient, DuplicateTransient)
	TArray<class USceneComponent*>               MeshChildren;                                      // 0x10D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Utility_ToolBox_02_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoot();
	void ExecuteUbergraph_Utility_ToolBox_02(int32 EntryPoint, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UParticleSystemComponent* K2Node_DynamicCast_AsParticle_System_Component, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
