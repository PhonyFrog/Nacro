#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Prop_Sign_BacklitMenu_01.Prop_Sign_BacklitMenu_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_Sign_BacklitMenu_01_C::UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("Prop_Sign_BacklitMenu_01_C", "UserConstructionScript");

	Params::AProp_Sign_BacklitMenu_01_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
