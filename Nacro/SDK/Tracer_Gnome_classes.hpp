#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x410 - 0x410)
// BlueprintGeneratedClass Tracer_Gnome.Tracer_Gnome_C
class ATracer_Gnome_C : public AFortTracerBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tracer_Gnome_C");
		return Clss;
	}

	void UserConstructionScript(float CallFunc_RandomFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
