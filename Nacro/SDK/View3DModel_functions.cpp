#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function View3DModel.View3DModel_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UView3DModel_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("View3DModel_C", "HandleBack");

	Params::UView3DModel_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}

// Function View3DModel.View3DModel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UView3DModel_C::Construct()
{
	static auto Func = Class->GetFunction("View3DModel_C", "Construct");

	Params::UView3DModel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function View3DModel.View3DModel_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UView3DModel_C::OnActivated()
{
	static auto Func = Class->GetFunction("View3DModel_C", "OnActivated");

	Params::UView3DModel_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function View3DModel.View3DModel_C.ExecuteUbergraph_View3DModel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UView3DModel_C::ExecuteUbergraph_View3DModel(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("View3DModel_C", "ExecuteUbergraph_View3DModel");

	Params::UView3DModel_C_ExecuteUbergraph_View3DModel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
