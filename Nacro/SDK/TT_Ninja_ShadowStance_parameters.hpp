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
// 0x40 (0x40 - 0x0)
// Function TT_Ninja_ShadowStance.TT_Ninja_ShadowStance_C.BP_GetTokenizedDescriptionText
struct UTT_Ninja_ShadowStance_C_BP_GetTokenizedDescriptionText_Params
{
public:
	//class UObject*                             ObjectToDescribe;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FGameplayTag                        Tag;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	//class UFortTooltipContext*                 Context;                                           // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//TArray<class FText>                        OutDescription;                                    // 0x18(0x10)(Parm, OutParm, ZeroConstructor)
	//bool                                       ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x30(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x2D0 (0x2D0 - 0x0)
// Function TT_Ninja_ShadowStance.TT_Ninja_ShadowStance_C.GetTextForTokenFromAbilityInstanceInternal
struct UTT_Ninja_ShadowStance_C_GetTextForTokenFromAbilityInstanceInternal_Params
{
public:
	//class UGameplayAbility*                    AbilityInstance;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FGameplayTag                        Tag;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	//class UFortTooltipContext*                 Context;                                           // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FGameplayTag                        Token;                                             // 0x18(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	//class FText                                OutText;                                           // 0x20(0x18)(Parm, OutParm)
	//bool                                       ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class FText                                  ShadowierStanceDamageResist;                       // 0x40(0x18)(Edit)
	class FText                                  ShadowStanceDamageResist;                          // 0x58(0x18)(Edit)
	class FText                                  MoveLikeShadowDuration;                            // 0x70(0x18)(Edit)
	class FText                                  ShadowStanceDuration;                              // 0x88(0x18)(Edit)
	bool                                         Temp_bool_Variable;                                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGA_Ninja_ShadowStance_C*              K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance;       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0xB8(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0xD0(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0xF0(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x108(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x120(0x18)()
	bool                                         Temp_bool_Variable3;                               // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select2_Default;                            // 0x140(0x18)()
	bool                                         Temp_bool_Variable4;                               // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable5;                               // 0x160(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x178(0x18)()
	bool                                         Temp_bool_Variable5;                               // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable7;                               // 0x198(0x18)()
	class FText                                  K2Node_Select3_Default;                            // 0x1B0(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0x1C8(0x18)()
	bool                                         Temp_bool_Variable6;                               // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable9;                               // 0x1E8(0x18)()
	class FText                                  K2Node_Select4_Default;                            // 0x200(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0x218(0x18)()
	class FText                                  K2Node_Select5_Default;                            // 0x230(0x18)()
	class FText                                  K2Node_Select6_Default;                            // 0x248(0x18)()
	bool                                         Temp_bool_Variable7;                               // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable11;                              // 0x268(0x18)()
	class FText                                  K2Node_Select7_Default;                            // 0x280(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x298(0x18)()
	bool                                         Temp_bool_Variable8;                               // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select8_Default;                            // 0x2B8(0x18)()
};

// 0x19 (0x19 - 0x0)
// Function TT_Ninja_ShadowStance.TT_Ninja_ShadowStance_C.InitializeAbilityInstanceInternal
struct UTT_Ninja_ShadowStance_C_InitializeAbilityInstanceInternal_Params
{
public:
	//class UGameplayAbility*                    AbilityInstance;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class UFortTooltipContext*                 Context;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGA_Ninja_ShadowStance_C*              K2Node_DynamicCast_AsGA_Ninja_Shadow_Stance;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
