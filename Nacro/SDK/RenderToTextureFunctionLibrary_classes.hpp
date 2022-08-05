#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C
class URenderToTextureFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RenderToTextureFunctionLibrary_C");
		return Clss;
	}

	void Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, float Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue2, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue2, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	void Array_to_HLSL_Int_Array(enum class EIntTypes Type, class FString& Variable_Name, TArray<int32>& Int, TArray<struct FVector2D>& Int2, TArray<struct FVector>& Int3, TArray<struct FLinearColor>& Int4, class UObject* __WorldContext, class FString* String, const class FString& Curstring, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, const class FString& CallFunc_BuildString_Int_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue4, int32 CallFunc_Array_Length_ReturnValue5, const class FString& CallFunc_BuildString_Int_ReturnValue2, int32 CallFunc_Array_LastIndex_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue6, int32 CallFunc_Array_Length_ReturnValue7, const class FString& CallFunc_BuildString_Int_ReturnValue3, int32 CallFunc_Array_LastIndex_ReturnValue4, int32 CallFunc_Array_Length_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue7, const class FString& CallFunc_Concat_StrStr_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue9, const class FString& CallFunc_Concat_StrStr_ReturnValue10, const class FString& CallFunc_Concat_StrStr_ReturnValue11, const class FString& CallFunc_Concat_StrStr_ReturnValue12, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable2, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable2, bool CallFunc_EqualEqual_IntInt_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue13, const struct FVector2D& CallFunc_Array_Get_Item2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 Temp_int_Array_Index_Variable3, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue3, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class FText CallFunc_Conv_FloatToText_ReturnValue2, class FText CallFunc_Conv_FloatToText_ReturnValue3, const class FString& CallFunc_Conv_TextToString_ReturnValue2, const class FString& CallFunc_Conv_TextToString_ReturnValue3, class FText CallFunc_Conv_FloatToText_ReturnValue4, class FText CallFunc_Conv_FloatToText_ReturnValue5, const class FString& CallFunc_Conv_TextToString_ReturnValue4, const class FString& CallFunc_Conv_TextToString_ReturnValue5, class FText CallFunc_Conv_FloatToText_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue14, const class FString& CallFunc_Conv_TextToString_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue15, bool Temp_bool_Variable2, const class FString& CallFunc_Concat_StrStr_ReturnValue16, const class FString& CallFunc_Concat_StrStr_ReturnValue17, const class FString& CallFunc_Concat_StrStr_ReturnValue18, const class FString& CallFunc_Concat_StrStr_ReturnValue19, const class FString& CallFunc_Concat_StrStr_ReturnValue20, const class FString& CallFunc_Concat_StrStr_ReturnValue21, const class FString& CallFunc_Concat_StrStr_ReturnValue22, int32 Temp_int_Loop_Counter_Variable4, const class FString& K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue4, int32 Temp_int_Array_Index_Variable4, bool Temp_bool_Variable3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, const struct FVector& CallFunc_Array_Get_Item4, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class FText CallFunc_Conv_FloatToText_ReturnValue7, class FText CallFunc_Conv_FloatToText_ReturnValue8, const class FString& CallFunc_Conv_TextToString_ReturnValue7, const class FString& CallFunc_Conv_TextToString_ReturnValue8, class FText CallFunc_Conv_FloatToText_ReturnValue9, const class FString& CallFunc_Conv_TextToString_ReturnValue9, const class FString& CallFunc_Concat_StrStr_ReturnValue23, const class FString& CallFunc_Concat_StrStr_ReturnValue24, const class FString& CallFunc_Concat_StrStr_ReturnValue25, const class FString& CallFunc_Concat_StrStr_ReturnValue26, const class FString& CallFunc_Concat_StrStr_ReturnValue27, const class FString& CallFunc_Concat_StrStr_ReturnValue28, const class FString& CallFunc_Concat_StrStr_ReturnValue29, const class FString& CallFunc_Concat_StrStr_ReturnValue30, const class FString& CallFunc_Concat_StrStr_ReturnValue31, const class FString& CallFunc_Concat_StrStr_ReturnValue32, const class FString& CallFunc_Concat_StrStr_ReturnValue33, const class FString& CallFunc_Concat_StrStr_ReturnValue34, const class FString& K2Node_Select2_Default, const class FString& CallFunc_BuildString_Int_ReturnValue5, bool Temp_bool_Variable4, const class FString& CallFunc_BuildString_Int_ReturnValue6, const class FString& K2Node_Select3_Default, const class FString& K2Node_Select4_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
