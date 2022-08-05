#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_HammerShot.BP_HammerShot_C.ExecuteUbergraph_BP_HammerShot
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HammerShot_C::ExecuteUbergraph_BP_HammerShot(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_HammerShot_C", "ExecuteUbergraph_BP_HammerShot");

	Params::UBP_HammerShot_C_ExecuteUbergraph_BP_HammerShot_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
