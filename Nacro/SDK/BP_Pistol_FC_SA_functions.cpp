#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_Pistol_FC_SA.BP_Pistol_FC_SA_C.ExecuteUbergraph_BP_Pistol_FC_SA
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Pistol_FC_SA_C::ExecuteUbergraph_BP_Pistol_FC_SA(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_Pistol_FC_SA_C", "ExecuteUbergraph_BP_Pistol_FC_SA");

	Params::UBP_Pistol_FC_SA_C_ExecuteUbergraph_BP_Pistol_FC_SA_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
