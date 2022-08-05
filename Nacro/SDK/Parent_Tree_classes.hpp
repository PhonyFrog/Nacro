#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x108 (0x10D8 - 0xFD0)
// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
class AParent_Tree_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFD0(0x8)(Transient, DuplicateTransient)
	struct FVector                               Wind_Direction;                                    // 0xFD8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         EmitLeaves_;                                       // 0xFE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DebugMode_;                                        // 0xFE5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DebugStorms_;                                      // 0xFE6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class En_LeafTypes_01                   LeafTypes;                                         // 0xFE7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                          LeafEmitterNamesSpherical;                         // 0xFE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                          LeafEmitterNamesCylindrical;                       // 0xFF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>      LeafEmitterComponents;                             // 0x1008(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               EmitterSize;                                       // 0x1018(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Lifetime_Idle_;                                    // 0x1024(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Lifetime_Storm_;                                   // 0x1028(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SpawnRate_Idle_;                                   // 0x102C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SpawnRate_Storm_;                                  // 0x1030(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        WindIntensity_Idle_;                               // 0x1034(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        WindIntensity_Storm_;                              // 0x1038(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3A11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MediumLeafMaterialMasked;                          // 0x1040(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SmallLeafMaterialMasked;                           // 0x1048(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    LargeLeafMaterialMasked;                           // 0x1050(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PineLeafMaterialMasked;                            // 0x1058(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LeafEmitterSetup;                                  // 0x1060(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmitterMaxDrawDistance;                            // 0x1068(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxEmitterCount;                                   // 0x106C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentEmitterCount;                               // 0x1070(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StormActive_;                                      // 0x1074(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MediumLeafMaterialTranslucent;                     // 0x1078(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SmallLeafMaterialTranslucent;                      // 0x1080(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DistanceFieldsEnabled_;                            // 0x1088(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    LargeLeafMaterialTranslucent;                      // 0x1090(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PineLeafMaterialTranslucent;                       // 0x1098(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Leaf_Emitter_Setup_Template;                       // 0x10A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Leaf_Material_Setup;                               // 0x10A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                WindHandle;                                        // 0x10B0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         DebugWind;                                         // 0x10B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Debug_Wind_Intensity;                              // 0x10B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Debug_TempMaterial;                                // 0x10C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugWindYaw;                                      // 0x10C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Wind_Intensity_Debug_Mesh;                         // 0x10D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Parent_Tree_C");
		return Clss;
	}

	void RemoveTestWind(float BlendTime, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasWindImpulse_ReturnValue);
	void AddTestWind(float BlendTime, float Magnitude, bool Temp_bool_Variable, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, class AFortWindManager* CallFunc_GetWindManager_ReturnValue2, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetWindLocationFromWorldLocation_WindWorldLocation, bool CallFunc_GetWindLocationFromWorldLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_FMax_ReturnValue, const struct FVector& K2Node_Select_Default, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FFortWindImpulseRadius& CallFunc_MakeWindImpulseRadius_ReturnValue, const struct FFortWindImpulseHandle& CallFunc_AddWindImpulse_ReturnValue);
	void FX_UpdateEmitterParameters(bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool Temp_bool_Variable5, int32 CallFunc_GetShadowQuality_ReturnValue, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select2_Default, class UMaterialInterface* K2Node_Select3_Default, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInterface* K2Node_Select4_Default, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Select5_Default, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void FX_UpdateEmitterStates(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript(const TArray<class UMaterialInterface*>& IntenseWindMaterialsForPreview, const TArray<class UMaterialInterface*>& OriginalMaterials, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const class FString& CallFunc_GetDisplayName_ReturnValue2, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue3, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetIntenseWindMaterialsForPreview_Materials, bool CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item2, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance2, bool K2Node_DynamicCast_bSuccess2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue2, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_IsValid_ReturnValue4, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue2, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue2);
	void ReceiveDestroyed();
	void ChangeWindIntensity(float Intensity, float Time_It_Takes_To_Reach_New_Intensity);
	void ExecuteUbergraph_Parent_Tree(int32 EntryPoint, float K2Node_CustomEvent_Intensity, float K2Node_CustomEvent_Time_It_Takes_To_Reach_New_Intensity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
