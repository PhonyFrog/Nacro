#pragma once

#include "Globals.hpp"

namespace Abilities
{
	static auto GiveAbilityFunc = reinterpret_cast<FGameplayAbilitySpecHandle(*)(UAbilitySystemComponent * ThisPtr, FGameplayAbilitySpecHandle * OutHandle, FGameplayAbilitySpec InSpec)>(uintptr_t(GetModuleHandle(0)) + Offsets::GiveAbilityOffset);
	//i only have the most basic understanding of what the fuck this means so im probably doing well here

	void GiveAbility(UAbilitySystemComponent* AbilitySystem, UClass* Ability)
	{
		FGameplayAbilitySpec AbilitySpec;
		AbilitySpec.Ability = static_cast<UGameplayAbility*>(Ability->DefaultObject);
		AbilitySpec.Handle.Handle = rand();
		AbilitySpec.InputID = -1;
		AbilitySpec.Level = 1;
		AbilitySpec.SourceObject = nullptr;
		AbilitySpec.ActiveCount = 0;
		AbilitySpec.InputPressed = false;
		AbilitySpec.PendingRemove = false;
		AbilitySpec.RemoveAfterActivation = false;

		std::cout << AbilitySpec.Ability->GetFullName() << "\n";
		std::cout << AbilitySpec.Handle.Handle << "\n";
		std::cout << AbilitySpec.InputID << "\n";
		std::cout << AbilitySpec.Level << "\n";
		std::cout << AbilitySpec.SourceObject << "\n";
		std::cout << (unsigned int)AbilitySpec.ActiveCount << "\n";
		std::cout << (unsigned int)AbilitySpec.InputPressed << "\n";
		std::cout << (unsigned int)AbilitySpec.PendingRemove << "\n";
		std::cout << (unsigned int)AbilitySpec.RemoveAfterActivation << "\n";

		//run thru already activatable abilities and check if any with this ability already exist
		for (int i = 0; i < AbilitySystem->ActivatableAbilities.Items.Num(); i++)
		{
			FGameplayAbilitySpec OurSpec = AbilitySystem->ActivatableAbilities.Items[i];

			if (OurSpec.Ability == AbilitySpec.Ability)
			{
				std::cout << OurSpec.Ability->GetFullName() << " MATCHES " << AbilitySpec.Ability->GetFullName() << "\n";
				return;
			}
			
			std::cout << OurSpec.Ability->GetFullName() << " does NOT match " << AbilitySpec.Ability->GetFullName() << "\n";
		}

		std::cout << "Attempting to give ability...\n";
		FGameplayAbilitySpecHandle SpecHandle = GiveAbilityFunc(AbilitySystem, &AbilitySpec.Handle, AbilitySpec);
	}

	//Gives all important abilities (sprint, jump, etc)
	void GiveAllAbilities()
	{
		//cpp (src object dump txt)
		auto Sprint = UObject::FindClassFast("FortGameplayAbility_Sprint");
		auto Jump = UObject::FindClassFast("FortGameplayAbility_Jump");
		auto Reload = UObject::FindClassFast("FortGameplayAbility_Reload");

		//bp (src fmodel)
		auto InteractUse = UObject::FindClassFast("GA_DefaultPlayer_InteractUse_C");
		auto InteractSearch = UObject::FindClassFast("GA_DefaultPlayer_InteractSearch_C");
		auto Death = UObject::FindClassFast("GA_DefaultPlayer_Death_C");
		//worth noting theres another "GA_DefaultPlayer_Consumable" but in the asset it references "EatFood" animations, prob just a leftover from OTs having food consumables.

		auto AbilitySystem = Globals::AthenaPawn->AbilitySystemComponent;

		std::cout << Sprint->GetFullName() << "\n";
		std::cout << Jump->GetFullName() << "\n";
		std::cout << Reload->GetFullName() << "\n";
		std::cout << InteractUse->GetFullName() << "\n";
		std::cout << InteractSearch->GetFullName() << "\n";
		std::cout << Death->GetFullName() << "\n";
		std::cout << AbilitySystem->GetFullName() << "\n";

		GiveAbility(AbilitySystem, Sprint);
		GiveAbility(AbilitySystem, Jump);
		GiveAbility(AbilitySystem, Reload);
		GiveAbility(AbilitySystem, InteractUse);
		GiveAbility(AbilitySystem, InteractSearch);
		GiveAbility(AbilitySystem, Death);
	}
}