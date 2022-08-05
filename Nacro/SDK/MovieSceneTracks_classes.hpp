#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xE0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DConstraintSection
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	//struct FGuid                               ConstraintId;                                      // 0xC8(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E1D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DConstraintSection");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieScene3DAttachSection
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	//class FName                                AttachSocketName;                                  // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachComponentName;                               // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainTx : 1;                                  // Mask : 0x1 0xE8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainTy : 1;                                  // Mask : 0x2 0xE8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainTz : 1;                                  // Mask : 0x4 0xE8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainRx : 1;                                  // Mask : 0x8 0xE8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainRy : 1;                                  // Mask : 0x10 0xE8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainRz : 1;                                  // Mask : 0x20 0xE8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DAttachSection");
		return Clss;
	}

};

// 0x70 (0x150 - 0xE0)
// Class MovieSceneTracks.MovieScene3DPathSection
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	//struct FRichCurve                          TimingCurve;                                       // 0xD8(0x70)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E1F[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x148(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x149(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E20[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFollow : 1;                                       // Mask : 0x1 0x14C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReverse : 1;                                      // Mask : 0x2 0x14C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bForceUpright : 1;                                 // Mask : 0x4 0x14C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E21[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DPathSection");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieScene3DConstraintTrack
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	//TArray<class UMovieSceneSection*>          ConstraintSections;                                // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E22[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DConstraintTrack");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DAttachTrack
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DAttachTrack");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DPathTrack
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DPathTrack");
		return Clss;
	}

};

// 0x3F0 (0x4C0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DTransformSection
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	struct FRichCurve                            Translation;                                       // 0xD0(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E23[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Rotation;                                          // 0x220(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E24[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Scale;                                             // 0x370(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E25[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformSection");
		return Clss;
	}

};

// 0x90 (0x160 - 0xD0)
// Class MovieSceneTracks.MovieSceneActorReferenceSection
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                        ActorGuidIndexCurve;                               // 0xD0(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E26[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ActorGuidStrings;                                  // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneActorReferenceSection");
		return Clss;
	}

};

// 0x100 (0x1D0 - 0xD0)
// Class MovieSceneTracks.MovieSceneAudioSection
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	//class USoundBase*                          Sound;                                             // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioStartTime;                                    // 0xD4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioDilationFactor;                               // 0xD8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioVolume;                                       // 0xDC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRichCurve                            SoundVolume;                                       // 0xE0(0x70)(Edit, NativeAccessSpecifierPrivate)
	struct FRichCurve                            PitchMultiplier;                                   // 0x150(0x70)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bSuppressSubtitles;                                // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E27[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAudioSection");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneAudioTrack
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          AudioSections;                                     // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E28[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAudioTrack");
		return Clss;
	}

};

// 0x80 (0x150 - 0xD0)
// Class MovieSceneTracks.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                         DefaultValue;                                      // 0xD0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        BoolCurve;                                         // 0xD8(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E2A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoolSection");
		return Clss;
	}

};

// 0x0 (0x150 - 0x150)
// Class MovieSceneTracks.MovieSceneSpawnSection
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSpawnSection");
		return Clss;
	}

};

// 0x70 (0x140 - 0xD0)
// Class MovieSceneTracks.MovieSceneByteSection
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                        ByteCurve;                                         // 0xD0(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneByteSection");
		return Clss;
	}

};

// 0x40 (0x110 - 0xD0)
// Class MovieSceneTracks.MovieSceneCameraAnimSection
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	//struct FMovieSceneCameraAnimSectionData    AnimData;                                          // 0xC8(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2B[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnim*                           CameraAnim;                                        // 0xE8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0xF0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayScale;                                         // 0xF4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendInTime;                                       // 0xF8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0xFC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLooping;                                          // 0x100(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E2C[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraAnimSection");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneCameraAnimTrack
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          CameraAnimSections;                                // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E2D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraAnimTrack");
		return Clss;
	}

};

// 0x10 (0xE0 - 0xD0)
// Class MovieSceneTracks.MovieSceneCameraCutSection
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	//struct FGuid                               CameraGuid;                                        // 0xC8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E2E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraCutSection");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneCameraCutTrack
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E2F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraCutTrack");
		return Clss;
	}

};

// 0x40 (0x110 - 0xD0)
// Class MovieSceneTracks.MovieSceneCameraShakeSection
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	//struct FMovieSceneCameraShakeSectionData   ShakeData;                                         // 0xC8(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E30[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCameraShake>              ShakeClass;                                        // 0xE8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0xF0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraAnimPlaySpace              PlaySpace;                                         // 0xF4(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserDefinedPlaySpace;                              // 0xF8(0xC)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E32[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeSection");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneCameraShakeTrack
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          CameraShakeSections;                               // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E33[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeTrack");
		return Clss;
	}

};

// 0x1C0 (0x290 - 0xD0)
// Class MovieSceneTracks.MovieSceneColorSection
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	struct FRichCurve                            RedCurve;                                          // 0xD0(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            GreenCurve;                                        // 0x140(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            BlueCurve;                                         // 0x1B0(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            AlphaCurve;                                        // 0x220(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneColorSection");
		return Clss;
	}

};

// 0x70 (0x140 - 0xD0)
// Class MovieSceneTracks.MovieSceneEnumSection
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                        EnumCurve;                                         // 0xD0(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEnumSection");
		return Clss;
	}

};

