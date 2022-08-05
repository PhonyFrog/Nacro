#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1C (0x490 - 0x474)
// BlueprintGeneratedClass Tracer_Raygun_Drip.Tracer_Raygun_Drip_C
class ATracer_Raygun_Drip_C : public ATracerGeneric_C
{
public:
	uint8                                        Pad_3D53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostFX;                                            // 0x480(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      PostFX_Sphere;                                     // 0x488(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tracer_Raygun_Drip_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Tracer_Raygun_Drip(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
