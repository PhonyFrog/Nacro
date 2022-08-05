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
// 0x8 (0x8 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.UserConstructionScript
struct AB_Assault_Raygun_Auto_C_UserConstructionScript_Params
{
public:
	//class UMaterialInstanceDynamic*            CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D3C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.WeaponGlowTimeline__FinishedFunc
struct AB_Assault_Raygun_Auto_C_WeaponGlowTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.WeaponGlowTimeline__UpdateFunc
struct AB_Assault_Raygun_Auto_C_WeaponGlowTimeline__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.KnobSpeedupTimeline__FinishedFunc
struct AB_Assault_Raygun_Auto_C_KnobSpeedupTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.KnobSpeedupTimeline__UpdateFunc
struct AB_Assault_Raygun_Auto_C_KnobSpeedupTimeline__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.OnStopWeaponFireFX
struct AB_Assault_Raygun_Auto_C_OnStopWeaponFireFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.ReceiveBeginPlay
struct AB_Assault_Raygun_Auto_C_ReceiveBeginPlay_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.OnPlayWeaponFireFX
struct AB_Assault_Raygun_Auto_C_OnPlayWeaponFireFX_Params
{
public:
	//bool                                       bPersistentFire;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	//bool                                       bSecondaryFire;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.OnPlayReloadFX
struct AB_Assault_Raygun_Auto_C_OnPlayReloadFX_Params
{
public:
	//enum class EFortReloadFXState              ReloadStage;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function B_Assault_Raygun_Auto.B_Assault_Raygun_Auto_C.ExecuteUbergraph_B_Assault_Raygun_Auto
struct AB_Assault_Raygun_Auto_C_ExecuteUbergraph_B_Assault_Raygun_Auto_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPersistentFire;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D3E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortReloadFXState                K2Node_Event_ReloadStage;                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
