#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Sign_Durrr_3.Sign_Durrr_3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ULightComponent*>     K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void ASign_Durrr_3_C::UserConstructionScript(TArray<class ULightComponent*>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("Sign_Durrr_3_C", "UserConstructionScript");

	Params::ASign_Durrr_3_C_UserConstructionScript_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
