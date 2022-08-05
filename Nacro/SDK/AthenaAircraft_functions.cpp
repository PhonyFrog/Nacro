#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaAircraft.AthenaAircraft_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaAircraft_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("AthenaAircraft_C", "UserConstructionScript");

	Params::AAthenaAircraft_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaAircraft.AthenaAircraft_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAthenaAircraft_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("AthenaAircraft_C", "ReceiveBeginPlay");

	Params::AAthenaAircraft_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaAircraft.AthenaAircraft_C.PlayEffectsForPlayerJumped
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAthenaAircraft_C::PlayEffectsForPlayerJumped()
{
	static auto Func = Class->GetFunction("AthenaAircraft_C", "PlayEffectsForPlayerJumped");

	Params::AAthenaAircraft_C_PlayEffectsForPlayerJumped_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaAircraft.AthenaAircraft_C.Start Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaAircraft_C::Start_Audio()
{
	static auto Func = Class->GetFunction("AthenaAircraft_C", "Start Audio");

	Params::AAthenaAircraft_C_Start_Audio_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaAircraft.AthenaAircraft_C.ExecuteUbergraph_AthenaAircraft
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaAircraft_C::ExecuteUbergraph_AthenaAircraft(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaAircraft_C", "ExecuteUbergraph_AthenaAircraft");

	Params::AAthenaAircraft_C_ExecuteUbergraph_AthenaAircraft_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
