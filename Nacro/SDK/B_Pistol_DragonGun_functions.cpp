#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Pistol_DragonGun.B_Pistol_DragonGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pistol_DragonGun_C::UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue2)
{
	static auto Func = Class->GetFunction("B_Pistol_DragonGun_C", "UserConstructionScript");

	Params::AB_Pistol_DragonGun_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue2 = CallFunc_K2_AttachToComponent_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_DragonGun.B_Pistol_DragonGun_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pistol_DragonGun_C::Muzzle_Flash_FX(bool Condition)
{
	static auto Func = Class->GetFunction("B_Pistol_DragonGun_C", "Muzzle Flash FX");

	Params::AB_Pistol_DragonGun_C_Muzzle_Flash_FX_Params Parms;
	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_DragonGun.B_Pistol_DragonGun_C.ExecuteUbergraph_B_Pistol_DragonGun
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Condition                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pistol_DragonGun_C::ExecuteUbergraph_B_Pistol_DragonGun(int32 EntryPoint, bool K2Node_Event_Condition)
{
	static auto Func = Class->GetFunction("B_Pistol_DragonGun_C", "ExecuteUbergraph_B_Pistol_DragonGun");

	Params::AB_Pistol_DragonGun_C_ExecuteUbergraph_B_Pistol_DragonGun_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Condition = K2Node_Event_Condition;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
