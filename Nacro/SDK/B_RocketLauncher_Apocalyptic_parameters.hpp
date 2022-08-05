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
// 0xE (0xE - 0x0)
// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.UserConstructionScript
struct AB_RocketLauncher_Apocalyptic_C_UserConstructionScript_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.RotateNeedle__FinishedFunc
struct AB_RocketLauncher_Apocalyptic_C_RotateNeedle__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.RotateNeedle__UpdateFunc
struct AB_RocketLauncher_Apocalyptic_C_RotateNeedle__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.OnWeaponAttached
struct AB_RocketLauncher_Apocalyptic_C_OnWeaponAttached_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.Muzzle Flash FX
struct AB_RocketLauncher_Apocalyptic_C_Muzzle_Flash_FX_Params
{
public:
	//bool                                       Condition;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.OnPlayReloadFX
struct AB_RocketLauncher_Apocalyptic_C_OnPlayReloadFX_Params
{
public:
	//enum class EFortReloadFXState              ReloadStage;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x142 (0x142 - 0x0)
// Function B_RocketLauncher_Apocalyptic.B_RocketLauncher_Apocalyptic_C.ExecuteUbergraph_B_RocketLauncher_Apocalyptic
struct AB_RocketLauncher_Apocalyptic_C_ExecuteUbergraph_B_RocketLauncher_Apocalyptic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x10(0xC)(IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue2;           // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_Condition;                            // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x24(0xC)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x30(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult2;   // 0xB8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EFortReloadFXState                K2Node_Event_ReloadStage;                          // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
