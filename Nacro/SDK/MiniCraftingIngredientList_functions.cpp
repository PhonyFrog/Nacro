#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase*ListEntry                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniCraftingIngredientList_C::AddListEntry(class UFortItemQuantityListEntryBase* ListEntry)
{
	static auto Func = Class->GetFunction("MiniCraftingIngredientList_C", "AddListEntry");

	Params::UMiniCraftingIngredientList_C_AddListEntry_Params Parms;
	Parms.ListEntry = ListEntry;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.ExecuteUbergraph_MiniCraftingIngredientList
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemQuantityListEntryBase*K2Node_Event_ListEntry                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildWrapBox_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniCraftingIngredientList_C::ExecuteUbergraph_MiniCraftingIngredientList(int32 EntryPoint, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UWrapBoxSlot* CallFunc_AddChildWrapBox_ReturnValue)
{
	static auto Func = Class->GetFunction("MiniCraftingIngredientList_C", "ExecuteUbergraph_MiniCraftingIngredientList");

	Params::UMiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListEntry = K2Node_Event_ListEntry;
	Parms.CallFunc_AddChildWrapBox_ReturnValue = CallFunc_AddChildWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
