#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Bedroom_Bed_Queen_01.Bedroom_Bed_Queen_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABedroom_Bed_Queen_01_C::UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("Bedroom_Bed_Queen_01_C", "UserConstructionScript");

	Params::ABedroom_Bed_Queen_01_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
