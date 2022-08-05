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
// 0x230 (0x230 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.SetupBottleRocket
struct UGA_Weapon_BottleRocket_C_SetupBottleRocket_Params
{
public:
	struct FVector                               Spawn_Location;                                    // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Spawn_Rotation;                                    // 0xC(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec      Holder_Explosion;                                  // 0x18(0x80)(Parm, OutParm)
	struct FFortGameplayEffectContainerSpec      BottleRocket_Explosion;                            // 0x98(0x80)(Parm, OutParm)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x118(0x80)()
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue2; // 0x198(0x80)()
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x218(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetAimLocationNearestPawn_ReturnValue;    // 0x224(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Destroyed_A96E7CE646F59ADF104A45B078D9E99D
struct UGA_Weapon_BottleRocket_C_Destroyed_A96E7CE646F59ADF104A45B078D9E99D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Exploded_A96E7CE646F59ADF104A45B078D9E99D
struct UGA_Weapon_BottleRocket_C_Exploded_A96E7CE646F59ADF104A45B078D9E99D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Stopped_A96E7CE646F59ADF104A45B078D9E99D
struct UGA_Weapon_BottleRocket_C_Stopped_A96E7CE646F59ADF104A45B078D9E99D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Bounced_A96E7CE646F59ADF104A45B078D9E99D
struct UGA_Weapon_BottleRocket_C_Bounced_A96E7CE646F59ADF104A45B078D9E99D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Touched_A96E7CE646F59ADF104A45B078D9E99D
struct UGA_Weapon_BottleRocket_C_Touched_A96E7CE646F59ADF104A45B078D9E99D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Created_A96E7CE646F59ADF104A45B078D9E99D
struct UGA_Weapon_BottleRocket_C_Created_A96E7CE646F59ADF104A45B078D9E99D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Completed_E681BEBE41400253FC4386BC6916BCCA
struct UGA_Weapon_BottleRocket_C_Completed_E681BEBE41400253FC4386BC6916BCCA_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Cancelled_E681BEBE41400253FC4386BC6916BCCA
struct UGA_Weapon_BottleRocket_C_Cancelled_E681BEBE41400253FC4386BC6916BCCA_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.Triggered_E681BEBE41400253FC4386BC6916BCCA
struct UGA_Weapon_BottleRocket_C_Triggered_E681BEBE41400253FC4386BC6916BCCA_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.K2_ActivateAbility
struct UGA_Weapon_BottleRocket_C_K2_ActivateAbility_Params
{
public:
};

// 0x4D2 (0x4D2 - 0x0)
// Function GA_Weapon_BottleRocket.GA_Weapon_BottleRocket_C.ExecuteUbergraph_GA_Weapon_BottleRocket
struct UGA_Weapon_BottleRocket_C_ExecuteUbergraph_GA_Weapon_BottleRocket_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData5;                // 0x8(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData4;                // 0x40(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x68(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData3;                // 0x78(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData2;                // 0xB0(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData;                 // 0xE8(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x110(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  Temp_struct_Variable;                              // 0x120(0x28)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x148(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData3;                    // 0x158(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag3;                // 0x178(0x8)(NoDestructor, HasGetValueTypeHash)
	class AB_Prj_BottleRocket_Holder_C*          K2Node_DynamicCast_AsB_Prj_Bottle_Rocket_Holder;   // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData2;                    // 0x190(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag2;                // 0x1B0(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x1B8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x1C8(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x1E8(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x1F0(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable2;                             // 0x200(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable3;                             // 0x208(0x20)()
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x228(0x40)(ContainsInstancedReference)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x280(0x20)()
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x2A0(0xA8)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x348(0x10)(ZeroConstructor, ReferenceParm)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData6;                // 0x358(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x380(0x10)(ZeroConstructor, NoDestructor)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_SetupBottleRocket_Spawn_Location;         // 0x39C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SetupBottleRocket_Spawn_Rotation;         // 0x3A8(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      CallFunc_SetupBottleRocket_Holder_Explosion;       // 0x3B8(0x80)()
	struct FFortGameplayEffectContainerSpec      CallFunc_SetupBottleRocket_BottleRocket_Explosion; // 0x438(0x80)()
	class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue;       // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue2;            // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortProjectileBase*                   CallFunc_BeginSpawningActor_SpawnedActor;          // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BeginSpawningActor_ReturnValue;           // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x4D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
