#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x418 - 0x410)
// BlueprintGeneratedClass Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C
class ATracer_Shotgun_Break_01_C : public AFortTracerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tracer_Shotgun_Break_01_C");
		return Clss;
	}

	void UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Tracer_Shotgun_Break_01(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
