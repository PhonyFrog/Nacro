#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x12 (0x12 - 0x0)
// Function Parent_Tree.Parent_Tree_C.RemoveTestWind
struct AParent_Tree_C_RemoveTestWind_Params
{
public:
	float                                        BlendTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortWindManager*                      CallFunc_GetWindManager_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasWindImpulse_ReturnValue;               // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function Parent_Tree.Parent_Tree_C.AddTestWind
struct AParent_Tree_C_AddTestWind_Params
{
public:
	float                                        BlendTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Magnitude;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortWindManager*                      CallFunc_GetWindManager_ReturnValue;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWindManager*                      CallFunc_GetWindManager_ReturnValue2;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x24(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetWindLocationFromWorldLocation_WindWorldLocation; // 0x30(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWindLocationFromWorldLocation_ReturnValue; // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X;                            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0x50(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X2;                           // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y2;                           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z2;                           // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x6C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseRadius                CallFunc_MakeWindImpulseRadius_ReturnValue;        // 0x78(0x4C)(NoDestructor)
	struct FFortWindImpulseHandle                CallFunc_AddWindImpulse_ReturnValue;               // 0xC4(0x4)(NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function Parent_Tree.Parent_Tree_C.FX_UpdateEmitterParameters
struct AParent_Tree_C_FX_UpdateEmitterParameters_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable5;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_Select2_Default;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_Select3_Default;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    K2Node_Select4_Default;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select5_Default;                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x58(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function Parent_Tree.Parent_Tree_C.FX_UpdateEmitterStates
struct AParent_Tree_C_FX_UpdateEmitterStates_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B8 (0x1B8 - 0x0)
// Function Parent_Tree.Parent_Tree_C.UserConstructionScript
struct AParent_Tree_C_UserConstructionScript_Params
{
public:
	TArray<class UMaterialInterface*>            IntenseWindMaterialsForPreview;                    // 0x0(0x10)(Edit, ZeroConstructor)
	TArray<class UMaterialInterface*>            OriginalMaterials;                                 // 0x10(0x10)(Edit, ZeroConstructor)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue3;                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x40(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UCurveLinearColor*                     CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A07[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue2;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     CallFunc_GetWindSpeedCurveForPreview_ReturnValue;  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue;     // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_Array_Get_Item;                           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     K2Node_DynamicCast_AsMaterial_Instance;            // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A0A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            CallFunc_GetIntenseWindMaterialsForPreview_Materials; // 0xE0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue; // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_Array_Get_Item2;                          // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     K2Node_DynamicCast_AsMaterial_Instance2;           // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x10C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0x118(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x130(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue2; // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetLinearColorValue_ReturnValue;          // 0x148(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     CallFunc_GetWindSpeedCurveForPreview_ReturnValue2; // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_R;                             // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetLinearColorValue_ReturnValue2;         // 0x174(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_R2;                            // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G2;                            // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B2;                            // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A2;                            // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x198(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue2;    // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Parent_Tree.Parent_Tree_C.ReceiveDestroyed
struct AParent_Tree_C_ReceiveDestroyed_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Parent_Tree.Parent_Tree_C.ChangeWindIntensity
struct AParent_Tree_C_ChangeWindIntensity_Params
{
public:
	float                                        Intensity;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time_It_Takes_To_Reach_New_Intensity;              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function Parent_Tree.Parent_Tree_C.ExecuteUbergraph_Parent_Tree
struct AParent_Tree_C_ExecuteUbergraph_Parent_Tree_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Intensity;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Time_It_Takes_To_Reach_New_Intensity; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
