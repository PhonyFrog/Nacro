#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Pistol_Double_D.B_Pistol_Double_D_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pistol_Double_D_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Pistol_Double_D_C", "UserConstructionScript");

	Params::AB_Pistol_Double_D_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Double_D.B_Pistol_Double_D_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Pistol_Double_D_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Pistol_Double_D_C", "ReceiveBeginPlay");

	Params::AB_Pistol_Double_D_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Double_D.B_Pistol_Double_D_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pistol_Double_D_C::OnSetTargeting(bool bNewIsTargeting)
{
	static auto Func = Class->GetFunction("B_Pistol_Double_D_C", "OnSetTargeting");

	Params::AB_Pistol_Double_D_C_OnSetTargeting_Params Parms;
	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Double_D.B_Pistol_Double_D_C.ExecuteUbergraph_B_Pistol_Double_D
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pistol_Double_D_C::ExecuteUbergraph_B_Pistol_Double_D(int32 EntryPoint, bool K2Node_Event_bNewIsTargeting, const struct FVector& CallFunc_SelectVector_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Pistol_Double_D_C", "ExecuteUbergraph_B_Pistol_Double_D");

	Params::AB_Pistol_Double_D_C_ExecuteUbergraph_B_Pistol_Double_D_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
