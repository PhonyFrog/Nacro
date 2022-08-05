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
// 0x0 (0x0 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.DisableAllVisuals
struct AB_Pistol_Zapper_Athena_C_DisableAllVisuals_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.StopAndResetTimeline
struct AB_Pistol_Zapper_Athena_C_StopAndResetTimeline_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.UpdateVisuals
struct AB_Pistol_Zapper_Athena_C_UpdateVisuals_Params
{
public:
	bool                                         Ammo_Check;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E3C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.UserConstructionScript
struct AB_Pistol_Zapper_Athena_C_UserConstructionScript_Params
{
public:
	//class UMaterialInstanceDynamic*            CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E3D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.Scale Glow Up__FinishedFunc
struct AB_Pistol_Zapper_Athena_C_Scale_Glow_Up__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.Scale Glow Up__UpdateFunc
struct AB_Pistol_Zapper_Athena_C_Scale_Glow_Up__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.Scale Glow Up__Event__EventFunc
struct AB_Pistol_Zapper_Athena_C_Scale_Glow_Up__Event__EventFunc_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.OnPlayWeaponFireFX
struct AB_Pistol_Zapper_Athena_C_OnPlayWeaponFireFX_Params
{
public:
	//bool                                       bPersistentFire;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	//bool                                       bSecondaryFire;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.ReceiveBeginPlay
struct AB_Pistol_Zapper_Athena_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.Muzzle Play Reload FX
struct AB_Pistol_Zapper_Athena_C_Muzzle_Play_Reload_FX_Params
{
public:
	//enum class EFortReloadFXState              Selection;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.OnAmmoCountChanged
struct AB_Pistol_Zapper_Athena_C_OnAmmoCountChanged_Params
{
public:
};

// 0x934 (0x934 - 0x0)
// Function B_Pistol_Zapper_Athena.B_Pistol_Zapper_Athena_C.ExecuteUbergraph_B_Pistol_Zapper_Athena
struct AB_Pistol_Zapper_Athena_C_ExecuteUbergraph_B_Pistol_Zapper_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetWeaponStatHandle_ReturnValue;          // 0x10(0x10)(NoDestructor)
	struct FFortRangedWeaponStats                CallFunc_GetRangedWeaponStatsRow_OutRow;           // 0x20(0x218)()
	bool                                         CallFunc_GetRangedWeaponStatsRow_ReturnValue;      // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E40[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMagazineAmmoCount_ReturnValue;         // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue2;           // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue3;           // 0x245(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E41[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetMagazineAmmoCount_ReturnValue2;        // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetWeaponStatHandle_ReturnValue2;         // 0x250(0x10)(NoDestructor)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E43[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRangedWeaponStats                CallFunc_GetRangedWeaponStatsRow_OutRow2;          // 0x268(0x218)()
	bool                                         CallFunc_GetRangedWeaponStatsRow_ReturnValue2;     // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue2;                   // 0x484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x48C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortReloadFXState                K2Node_Event_Selection;                            // 0x49C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x49D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E46[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetWeaponStatHandle_ReturnValue3;         // 0x4A0(0x10)(NoDestructor)
	struct FFortRangedWeaponStats                CallFunc_GetRangedWeaponStatsRow_OutRow3;          // 0x4B0(0x218)()
	bool                                         CallFunc_GetRangedWeaponStatsRow_ReturnValue3;     // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue3;                   // 0x6CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMagazineAmmoCount_ReturnValue3;        // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue2;         // 0x6D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimeToNextFire_ReturnValue;            // 0x6D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetWeaponStatHandle_ReturnValue4;         // 0x6E0(0x10)(NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRangedWeaponStats                CallFunc_GetRangedWeaponStatsRow_OutRow4;          // 0x6F8(0x218)()
	bool                                         CallFunc_GetRangedWeaponStatsRow_ReturnValue4;     // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x914(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue4;                   // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue3;         // 0x91C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E4C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x920(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMagazineAmmoCount_ReturnValue4;        // 0x924(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue4;         // 0x928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x92C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue2;                        // 0x930(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
