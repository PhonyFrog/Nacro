#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Commerce_StoreShelves_08.Commerce_StoreShelves_08_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACommerce_StoreShelves_08_C::UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2)
{
	static auto Func = Class->GetFunction("Commerce_StoreShelves_08_C", "UserConstructionScript");

	Params::ACommerce_StoreShelves_08_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
