#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SK_TMP_Skeleton_AnimBlueprint.SK_TMP_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_TMP_Skeleton_AnimBlueprint
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_TMP_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_TMP_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SK_TMP_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_SK_TMP_Skeleton_AnimBlueprint");

	Params::USK_TMP_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_TMP_Skeleton_AnimBlueprint_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
