#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function WoodMines_Archway.WoodMines_Archway_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWoodMines_Archway_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("WoodMines_Archway_C", "UserConstructionScript");

	Params::AWoodMines_Archway_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function WoodMines_Archway.WoodMines_Archway_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWoodMines_Archway_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("WoodMines_Archway_C", "ReceiveBeginPlay");

	Params::AWoodMines_Archway_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function WoodMines_Archway.WoodMines_Archway_C.ExecuteUbergraph_WoodMines_Archway
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWoodMines_Archway_C::ExecuteUbergraph_WoodMines_Archway(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("WoodMines_Archway_C", "ExecuteUbergraph_WoodMines_Archway");

	Params::AWoodMines_Archway_C_ExecuteUbergraph_WoodMines_Archway_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
