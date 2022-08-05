#pragma once

#include "SDK.hpp"
#include "Globals.hpp"
#include "Player.hpp"

#define NPOS std::string::npos

namespace World
{
	struct BrushStructObject
	{
		unsigned char GoTo[0x48];
		class UObject* MapTexture;
	};

	//Place all loaded items into the map, and equip it for faster future equipping
	inline void LoadItems()
	{
		if (!Globals::bIsOnceOrMore)
		{
			Globals::Pickaxe = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");

			for (int i = 0; i < UObject::GObjects->Num(); ++i)
			{
				auto Object = UObject::GObjects->GetByIndex(i);

				if (Object && !Object->IsDefaultObject())
				{
					if (Object->IsA(UFortWeaponRangedItemDefinition::StaticClass()) || Object->IsA(UFortWeaponMeleeItemDefinition::StaticClass()) || Object->IsA(UFortBuildingItemDefinition::StaticClass()))
					{
							Globals::ItemsMap.insert_or_assign(Object->GetName(), static_cast<UFortWeaponItemDefinition*>(Object));
							Player::Equip(static_cast<UFortWeaponItemDefinition*>(Object), FGuid{ rand() % 9999,rand() % 9999,rand() % 9999,rand() % 9999 });
					}
				}
			}
		}
	}

	//Set the minimap texture
	inline void SetupMiniMap()
	{
		reinterpret_cast<BrushStructObject*>(reinterpret_cast<uintptr_t>(Globals::GEngine->GameViewport->World->GameState) + 0x1438)->MapTexture =
			UObject::FindObject<UTexture2D>("Texture2D MiniMapAthena.MiniMapAthena");
	}

	//Call the functions to start the match
	inline void StartMatch()
	{
		Globals::AthenaController->ServerReadyToStartMatch();
		Globals::AthenaGameMode->StartMatch();
	}
}