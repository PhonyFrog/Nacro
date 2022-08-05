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
// Function AthenaAircraft.AthenaAircraft_C.UserConstructionScript
struct AAthenaAircraft_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaAircraft.AthenaAircraft_C.ReceiveBeginPlay
struct AAthenaAircraft_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaAircraft.AthenaAircraft_C.PlayEffectsForPlayerJumped
struct AAthenaAircraft_C_PlayEffectsForPlayerJumped_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaAircraft.AthenaAircraft_C.Start Audio
struct AAthenaAircraft_C_Start_Audio_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AthenaAircraft.AthenaAircraft_C.ExecuteUbergraph_AthenaAircraft
struct AAthenaAircraft_C_ExecuteUbergraph_AthenaAircraft_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue2;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
