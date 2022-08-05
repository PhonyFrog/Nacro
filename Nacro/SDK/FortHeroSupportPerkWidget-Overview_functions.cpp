#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnHeroUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortHeroSupportPerkWidget_Overview_C::OnHeroUpdated()
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget-Overview_C", "OnHeroUpdated");

	Params::UFortHeroSupportPerkWidget_Overview_C_OnHeroUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.OnSupportTypeUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortHeroSupportPerkWidget_Overview_C::OnSupportTypeUpdated()
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget-Overview_C", "OnSupportTypeUpdated");

	Params::UFortHeroSupportPerkWidget_Overview_C_OnSupportTypeUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FortHeroSupportPerkWidget-Overview.FortHeroSupportPerkWidget-Overview_C.ExecuteUbergraph_FortHeroSupportPerkWidget-Overview
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortHeroSupportPerkWidget_Overview_C::ExecuteUbergraph_FortHeroSupportPerkWidget_Overview(int32 EntryPoint, bool CallFunc_IsPerkEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget-Overview_C", "ExecuteUbergraph_FortHeroSupportPerkWidget-Overview");

	Params::UFortHeroSupportPerkWidget_Overview_C_ExecuteUbergraph_FortHeroSupportPerkWidget_Overview_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsPerkEmpty_ReturnValue = CallFunc_IsPerkEmpty_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
