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
// 0x140 (0x140 - 0x0)
// Function TT_Ninja_Assassination.TT_Ninja_Assassination_C.GetTextForTokenFromAbilityInstanceInternal
struct UTT_Ninja_Assassination_C_GetTextForTokenFromAbilityInstanceInternal_Params
{
public:
	//class UGameplayAbility*                    AbilityInstance;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FGameplayTag                        Tag;                                               // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	//class UFortTooltipContext*                 Context;                                           // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FGameplayTag                        Token;                                             // 0x18(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	//class FText                                OutText;                                           // 0x20(0x18)(Parm, OutParm)
	//bool                                       ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class FText                                  LongSassinDuration;                                // 0x40(0x18)(Edit)
	class FText                                  AssassinationDuration;                             // 0x58(0x18)(Edit)
	bool                                         Temp_bool_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGA_Ninja_Assassination_C*             K2Node_DynamicCast_AsGA_Ninja_Assassination;       // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x88(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0xA0(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0xC0(0x18)()
	class FText                                  K2Node_Select2_Default;                            // 0xD8(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0xF0(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x108(0x18)()
	bool                                         Temp_bool_Variable3;                               // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select3_Default;                            // 0x128(0x18)()
};

// 0x19 (0x19 - 0x0)
// Function TT_Ninja_Assassination.TT_Ninja_Assassination_C.InitializeAbilityInstanceInternal
struct UTT_Ninja_Assassination_C_InitializeAbilityInstanceInternal_Params
{
public:
	//class UGameplayAbility*                    AbilityInstance;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class UFortTooltipContext*                 Context;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGA_Ninja_Assassination_C*             K2Node_DynamicCast_AsGA_Ninja_Assassination;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
