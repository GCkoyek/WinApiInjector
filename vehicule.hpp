#pragma once

#include "includes.hpp"
#include "Classes.hpp"
#include "Settings.hpp"

namespace Vehicule
{
	void Hook(void)
	{
		/*
		hk_World* World = (hk_World*)*(uint64_t*)(FiveM::World);
		if (!World)
			return;

		hk_Ped* LocalPlayer = World->LocalPlayer();
		if (!LocalPlayer)
			return;
		if (LocalPlayer->IsInAVehicule())
		{
			hk_Vehicle* Vehicle = LocalPlayer->VehicleManager();;
			if (!Vehicle)
				return;

			if (Settings::vehicle::godmode)
			{
				Vehicle->Godmode(true);
			}
			

			if (Settings::vehicle::setmaxhealth)
			{
				Vehicle->SetHealth(Vehicle->GetMaxHealth());
				Settings::vehicle::setmaxhealth = false;
			}


		}
		*/
	}
}