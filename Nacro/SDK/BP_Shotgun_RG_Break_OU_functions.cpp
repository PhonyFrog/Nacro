#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_Shotgun_RG_Break_OU.BP_Shotgun_RG_Break_OU_C.ExecuteUbergraph_BP_Shotgun_RG_Break_OU
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Shotgun_RG_Break_OU_C::ExecuteUbergraph_BP_Shotgun_RG_Break_OU(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_Shotgun_RG_Break_OU_C", "ExecuteUbergraph_BP_Shotgun_RG_Break_OU");

	Params::UBP_Shotgun_RG_Break_OU_C_ExecuteUbergraph_BP_Shotgun_RG_Break_OU_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
