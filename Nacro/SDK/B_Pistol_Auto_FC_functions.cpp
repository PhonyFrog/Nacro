#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Pistol_Auto_FC.B_Pistol_Auto_FC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pistol_Auto_FC_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Pistol_Auto_FC_C", "UserConstructionScript");

	Params::AB_Pistol_Auto_FC_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Auto_FC.B_Pistol_Auto_FC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Pistol_Auto_FC_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Pistol_Auto_FC_C", "ReceiveBeginPlay");

	Params::AB_Pistol_Auto_FC_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Auto_FC.B_Pistol_Auto_FC_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pistol_Auto_FC_C::OnSetTargeting(bool bNewIsTargeting)
{
	static auto Func = Class->GetFunction("B_Pistol_Auto_FC_C", "OnSetTargeting");

	Params::AB_Pistol_Auto_FC_C_OnSetTargeting_Params Parms;
	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Auto_FC.B_Pistol_Auto_FC_C.ExecuteUbergraph_B_Pistol_Auto_FC
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pistol_Auto_FC_C::ExecuteUbergraph_B_Pistol_Auto_FC(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_bNewIsTargeting, const struct FVector& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("B_Pistol_Auto_FC_C", "ExecuteUbergraph_B_Pistol_Auto_FC");

	Params::AB_Pistol_Auto_FC_C_ExecuteUbergraph_B_Pistol_Auto_FC_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
