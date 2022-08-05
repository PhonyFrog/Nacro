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
// Function B_Pistol_Double_D.B_Pistol_Double_D_C.UserConstructionScript
struct AB_Pistol_Double_D_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Pistol_Double_D.B_Pistol_Double_D_C.ReceiveBeginPlay
struct AB_Pistol_Double_D_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_Pistol_Double_D.B_Pistol_Double_D_C.OnSetTargeting
struct AB_Pistol_Double_D_C_OnSetTargeting_Params
{
public:
	//bool                                       bNewIsTargeting;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function B_Pistol_Double_D.B_Pistol_Double_D_C.ExecuteUbergraph_B_Pistol_Double_D
struct AB_Pistol_Double_D_C_ExecuteUbergraph_B_Pistol_Double_D_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bNewIsTargeting;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
