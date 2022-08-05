#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFORT_Pizza_Clown_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("FORT_Pizza_Clown_C", "UserConstructionScript");

	Params::AFORT_Pizza_Clown_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.Clown Spinner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFORT_Pizza_Clown_C::Clown_Spinner()
{
	static auto Func = Class->GetFunction("FORT_Pizza_Clown_C", "Clown Spinner");

	Params::AFORT_Pizza_Clown_C_Clown_Spinner_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFORT_Pizza_Clown_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("FORT_Pizza_Clown_C", "ReceiveBeginPlay");

	Params::AFORT_Pizza_Clown_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FORT_Pizza_Clown.FORT_Pizza_Clown_C.ExecuteUbergraph_FORT_Pizza_Clown
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AFORT_Pizza_Clown_C::ExecuteUbergraph_FORT_Pizza_Clown(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("FORT_Pizza_Clown_C", "ExecuteUbergraph_FORT_Pizza_Clown");

	Params::AFORT_Pizza_Clown_C_ExecuteUbergraph_FORT_Pizza_Clown_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
