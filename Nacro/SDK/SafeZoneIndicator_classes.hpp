#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xA8 (0x620 - 0x578)
// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
class ASafeZoneIndicator_C : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sphere;                                            // 0x580(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x588(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Holding_Audio_Crossfader_Pitch_Curve_F603DC9F45AE40F647212A85E6566CC5; // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Holding_Audio_Crossfader_Volume_Curve_F603DC9F45AE40F647212A85E6566CC5; // 0x594(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Holding_Audio_Crossfader__Direction_F603DC9F45AE40F647212A85E6566CC5; // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Holding_Audio_Crossfader;                          // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Movement_Audio_Crossfader_Pitch_Mod_82F6F72D4A8E0708CB39DDA0191E4390; // 0x5A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Movement_Audio_Crossfader_Crossfade_82F6F72D4A8E0708CB39DDA0191E4390; // 0x5AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Movement_Audio_Crossfader__Direction_82F6F72D4A8E0708CB39DDA0191E4390; // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Movement_Audio_Crossfader;                         // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       StationaryAudio;                                   // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StationaryLoopSound;                               // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MovingLoopSound;                                   // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MovingAudio;                                       // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocalPlayerDistanceFromCenter;                     // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLocalPlayerOutside;                               // 0x5E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AudioCrossfade;                                    // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioPitchMod;                                     // 0x5EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HoldingLoopSound;                                  // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HoldingAudio;                                      // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_GameState_C*                   GameState;                                         // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoldingStartTime;                                  // 0x608(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            HoldingLoopTickSound;                              // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HoldingTickAudio;                                  // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SafeZoneIndicator_C");
		return Clss;
	}

	void HandleInsideOutsideMix();
	void InitClosestPointAudio(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue4);
	void UpdateClosestPointAudioLocation(const struct FVector& Location, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetClosestPointOnSafeZone_Location);
	void GetClosestPointOnSafeZone(const struct FVector& PlayerLocation, struct FVector* Location, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_MakeVector_ReturnValue3);
	void UserConstructionScript();
	void Movement_Audio_Crossfader__FinishedFunc();
	void Movement_Audio_Crossfader__UpdateFunc();
	void Holding_Audio_Crossfader__FinishedFunc();
	void Holding_Audio_Crossfader__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnSafeZoneStateChange(enum class EFortSafeZoneState NewState);
	void ExecuteUbergraph_SafeZoneIndicator(int32 EntryPoint, float CallFunc_MapRangeUnclamped_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EFortSafeZoneState K2Node_Event_NewState, bool K2Node_SwitchEnum_CmpSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue2, float CallFunc_GetServerWorldTimeSeconds_ReturnValue3, float CallFunc_MapRangeClamped_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
