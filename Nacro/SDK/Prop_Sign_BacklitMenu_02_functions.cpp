#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Prop_Sign_BacklitMenu_02.Prop_Sign_BacklitMenu_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightComponent*             Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_Sign_BacklitMenu_02_C::UserConstructionScript(class ULightComponent* Temp_object_Variable, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("Prop_Sign_BacklitMenu_02_C", "UserConstructionScript");

	Params::AProp_Sign_BacklitMenu_02_C_UserConstructionScript_Params Parms;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
