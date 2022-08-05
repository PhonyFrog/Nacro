#pragma once

#include <map>
#include "Offsets.hpp"
#include "Utils.hpp"
#include "SDK.hpp"
using namespace SDK;

namespace Globals
{
	bool bIsInLobby;
	bool bIsInitialized;
	bool bIsInGame;
	bool bHasJumped;
	bool bIsOnceOrMore;

	//cheatscripts
	bool bInstantReload = false;
	bool bInfiniteJump = false;
	bool JillMode;

	//global shit
	UFortEngine* GEngine;
	UGameplayStatics* GameplayStatics;
	UFortLocalPlayer* LocalPlayer;
	AFortGameModeAthena* AthenaGameMode;
	AFortGameStateAthena* AthenaGameState;
	AFortPlayerControllerAthena* AthenaController;
	AFortPlayerPawnAthena* AthenaPawn;
	AFortPlayerStateAthena* AthenaPlayerState;

	//weapons
	UFortWeaponItemDefinition* Pickaxe;
	UFortWeaponItemDefinition* PickupItem;

	//grabbing characterparts
	UCustomCharacterPart* charPartHead;
	UCustomCharacterPart* charPartBody;

	//death animation
	UAnimMontage* DeathMontage;
	AActor* VictoryDrone;

	//cheatscript instantreload
	UAnimMontage* WeaponReloadMontage;
	UAnimMontage* ReloadAnimation;

	//cheatscript jill
	USkeletalMesh* JillMesh;

	std::map<std::string, UFortWeaponItemDefinition*> ItemsMap;


	inline void InitGlobalsFrontend()
	{
		bIsInLobby = true;
		bIsOnceOrMore = false;

		uintptr_t ModuleBaseAddr = (uintptr_t)GetModuleHandle(NULL);
		GEngine = *reinterpret_cast<UFortEngine**>(Utils::Offset<uintptr_t**>(Offsets::GEngineOffset));
		UObject::GObjects = reinterpret_cast<TUObjectArray*>(Utils::Offset<uintptr_t**>(Offsets::TUObjectArrayOffset));

		LocalPlayer = reinterpret_cast<UFortLocalPlayer*>(GEngine->GameInstance->LocalPlayers[0]);
		GameplayStatics = reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass()->DefaultObject);


		auto pConsole = static_cast<UConsole*>(UConsole::StaticClass()->DefaultObject);
		pConsole->Outer = Globals::LocalPlayer->ViewportClient;
		Globals::LocalPlayer->ViewportClient->ViewportConsole = pConsole;
	}

	inline void InitGlobalsAthena()
	{
		AthenaGameMode = static_cast<AFortGameModeAthena*>(Globals::GEngine->GameViewport->World->AuthorityGameMode);
		AthenaGameState = static_cast<AFortGameStateAthena*>(Globals::AthenaGameMode->GameState);
		AthenaController = static_cast<AFortPlayerControllerAthena*>(Globals::GEngine->GameInstance->LocalPlayers[0]->PlayerController);
		AthenaPlayerState = static_cast<AFortPlayerStateAthena*>(AthenaController->PlayerState);
		bIsInitialized = true;
	}
};