// 0x110 (0x1E0 - 0xD0)
// Class MovieSceneTracks.MovieSceneEventSection
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	//struct FNameCurve                          Events;                                            // 0xC8(0x68)(Deprecated, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E34[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEventSectionData           EventData;                                         // 0x130(0x20)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E35[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventSection");
		return Clss;
	}

};

// 0x20 (0xE0 - 0xC0)
// Class MovieSceneTracks.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	//TArray<class UMovieSceneSection*>          Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E36[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ObjectGuid;                                        // 0xC8(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E37[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSpawnTrack");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneEventTrack
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask : 0x1 0xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask : 0x2 0xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xC0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventTrack");
		return Clss;
	}

};

// 0x70 (0x140 - 0xD0)
// Class MovieSceneTracks.MovieSceneFloatSection
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	struct FRichCurve                            FloatCurve;                                        // 0xD0(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatSection");
		return Clss;
	}

};

// 0x20 (0x160 - 0x140)
// Class MovieSceneTracks.MovieSceneFadeSection
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	struct FLinearColor                          FadeColor;                                         // 0x140(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFadeAudio : 1;                                    // Mask : 0x1 0x150(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E39[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFadeSection");
		return Clss;
	}

};

// 0x0 (0x140 - 0x140)
// Class MovieSceneTracks.MovieSceneSlomoSection
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSlomoSection");
		return Clss;
	}

};

// 0x70 (0x140 - 0xD0)
// Class MovieSceneTracks.MovieSceneIntegerSection
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                        IntegerCurve;                                      // 0xD0(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneIntegerSection");
		return Clss;
	}

};

// 0x10 (0xE0 - 0xD0)
// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	//enum class ELevelVisibility                Visibility;                                        // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          LevelNames;                                        // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLevelVisibilitySection");
		return Clss;
	}

};

// 0x20 (0xE0 - 0xC0)
// Class MovieSceneTracks.MovieScenePropertyTrack
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	//class FName                                PropertyName;                                      // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                PropertyPath;                                      // 0xC0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xD0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePropertyTrack");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E3A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLevelVisibilityTrack");
		return Clss;
	}

};

// 0x30 (0x100 - 0xD0)
// Class MovieSceneTracks.MovieSceneParameterSection
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	//TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;                     // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E3B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;                     // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>  ColorParameterNamesAndCurves;                      // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E3C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParameterSection");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneMaterialTrack
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E3D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMaterialTrack");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	//int32                                      MaterialIndex;                                     // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneComponentMaterialTrack");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneParticleParameterTrack
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E3E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleParameterTrack");
		return Clss;
	}

};

// 0x70 (0x140 - 0xD0)
// Class MovieSceneTracks.MovieSceneParticleSection
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	//struct FIntegralCurve                      ParticleKeys;                                      // 0xC8(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E3F[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleSection");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneParticleTrack
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          ParticleSections;                                  // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E40[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieScene3DTransformTrack
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneActorReferenceTrack
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneActorReferenceTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneBoolTrack
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoolTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneVisibilityTrack
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVisibilityTrack");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneByteTrack
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E41[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneByteTrack");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneColorTrack
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                         bIsSlateColor;                                     // 0xE0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E42[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneColorTrack");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneEnumTrack
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E43[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEnumTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneFloatTrack
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneFadeTrack
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFadeTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneSlomoTrack
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSlomoTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneIntegerTrack
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneIntegerTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneStringTrack
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneStringTrack");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneVectorTrack
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int32                                        NumChannelsUsed;                                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E44[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVectorTrack");
		return Clss;
	}

};

// 0xB0 (0x180 - 0xD0)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	//struct FMovieSceneSkeletalAnimationParams  Params;                                            // 0xC8(0x90)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E45[0x88];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         AnimSequence;                                      // 0x158(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     Animation;                                         // 0x160(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0x168(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndOffset;                                         // 0x16C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x170(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReverse : 1;                                      // Mask : 0x1 0x174(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SlotName;                                          // 0x178(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationSection");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          AnimationSections;                                 // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E47[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationTrack");
		return Clss;
	}

};

// 0x80 (0x150 - 0xD0)
// Class MovieSceneTracks.MovieSceneStringSection
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	struct FStringCurve                          StringCurve;                                       // 0xD0(0x78)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E48[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneStringSection");
		return Clss;
	}

};

// 0x60 (0x130 - 0xD0)
// Class MovieSceneTracks.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	//struct FMovieSceneSectionParameters        Parameters;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E49[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartOffset;                                       // 0xD8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeScale;                                         // 0xDC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PrerollTime;                                       // 0xE0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   SubSequence;                                       // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                 ActorToRecord;                                     // 0xF0(0x1C)(Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TargetSequenceName;                                // 0x110(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                        TargetPathToRecordTo;                              // 0x120(0x10)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubSection");
		return Clss;
	}

};

// 0x20 (0x150 - 0x130)
// Class MovieSceneTracks.MovieSceneCinematicShotSection
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	class FText                                  DisplayName;                                       // 0x130(0x18)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E4C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCinematicShotSection");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	//TArray<class UMovieSceneSection*>          Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E4D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubTrack");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieSceneCinematicShotTrack
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCinematicShotTrack");
		return Clss;
	}

};

// 0x1D0 (0x2A0 - 0xD0)
// Class MovieSceneTracks.MovieSceneVectorSection
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	struct FRichCurve                            Curves;                                            // 0xD0(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E4E[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChannelsUsed;                                      // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E4F[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVectorSection");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
