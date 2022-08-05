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
// 0xA8 (0xA8 - 0x0)
// Function GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_NinjaTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
public:
	//struct FGameplayEventData                  EventData;                                         // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x1D8 (0x1D8 - 0x0)
// Function GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C.ExecuteUbergraph_GAT_NinjaTriggeredAbility
struct UGAT_NinjaTriggeredAbility_C_ExecuteUbergraph_GAT_NinjaTriggeredAbility_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x8(0x40)(ContainsInstancedReference)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x48(0xA8)(ConstParm)
	class APlayerPawn_Ninja_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Ninja;            // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x100(0x20)()
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x120(0xA8)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x1C8(0x10)(ZeroConstructor, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
