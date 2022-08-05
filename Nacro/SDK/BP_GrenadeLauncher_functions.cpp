#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ExecuteUbergraph_BP_GrenadeLauncher
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GrenadeLauncher_C::ExecuteUbergraph_BP_GrenadeLauncher(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_GrenadeLauncher_C", "ExecuteUbergraph_BP_GrenadeLauncher");

	Params::UBP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
